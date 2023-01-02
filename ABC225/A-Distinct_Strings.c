#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str)
}

int main(void)
{
	char	str;
	
	
	read(STDIN_FILENO, &str, 4);
	str[3] = '\0';
	if (ft_strlen(&str) != 3)
		return 0;
	
	printf("%s", &str);
	return (0);
}