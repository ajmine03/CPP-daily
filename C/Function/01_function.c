#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Increase buffer size for safety
#define MAX_STR 100

typedef struct
{
    int id;
    char name[MAX_STR];
    int age;
    char disease[MAX_STR];
} Patient;

typedef struct
{
    int id;
    char name[MAX_STR];
    char specialty[MAX_STR];
} Doctor;

typedef struct
{
    int patientId;
    int doctorId;
    char date[20];
} Appointment;

// Safe string input function
void safeInput(char *str, int max_size)
{
    fgets(str, max_size, stdin);
    str[strcspn(str, "\n")] = 0; // remove newline
}

// Safer file writing with quoting (prevents comma issues)
void writeWithQuotes(FILE *fp, const char *str)
{
    fprintf(fp, "\"%s\"", str);
}

// Add Patient - FIXED
void addPatient()
{
    Patient p;
    char temp[256];

    printf("\nEnter Patient ID: ");
    scanf("%d", &p.id);
    getchar(); // consume newline

    printf("Enter Name: ");
    safeInput(p.name, sizeof(p.name));

    printf("Enter Age: ");
    scanf("%d", &p.age);
    getchar();

    printf("Enter Disease: ");
    safeInput(p.disease, sizeof(p.disease));

    FILE *fp = fopen("patients.txt", "a");
    if (!fp)
    {
        printf("Error opening file!\n");
        return;
    }

    fprintf(fp, "%d,", p.id);
    writeWithQuotes(fp, p.name);
    fprintf(fp, ",%d,", p.age);
    writeWithQuotes(fp, p.disease);
    fprintf(fp, "\n");

    fclose(fp);
    printf("Patient Added Successfully!\n");
}

// View Patients - FIXED
void viewPatients()
{
    FILE *fp = fopen("patients.txt", "r");
    if (!fp)
    {
        printf("No patient records found!\n");
        return;
    }

    char line[512];
    printf("\n--- Patient List ---\n");
    while (fgets(line, sizeof(line), fp))
    {
        int id, age;
        char name[MAX_STR] = {0}, disease[MAX_STR] = {0};

        // Parse quoted CSV safely
        if (sscanf(line, "%d,\"%99[^\"]\",%d,\"%99[^\"]\"", &id, name, &age, disease) == 4)
        {
            printf("ID: %d | Name: %s | Age: %d | Disease: %s\n", id, name, age, disease);
        }
        else
        {
            printf("Error parsing line: %s", line);
        }
    }
    fclose(fp);
}

// Similarly fix addDoctor(), viewDoctors(), etc.

// Example: Fixed addDoctor
void addDoctor()
{
    Doctor d;

    printf("\nEnter Doctor ID: ");
    scanf("%d", &d.id);
    getchar();

    printf("Enter Name: ");
    safeInput(d.name, sizeof(d.name));

    printf("Enter Specialty: ");
    safeInput(d.specialty, sizeof(d.specialty));

    FILE *fp = fopen("doctors.txt", "a");
    if (!fp)
    {
        printf("Error opening file!\n");
        return;
    }

    fprintf(fp, "%d,", d.id);
    writeWithQuotes(fp, d.name);
    fprintf(fp, ",");
    writeWithQuotes(fp, d.specialty);
    fprintf(fp, "\n");

    fclose(fp);
    printf("Doctor Added Successfully!\n");
}

// Bonus: View Appointments with Names (Much Better!)
void viewAppointmentsWithDetails()
{
    FILE *fp = fopen("appointments.txt", "r");
    if (!fp)
    {
        printf("No appointments found!\n");
        return;
    }

    printf("\n=== Appointments with Details ===\n");
    Appointment a;
    while (fscanf(fp, "%d,%d,%19[^\n]", &a.patientId, &a.doctorId, a.date) == 3)
    {
        char patientName[MAX_STR] = "Unknown";
        char doctorName[MAX_STR] = "Unknown";

        // Lookup patient name
        FILE *pf = fopen("patients.txt", "r");
        if (pf)
        {
            char line[512];
            while (fgets(line, sizeof(line), pf))
            {
                int id;
                char name[MAX_STR];
                if (sscanf(line, "%d,\"%99[^\"]\"", &id, name) == 2 && id == a.patientId)
                {
                    strcpy(patientName, name);
                    break;
                }
            }
            fclose(pf);
        }

        // Lookup doctor name
        FILE *df = fopen("doctors.txt", "r");
        if (df)
        {
            char line[512];
            while (fgets(line, sizeof(line), df))
            {
                int id;
                char name[MAX_STR];
                if (sscanf(line, "%d,\"%99[^\"]\"", &id, name) == 2 && id == a.doctorId)
                {
                    strcpy(doctorName, name);
                    break;
                }
            }
            fclose(df);
        }

        printf("Date: %s | Patient: %s (ID:%d) | Doctor: %s (ID:%d)\n",
               a.date, patientName, a.patientId, doctorName, a.doctorId);
    }
    fclose(fp);
}