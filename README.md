
# Bubble Sort

## Project Description
This project implements the **Bubble Sort** algorithm in C.  
Bubble sort is a simple sorting algorithm that repeatedly steps through an array, compares adjacent elements, and swaps them if they are in the wrong order.  
The larger elements “bubble” up to the end of the list through repeated passes.

---

## Algorithm Overview
**Idea:**  
1. Compare each adjacent pair of elements.  
2. Swap them if they are not in the correct order.  
3. Repeat the process until no swaps occur in a full pass.

Example:
Input: 5 3 1 6 8 7 2 4
Step → 3 1 5 6 7 2 4 8

---



## Files
- `sort.h` — function declarations.  
- `sort.c` — implementation of:
  - `swap()` — swaps two elements.  
  - `letters_in_order()` — checks alphabetical order (case-insensitive).  
  - `numbers_in_ascending_order()` — checks numeric order.  
  - `bubble_sort()` — performs bubble sort using a function pointer.  
- `main.c` — tests sorting of letters and numbers.

---

## Requirements Implemented
1. **bubble_sort()**
   ```c
   void bubble_sort(char arr[], bool (*pair_is_in_order)(char a, char b));
   Uses a function pointer to decide the order rule dynamically.

2. **letters_in_order()**

Compares two letters alphabetically, ignoring case.

'a' and 'A' are treated as equal.

3. **numbers_in_ascending_order()**

Compares two numerical values in ascending order.

4.**swap()**

Exchanges two elements in the array

---
## How to Compile and Run in GitHub Codespaces

Open the terminal and run:
   ```c

gcc main.c sort.c -o bubble
./bubble
