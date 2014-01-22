#include<iostream>
#include"gen.h"
int utils()
{
int sum=0;
int *temp=gen();
for(int i=0;i<10;++i)
{
sum=temp[i]+sum;
std::cout<< temp[i]<< std::endl;
}

return sum;

}

