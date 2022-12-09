#include <fstream>
#include <iostream>
using namespace std;

int main(){
  ifstream data("Day3Input.txt");
  string priorities = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string line;
  string group[3];
  long sum = 0;
  int counter = 0;
  while (getline(data,line)){
    group[(counter%3)] = line;
    if (counter%3==2){
      char same = 'b';
      string common = "";
      for (int i=0;i<group[0].size();i++){
        for (int j=0;j<group[1].size();j++){
          if (group[0][i]==group[1][j]){
            common += group[0][i];
          }
        }
      }
      for (int i=0;i<common.size();i++){
        for (int j=0;j<group[2].size();j++){
          if (common[i]==group[2][j]){
            same = common[i];
          }
        }
      }
      for (int i=0;i<priorities.size();i++){
        if (priorities[i]==same){
          sum+=(i+1);
        }
      }
    }
    counter++;
  }
  cout<<sum<<endl;
}
