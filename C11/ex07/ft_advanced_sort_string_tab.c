void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (tab[i])
	{
		j = i;
		while (j > 0 && (*cmp)(tab[j - 1], tab[j]) > 0)
		{
			tmp = s[j - 1];
			tab[j - 1] = tab[j];
			tab[j] = tmp;
			j--;
		}
		i++;
	}
}