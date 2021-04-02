#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
  char operand;
  int nos1, nos2;
  cout <<"\nChoose your operand[ +,-,*,/,% ]: "<< endl;
  cin >> operand;
  cout <<"\nEnter the first number you want to compute: "<< endl;
  cin >> nos1;
  cout <<"Enter the second number you want to compute: "<< endl;
  cin >> nos2;
  
  switch(operand){
    case '+':
      cout << nos1 <<" + " << nos2 <<" = "<< nos1 + nos2 << endl; 
      break;
     case '-':
      cout << nos1 <<" - " << nos2 <<" = "<< nos1 - nos2 << endl; 
      break; 
     case '*':
      cout << nos1 <<" * " << nos2 <<" = "<< nos1 * nos2 << endl; 
      break;
     case '/':
      cout << nos1 <<" / " << nos2 <<" = "<< nos1 / nos2 << endl; 
      break;
     case '%':
      cout << nos1 <<" % " << nos2 <<" = "<< nos1 % nos2 << endl; 
      break;
      default:
        cout <<"\nInvalid Oeperand! "<< endl;    
  }
   
  system("PAUSE>0");
  return EXIT_SUCCESS;
}
