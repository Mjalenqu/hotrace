/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   lecteur.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <mjalenqu@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/06 13:20:52 by mjalenqu     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/07 08:33:30 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "hotrace.h"

t_ul	hash(char *str)
{
	t_ul	res;
	int		i;

	i = 0;
	res = 0;
	while (str[i])
	{
		res += str[i];
		i++;
	}
	return (res);
}

long	ft_strlen(char *s)
{
	long i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*lecteur(void)
{
	char	*res;
	char	buf[BUF_SIZE + 1];
	int		ret;

	res = malloc(sizeof(char) * 1000000001);
	res[0] = '\0';
	while ((ret = read(0, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		ft_strcat(&res, buf);
	}
	return (res);
}
