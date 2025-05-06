**1. What is the purpose of the main function in a C++ program?**
The main() function is the entry point of a C++ program where execution begins. It controls the flow of the program.

**2. Explain the significance of the return type of the main function.**
The return type int signifies that main() will return an integer to the operating system, typically 0 for successful execution and non-zero for errors.

**3. What are the two valid signatures of the main function in C++?**

int main()
int main(int argc, char* argv[])


**4. What is function prototyping and why is it necessary in C++?**
Function prototyping declares a function before it is used, allowing the compiler to check for correct function usage (name, return type, and parameters).

**5. How do you declare a function prototype for a function that returns an integer and takes two integer parameters?**
int add(int, int);

**6. What happens if a function is used before it is prototyped?**
The compiler may throw an error or assume an incorrect declaration, leading to unpredictable behavior or compilation failure.

**7. What is the difference between a declaration and a definition of a function?**
Declaration tells the compiler the function's name, return type, and parameters.

Definition provides the actual body (implementation) of the function.

**8. How do you call a simple function that takes no parameters and returns void?**

void greet() {
    cout << "Hello!";
}
greet(); // function call

**9. Explain the concept of "scope" in the context of functions.**
Scope defines the visibility or accessibility of variables and functions. Local variables are only accessible inside the function/block where they are declared.

**10. What is call by reference in C++?**
Call by reference passes the actual address of the argument, allowing the function to modify the original variable.

**11. How does call by reference differ from call by value?**
Call by value copies the variable; changes don't affect the original.

Call by reference uses references; changes affect the original variable.

**12. Provide an example of a function that uses call by reference to swap two integers.**

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

**13. What is an inline function in C++?**
An inline function is expanded at the point of invocation to reduce the overhead of function calls, usually for small, frequently-used functions.

**14. How do inline functions improve performance?**
They reduce function call overhead by replacing the function call with actual code at compile-time.

**15. Explain the syntax for declaring an inline function**.

inline int square(int x) {
    return x * x;
}


**16. What are macros in C++ and how are they different from inline functions?**
Macros are preprocessor directives (#define) replaced before compilation.

Inline functions are handled by the compiler, are type-safe, and support debugging.

**17. Explain the advantages and disadvantages of using macros over inline functions.**
Advantages of Macros: Faster textual substitution.

Disadvantages: No type checking, harder to debug, prone to errors.
Inline functions are safer and better optimized by the compiler.

**18. Provide an example to illustrate the differences between macros and inline functions.**

#define SQUARE(x) ((x)*(x))          // Macro
inline int square(int x) { return x * x; }  // Inline function

**19. What is function overloading in C++?**
Function overloading means having multiple functions with the same name but different parameter lists.

**20. How does the compiler differentiate between overloaded functions?**
By checking the number and type of parameters (signature). Return type is not considered.

**21. Provide an example of overloaded functions in C++.**

void print(int i) { cout << i; }
void print(double d) { cout << d; }
void print(string s) { cout << s; }

**22. What are default arguments in C++?**
Default arguments are values given in function declaration, used if the caller omits those arguments.

**23. How do you specify default arguments in a function declaration?**
void display(string msg = "Hello");

**24. What are the rules for using default arguments in functions?**
Default values must be from right to left.

Cannot skip arguments from the middle.

Can be provided only once (either in declaration or definition).

**25. Provide an example of a function with default arguments.**
void greet(string name = "User") {
    cout << "Hello, " << name << "!";
}
greet();           // Outputs: Hello, User!
greet("Alice");    // Outputs: Hello, Alice!
