// Write a macro to calculate the square of a number and compare its performance with and inline function

#include <iostream>
#include <chrono>

// Macro to calculate square
#define SQUARE_MACRO(x) ((x) * (x))

// Inline function to calculate square
inline int square_inline(int x)
{
    return x * x;
}

int main()
{
    const int NUM_ITERATIONS = 10000000; // Reduced iterations for quick test

    // Test performance of Macro
    auto start_macro = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < NUM_ITERATIONS; ++i)
    {
        int result = SQUARE_MACRO(i);
    }
    auto end_macro = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> macro_duration = end_macro - start_macro;

    // Test performance of Inline function
    auto start_inline = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < NUM_ITERATIONS; ++i)
    {
        int result = square_inline(i);
    }
    auto end_inline = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> inline_duration = end_inline - start_inline;

    // Output the results
    std::cout << "Macro Time: " << macro_duration.count() << " seconds\n";
    std::cout << "Inline Function Time: " << inline_duration.count() << " seconds\n";

    return 0;
}
