#include <iostream>
using namespace std;

int isPal(int n)
{
    int rev=0;
    int temp=n;
    while(temp!=0)
    {
      int id = temp % 10;
      rev = (rev * 10) + id;
      temp =temp/10;
    }
    if(n==rev){
      cout<<"Number is a Palindrome";
    }
    else{
      cout<<"Number is not a Palindrome"; 
    }
return 0;
    
}

int main() {

  isPal(45553);
  
}