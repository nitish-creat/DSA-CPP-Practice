/*
BASIC OF EXCEPTION HANDLING
a safe way to deal with runtime errors so the program doesn’t crash.

Some errors happen while the program is running, not while compiling.
Examples:

Divide by zero
File not found
Invalid input
Out of memory



MECHANISM OF EXCEPTION HANDLING
Error occurs
     ↓
throw exception
     ↓
exit try block
     ↓
stack unwinding
     ↓
matching catch found
     ↓
exception handled
     ↓
program continues


THROWING MECHANISM:-
Throwing mechanism is the process by which a program signals that a runtime error has occurred using the throw keyword and transfers control from normal execution to exception handling code.

CATCHING MECHANISM
Catching mechanism is the process by which a thrown exception is received, matched, and handled using a catch block.


DEFAULT CATCH -- catch(...){}


Rethrowing an Exception (C++)

Rethrowing an exception means catching an exception and then throwing it again so that it can be handled by another catch block (usually at a higher level).

*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=10;
    int b=10;
    try   // PUT DANGEROUS CODE HERE IN TRY BLOCK
    {
        if(b==0){
            throw b;   // THROW WILL GIVE THE SIGNAL AN ERROR
        }
        cout << a/b; 
    }
    catch(int x)   //  HANDLE THE ERROR
    {
        cout<<"b is 0 which is not divisible";
    }
    return 0;
}




// #include <iostream>
// using namespace std;

// void test() {
//     try {
//         throw 5;
//     }
//     catch (int x) {
//         cout << "Caught in test\n";
//         throw;   // rethrow
//     }
// }

// int main() {
//     try {
//         test();
//     }
//     catch (int x) {
//         cout << "Caught in main\n";
//     }
// }
