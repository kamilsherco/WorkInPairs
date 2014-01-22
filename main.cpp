#include<iostream>
#include"gen.h"
int main()
{
	std::cout << "10 liczb:" << std::endl;
	int * tmp = gen();
	for(int i=0; i<10; i++)
	{
		std::cout<<tmp[i] << std::endl;
	}
	return 0;
}
