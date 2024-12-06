void	ft_swap(int *a, int *b)
{
	static int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}