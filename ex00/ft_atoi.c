#include <stdio.h>

int	ft_atoi(const char *str, int *error)
{
	int result;
	int i;

	result = 0;
	i = 0;
	*error = 0;
	if (str[0] == '-')
	{
		*error = 1;
		return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
		}
		else
		{
			*error = 1;
			return (0);
		}
		i++;
	}
	return (result);
}

int	main(void)
{
	const char *str;
	int number;
	int error;

	str = "1233445";
	number = ft_atoi(str, &error);
	if (error)
	{
		printf("Error\n");
	} 
	else
	{
		printf("Le nombre est %d\n", number);
	}

	str = "-12345";
    	number = ft_atoi(str, &error);
    	if (error) 
	{
        	printf("Error\n");
    	}	 	
	else 
	{
        	printf("Le chiffre %d\n", number);
    	}
}	
