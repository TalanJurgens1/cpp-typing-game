# C++ Typing Speed Game

A terminal typing game I built while learning C++.

## Features
- Randomly selects from 15 sentences
- Checks capitalization, spaces, and punctuation
- Measures typing time
- Calculates words per minute for correct answers
- Lets you play multiple rounds

## How to Run
You need a C++ compiler such as g++.

Download wpm.cpp, then open a terminal in the folder containing it.

Compile:
```bash
g++ wpm.cpp -o wpm.exe
```

Run on Windows PowerShell:
```powershell
.\wpm.exe
```

Type the displayed sentence and press Enter to see your results.

## How Scoring Works
Five characters count as one word, including spaces and punctuation.
WPM is calculated by dividing that word count by elapsed time in minutes.
An exact match is required to receive a WPM score.

## What I Learned
- Strings, vectors, and keyboard input
- Conditions and loops
- Random number generation
- Timing with chrono
- Formatting decimal output
