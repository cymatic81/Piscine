#include <stdio.h>
#include "ft_ultimate_range.c"

int	main(void)
{
	int	i = 0;
	int	min = 25;
	int	max = 35;;
	int	range;
	int **point;

	range = ft_ultimate_range(point, min, max);
	printf("Range done: %d\n", range);
	while (i < (max - min))
	{
		printf("%d\n", *point[i]);
		i++;
	}
	printf("%d\n", range);
	return (0);
}
