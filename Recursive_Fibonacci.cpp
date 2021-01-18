#include<iostream>    
using namespace std;      
void fibonacci(int n){    
  static int num1=0, num2=1, num3;    
  if(n>0){    
    num3 = num1 + num2;    
    num1 = num2;    
    num2 = num3;    
  cout<<num3<<" ";    
    fibonacci(n-1);    
    }
  }    
int main(){    
  int n;    
  cout<<"Enter the number of elements that you want to display: ";    
  cin>>n;    
  cout<<"The Fibonacci sequence is composed of the following numbers: ";    
  cout<<"0 "<<"1 ";  
  fibonacci(n-2);   
  return 0;  
}
