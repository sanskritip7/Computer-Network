#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, b = "";
    int c = 0;

    cout << "Enter data: ";
    cin >> s;

    for (char x : s)
    {
        b += x;

        if (x == '1')
            c++;
        else
            c = 0;

        if (c == 5)
        {
            b += '0';
            c = 0;
        }
    }

    cout << "Stuffed data: " << b;
    return 0;
}