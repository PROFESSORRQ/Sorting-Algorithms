#include<stdio.h>
#include<iostream>
using namespace std;
void insert(int H[],int n)
{int i=n;
	int temp=H[n];
	while( i>1 &&temp>H[i/2])
	{
		H[i]=H[i/2];
		i=i/2;
	} H[i]=temp;
}
int delete_node(int H[],int n)
{
int x=H[n];
int temp=H[1];
H[1]=H[n];
H[n]=temp; 
int i=1;int j=2*i;
while(j<n-1)
{
	if(H[j+1]>H[j])
	j=j+1;
	if(H[i]<H[j])
{
	int temp2=H[i];
	H[i]=H[j];
	H[j]=temp2;
	i=j;j=j*2;
}
	else
	break;
}return  temp;

	}	
int main()
{int n=7;
int H[]={0,10,20,30,25,5,40,35};
	for(int i=2;i<=n;i++)
		insert(H,i);
	for(int i=7;i>1;i--){
	delete_node(H,i);
	 for(int i=1;i<=n;i++)
	 cout<<H[i]<<" ";
	 cout<<endl;
}
	
	return 0;
}
