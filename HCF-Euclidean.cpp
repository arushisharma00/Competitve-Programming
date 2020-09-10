#include <iostream>
using namespace std;

int euclideanHCF(int a,int b){
  while(a!=b){
    if(a>b){
      a=a-b;

    }
    else{
      b=b-a;
    }

  }
  return a;
}
int main() {
  cout<<"HCF using Euclidean: " <<euclideanHCF(15,12);
}