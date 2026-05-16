import time
import sys
from rich.console import Console

console = Console()

lyrics = [
    "Rakh Loon Chhupaa Ke Main Kahin Tujhako",
    "Saayaa Bhi Teraa Naa Main Doon",
    "Rakh Loon Banaa Ke Kahin Ghar, Main Tujhe",
    "Saath Tere, Main Hi Rahoon",
    "Zulfein Teri, Itni Ghani",
    "Dekh Ke Inako, Yeh Sochataa Hoon",
    "Saaye Me, Inake Main Jiyoon",
]

# প্রতি অক্ষরের delay (second)
CHAR_DELAY = 0.07  
# প্রতিটি লাইনের মাঝে delay (second)
LINE_DELAY = 1.2  

for line in lyrics:
    console.print("", end="")
    for ch in line:
        # অক্ষর ধরে ধরে প্রিন্ট
        sys.stdout.write(ch)
        sys.stdout.flush()
        time.sleep(CHAR_DELAY)
    print()  # নতুন লাইন
    time.sleep(LINE_DELAY)

console.print("\n[bold cyan]🎵 Song Lyrics Display Finished 🎵[/bold cyan]")
import time
import sys  