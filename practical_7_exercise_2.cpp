#include <iostream>
using namespace std;

template <typename T> class StackI {
  public:
  virtual void push(T t) = 0;
  virtual void pop () =0;
  virtual T top() = 0;
  virtual bool isEmpty() = 0;
  virtual void print() = 0;
};

template <typename T> class Stack:StackI<T>{
  protected:
  int firstindex;
  int elements;
  int size;
  T a [];

  public:
    Stack(){
      a[20];
      firstindex=0;
      elements = 0;
      size=20;
    }
  Stack(int n) {
    a[n];
    firstindex =0;
    elements = 0;
    size=n;
  }
  void push(T t){
    if (elements<size){
      a[firstindex++]=t;
      elements++;
    }
    else
    cout << "The stack is full" << endl;
  }
  void pop(){
    if(elements==0)
      cout << "The stack is empty" << endl;
      else
      {
      firstindex--;
      elements--;
    }
  }
  T top() {
    if(elements>0){
      return a[firstindex];
    }
    else
    cout << "The stack is empty" << endl;
    }
  void print(){
    if (elements==0){
      cout << "The stack is empty"<<endl;
    }
    else {
      cout << "[";
      for(int i = firstindex -1; i >=0; i--){
           cout << a[i];
      }
    cout << "]" <<endl;
    }
  }
  bool isEmpty() {
    return (elements ==0)? true:false;
  }
};

int main () {
  Stack<int> a = Stack<int>(4);
  a.print();
  a.push(7);
  a.push(5);
  a.push(8);
  a.push(6);
  a.print();
  a.pop();
  a.print();
  a.push(7);
  a.print();
  a.pop();
  a.print();
  a.pop();
  a.print();
  a.pop();
  a.print();
  a.pop();
  a.print();
  return 0;
}