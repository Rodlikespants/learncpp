#include <iostream>
#include <string>
 
int main()
{
    using namespace std; // for both cout and string

    int nValue = 5;
    int *pnPtr = &nValue; // assign address of nValue to pnPtr
     
    cout << &nValue << endl; // print the address of variable nValue
    cout << pnPtr << endl; // print the address that pnPtr is holding

 
    return 0;
}
