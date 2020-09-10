#include <iostream>
using namespace std;

int optFactorial(int n){
  if(n==0){
    return 1;
  }
  return n*optFactorial(n-1);
}
int main() {
  cout<<optFactorial(0);

}