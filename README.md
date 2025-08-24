# 🚀 Vincen.h - Mathematical Functions and Logics Library

[![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://www.iso.org/standard/74528.html)
[![Build Status](https://img.shields.io/badge/Build-Passing-brightgreen?style=for-the-badge)](https://github.com)

> 🎯 **A comprehensive C header library providing essential mathematical and computational functions for number theory, digit manipulation, and sequence generation.**

---

## 📋 Table of Contents

- [Overview](#-overview)
- [Features](#-features)
- [Installation](#-installation)
- [Function Documentation](#-function-documentation)
- [Usage Examples](#-usage-examples)
- [Screenshots](#-screenshots)
- [Contributing](#-contributing)
- [License](#-license)

---

## 🌟 Overview

**Vincen.h** is a lightweight, efficient C header library that encapsulates commonly used mathematical algorithms and number manipulation functions. Designed for educational purposes, competitive programming, and mathematical computations, this library provides optimized implementations of fundamental algorithms.

### 🎯 Key Highlights

- ✅ **Zero Dependencies**: Only requires standard C libraries
- ✅ **Optimized Algorithms**: Efficient implementations with minimal overhead
- ✅ **Educational Focus**: Clean, readable code perfect for learning
- ✅ **Comprehensive Coverage**: 11+ essential mathematical functions
- ✅ **Cross-Platform**: Compatible with any C compiler

---

## 🔧 Features

| Category | Functions | Description |
|----------|-----------|-------------|
| **Arithmetic** | `Factorial()` | Calculate factorial of a number |
| **Number Theory** | `Prime()`, `Perfect()`, `Strong()` | Prime checking, perfect & strong number validation |
| **Digit Operations** | `Reverse()`, `CountDigit()`, `SumDigits()`, `ProductDigits()` | Comprehensive digit manipulation |
| **Special Numbers** | `ArmStrong()`, `Palindrome()` | Armstrong and palindrome number detection |
| **Sequences** | `PrintFibonacci()` | Fibonacci series generation |

---

## 🛠️ Installation

### Prerequisites
- GCC Compiler (or any C compiler)
- Standard C libraries support

### Quick Setup

1. **Download the header file**
   ```bash
   git clone <your-repository-url>
   cd vincen-library
   ```

2. **Include in your project**
   ```c
   #include "vincen.h"
   ```

3. **Compile your program**
   ```bash
   gcc -o program your_program.c
   ```

### 📸 Installation Process



---

## 📚 Function Documentation

### 🔢 Arithmetic Functions

#### `int Factorial(int n)`
Calculates the factorial of a given number.

**Parameters:**
- `n` - Non-negative integer

**Returns:** 
- Factorial of n (n!)

**Time Complexity:** O(n)

```c
int result = Factorial(5); // Returns 120
```

---

### 🔍 Number Theory Functions

#### `int Prime(int n)`
Determines if a number is prime.

**Parameters:**
- `n` - Integer to check

**Returns:** 
- `1` if prime, `0` otherwise

**Time Complexity:** O(n)

```c
int isPrime = Prime(17); // Returns 1 (true)
```

#### `int Perfect(int n)`
Checks if a number is a perfect number (sum of proper divisors equals the number).

**Parameters:**
- `n` - Positive integer

**Returns:** 
- `1` if perfect, `0` otherwise

```c
int isPerfect = Perfect(6); // Returns 1 (1+2+3=6)
```

#### `int Strong(int n)`
Validates if a number is a strong number (sum of factorials of digits equals the number).

**Parameters:**
- `n` - Positive integer

**Returns:** 
- `1` if strong, `0` otherwise

```c
int isStrong = Strong(145); // Returns 1 (1!+4!+5!=145)
```

---

### 🔄 Digit Manipulation Functions

#### `int Reverse(int n)`
Reverses the digits of a number.

**Parameters:**
- `n` - Integer to reverse

**Returns:** 
- Reversed number

```c
int reversed = Reverse(1456); // Returns 6541
```

#### `int CountDigit(int n)`
Counts the number of digits in a number.

**Parameters:**
- `n` - Positive integer

**Returns:** 
- Number of digits

```c
int count = CountDigit(1456); // Returns 4
```

#### `int SumDigits(int n)`
Calculates the sum of all digits in a number.

**Parameters:**
- `n` - Positive integer

**Returns:** 
- Sum of digits

```c
int sum = SumDigits(1456); // Returns 16 (1+4+5+6)
```

#### `int ProductDigits(int n)`
Calculates the product of all digits in a number.

**Parameters:**
- `n` - Positive integer

**Returns:** 
- Product of digits

```c
int product = ProductDigits(1456); // Returns 120 (1×4×5×6)
```

---

### 🌟 Special Number Functions

#### `int ArmStrong(int n)`
Checks if a number is an Armstrong number.

**Parameters:**
- `n` - Positive integer

**Returns:** 
- `1` if Armstrong, `0` otherwise

**Note:** An Armstrong number equals the sum of its digits raised to the power of the number of digits.

```c
int isArmstrong = ArmStrong(153); // Returns 1 (1³+5³+3³=153)
```

#### `int Palindrome(int n)`
Determines if a number is a palindrome.

**Parameters:**
- `n` - Integer to check

**Returns:** 
- `1` if palindrome, `0` otherwise

```c
int isPalindrome = Palindrome(1221); // Returns 1
```

---

### 📈 Sequence Functions

#### `void PrintFibonacci(int n)`
Prints the Fibonacci series up to n terms.

**Parameters:**
- `n` - Number of terms to print

**Output:** 
- Prints Fibonacci sequence to stdout

```c
PrintFibonacci(7); // Prints: 0 1 1 2 3 5 8
```

---

## 💡 Usage Examples

### Basic Usage Example

```c
#include <vincen.h>

int main() {
    // Test various functions
    printf("Factorial of 5: %d\n", Factorial(5));
    printf("Is 17 prime? %d\n", Prime(17));
    printf("Reverse of 1456: %d\n", Reverse(1456));
    printf("Digit count of 1456: %d\n", CountDigit(1456));
    
    // Fibonacci series
    printf("Fibonacci series (7 terms): ");
    PrintFibonacci(7);
    
    return 0;
}
```

## 🧪 Testing

Run the provided test file to verify all functions:

```bash
gcc test.c && ./a.exe["for windows"]
```

Expected output:
```
120
0
6541
4
1
0
0 1 1 2 3 5 8
0
1
12
24
```

---

## 📈 Performance Considerations

| Function | Time Complexity | Space Complexity | Notes |
|----------|----------------|------------------|--------|
| `Factorial()` | O(n) | O(1) | Iterative implementation |
| `Prime()` | O(n) | O(1) | Can be optimized to O(√n) |
| `Reverse()` | O(log n) | O(1) | Based on number of digits |
| `ArmStrong()` | O(d²) | O(1) | d = number of digits |
| `PrintFibonacci()` | O(n) | O(1) | Iterative approach |

---

## 🤝 Contributing

We welcome contributions! Here's how you can help:

1. 🍴 **Fork** the repository
2. 🌿 **Create** a feature branch (`git checkout -b feature/AmazingFeature`)
3. 💾 **Commit** your changes (`git commit -m 'Add AmazingFeature'`)
4. 📤 **Push** to the branch (`git push origin feature/AmazingFeature`)
5. 🔄 **Open** a Pull Request

### 📝 Contribution Guidelines

- Follow existing code style and naming conventions
- Add comprehensive comments for new functions
- Include test cases for new functionality
- Update documentation as needed
- Ensure backward compatibility

---

## 📄 License

This project is licensed under the **GNU GENERAL PUBLIC LICENSE** - see the [LICENSE](LICENSE) file for details.

```
GNU GENERAL PUBLIC LICENSE

Copyright (c) 2025 Vinayak Chouhan

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files...
```

---

## 👨‍💻 Author

**Vinayak Chouhan**

- 📧 Email: your.email@example.com
- 🐙 GitHub: [@VinayakNPN](https://github.com/VinayakNPN)
- 💼 LinkedIn: [Vinayak-Chouhan](https://linkedin.com/in/vinayak-chouhan)

---

## 🙏 Acknowledgments

- Thanks to the C programming community for inspiration
- Mathematical algorithms adapted from classical computer science resources

---


<div align="center">

**⭐ Star this repository if it helped you! ⭐**


*Made with ❤️ by Vinayak Chouhan*

</div>
