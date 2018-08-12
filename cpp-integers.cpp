#include <iostream>
#include <limits>
#include <algorithm>


using namespace std;

int main() {

  int value = 578;
  int maxVal = std::numeric_limits<int>::max(); // Tut calls for INT_MAX here, but vim-cpp-auto-include not picking it up and autodeletes the limits include
  int minVal = std::numeric_limits<int>::min(); // Tut calls for INT_MIN here, but vim-cpp-auto-include not picking it up and autodeletes the limits  include
  cout << value << endl;

  cout << "A value: " << value << endl;
  cout << "Max int value: " << maxVal << endl;
  cout << "Min int value: " << minVal << endl;

  return 0;
}
