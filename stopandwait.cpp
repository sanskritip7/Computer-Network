#include <iostream>
using namespace std;

int main()
{
    int frames;

    cout << "Enter the number of frames: ";
    cin >> frames;

    for (int i = 1; i <= frames; i++)
    {
        cout << "\nSending Frame " << i << endl;
        cout << "Waiting for ACK..." << endl;
        cout << "ACK received for Frame " << i << endl;
    }

    cout << "\nAll frames transmitted successfully.";

    return 0;
}