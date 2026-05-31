# BS-CS C++ Programming Exercises

[![Language](https://img.shields.io/badge/language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![Standard](https://img.shields.io/badge/C%2B%2B-11%2F14%2F17-green.svg)](https://en.cppreference.com/w/cpp/compiler_support)
[![License](https://img.shields.io/badge/license-MIT-yellow.svg)](LICENSE)

A collection of foundational C++ programming exercises developed as part of my Bachelor of Science in Computer Science (BS-CS) coursework. These programs demonstrate core programming concepts including input/output operations, conditional logic, loops, functions, and problem-solving techniques.

---

## Overview

This repository contains **14 progressively challenging C++ programs** that cover essential topics in introductory computer science. Each task focuses on a distinct programming concept — from basic arithmetic and data conversion to conditional decision-making, control flow, and simple application logic.

These exercises reflect the practical, hands-on approach to learning programming fundamentals and building computational thinking skills.

---

## Learning Objectives

- Understand basic C++ syntax and structure
- Use input/output streams (`cin`, `cout`) for user interaction
- Apply arithmetic operations and type conversion
- Implement conditional statements (`if`, `else if`, `else`, `switch`)
- Work with loops and repetition structures
- Use random number generation for game logic
- Manipulate strings and characters
- Design simple interactive applications
- Format and present computed output
- Build decision-making systems with multiple conditions

---

## Technologies Used

- **Language:** C++ (C++11/14/17)
- **Standard Library:** iostream, cstdlib, ctime, cctype
- **Paradigm:** Procedural programming
- **Compiler:** g++ (GCC), clang++, or any C++11-compatible compiler

---

## Task Index

| Task | File | Description |
|------|------|-------------|
| 1 | `Task01_MilesToKilometers.cpp` | Converts a distance from miles to kilometers |
| 2 | `Task02_WithdrawFromAccount.cpp` | Simulates a bank withdrawal and displays remaining balance |
| 3 | `Task03_DayOfWeekCalculator.cpp` | Calculates the day of the week for any given date |
| 4 | `Task04_PrintLetterY.cpp` | Prints an ASCII art pattern of the letter 'Y' |
| 5 | `Task05_ServiceInvoiceCalculator.cpp` | Generates a service invoice with quantity, fee, and tax calculation |
| 6 | `Task06_SecondsToTimeFormat.cpp` | Converts a time duration in seconds to hours, minutes, and seconds |
| 7 | `Task07_NumberGuessingGame.cpp` | Random number guessing game (1–10) with correct/wrong feedback |
| 8 | `Task08_CharacterClassification.cpp` | Classifies a character as digit, vowel, or consonant |
| 9 | `Task09_ShoppingCart.cpp` | Applies a 10% discount on shopping amounts above a threshold |
| 10 | `Task10_AgeAnalysis.cpp` | Compares ages of three friends and identifies the youngest |
| 11 | `Task11_TicketReservationSystem.cpp` | Seat reservation system with availability checking |
| 12 | `Task12_FindtheWeekday.cpp` | Maps a number (1–7) to the corresponding weekday name |
| 13 | `Task13_MedicalDiagnosisSystem.cpp` | Diagnoses body temperature as hypothermia, normal, or fever |
| 14 | `Task14_GradingSystem.cpp` | Calculates letter grades for three students and displays a histogram |

---

## Skills Demonstrated

- **Input/Output Handling** — User prompts, formatted console output
- **Arithmetic Operations** — Multiplication, division, modulus, subtraction
- **Conditional Logic** — `if`, `else if`, `else`, `switch` statements
- **Date & Time Algorithms** — Zeller-like day-of-week calculation
- **Random Number Generation** — `srand()` / `rand()` for game logic
- **Character Classification** — `isdigit()`, vowel/consonant detection
- **Data Conversion** — Unit conversions (miles to km, seconds to H:M:S)
- **Financial Calculations** — Tax, discounts, invoices
- **Data Analysis** — Age comparison, grade distribution with histogram
- **Application Design** — Ticketing systems, medical diagnosis, shopping cart logic

---

## How to Compile

Use any C++ compiler. Below are examples using `g++`:

```bash
# Compile a single program
g++ -std=c++11 -o task01 "C++ Tasks/Task01_MilesToKilometers.cpp"

# Compile all programs
for file in "C++ Tasks"/*.cpp; do
    g++ -std=c++11 -o "${file%.cpp}" "$file"
done
```

---

## How to Run

```bash
# After compiling
./task01

# Or run directly from source (if your system supports it)
# Some IDEs allow one-click compile-and-run
```

Each program will prompt you for the required input and display the computed result in the terminal.

---

## Folder Structure

```
BS-CS Coding Journey/
├── C++ Tasks/
│   ├── Task01_MilesToKilometers.cpp
│   ├── Task02_WithdrawFromAccount.cpp
│   ├── Task03_DayOfWeekCalculator.cpp
│   ├── Task04_PrintLetterY.cpp
│   ├── Task05_ServiceInvoiceCalculator.cpp
│   ├── Task06_SecondsToTimeFormat.cpp
│   ├── Task07_NumberGuessingGame.cpp
│   ├── Task08_CharacterClassification.cpp
│   ├── Task09_ShoppingCart.cpp
│   ├── Task10_AgeAnalysis.cpp
│   ├── Task11_TicketReservationSystem.cpp
│   ├── Task12_FindtheWeekday.cpp
│   ├── Task13_MedicalDiagnosisSystem.cpp
│   └── Task14_GradingSystem.cpp
├── .gitignore
├── CHANGELOG.md
├── CONTRIBUTING.md
├── LICENSE
└── README.md
```

---

## Academic Disclaimer

This repository contains academic exercises completed as part of my **Bachelor of Science in Computer Science (BS-CS)** coursework. These programs are original works created for learning purposes and demonstrate foundational programming skills. They are shared publicly as part of my educational portfolio and should not be submitted as one's own work in academic settings.

---

## Suggested Repository Name

**`bs-cs-cpp-exercises`**

## Suggested Description

*A collection of foundational C++ programming exercises from my BS-CS journey covering input/output, conditional logic, loops, and application design.*

## Suggested Topics / Tags

`cpp`, `c-plus-plus`, `programming-exercises`, `cs-fundamentals`, `computer-science`, `learning-cpp`, `beginner-projects`, `academic-portfolio`, `bs-cs`, `cpp-programs`
