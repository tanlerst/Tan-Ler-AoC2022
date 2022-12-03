#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream numFile("input.txt");
  int first = 0;
  int second = 0;
  int third = 0;
  int sum = 0;
  string line;
  int i = 0;

  while (getline(numFile, line)) {
    if (line.empty()) {
      if (sum > first) {
        third = second;
        second = first;
        first = sum;
      }
      else if (sum > second){
        third = second;
        second = sum;
      }
      else if (sum > third){
        third = sum;
      };
      sum = 0;
    } 
    else {
      sum += stoi(line);
    };
  };

  cout << first+second+third;
};