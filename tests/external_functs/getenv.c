# include <stdio.h>
# include <stdlib.h>

int	main(void)
{
	printf("PATH: %s\n", getenv("PATH"));
	printf("HOME: %s\n", getenv("HOME"));
	printf("USER: %s\n", getenv("USER"));
	return (0);
}
