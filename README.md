# CS50-I-CS

![Course](https://img.shields.io/badge/Harvard-CS50x%202026-red)
![Language](https://img.shields.io/badge/Language-C%20%7C%20Python%20%7C%20SQL-blue)
![Progress](https://img.shields.io/badge/Progress-Week%206%20Completed-brightgreen)

## About

This repository contains my solutions, projects, and learning progress for **Harvard University's CS50x 2026: Introduction to Computer Science**.

Throughout this course, I document my learning journey by completing weekly problem sets, projects, and additional programming exercises.

My goal is to develop a strong foundation in Computer Science, Software Engineering, and Problem Solving while maintaining clean, organized, and well-documented code.

---

## Course Progress

| Week | Topic | Status |
|---|---|---|
| Week 0 | Scratch | ✅ Completed |
| Week 1 | C | ✅ Completed |
| Week 2 | Arrays | ✅ Completed |
| Week 3 | Algorithms | ✅ Completed |
| Week 4 | Memory | ✅ Completed |
| Week 5 | Data Structures | ✅ Completed |
| Week 6 | Python | ✅ Completed |
| Week 7 | SQL | ⬜ Pending |
| Week 8 | HTML, CSS, JavaScript | ⬜ Pending |
| Week 9 | Flask | ⬜ Pending |
| Final Project | Capstone Project | ⬜ Pending |

---

## Repository Structure

```text
CS50-I-CS/
│
├── README.md
│
├── Week 0/
│   ├── README.md
│   ├── Gym_Transformation_Challenge.sb3
│   ├── chat.py
│   ├── chat1.py
│   └── chat2.py
│
├── Week 1/
│   └── pset1/
│       ├── credit/
│       ├── hello/
│       ├── mario-less/
│       └── me/
│
├── Week 2/
│   ├── Scrabble/
│   │   └── scrabble.c
│   ├── Readability/
│   │   └── readability.c
│   └── Caesar/
│       └── caesar.c
│
├── Week 3/
│   ├── plurality/
│   │   └── plurality.c
│   ├── runoff/
│   │   └── runoff.c
│   └── sort/
│       └── answers.txt
│
├── Week 4/
│   ├── volume/
│   │   └── volume.c
│   ├── filter-more/
│   │   ├── helpers.c
│   │   ├── helpers.h
│   │   ├── filter.c
│   │   └── Makefile
│   └── recover/
│       └── recover.c
│
├── Week 5/
│   ├── inheritance/
│   │   ├── inheritance
│   │   └── inheritance.c
│   │
│   └── speller/
│       └── speller/
│           ├── dictionaries/
│           ├── keys/
│           ├── texts/
│           ├── dictionary.c
│           ├── dictionary.h
│           ├── Makefile
│           ├── speller
│           ├── speller.c
│           └── speller50
│
├── Week 6/
│   ├── credit/
│   │   └── credit.py
│   │
│   ├── dna/
│   │   ├── databases/
│   │   │   ├── large.csv
│   │   │   └── small.csv
│   │   ├── sequences/
│   │   │   └── DNA sequence text files
│   │   └── dna.py
│   │
│   ├── hello/
│   │   └── hello.py
│   │
│   ├── mario-more/
│   │   └── mario.py
│   │
│   └── readability/
│       └── readability.py
│
├── Week 7/
├── Week 8/
├── Week 9/
│
└── Final Project/
```

---

## Week 0 – Scratch

**Status:** ✅ Completed

Topics covered:
- Scratch programming fundamentals
- Computational thinking
- Visual programming
- Gym Transformation Challenge project

## Week 1 – C

**Status:** ✅ Completed

Topics covered:
- C programming fundamentals
- Variables and data types
- Conditional statements
- Loops
- Functions
- Basic problem solving

## Week 2 – Arrays

**Status:** ✅ Completed

| Problem Set | Description | Status |
|---|---|---|
| Scrabble | Calculate and compare word scores using arrays | ✅ Completed |
| Readability | Calculate reading grade levels using the Coleman-Liau index | ✅ Completed |
| Caesar | Implement encryption using a Caesar cipher | ✅ Completed |

All three selected problem sets were checked using CS50 Check50 and submitted through CS50 Submit50.

## Week 3 – Algorithms

**Status:** ✅ Completed

| Problem Set | Description | Status |
|---|---|---|
| Sort | Analyze and compare sorting algorithms | ✅ Completed |
| Plurality | Implement a plurality voting election system | ✅ Completed |
| Runoff | Implement a ranked-choice voting election system | ✅ Completed |

All three selected problem sets passed their CS50 Check50 tests and were submitted through CS50 Submit50.

**Key Concepts Learned:**
- Linear Search
- Binary Search
- Bubble Sort
- Selection Sort
- Merge Sort
- Big O and algorithm efficiency
- Arrays of structures
- Sorting and searching
- Ranked-choice voting
- Algorithm design and implementation

---

## Week 4 – Memory

**Status:** ✅ Completed

Week 4 focuses on memory management, pointers, file handling, binary data processing, and image manipulation.

### Problem Sets

| Problem Set | Description | Status |
|---|---|---|
| Volume | Modify the volume of WAV audio files by adjusting audio samples | ✅ Completed |
| Filter (More) | Implement image filters including grayscale, reflection, blur, and edge detection | ✅ Completed |
| Recover | Recover JPEG images from a forensic memory card image | ✅ Completed |

### Key Concepts Learned

- Memory management and pointers
- File I/O in C
- Binary file processing
- Reading and writing WAV files
- RGB image manipulation
- Image processing algorithms
- JPEG file signatures
- Hexadecimal values
- Memory buffers
- Command-line arguments
- Working with binary data

### Recover – Verification Results

- Successfully recovered 50 JPEG images.
- All 7 CS50 Check50 tests passed.
- Successfully submitted through CS50 Submit50.

### Tools Used

- C Programming
- GCC Compiler
- CS50 Check50
- CS50 Submit50
- Linux Command Line

---

## Week 5 – Data Structures

**Status:** ✅ Completed

Week 5 focuses on implementing and understanding fundamental data structures, dynamic memory allocation, pointers, linked lists, hash tables, and efficient data retrieval.

### Problem Sets

| Problem Set | Description | Status |
|---|---|---|
| Inheritance | Simulate the inheritance of blood types across multiple generations using structures and pointers | ✅ Completed |
| Speller | Implement a spell checker using a hash table and linked lists | ✅ Completed |

### 1. Inheritance

**File:** `inheritance/inheritance.c`

Implemented a genetic inheritance simulation that models how blood-type alleles are passed from parents to children across multiple generations.

**Key Concepts Learned:**
- Structures in C
- Pointers and memory addresses
- Dynamic memory allocation using `malloc()`
- Recursive generation of family trees
- Genetic inheritance simulation
- Memory deallocation using `free()`

### 2. Speller

**Folder:** `speller/speller/`

Implemented a dictionary-based spell checker using a hash table with separate chaining through linked lists.

**Key Components:**

| Component | Purpose |
|---|---|
| `load()` | Load dictionary words into memory |
| `hash()` | Generate a hash index for each word |
| `check()` | Check whether a word exists in the dictionary |
| `size()` | Return the total number of dictionary words |
| `unload()` | Release allocated memory and free linked-list nodes |

**Key Concepts Learned:**
- Hash Tables
- Hash Functions
- Linked Lists
- Nodes and Pointers
- Separate Chaining
- Collision Handling
- Dynamic Memory Allocation
- `malloc()` and `free()`
- String Comparison using `strcmp()`
- Case-insensitive string comparison using `strcasecmp()`
- File Handling
- Time Complexity and Algorithm Efficiency

### Speller – Verification Results

Successfully compiled and executed the Speller program.

**CS50 Check50 Results:**

| Test | Result |
|---|---|
| dictionary.c exists | ✅ Passed |
| Speller compiles | ✅ Passed |
| Handles most basic words properly | ✅ Passed |
| Handles minimum-length (1-character) words | ✅ Passed |
| Handles maximum-length (45-character) words | ✅ Passed |
| Handles words with apostrophes properly | ✅ Passed |
| Spell-checking is case-insensitive | ✅ Passed |
| Handles substrings properly | ✅ Passed |
| Handles large dictionary (hash collisions) properly | ✅ Passed |
| Program is free of memory errors | ✅ Passed |

**Execution Performance (Large Dictionary):**

| Metric | Result |
|---|---:|
| Words in Dictionary | 143,091 |
| Words in Text | 17,756 |
| Words Misspelled | 955 |
| Time in Load | 0.03 seconds |
| Time in Check | 1.17 seconds |
| Time in Size | 0.00 seconds |
| Time in Unload | 0.01 seconds |
| Total Execution Time | 1.21 seconds |

*Execution times are from one local run and may vary depending on the environment.*

**Submission:** Successfully uploaded through CS50 Submit50.

### Week 5 – Tools Used

- C Programming
- GCC Compiler
- Hash Tables
- Linked Lists
- CS50 Check50
- CS50 Submit50
- Linux Command Line
- Git and GitHub

---

## Week 6 – Python

**Status:** ✅ Completed

Week 6 introduces Python programming and explores how Python simplifies programming concepts previously implemented in C.

This week focuses on Python syntax, functions, loops, strings, dictionaries, file handling, command-line arguments, regular expressions, and data processing.

### Problem Sets

| Problem Set | Description | Status |
|---|---|---|
| Hello | Create a program that greets the user by name | ✅ Submitted |
| Mario (More) | Recreate a half-pyramid and inverted half-pyramid using hashes | ✅ Submitted |
| Credit | Validate credit card numbers using Luhn's Algorithm and identify card types | ✅ Submitted |
| Readability | Calculate reading grade levels using the Coleman-Liau index | ✅ Submitted |
| DNA | Identify individuals using STR (Short Tandem Repeat) analysis and DNA sequence matching | ✅ Submitted |

All five Week 6 problem sets have been completed and uploaded through CS50 Submit50.

### 1. Hello

**File:** `hello/hello.py`

Implemented a Python program that asks the user for their name and prints a personalized greeting.

**Key Concepts Learned:**
- Python syntax
- Variables
- User input using `get_string()`
- String formatting using f-strings
- Output using `print()`

### 2. Mario (More)

**File:** `mario-more/mario.py`

Implemented a program that generates two aligned pyramids using hashes (`#`), separated by a gap.

The program prompts the user for the pyramid height and validates that the input is between 1 and 8.

**Key Concepts Learned:**
- Loops using `for` and `while`
- `range()` function
- Input validation
- String multiplication
- String concatenation
- Nested loops and pattern generation
- Formatting spaces and hashes

### 3. Credit

**File:** `credit/credit.py`

Implemented a credit card validation program using Luhn's Algorithm.

The program checks whether a credit card number is valid and identifies the card network as American Express, MasterCard, or Visa.

**Key Concepts Learned:**
- Luhn's Algorithm
- String manipulation
- Integer conversion
- `reversed()` function
- Modulo operator (`%`)
- Integer division (`//`)
- Conditional statements
- Credit card number length and prefix validation

### 4. Readability

**File:** `readability/readability.py`

Implemented a program that calculates the reading grade level of a text using the Coleman-Liau index.

The program counts letters, words, and sentences before applying the formula:

**Coleman-Liau Index:**

`index = 0.0588 × L - 0.296 × S - 15.8`

Where:

- `L` = Average number of letters per 100 words.
- `S` = Average number of sentences per 100 words.

The final result is rounded to the nearest integer and displayed as a reading grade level.

**Key Concepts Learned:**
- String iteration
- Character checking using `isalpha()`
- Counting letters, words, and sentences
- String processing
- Mathematical formulas
- Floating-point arithmetic
- Rounding using `round()`
- Conditional statements

### 5. DNA

**Folder:** `dna/`

Implemented a DNA profiling program that identifies individuals by analyzing Short Tandem Repeats (STRs) in a DNA sequence.

The program reads a CSV database containing individuals and their STR counts, processes a DNA sequence, calculates the longest consecutive repetitions of each STR, and compares the results against the database.

**Project Structure:**

```text
dna/
│
├── databases/
│   ├── large.csv
│   └── small.csv
│
├── sequences/
│   ├── 1.txt
│   ├── 2.txt
│   ├── 3.txt
│   └── ...
│
└── dna.py
```

**Key Components:**

| Component | Purpose |
|---|---|
| `main()` | Controls the overall DNA identification process |
| `longest_match()` | Finds the longest consecutive repetition of an STR |
| `csv.DictReader()` | Reads DNA profiles from CSV databases |
| Dictionary | Stores the calculated STR counts |
| Database matching | Compares calculated STR counts with individual DNA profiles |

**Key Concepts Learned:**
- DNA profiling fundamentals
- Short Tandem Repeats (STRs)
- CSV file processing
- `csv` module
- `csv.DictReader()`
- Dictionaries and key-value pairs
- Lists and loops
- String slicing
- String matching
- Functions and return values
- Command-line arguments using `sys.argv`
- File handling using `open()`
- Algorithm design and pattern matching

### Week 6 – Verification and Submission

**Manual Testing:**

| Problem | Testing |
|---|---|
| Hello | Tested personalized greetings |
| Mario (More) | Tested pyramid heights and input validation |
| Credit | Tested card numbers and card identification |
| Readability | Tested different text samples and grade levels |
| DNA | Tested DNA sequences against small CSV databases |

**Submission Status:**

| Problem Set | Submit50 |
|---|---|
| Hello | ✅ Submitted |
| Mario (More) | ✅ Submitted |
| Credit | ✅ Submitted |
| Readability | ✅ Submitted |
| DNA | ✅ Submitted |

All five problem sets were uploaded through CS50 Submit50.

### Week 6 – Tools and Technologies Used

- Python Programming
- CS50 Python Library
- CSV Module
- Dictionaries and Lists
- String Manipulation
- File Handling
- Command-Line Arguments
- CS50 Check50
- CS50 Submit50
- Style50
- GitHub Codespaces
- Linux Command Line
- Git and GitHub

---

## Skills Covered

### Programming

- Scratch Programming
- C Programming
- Python Programming
- Variables and Data Types
- Conditional Statements
- Loops and Functions
- Arrays and Strings
- Dictionaries and Lists
- Pointers and Memory Management
- File Handling
- Command-Line Arguments

### Computer Science Fundamentals

- Computational Thinking
- Problem Solving
- Algorithms
- Sorting and Searching
- Algorithm Analysis
- Big O Notation
- Data Structures
- Linked Lists
- Hash Tables
- Memory Management
- Dynamic Memory Allocation
- Binary Data Processing
- File I/O
- Pattern Matching
- DNA Profiling
- Algorithm Design

### Tools and Development

- Git and GitHub
- GitHub Codespaces
- VS Code
- Linux Command Line
- GCC Compiler
- CS50 Check50
- CS50 Submit50
- Style50
- Make and Makefiles

---

## Acknowledgements

This repository follows the coursework of **Harvard University's CS50x 2026**.

Course Website:

https://cs50.harvard.edu/x/

---

## Author

**Kartik Gaikwad**

- GitHub: https://github.com/Kartik18I
- LinkedIn: https://www.linkedin.com/in/kartik-gaikwad-6260ab294

