#include <fstream>
#include <iostream>
using namespace std;

int main(){
  ifstream data("Day3Input.txt");
  string priorities = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string line;
  bool found;
  char overlap;
  long sum=0;
  while (getline(data,line)){
    char comp1[line.size()/2];
    char comp2[line.size()/2];
    for(int i=0;i<(line.size()/2);i++){
      comp1[i] = line[i];
    }
    for(int i=(line.size()/2);i<line.size();i++){
      comp2[i-(line.size()/2)] = line[i];
    }
    found = false;
    for (int i=0;i<(line.size()/2);i++){
      for (int j=0;j<(line.size()/2);j++){
        if (comp1[i]==comp2[j]){
          found = true;
          overlap = comp1[i];
          break;
        }
      }
      if (found==true){
        break;
      }
    }
    for (int i=0;i<priorities.size();i++){
      if (priorities[i]==overlap){
        sum+=(i+1);
      }
    }
  }
  cout<<sum<<endl;
}
