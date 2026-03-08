# Polish Flag Algorithm – C++ Implementation

This project implements and compares two approaches to the **Polish Flag Problem**, a classic algorithmic problem of sorting an array of two distinct elements (`'R'` for Red and `'W'` for White). The program not only demonstrates algorithmic solutions but also benchmarks their performance using high-resolution timing.

## Overview

The **Polish Flag Problem** involves partitioning an array so that all `'R'` elements appear before all `'W'` elements. This project provides:

1. **PDF Method**  
   - Iteratively searches for misplaced elements and swaps them.  
   - Straightforward but less efficient for large arrays.

2. **Alternate Method (Two-Pointer Approach)**  
   - Uses two pointers from both ends of the array to swap out-of-place elements.  
   - More efficient and suitable for large input sizes.

The program executes both methods multiple times and reports **average execution time in nanoseconds**, allowing direct performance comparison.

## Features

- Clear implementation of two sorting strategies.  
- Performance benchmarking for different input sizes.  
- Designed to highlight algorithmic efficiency and complexity.

## Usage

1. Clone the repository.  
2. Compile the program using a C++ compiler:  
3. Run the executable:
4. Enter the desired input size when prompted.
5. Observe the average execution times for both methods.

## Sample Output
```bash
  Enter Input Size: 10000
  Average Alternate Method: 37430 ns
  Average PDF Method: 613540 ns
```
## Academic Significance
This implementation serves as a practical demonstration of:

- Algorithmic design and comparison.
- Time complexity analysis through empirical benchmarking.
- Efficient array manipulation techniques in C++.


