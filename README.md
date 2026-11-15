# CS50-I-CS

![Course](https://img.shields.io/badge/Harvard-CS50x%202026-red)
![Language](https://img.shields.io/badge/Language-C%20%7C%20Python%20%7C%20SQL-blue)
![Progress](https://img.shields.io/badge/Progress-Week%205%20Completed-brightgreen)

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
| Week 6 | Python | ⬜ Pending |
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
│   │
│   ├── inheritance/
│   │   ├── inheritance
│   │   └── inheritance.c
│   │
│   └── speller/
│       └── speller/
│           ├── dictionaries/
│           │   ├── large
│           │   └── small
│           │
│           ├── keys/
│           ├── texts/
│           │
│           ├── dictionary.c
│           ├── dictionary.h
│           ├── dictionary.o
│           ├── Makefile
│           ├── speller
│           ├── speller.c
│           ├── speller.o
│           └── speller50
│
├── Week 6/
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

**Key concepts learned:**
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

## Skills Covered

### Programming
- Scratch Programming
- C Programming
- Python Fundamentals
- Variables and Data Types
- Conditional Statements
- Loops and Functions
- Arrays and Strings
- Pointers and File Handling

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

### Tools and Development
- Git and GitHub
- GitHub Codespaces
- VS Code
- Linux Command Line
- GCC Compiler
- CS50 Check50
- CS50 Submit50
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

