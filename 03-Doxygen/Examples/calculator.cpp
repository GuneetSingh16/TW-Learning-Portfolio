/**
 * \file calculator.cpp
 * \brief A small calculator example for Doxygen.
 */

/**
 * \brief Adds two integers.
 * \param a First integer.
 * \param b Second integer.
 * \return The sum of a and b.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * \brief Multiplies two integers.
 * \param a First integer.
 * \param b Second integer.
 * \return The product of a and b.
 */
int multiply(int a, int b) {
    return a * b;
}

/**
 * \brief Program entry point.
 * \return 0 when the program finishes successfully.
 */
int main() {
    int x = 5;
    int y = 3;
    int total = add(x, y);
    int product = multiply(x, y);
    return 0;
}
