/*
  An inline function is a function where the compiler replaces the function
  call with the actual body of the function at the point of the call, instead
  of doing a normal function call

  Why it exists : Normal function calls have overhead: saving registers, jumping
                  to the function's address, executing it, then jumping back.
                  For small, frequently-called functions, Inlining eliminates
  that overhead by pasting the function's code directly where it's called.
*/

#include <iostream>
using namespace std;

inline int square(int a) { return a * a; }
int main() {
  int num = 5;
  cout << square(num); // when we call the square function, the program control
                       // does not goto line 15, instead the result of square
                       // function gets paste in place of square(num)
  cout << "\n<-------------------------------Code "
          "Complete------------------------------->\n";
  return 0;
}
