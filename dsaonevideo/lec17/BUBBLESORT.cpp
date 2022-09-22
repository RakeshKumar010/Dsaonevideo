#include<iostream>
using namespace std;
int main()
{
	int n=8;
	int arr[n]={10,8,5,3,9,2,55,7};
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
//				swap(arr[j],arr[j+1]);
				int temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			
			}
		
		}
	}
	
	//print statement
	for(int j=0;j<n;j++)
		{
		cout<<arr[j]<<endl;;
		
		}
}
