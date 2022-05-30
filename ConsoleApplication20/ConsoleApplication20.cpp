

#include <iostream>
#include "Fraction .h"

using namespace std;

int main()
{
    Fraction ar1(13, 4);
    
    Fraction  ar2(18, 2);
    Fraction  ar3 = ar1.minusF(ar2);
   ar1.print();
   cout << " - ";
   ar2.print();
   cout << " = ";
   ar3.integerF();
   cout << endl;
   Fraction  ar4 = ar1.divisionF(ar2);
   ar1.print();
   cout << "  /  ";
   ar2.print();
   cout << " = ";
   ar4.integerF();

}
