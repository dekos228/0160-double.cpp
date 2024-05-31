// double.cpp
#include <iostream>
#include <cstdlib>

int main()
{
  using namespace std;

  double a = 0, b = 0; // Числа с плавающей запятой.
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;

  cout << "quotient a:b  = " << a / b << endl;
  //cout << "remainder a:b = " << a % b << endl;
  // Операция взятия остатка не определена.
  return EXIT_SUCCESS;
}
