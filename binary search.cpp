#include<stdio.h>
#include<iostream>
using namespace std;
int flag=0,ans;
void BinarySearch(int A[],int n,int data)
{
int l=0,r=n-1,mid;
while(l<=r){
	mid=(l+r)/2;
	if(A[mid]==data){
		ans=mid;
	flag=1;
	break;
	}
	if(A[mid]>data)
		r=mid-1;
	if(A[mid]<data)
		l=mid+1;
}
}
int main()
{
	int n,data,num;
	cout<<"enter no of elements"<<endl;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{cout<<"enter the data"<<endl;
	cin>>data;
		A[i]=data;
		}
		cout<<"enetr the no you want to search its position"<<endl;
		cin>>num;
		BinarySearch(A,n,num);
			if(flag==1){
	cout<<"position of element is "<<ans;}
	else cout<<"Item not found";
		return 0;
}
