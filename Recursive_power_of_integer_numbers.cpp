#include <iostream>
using namespace std;
int counter1=0;
int counter2=0;
int function1(int a,int n){
  counter1+=1;
	if (n==0){
		return 1;	
	  }
	return a*function1(a,n-1);
}
int function2(int a,int n){
	counter2+=1;
	if (n==0){
		return 1;	
	  }
	if (n%2==0){
		return function2(a,n/2)*function2(a,n/2);
	  }
  else {
		return a*function2(a,n/2)*function2(a,n/2);
	  }
}

int main(){
	int a;
	int n;
	cout<<"Enter the base: "<<endl;
	cin>>a;
	cout<<"Enter the exponent: "<<endl;
	cin>>n;
	cout<<"The result using the first recursive function is "<<function1(a,n)<<endl;
	cout<<"This function was iterate "<<counter1<<" times"<<endl;
	cout<<"The result using the second recursive function is "<<function2(a,n)<<endl;
	cout<<"This function was iterate "<<counter2<<" times"<<endl;
	return 0;
}
