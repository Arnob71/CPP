#include<iostream>
using namespace std;
float area(float x);
#define Pi 3.1416
int main()
{
    float r;
    cout<<"This is a program to calculate the area of a circle"<<endl;
    cout<<"Enter radius of the circle: ";
    cin>>r;
    float result=area(r);
    cout<<"The area of the circle is "<<result<<endl;
    return 0;
}
float area(float x)
{
    float area=Pi*(x*x);
    return area;
}
