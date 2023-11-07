/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:18:56 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/07 20:02:31 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	i = 0;
	if (!dest)
		return (0);
	destlen = ft_strlen(dest);
	while (src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = 0;
	return (dest);
}

int	get_len(int size, char **strs, char *sep)
{
	int	i;
	int	tf;

	tf = 0;
	i = -1;
	while (++i < size)
		tf += ft_strlen(strs[i]);
	tf += (i - 1) * ft_strlen(sep);
	return (tf);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;

	if (size == 0)
		return (0);
	result = (char *)malloc(sizeof(char) * (get_len(size, strs, sep) + 1));
	if (result == NULL)
		return (NULL);
	result[0] = 0;
	i = -1;
	while (++i < size)
	{
		ft_strcat(result, strs[i]);
		if (i + 1 < size && strs[i + 1][0] == 0)
			return (result);
		if (size != i)
			ft_strcat(result, sep);
	}
	result[get_len(size, strs, sep)] = 0;
	return (result);
}
int main ()
{
	printf("\nTest de ft_strjoin :\n");
	printf("abcdef : %s\n",	ft_strjoin("abc", "def", "_"));
	printf("abc : %s\n", ft_strjoin("", "abc", "_"));
	printf("abc : %s\n", ft_strjoin("abc", "", "_"));
	printf("'' : %s\n", ft_strjoin("", "", "_"));
}
