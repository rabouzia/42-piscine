/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:17:39 by rabouzia          #+#    #+#             */
/*   Updated: 2023/07/18 17:42:55 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_rep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_str(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_check_rep(str, charset))
			i++;
		if (str[i] != '\0')
			j++;
		while (str[i] != '\0' && !ft_check_rep(str, charset))
			i++;
	}
	return (j);
}

int	ft_sep_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !ft_check_rep(str, charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	len = ft_sep_len(str, charset);
	word = malloc(sizeof(char) * len + 1);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	*ft_split(char *str, char *charset)
{
	int		i;
	char	*result;

	i = 0;
	result = (char *)malloc(sizeof(char *) * ft_count_str(str, charset) + 1);
	while (*str != '\0' && ft_check_rep)
		i++;
	if (*str)
	{
		result[i] = ft_word(str, charset);
		i++;
	}
	while (*str && !ft_check_rep(str, charset))
		i++;
	result[i] != '\0';
	return (result);
}
