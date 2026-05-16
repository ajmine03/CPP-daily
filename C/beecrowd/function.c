#include <stdio.h>
#include <string.h>

int main() {
    char *lines[] = {"Roberto", "5786", "UNIFEI"};
    int content_index = 0;

    for (int i = 0; i < 7; i++) {
        if (i == 0 || i == 6) {
            // top and bottom border
            for (int j = 0; j < 39; j++) printf("-");
            printf("\n");
        } else if (i % 2 == 1) {
            // odd rows with text
            printf("|");
            if (content_index < 3) {
                // align text at column 10
                printf("%9s", "");           // 9 spaces
                printf("%s", lines[content_index]);
                int spaces = 37 - 9 - (int)strlen(lines[content_index]);
                for (int j = 0; j < spaces; j++) printf(" ");
                content_index++;
            } else {
                // (shouldn't happen, but safe)
                for (int j = 0; j < 37; j++) printf(" ");
            }
            printf("|\n");
        } else {
            // even rows, empty line
            printf("|");
            for (int j = 0; j < 37; j++) printf(" ");
            printf("|\n");
        }
    }

    return 0;
}
s