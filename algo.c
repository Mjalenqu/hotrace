/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   algo.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <mjalenqu@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/05 14:41:32 by zseignon     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/06 15:02:58 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "hotrace.h"

void		print_keyword(char *keyword, char *value)
{
	if (value != NULL)
		ft_putendl(value);
	else
	{
		ft_putstr(keyword);
		ft_putendl(": Not found.");
	}
}

void	search(char **data, t_ul hash, char *keyword)
{
	int i;
	int ret;
	int	lenght;

	i = 0;
	ret = 0;
	lenght = ft_strlen(keyword);
	while (data[i])
	{
		if (hash == ((t_ul **)data)[i][0])
		{
			if (ft_strlen(data[i] + 8) == lenght)
			{
				if (data[i][8] == keyword[0] || data[i][9] == keyword[0])
				{
					if (ft_strcmp(data[i] + 8, keyword) == 0)
					{
						print_keyword(keyword, data[i] + 9 + ft_strlen(keyword));
						return ;
					}
				}
			}
		}
		i++;
	}
	print_keyword(keyword, NULL);
}

/*
static char		*check_key_word(char *data, char *keyword)
{
	int		i = 0;

	while (data[i] == keyword[i] && data[i] != '\0')
		i += 1;
	if (data[i] == '\0')
		return (&data[i + 1]);
	return (NULL);
}

void		search(char **data, t_ul hash, char *keyword)
{
	int		i;
	char	*p;

	i = 0;
	while (data[i] != NULL)
	{
		if ((((t_ul **)data)[i][0] & ~hash) == 0 &&
				(p = check_key_word(&((char **)data)[i][8], keyword)) != NULL)
		{
			print_keyword(keyword, p);
			break ;
		}
		i += 1;
	}
	if (p == NULL)
		print_keyword(keyword, NULL);
}*/
