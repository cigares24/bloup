void	ft_foreach(int *tab, int lenght, void (*f)(int))
{
	int	n;
	n = 0;
	while (n < lenght)
	{
		(*f)(tab[n]);
		n++;
	}
}
