#include <iostream>
#include <string>
using namespace std; // for both cout and string

int foo(int nX)
{
  cout << "The number is " << nX << endl;
}
 
int main()
{
  int nValue = 5;
  int (*pFoo)(int) = foo; // assign pFoo to foo()
   
  (*pFoo)(nValue); // call function foo(nValue) through pFoo. 
  return 0;
} 
