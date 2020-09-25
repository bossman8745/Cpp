#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

int main()
{
    double num1, num2, num3;
    double a, b, c;

    cout << "Enter three side lengths: " << endl;
    cin >> num1 >> num2 >> num3;
    cout << endl;

    //assigns three entered values to a, b, and c to find the hypontenuse.
    if (num1 >= num2 && num1 >= num3)
    {
        a = num2;
        b = num3;
        c = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        a = num1;
        b = num3;
        c = num2;
    }
    else if (num3 >= num1 && num3 >= num2)
    {
        a = num1;
        b = num2;
        c = num3;
    }
    else
    {
        //weird error insurrance
        assert(false);
    }

    //tests for a^2 + b^2 = c^2 and outputs results 
    if (pow(a, 2.0) + pow(b, 2.0) == pow(c, 2.0))
    {
        cout << "It is a right angled triangle";
    }

    else if (pow(a, 2.0) + pow(b, 2.0) != pow(c, 2.0))
    {
        cout << "It is not a right angled triangle";
    }
    return 0;
}
