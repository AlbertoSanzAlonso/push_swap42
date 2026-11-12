#include "push_swap.h"

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
	int	k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		if (!parse_one(argv[i], arr, &k))
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

void	free_split(char **s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

int	counted_args(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
			count++;
		i++;
	}
	return (count);
}

int	count_total(int ac, char **av)
{
	int	i;
	int	n;
	int	total;

	i = 1;
	total = 0;
	while (i < ac)
	{
		n = counted_args(av[i]);
		if (n == 0)
			return (0);
		total += n;
		i++;
	}
	return (total);
}

int	parse_one(char *arg, int *arr, int *k)
{
	int		i;
	char	**split;

	i = 0;
	split = ft_split(arg, ' ');
	if (!split)
		return (0);
	while (split[i])
	{
		if (!is_valid_int(split[i]))
		{
			free_split(split);
			return (0);
		}
		if (!safe_atoi(split[i], &arr[*k]))
		{
			free_split(split);
			return (0);
		}
		*k += 1;
		i++;
	}
	free_split(split);
	return (1);
}
