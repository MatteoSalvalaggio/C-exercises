#include <iostream>  
using namespace std;  
int main() {  
  int a=0,b=1,k,i,elements;    
  cout<<"Enter the number of elements: ";    
  cin>>elements;    
  cout<<a<<" "<<b<<" "; 
  for(i=2;i<elements;i++) {    
    k=a+b;    
    cout<<k<<" ";    
    a=b;    
    b=k;    
  }    
  return 0;  
  }