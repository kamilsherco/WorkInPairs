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
