// implement a macro to find the maximum of two numbers and compare it with an inline function

#include <iostream>
#include <chrono>

// Macro to find the maximum of two numbers
#define MAX_MACRO(a, b) ((a) > (b) ? (a) : (b))

// Inline function to find the maximum of two numbers
inline int max_inline(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    const int NUM_ITERATIONS = 10000000; // Number of iterations for performance test

    // Test performance of Macro
    auto start_macro = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < NUM_ITERATIONS; ++i)
    {
        int result = MAX_MACRO(i, i + 1);
    }
    auto end_macro = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> macro_duration = end_macro - start_macro;

    // Test performance of Inline function
    auto start_inline = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < NUM_ITERATIONS; ++i)
    {
        int result = max_inline(i, i + 1);
    }
    auto end_inline = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> inline_duration = end_inline - start_inline;

    // Output the results
    std::cout << "Macro Time: " << macro_duration.count() << " seconds\n";
    std::cout << "Inline Function Time: " << inline_duration.count() << " seconds\n";

    return 0;
}
