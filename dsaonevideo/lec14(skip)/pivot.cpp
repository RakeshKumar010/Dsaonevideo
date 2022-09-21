//i am skip lectural 14 for free time solving

#include<iostream>
using namespace std;
int fintpiverty(int arr[],int size,int key)
{
	int s=0,e=size-1;
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]<arr[s])
		{
			e=mid-1;		
		}
		else{
			s=mid+1;
		}
		
		
	}
	return -1;
	
}
int main()
{
	int arr[8]={10,20,30,40,2,5,7,9}; //{7,8,1,2,3,4,5};
	int key=10;
	cout<<fintpiverty(arr,8,key);
}
