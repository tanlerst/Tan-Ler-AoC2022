#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream numFile("input.txt");
  int largest = 0;
  int sum = 0;
  string line;
  int i = 0;

  while (getline(numFile, line)) {
    if (line.empty()) {
      if (sum > largest) {
        largest = sum;
      };
      sum = 0;
    } 
    else {
      sum += stoi(line);
    };
  };

  cout << largest;
};
