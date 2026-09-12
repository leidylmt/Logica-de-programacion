#include <iostream>
using namespace std;
int main()
{
  int Y = 4, X = 4;
  Y = ++X;
  X = X++ + ++Y;
  cout << X <<" " << Y << endl;
  return 0;
}
