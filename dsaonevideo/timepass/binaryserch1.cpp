#include<iostream>
using namespace std;
int binaryserch(int arr[],int size,int key)
{
	int s=0,e=size-1;
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]<key)
		{
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return -1;
	
}
int main()
{
	int arr[8]={
		2,
		3,
		4,
		5,
		6,
		7,          //javascript style......
		8,
		9
	};
	
	int key=9;
	cout<<binaryserch(arr,8,key);
}
