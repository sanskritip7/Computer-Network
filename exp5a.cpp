#include <iostream>
using namespace std;

int main()
{
    int h[7], d[4];

    cout << "Enter 4 data bits: ";
    for (int i = 0; i < 4; i++)
        cin >> d[i];

    h[2] = d[0];
    h[4] = d[1];
    h[5] = d[2];
    h[6] = d[3];

    h[0] = h[2] ^ h[4] ^ h[6];
    h[1] = h[2] ^ h[5] ^ h[6];
    h[3] = h[4] ^ h[5] ^ h[6];

    cout << "Hamming Code: ";
    for (int i = 6; i >= 0; i--)
        cout << h[i];

    return 0;
}