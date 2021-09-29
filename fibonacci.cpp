//Эта программа вычисляет n-ное число Фибоначчи. На вход подаётся номер числа.

#include <iostream>

using namespace std;

int main() {
  int k, f0 = 0, f1 = 1, n;
  cin >> n;
  if (n > 1) {
      n--;
      while (n != 0) {
          k = f0 + f1;
          f0 = f1;
          f1 = k;
          n--;
      }
      cout << k;
  }
  else if (n == 1)
      cout << 1;
  else
      cout << 0;
  return 0;
}
