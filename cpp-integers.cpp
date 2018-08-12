#include <iostream>
#include <limits>
#include <algorithm>


using namespace std;

int main() {

  int value = 578;
  int maxVal = std::numeric_limits<int>::max();
  int minVal = std::numeric_limits<int>::min();
  cout << value << endl;

  cout << "A value: " << value << endl;
  cout << "Max int value: " << maxVal << endl;
  cout << "Min int value: " << minVal << endl;

  return 0;
}
