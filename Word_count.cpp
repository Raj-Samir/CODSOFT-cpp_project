#include<iostream>
using namespace std;

int main()
{
  string str;
  cout<<"enter the statement : ";
  getline(cin , str);
  int count=1;
  for(int i=0;i<str.length();i++)
  {
    if(str[i]==' ')
    {
      count++;
    }
  }
  cout<<"total word = "<<count;

  return 0;
}