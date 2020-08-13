#include<stdio.h>
#include<iostream>
using namespace std;
InsertionSort(int A[],int n)
{int key=0,j;
for(int i=1;i<=n-1;i++){
key=A[i];
 j=i-1;
while(j>=0&&A[j]>key)
{
	A[j+1]=A[j];
	j--;
}
A[j+1]=key;}
}
int main()
{
	int n,data,num,index;
	cout<<"enter no of elements"<<endl;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{cout<<"enter the data"<<endl;
	cin>>data;
		A[i]=data;
		}
		InsertionSort(A,n);
		cout<<"new array is ";
		for(int i=0;i<n;i++)
		cout<<" "<<A[i];
		return 0;
}
