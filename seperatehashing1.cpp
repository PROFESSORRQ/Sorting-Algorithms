#include<bits/stdc++.h>
using namespace std;
class Hash{

int bucket;
list<int> *table;
public:
    Hash(int v); //constructor
     void insertkey(int key);
     void deletekey(int key);
     int hashfunction(int key){
     return key%bucket;
     }
     void display();
};
Hash::Hash(int b)
{
    this->bucket=b;      // bucket me value daal di
    table=new list<int>[bucket];

}
void Hash:: insertkey(int x)
{
    int key=hashfunction(x);
    table[key].push_back(x);
}
void Hash:: deletekey(int x)
{
    int key=hashfunction(x);
    list<int> :: iterator i;
    for(i=table[key].begin();i!=table[key].end();i++)
    {
        if(*i!=key)
        break;
    }
    if(i!=table[key].end())
    table[key].erase(i);
}
void Hash:: display()
{
    for(int i=0;i<bucket;i++)
    {
        cout<<i;
        for(auto x:table[i])
        cout<<" --> "<<x;
        cout<<endl;
    }
}
int main()
{
    int a[]={ 15,45,21,34,67,70};
    int n=sizeof(a)/sizeof(a[0]);
    Hash h(7);
    for(int i=0;i<n;i++)
    h.insertkey(a[i]);
    h.deletekey(15);
    h.display();

    return 0;
}