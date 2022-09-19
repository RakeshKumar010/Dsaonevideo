#include<iostream>
using namespace std;
int binarySearcheven(int even[],int size,int key){
	int start=0;
	int end=size-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(even[mid]==key)
		{
			return mid;
		}
		else if(even[mid]<key)
		{
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return -1;
}
int binarySearchodd(int even[],int size,int key){
	int start=0;
	int end=size-1;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(even[mid]==key)
		{
			return mid;
		}
		else if(even[mid]<key)
		{
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return -1;
}
int main()
{
	int even[10]={3,4,5,7,8,9,10,23,24,25};
	int odd[9]={5,6,7,9,10,22,34,56,78};
	
	
	cout<<binarySearcheven(even,10,25)<<endl;
	cout<<binarySearchodd(odd,9,56);
	
	
}
