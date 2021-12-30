#include<iostream>

using namespace std;

int main(){
//   int a,b;
//  cout << "Enter first number" << endl;
//  cin >> a;
//  cout << "Enter second Number" << endl;
//  cin >> b;

//  if(a>b){
//    cout<< "A is greater";
//  }
//  if(b>a){
//    cout << "B is greater";
//  }
  
 /* int a = 24;
  if(a>20){
    cout << "Love" << endl;
  }else if(a==24){
    cout << "Lovely" << endl;
  }else {
    cout << "Babbar";
  }
  cout<< a;
  */
  // int a = 2;
  // int b = a+1;

  // if(a==b){
  //   cout << a;
  // }else{
  //   cout << a+1;
  // }
  //H/W

  char ch;
  cout << " Enter Charater"<< endl;
  cin >> ch;

  if(ch >='a' && ch <='z'){
    cout << "Lower Case" << endl;
  }else if(ch>='A' && ch<= 'Z'){
    cout << "Upper Case" << endl;
  }else if(ch>= '0' && ch<='9'){
    cout << "Numeric Value"<<endl;
  }

}