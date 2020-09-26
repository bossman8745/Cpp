#include <iostream>

using namespace std;

int main() {
    int cookies, leftOverCookies, boxes, leftOverBoxes, containers;

    cout << "Enter number of cookies: " << endl;
    cin >> cookies;
    cout << endl;

    boxes = cookies / 24;
    leftOverCookies = cookies % 24;
        
    containers = boxes / 75;
    leftOverBoxes = boxes % 75;

    cout << boxes << " boxes" << endl;
    cout << containers << " containers" << endl;
    
    if (leftOverCookies != 0)
    {
        cout << leftOverCookies << " left over cookies" << endl;
    }

    if (leftOverBoxes != 0)
    {
        cout << leftOverBoxes << " left over boxes";
    }
    return 0;
}
