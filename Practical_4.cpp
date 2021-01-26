#include <iostream>
#include <math.h>
using namespace std;

double *read_poly(int &n){
  cout << "Enter the degree of the polynomial: ";
  cin >> n;
  double *c=new double[n+1];
  for(int i=0;i<=n;i++){
    cout << "Coefficient of degree " << i << ": ";
    cin >> c[i];
  }
  return c;
}

void print_poly(double *c, int n){
  int i;
  cout << c[0];
  if(n>0)
    cout << " + ";
  for(i=1;i<n;i++)
    cout << c[i] << "*x^" << i << " + ";
  if(n>0)
    cout << c[n] << "*x^" << i;
  cout << endl;
}

// Function that calculate the polynomial value for a certain position of x
double function1(double &x,double *pol,int &degree){
	double value=0.0;
	cout<<"Enter the point to be evaluated"<<endl;
	cin>>x;
	for(int i=0;i<=degree;i++){
		
		value=value+pol[i]*pow(x,i);	
	}	
return value;	
}

// This function adds two polinomials giving as result a new polynomial
double *addition(double *p1,int &d1,double *p2, int &d2,int &dr){
	int max = (d1 >= d2) ? d1 : d2;
  dr = max;
	double *polynomial=new double[dr+1];
	for(int k=0;k<=dr;k++){
		polynomial[k]=0;
	}
	
	for(int i=0;i<=dr;i++){
		if (d1>=i){
			polynomial[i]=polynomial[i]+p1[i];
		}
		if (d2>=i){
			polynomial[i]=polynomial[i]+p2[i];
		}
		
	}
	return polynomial;
}

// This function returns a polynomial that is  the product of two polynomials 
double *multiplication(double *p1,int &d1,double *p2, int &d2,int &dr){
	dr=d1+d2;
	double *polynomial=new double[dr+1];
		for(int j=0;j<=dr;j++){
		polynomial[j]=0;
	}
	for(int i=0;i<=d2;i++){
		for (int s=0;s<=d1;s++){
			polynomial[i+s]=polynomial[i+s]+(p2[i]*p1[s]);
			
		}
	}
	
	return polynomial;
}

int main()
{
  double *p1; 
  int d1;
  int d2;
  int dr;
  double x;
  double evaluation;
  double *p2;
  double *addition_result;
  double *multiplication_result;
  

  p1=read_poly(d1);
  print_poly(p1,d1);
  evaluation=function1(x,p1,d1);
  cout<<"The value is "<<evaluation<<endl;
  cout<<"The next aims of this program are to add and multiply two polynomials"<<endl;
  p1=read_poly(d1);
  print_poly(p1,d1);
  p2=read_poly(d2);
  print_poly(p2,d2);
  addition_result=addition(p1,d1,p2,d2,dr);
  cout<<"The result of the sum of the two polinomial is: "<<endl;
  print_poly(addition_result,dr);
  multiplication_result=multiplication(p1,d1,p2,d2,dr);
  cout<<"The result of the product of the two polinomial is: "<<endl;
  print_poly(multiplication_result,dr);

  delete[] p1;
  delete[] p2;
  delete[] addition_result;
  delete[] multiplication_result;
  return 0;
}