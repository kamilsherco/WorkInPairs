#include<iostream>
int min(int * tab)
{
	int a = tab[0];
	int i=0;
	for(i;i<10;i++)
	{
		if(a>tab[i])
		a=tab[i];
	}
	return a;
}
int max(int * tab)
{
	int max,i;
	max=tab[0];
	for(i=0;i<10;i++)
	{
		if(max<tab[i])
		max=tab[i];
	}
	return max;
}
int* gener()
{
int* tab = new int[10];
for(int i=0;i<10;++i)
{
tab[i]=i;
}
return tab;
}
void utils(int *tab)
{

for(int i=0;i<10;++i)
{

std::cout<< tab[i]<< std::endl;
}
}

int sum(int *tab)
{
int sum=0;
for(int i=0;i<10;++i)
{
sum=tab[i]+sum;
}
return sum;
}

