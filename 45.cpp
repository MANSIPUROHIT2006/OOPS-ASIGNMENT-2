// Implement a function with default arguments to print a greeting message (default name is "Guest")

#include <iostream>
using namespace std;
string greet(string s = "Guest")
{
    cout << "Hello, " << s << endl;
    return "";
}
int main()
{
    string s = "khushi";
    cout << greet() << endl;
    cout << greet(s) << endl;

    return 0;
}
