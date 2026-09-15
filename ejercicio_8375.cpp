#include <iostream>
using namespace std;
int main()
{
    int ganancias, perdidas;
    cin >> ganancias >> perdidas;

    if (ganancias > perdidas)
    {
        cout << "El negocio si va a jalar" << endl;
        cout << ganancias - perdidas;
    }
    else
    {
        cout << "Dejalo ya esta muerto" << endl;
        cout << perdidas - ganancias;
    }
    return 0;
}