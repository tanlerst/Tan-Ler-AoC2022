#include <fstream>
#include <iostream>
using namespace std;

int check(char y){
  if (y=='X'){
    return 0;
  }
  else if (y=='Y'){
    return 3;
  }
  else{
    return 6;
  };
};

int score(char x,char y){
  int score = check(y);
  int move;
  int add[6] = {1,2,3,1,2};
  if (y=='X'){
    move = -1;
  }
  else if (y=='Y'){
    move = 0;
  }
  else {
    move = 1;
  };
  if (x=='A'){
    score += add[3+move];
    //cout<<add[3+move]<<endl;
  }
  else if (x=='B'){
    score += add[1+move];
    //cout<<add[1+move]<<endl;
  }
  else{
    score += add[2+move];
    //cout<<add[2+move]<<endl;
  };
  
  return score; 
};


int main() {
  char oppo;
  char status;
  ifstream data("Day2Input.txt");
  //string data[9] = {"A X","A Y","A Z","B X","B Y","B Z","C X","C Y","C Z"};
  int totalScore = 0;
  string i;
  
  while (getline(data,i)){
    oppo = i[0];
    status = i[2];
    totalScore += score(oppo,status);
  };
  
  /*
  for (string i:data){
    oppo = i[0];
    status = i[2];
    totalscore+= score(oppo,status);
  };
  */
  cout << totalScore;
};

//X means you need to lose, Y means you need to end the round in a draw, and Z means you need to win
/*
A X=3
A Y=4
A Z=8
B X=1
B Y=5
B Z=9
C X=2
C Y=6
C Z=7
*/