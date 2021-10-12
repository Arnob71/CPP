#include<iostream>
using namespace std;
float addition(float x, float y);
float subtraction(float x, float y);
float multiplication(float x, float y);
float division(float x, float y);
int mod(int x, int y);
int main()
{
int o;
float a,b;
  cout<<"This is a program to calculate +,-,*,/,% between a and b"<<endl;
  cout<<"Enter the value of a: ";
  cin>>a;
  cout<<"Enter the value of b: ";
  cin>>b;
  cout<<"What operation do you want to perform?\n1.+ 2.- 3.* 4./ 5.%\n";
  cin>>o;
  switch (o){
  case 1:
  {
     float result=addition(a,b);
     cout<<a<<"+"<<b<<"="<<result<<endl;
  break;
  }
  case 2:
  {
      float result=subtraction(a,b);
      cout<<a<<"-"<<b<<"="<<result<<endl;
  break;
  }
  case 3:
  {
      float result=multiplication(a,b);
      cout<<a<<"*"<<b<<"="<<result<<endl;
  break;
  }
  case 4:
  {
      float result=division(a,b);
      cout<<a<<"/"<<b<<"="<<result<<endl;
  break;
  }
  case 5:
  {
      float result=mod(a,b);
      cout<<a<<"%"<<b<<"="<<result<<endl;
  break;
  }
  default:
  {
      cout<<"Wrong input"<<endl;
  }
  }
return 0;
}
float addition(float x, float y)
{
    return x+y;
}
float subtraction(float x, float y)
{
    return x-y;
}
float multiplication(float x, float y)
{
    return x*y;
}
float division(float x, float y)
{
    return x/y;
}
int mod(int x, int y)
{
    return x%y;
}
