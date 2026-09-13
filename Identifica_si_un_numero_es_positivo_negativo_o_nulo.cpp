#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if (num > 0)
    {
        cout << "Positivo";
    }
    else
    {
        if (num < 0)
        {
            cout << "Negativo";
        }
        else
        {
            cout << "Nulo";
        }
    }
    return 0;
}
