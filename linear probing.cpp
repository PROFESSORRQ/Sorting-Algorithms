#include<stdio.h>
#define SIZE 10

int hash(int key)
{
	return key%SIZE;
}
int probe(int H[],int key)
{
int index=hash(key);
int i=0;
while(H[(index+i)%SIZE]!=0)
i++;
	return (index+i)%SIZE;
}
void insert(int H[],int key)
{
	int index=hash(key);
	if(H[index]!=0)
	index=probe(H,key);
	H[index]=key;
}
int Search(int H[],int key)
{
	int index=hash(key);
	int i=0;
	while(H[(index+i)%SIZE]!=key)
	i++;
	return (index+i)%SIZE;
}
int main()
{
int HT[10]={0};
insert(HT,12);
insert(HT,23);
insert(HT,34);
insert(HT,6);
insert(HT,89);
insert(HT,121);
insert(HT,232);
insert(HT,344);
insert(HT,65);
insert(HT,899);
insert(HT,895);
for(int i=0;i<10;i++)
printf("%d\n",HT[i]);
printf(" %d ",Search(HT,895));
	return 0;
}
