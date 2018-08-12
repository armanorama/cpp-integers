#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

int main() {


  int value = 578;
  long int longVal = 2234234234231231;
  short int shortVal = 2342;

  int maxVal = std::numeric_limits<int>::max(); // Tut calls for INT_MAX here, but vim-cpp-auto-include not picking it up and autodeletes the limits include
  int minVal = std::numeric_limits<int>::min(); // Tut calls for INT_MIN here, but vim-cpp-auto-include not picking it up and autodeletes the limits  include
  long int minLongVal = std::numeric_limits<long int>::min();
  long int maxLongVal = std::numeric_limits<long int>::max();
  short int minShortVal = std::numeric_limits<short int>::min();
  short int maxShortVal = std::numeric_limits<short int>::max();


  cout << "An int value: " << value << endl;
  cout << "Min int value: " << minVal << endl;
  cout << "Max int value: " << maxVal << endl;
  cout << "Size of an int value: " << sizeof(value) << endl;
  cout << "" << endl;

  cout << "A long int value: " << longVal << endl;
  cout << "Min long int value: " << minLongVal << endl;
  cout << "Max long int value: "  << maxLongVal << endl;
  cout << "Size of a long int value: " << sizeof(longVal) << endl;
  cout << "" << endl;

  cout << "A short int value: " << shortVal << endl;
  cout << "Min short int value: " << minShortVal << endl;
  cout << "Max short int value: " << maxShortVal << endl;
  cout << "Size of a short int value: " << sizeof(shortVal) << endl;
  cout << "" << endl;

  return 0;
}
