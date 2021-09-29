//Эта программа рассчитывает сумму вклада через n лет с учётом процентной ставки.
//На вход подаются проценты, сумма вклада (отдельно рубли и копейки) и количество лет.
//На выходе получается сумма вклада в рублях и копейках с учётом кривой арифметики дробных чисел в C++.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double percent, rubli, kopeyki, years, money;
  cin >> percent >> rubli >> kopeyki >> years;
  while (years > 0) {
      money = trunc((rubli * 100 + kopeyki) * (percent / 100 + 1) + 0.000001);
      rubli = (int)money / 100;
      kopeyki = (int) money % 100;
      years--;
  }
  cout << (int)money / 100 << " " << (int)money % 100;
  return 0;
}
