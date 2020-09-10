#include <iostream>
using namespace std;
bool isPrime(int n){
  if (n==1){
    return false;
  }
  if(n== 2 || n==3){
    return true;
  }
  if(n%2==0 || n%3==0){
    return false;
  }
  for(int i=5; i*i<=n; i=i+6){
    if(n%i==0 || n%(1+2)==0){
      return false;
    }
  }
  return true;
}

int main() {
  cout<<" 1 - Yes, Prime!"<< endl;
  cout <<" 0 - Not a Prime!" << endl;
  cout <<isPrime(2) << endl;
}