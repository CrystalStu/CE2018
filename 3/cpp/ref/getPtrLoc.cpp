// Source: https://www.tutorialspoint.com/cplusplus/cpp_pointers.htm

#include <iostream>
#include <cstdio>

using namespace std;
int main () {
    freopen("../../out/ref/getPtrLoc.out", "w", stdout);

   int  var1;
   char var2[10];

   cout << "Address of var1 variable: ";
   cout << &var1 << endl;

   cout << "Address of var2 variable: ";
   cout << &var2 << endl;

   return 0;
}