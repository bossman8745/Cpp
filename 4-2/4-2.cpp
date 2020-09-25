#include <iostream>
#include <string>

using namespace std;

int main()
{
    double num1, num2, num3;
    
    cout << "Enter three numbers> ";
    cin >> num1 >> num2 >> num3;
    cout << endl;

    if (num1 >= num2 && num2 >= num3)
    {
       //3 2 1
        cout << num3 << " " << num2 << " " << num1;
    }
    else if (num1 <= num2 && num2 <= num3)
    {
        //1 2 3
        cout << num1 << " " << num2 << " " << num3;
    }
    else if (num2 >= num1 && num1 >= num3)
    {
        //3 1 2
        cout << num3 << " " << num1 << " " << num2;
    }
    else if (num3 >= num1 && num1 >= num2)
    {
        //2 1 3
        cout << num2 << " " << num1 << " " << num3;
    }
    else if (num1 >= num3 && num3 >= num2)
    {
        //2 3 1
        cout << num2 << " " << num3 << " " << num1;
    }
    else if (num2 >= num3 && num3 >= num1)
    {
        //1 3 2
        cout << num1 << " " << num3 << " " << num2;
    }
    else
    {
        cout << "ERROR";
    }
}

