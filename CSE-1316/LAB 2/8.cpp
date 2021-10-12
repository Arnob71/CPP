#include<iostream>
using namespace std;
int main()
{
    char arr[999999];
    int i, j, Count, Size, FreqArr[100];
    cout<<"This is a program to count the frequency of each element of an array"<<endl;
	cout<<"Enter the number of elements in an array: ";
	scanf("%d", &Size);

	cout<<"Enter the array values: ";
	for (i=0;i<Size;i++)
	{
      cin>>arr[i];
      FreqArr[i]= -1;
   	}

	for (i=0;i<Size;i++)
	{
    Count= 1;
      for(j= i+1;j<Size;j++)
      {
        if(arr[i] == arr[j])
        {
          Count++;
          FreqArr[j] = 0;
        }
      }
      if(FreqArr[i] != 0)
      {
        FreqArr[i] = Count;
      }
	}
    cout<<"The frequency of each element in this array:"<<endl;
 	for (i=0;i<Size;i++)
  	{
      if(FreqArr[i]!= 0)
      {
        cout<<arr[i]<<" Occurs "<<FreqArr[i]<<" Times "<<endl;
      }
 }
return 0;
}
