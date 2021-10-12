#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main() {
  srand(time(NULL));
  int x=rand()%101; // random number from 0 to 100
  cout << "The computer thought of the number from 0 to 100. Try to guess the number. You have 8 tries. \n Your number: \n";
  int user_choise; 
  bool flag=false;
  
  for(int i=0; i<8; i++)
  {
  cin >> user_choise;
  if (x == user_choise) {cout << "You win"; flag=true; break;};
  if (x > user_choise) {cout << "More" << endl;};
  if (x < user_choise) {cout << "Less" << endl;};
  }
if (flag==false) {cout << "YOU LOSE!\n"; cout << "The number was " << x;};

}