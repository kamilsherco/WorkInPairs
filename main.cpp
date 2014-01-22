#include<iostream>
#include"utils.h"
int main()
{
	int *tab = gener();
	utils(tab);
	int a = min(tab);
	std::cout << "minimum to " << a << std::endl;

	int b = max(tab);
	std::cout << "maskimum to " << b << std::endl;
	
	int s = sum(tab);
		std::cout << "suma to " << s << std::endl;
	
	return 0;
}
