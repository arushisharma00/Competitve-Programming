#include <iostream>
using namespace std; 

int calc( double a, double b, char d) 
{
  //char p,q,r,s;
  if( d == 'p'){
    cout <<  a+b <<endl;
  }
  else if( d == 'q'){
    cout << a-b<<endl;
  }
  else if( d== 'r'){
    cout << a*b;
    

  }
  else if( d == 's') {
    cout << "division" << a/b;
  }
  return 0;
}

int main() {
  int x , y;
  char z;
  
  cout << "Calculate" << endl;
  cout << "Type p for addition" << endl;
  cout << "Type q for substraction" << endl;
  cout << "Type r for multiplication" << endl;
  cout << "Type s for division" << endl;
  cout << " Enter Values" << endl;
  cin >> x;
  cin >> y; 
  cout << " Enter action" << endl;
  cin >> z;
  calc(x,y,z); 

}