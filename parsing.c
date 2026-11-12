#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	safe_atoi(char *s, int *out)
{
	long	result;
	long	limit;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	if (s[i] == '-')
		sign = -1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	limit = 2147483647L + (sign == -1);
	while (s[i] != '\0')
	{
		result = result * 10 + (s[i] - '0');
		if (result > limit)
			return (0);
		i++;
	}
	*out = (int)(result * sign);
	return (1);
}

int	is_valid_int(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int	parse_args(int argc, char **argv, int *arr)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!is_valid_int(argv[i]))
			return (0);
		if (!safe_atoi(argv[i], &arr[i - 1]))
			return (0);
		i++;
	}
	return (1);
}

int	has_duplicates(int *arr, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < (n - 1))
	{
		j = i + 1;
		while (j < n)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	int	*arr;
	int	i;

	i = 0;
	if (argc == 1)
		return (0);
	arr = malloc(sizeof(int) * (argc - 1));
	if (!arr)
		return (1);
	if (!parse_args(argc, argv, arr) || has_duplicates(arr, argc - 1))
	{
		free(arr);
		write(2, "Error\n", 6);
		return (1);
	}
	while (i < argc - 1)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}*/
