#include<iostream>
#include"gen.h"
#include"min.h"
#include"utilis.h"
int main()
{
	int * tab = gen();
	utilis();
	int a = min(*tab);
	std::cout << "minimum to " << a << std::endl;

	return 0;
}
