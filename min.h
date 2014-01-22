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
