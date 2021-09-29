//Эта программа ищет среднее арифметическое данной последовательности чисел с точностью до 11 знаков. 
//Числа подаются через консоль. Последовательность оканчивается нулём.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  double in, sum;
  int count = 0;
  cin >> in;
  while (in != 0) {
      sum += in;
      count++;
      cin >> in;
  }
  cout << setprecision(11) << fixed << sum / count;
  return 0;
}
