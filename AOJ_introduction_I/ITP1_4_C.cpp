#include <stdio.h>

int	main(void)
{
	int	a[1000], b[1000], ret[1000];
	size_t	i;
	char op[1000];

	i = 0;
	while (1)
	{
		scanf("%d %c %d", &a[i], &op[i], &b[i]);
		if (op[i] == '+')
			ret[i] = a[i] + b[i];
		else if (op[i] == '-')
			ret[i] = a[i] - b[i];
		else if (op[i] == '*')
			ret[i] = a[i] * b[i];
		else if (op[i] == '/')
			ret[i] = a[i] / b[i];
		else
			break;
		i++;
	}
	for (int j = 0; j < i; j++)
		printf("%d\n", ret[j]);
	return (0);
}