import time
import sys
from rich.console import Console

console = Console()

# === Lyrics + start_time, end_time in seconds from segment start (3:53 = 0 sec) ===
lyrics = [
    ("Rakh Loon Chhupaa Ke Main Kahin Tujhako", 0.0, 7.7),    # 3:53 - 4:01 => 8s
    ("Saayaa Bhi Teraa Naa Main Doon", 7.9, 14.0),             # 4:01 - 4:07 => 6s
    ("Rakh Loon Banaa Ke Kahin Ghar, Main Tujhe", 14.0, 23.0), # 4:07 - 4:16 => 9s
    ("Saath Tere, Main Hi Rahoon", 23.0, 29.0),               # 4:16 - 4:22 => 6s
    ("Zulfein Teri, Itni Ghani", 29.0, 39.0),                 # 4:22 - 4:32 => 10s
    ("Dekh Ke Inako, Yeh Sochataa Hoon", 39.0, 48.0),         # 4:32 - 4:41 => 9s
    ("Saaye Me, Inake Main Jiyoon", 49.0, 54.0),              # 4:42 - 4:47 => 5s
]

segment_start_time = time.time()  # start timer

#  console.print("\n🎵\n")

for line, start, end in lyrics:
    # wait until line start
    now = time.time()
    elapsed = now - segment_start_time
    wait_time = start - elapsed
    if wait_time > 0:
        time.sleep(wait_time)

    # typing effect per character
    num_chars = len(line)
    duration = end - start
    char_delay = duration / num_chars if num_chars else 0.05

    for ch in line:
        sys.stdout.write(ch)
        sys.stdout.flush()
        time.sleep(char_delay)
    print()  # new line

# console.print("\n🎵[/bold green]")
# Note: This code simulates the timing of lyrics display with a typing effect in the terminal.