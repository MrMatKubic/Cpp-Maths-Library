#include <iostream>
#include <windows.h>

#include "MathLibrary.h"

using namespace std;

int main()
{
    cout << "2 + 3 = " << add(2, 3) << endl;
    cout << "2 x 3 = " << multiply(2, 3) << endl;
    cout << "49 / 7 = " << divide(49, 7) << endl;
    cout << "45 - 12 = " << sub(45, 12) << endl;

    cout << "7 squarred = " << sq(7) << endl;
    cout << "7 cubed = " << cube(7) << endl;
    cout << "square root of 25 = " << sqrt(25) << endl;
    cout << "2 pow 5 = " << pow(2, 5) << endl;

    cout << "exp of 1 = " << exp(1) << endl;
    cout << "5! = " << factorial(5) << endl;
    cout << "GCD of 25 and 5 = " << findGCD(25, 5) << endl;
    cout << endl << endl;

    cout << "List of prime numbers from 0 to 30 :" << endl;
    for(int a = 0; a < 30; a++)
    {
        if(isPrime(a)) cout << a << " V " << endl;
        else cout << a << endl;
    }

    system("pause");
    return 0;
}
