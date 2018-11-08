int    ft_count_if(char **tab, int(*f)(char*))
{
        int     n;
	int	res;

	n = 0;
	res = 0;
	while (tab[n])
	{
		if ((*f)(tab[n]) == 1)
			res++;
		n++;
	}
	return (res);
}
