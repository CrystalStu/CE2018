// Source: http://www.cplusplus.com/doc/tutorial/control/

#include <iostream>
using namespace std;
int main() {
    if (x == 100) cout << "x is 100";
    // c1
    if (x == 100)
    {
       cout << "x is ";
       cout << x;
    }
    // c2
    if (x == 100) { cout << "x is "; cout << x; }
    // c3
}