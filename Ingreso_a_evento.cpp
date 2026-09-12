#include <iostream>
using namespace std;
int main()
{
  int edad, Ingreso;
  bool vip;
  cin >> edad >> vip;
  Ingreso = (edad >= 18) && vip;
  cout << Ingreso;
return 0;
}
