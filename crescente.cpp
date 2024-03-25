#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Digite dois numeros: " << endl;
    cin >> num1;
    cin >> num2;

    if  (num1 < num2) {
         cout << "CRESCENTE!"<< endl;
    }
    else if (num2 < num1) {
         cout << "DECRESCENTE!" << endl;
    }

    return 0;
}
