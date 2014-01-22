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
int tab[10];
for(int i=0;i<10;++i)
{
tab[i]=i;
}
return tab;
}
int utils()
{
int sum=0;
int *temp=gener();
for(int i=0;i<10;++i)
{
sum=temp[i]+sum;
std::cout<< temp[i]<< std::endl;
}

return sum;

}

