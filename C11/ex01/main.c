#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int	plus_one(int n)
{
	return (n + 1);
}


int	main(void)
{
	int arr[5] = {1, 2, 3, 4};
	int *p;

	p = ft_map(arr, 4, &plus_one);
	while (*p)
	{
		printf("%d\n", *p++);
	}
}
