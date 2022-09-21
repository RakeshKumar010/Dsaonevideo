#include<iostream>
using namespace std;
int main()
{
	int arr[11]={1,2,3,4,5,8,10,20,19,18,17};
	int start=0;
	int end=10;

	int mid =(start+end)/2;
	while(start<end)
	{	
		int mid =(start+end)/2;
		if(arr[mid]<arr[mid+1])
		{

			start=mid+1;
		}
		else{
			end=mid;
		}
		mid =(start+end)/2;
	}
	cout<<arr[end];
}
