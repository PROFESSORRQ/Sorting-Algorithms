#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
// 2D array liya he kyunki negative and positive dono value he
// -ve ko 1st coloumn me store and +ve waale ko 0th coloumn me store karwaya he
bool has[MAX+1][2];

bool search(int X)
{
    if(X>=0){
        if(has[X][0]==1)
            return true;
        else
            return false;
        
    }
    X=abs(X);
    if(has[X][1]==1)
        return true;
    else
        return false;
    
}
void insert(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        has[arr[i]][0]=1;
        else
            has[abs(arr[i])][1]=1;
        
    }
}
int main()
{
    int arr[]={-6,4,8,-4,9,6,-1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    insert(arr,n);
    int X=6;
    if(search(X)==true)
    cout<<"Present";
    else
    {
        cout<<" Not Present";
    }
return 0;

}