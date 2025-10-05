#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	char 	target;
	if (!s)
		return (NULL);
	target = ((char)c);
	while(*s)
	{
		if (*s == target)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == target)
	{
		return ((char *)s);
	}
	return (NULL);
}
