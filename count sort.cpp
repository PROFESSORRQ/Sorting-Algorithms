#include<stdio.h>
#include<iostream>
using namespace std;
int i; 
countingSort(int A[],int n,int k)
{int count[10]={0};int B[n];
for(int i=0;i<n;i++)
count[A[i]]++;
for(i=1;i<=k;i++)
count[i]=count[i]+count[i-1];
for(i=n-1;i>=0;i--)
B[--count[A[i]]]=A[i];
for(i=0;i<n;i++)
A[i]=B[i];
}
int main()
{
	int n,data,num,index,k=9;
	cout<<"enter no of elements"<<endl;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{cout<<"enter the data"<<endl;
	cin>>data;
		A[i]=data;
		}
		countingSort(A,n,k);
		cout<<"new array is ";
		for(int i=0;i<n;i++)
		cout<<" "<<A[i];
		return 0;
}
