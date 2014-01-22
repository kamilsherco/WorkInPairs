#include<iostream>
#include"gen.h"
#include"min.h"
#include"utils.h"
int main()
{
	int * tab = gener();
	utils();
	int a = min(*tab);
	std::cout << "minimum to " << a << std::endl;

	return 0;
}
