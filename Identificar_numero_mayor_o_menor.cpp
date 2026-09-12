#include <iostream>
using namespace std;
int main()
{
    int A, B, mayor, menor;
    cin >> A >> B;
    mayor = (A + B + (A - B) * (A > B) - (A - B) * (A < B)) / 2;
    menor = (A + B - (A - B) * (A > B) + (A - B) * (A < B)) / 2;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
    return 0;
}
