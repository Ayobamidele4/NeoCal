# Contributing to NeoCal

Thank you for wanting to help improve NeoCal! We want to make this scientific calculator as robust, fast, and accurate as possible.

## How Can I Contribute?

### 1. Reporting Bugs
* Check the Issues tab to see if the bug has already been reported.
* Open a new issue describing the problem, what input caused it, and what you expected to happen.

### 2. Adding New Math Functions
We love expanding the calculator's capabilities! If you want to add a function (e.g., Matrices, Statistics, Calculus):
1. Add necessary standard libraries or physical constants to `src/calculator.h`.
2. Implement your function cleanly inside `src/neocal.c` (or create a new `.c` file).
3. Ensure all inputs are securely parsed using `scanf` return validation to prevent infinite loops.
4. Update the menu selection in `main()`.

### 3. Submission Process
1. Fork the repository and create your branch from `main`.
2. Ensure the code compiles perfectly with **zero warnings** by running `make`.
3. Test your inputs against edge cases (like division by zero or negative square roots).
4. Open a Pull Request with a clear description of your changes.

## Coding Style & Standards
* **Zero Warnings:** Code must compile cleanly using `gcc -Wall -Wextra -O3`.
* **Input Safety:** Never use unchecked `scanf` statements. Always handle failing inputs cleanly and flush the buffer.
* **Memory Management:** Any dynamically allocated memory (`malloc`) must be safely checked and explicitly freed (`free`) before the function exits.