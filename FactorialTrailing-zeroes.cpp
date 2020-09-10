#include <iostream>
using namespace std;

int calcFactorial(int n){
  if (n==0){
    return 1;
  }
  return n*calcFactorial(n-1);
  
}


int main() 
{

  int fact= calcFactorial(250);
  int res=0;
  while(fact%10==0)
  {
    res++;
    fact=fact/10;
  }
  cout<< "Number of Trailing Zeroes:  "<< res << endl;
  return res;

}
