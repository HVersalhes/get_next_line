#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;
	if (!s)
		return (0);
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/*
#include <stdio.h>
int	main()
{
	const char *s = NULL;
	int len = ft_strlen(s);
	printf("%d\t: %s\n", len, s);
}
*/
