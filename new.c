#include <stdio.h>
#include <stdlib.h>

char	*intToHex(int n)
{
	int		temp;
	int		i;
	char	*hexString;

	i = 0;
	hexString = (char *)malloc(sizeof(char) * 8);
	while (n != 0)
	{
		temp = 0;
		temp = n % 16;
		if (temp < 10)
		{
			hexString[I] = temp + 48;
			i++;
		}
		else
		{
			hexString[I] = temp + 55;
			i++;
		}
		n = n / 16;
	}
	hexString[i] = '\0';
	return (hexString);
}

int	main(void)
{
	int		num;
	char	*hexString;

	num = 175;
	hexString = intToHex(num);
	printf("Hexadecimal of %d is %s", num, hexString);
	return (0);
}
