#include<iostream>

using namespace std;

int main()
{
	int n=7;
	int arr[n]={10,4,3,7,6,8,9};
	for(int i=0;i<n;i++)
	{
		int minIndex=i;
		for(int j=i;j<n;j++)
		{
			if(arr[j]<arr[minIndex])
			{
				minIndex=j;
				
			}
			
		}
	int temp=arr[minIndex];
	arr[minIndex]=arr[i];
	arr[i]=temp;
	}
	//printing statement
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
