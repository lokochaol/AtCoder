#include <stdio.h>
#include <math.h>

int main(void)
{
	int		number_of_arr;
	char	*number_of_elem[number_of_arr];
	int	i;
	int j;
	
	scanf("%d", &number_of_arr);
	printf("%d", number_of_arr);
	i = 0;
	while(i < number_of_arr)
	{
		scanf("%s", number_of_elem[i]);
		printf("%s", number_of_elem[i]);
		i++;
	}
	return (0);
}
//違ったらプラス１