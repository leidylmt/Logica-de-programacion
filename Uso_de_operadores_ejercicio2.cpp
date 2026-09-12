#include <iostream>
using namespace std;
int main()
{
  int A = 5, B = 10;
  int C = (A++ + ++B)*2;
  cout << A <<" "<< B <<" "<< C << endl;
  return 0;
}
