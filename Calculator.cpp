#include<iostream>
using namespace std;

int main()
{
  float num1,num2;
  char oper;

  cout<<endl<<endl<<"Enter the operator: ";
  cin>>oper;

  cout<<"Enter the first number: ";
  cin>>num1;
  
  cout<<"Enter the second number: ";
  cin>>num2;

  switch(oper)
  {
    case '+':
    cout<<num1+num2<<endl<<endl;
    break;

    case '-':
    cout<<num1-num2<<endl<<endl;
    break;

    case '*':
    cout<<num1*num2<<endl<<endl;
    break;

    case '/':
    cout<<num1/num2<<endl<<endl;
    break;

    default:
    cout<<"Error! not the correct operator"<<endl<<endl;
  }

  return 0;
}
