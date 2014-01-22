#include<iostream>
#include"gen.h"
void utils()
{
int *temp=gen();
for(int i=0;i<10;++i)
{
std::cout<< temp[i]<< std::endl;
}
}

