#include <iostream>

using namespace std; 

int main()
{
    int input;

    cout << "Enter an integer between 0 and 35: ";
    cin >> input;
    cout << endl;

    if (input <= 9)
    {
        cout << input;
        cout << endl;
    }

    else if (input > 9 && input <= 35)
    {
        input += 55;
        cout << static_cast<char>(input);
        cout << endl;
    }

    else
    {
        cout << "invalid input" << endl;
    }

}

