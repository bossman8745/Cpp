#include <iostream>

using namespace std;

int main()
{
    double input;

    cout << "Enter a number> ";
    cin >> input;
    cout << endl;

    if (input < 0)
    {
        cout << "negative";
    }

    else if (input == 0)
    {
        cout << "zero";
    }
    
    else if (input > 0)
    {
        cout << "positive";
    }
    
    else
    {
        cout << "ERROR";
    }
}

