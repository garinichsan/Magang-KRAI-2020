#include <iostream>
#include "class2.h"

using namespace std;

int main () {
    Z z;
    z.Set(2);
    z.Print();
    cout << z.Add (4,5) << endl;
    z.Add (3);
    z.Print();

   return 0;
}