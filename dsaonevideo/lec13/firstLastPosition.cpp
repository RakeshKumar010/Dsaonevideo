#include<iostream>
using namespace std;
int firstocr(int arr[],int size,int key)
{
	int num=-1;
	int start=0;
	int end=size-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(arr[mid]==key)
		{
			num=mid;
			end--;
		}
		else if(arr[mid]<key)
		{
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return num;
}
int lastocr(int arr[],int size,int key)
{
	int num=-1;	
	int start=0;
	int end=size-1;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(arr[mid]==key)
		{
			num=mid;
			start++;
		}
		else if(arr[mid]<key)
		{
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return num;
}
int main()
{
	int arr[20]={1,2,3,4,5,6,6,6,6,6,6,6,6,6,6,6,6,6,7,8};
	cout<<firstocr(arr,20,4)<<endl;
	cout<<lastocr(arr,20,6);
}
