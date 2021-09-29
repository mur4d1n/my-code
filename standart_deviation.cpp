//Эта программа, как следует из названия файла, занимается поиском стандартного отклонения последовательности чисел. 
//Числа подаются одно за другим через консоль. Последовательность должна оканчиваться нулём

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  double in, s, deviation, in_square_sum, in_sum;
  int count = 0;
  cin >> in;
  while (in != 0) {
      in_square_sum += in * in;
      in_sum += in;
      count++;
      cin >> in;
  }
  deviation = sqrt((in_square_sum - in_sum * in_sum / count) / (count - 1));
  cout << setprecision(11) << fixed << deviation;
  return 0;
}
