#include <fstream>
#include <iostream>
using namespace std;

int check(char x,char y){
  //string status;
  if (x=='A'){
    if (y=='X'){
      return 3;
    }
    else if (y=='Y'){
      return 6;
    }
    else{
      return 0;
    };
  }
  else if (x=='B'){
    if (y=='X'){
      return 0;
    }
    else if (y=='Y'){
      return 3;
    }
    else{
      return 6;
    };
  }
  else{
    if (y=='X'){
      return 6;
    }
    else if (y=='Y'){
      return 0;
    }
    else{
      return 3;
    };
  };
  };

int score(char x,char y){
  int score = check(x,y);
  if (y=='X'){
    score += 1;
  }
  else if (y=='Y'){
    score += 2;
  }
  else {
    score += 3;
  };
  return score; 
};


int main() {
  char oppo;
  char play;
  ifstream data("Day2Input.txt");
  int totalScore = 0;
  string i;
  while (getline(data,i)){
    oppo = i[0];
    play = i[2];
    totalScore += score(oppo,play);
      
  };
  cout << totalScore;
};