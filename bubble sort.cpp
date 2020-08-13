#include<stdio.h>
#include<iostream>
using namespace std;
BubbleSort(int A[],int n)
{int temp=0;
for(int i=0;i<n-1;i++)
{int flag=0;
for(int j=0;j<n-1;j++)
{
	if(A[i]>A[j+1]){
	temp=A[j];
	A[j]=A[j+1];
	A[j+1]=temp;
	flag=1;}
}
if(flag==0)
break;
}
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
		BubbleSort(A,n);
		cout<<"new array is ";
		for(int i=0;i<n;i++)
		cout<<" "<<A[i];
		return 0;
}
