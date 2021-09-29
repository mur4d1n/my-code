//Эта программа определяет, является ли данное число A числом Фибоначчи

#include <iostream>

using namespace std;

int main() {
  int k, f0 = 0, f1 = 1, n, j = 1;
  cin >> n;
  if (n > 1) {
      while (k < n) {
          k = f0 + f1;
          f0 = f1;
          f1 = k;
          j++;
      }
      if (k == n)
          cout << j;
      else
          cout << -1;
  }
  else if (n == 1)
      cout << 1;
  else
      cout << 0;
  return 0;
}
