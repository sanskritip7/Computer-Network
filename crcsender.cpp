#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data, gen, temp;

    cout << "Enter data: ";
    cin >> data;

    cout << "Enter generator: ";
    cin >> gen;

    temp = data + string(gen.length() - 1, '0');

    for (int i = 0; i <= (int)temp.length() - (int)gen.length(); i++)
    {
        if (temp[i] == '1')
        {
            for (int j = 0; j < (int)gen.length(); j++)
                temp[i+j] = (temp[i+j] == gen[j]) ? '0' : '1';
        }
    }

    string crc = temp.substr(temp.length() - gen.length() + 1);

    cout << "CRC: " << crc << endl;
    cout << "Transmitted Data: " << data + crc;

    return 0;
}