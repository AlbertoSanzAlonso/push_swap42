#include "../push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			len;
	void			*ptr;
	unsigned char	*p;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	i = 0;
	len = nmemb * size;
	p = (unsigned char *)ptr;
	while (i < len)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
