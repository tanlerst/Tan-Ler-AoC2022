#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream data("Day4Input.txt");
  string line;
  int numOverlaps = 0;
  int aStart, aEnd, bStart, bEnd;

  while (getline(data, line)) {
    string part1 = line.substr(0, line.find(","));
    string part2 = line.substr(line.find(",") + 1);
    aStart = stoi(part1.substr(0, part1.find("-")));
    aEnd = stoi(part1.substr(part1.find("-") + 1));
    bStart = stoi(part2.substr(0, part2.find("-")));
    bEnd = stoi(part2.substr(part2.find("-") + 1));
    if (aStart <= bEnd && bStart <= aEnd) {
      numOverlaps++;
    }
  }
  cout << numOverlaps << endl;
}
