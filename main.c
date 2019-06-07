/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <mjalenqu@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/05 14:23:06 by mjalenqu     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/07 08:38:57 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "hotrace.h"

int		is_eq(char *key_word, char *db, char *value)
{
	if (ft_strlen(key_word) == ft_strlen(db))
	{
		if (ft_strcmp(key_word, db) == 0)
		{
			print_keyword(key_word, value);
			return (1);
		}
	}
	return (0);
}

void	resolv(char **db, char **key_word)
{
	int		i;
	int		j;
	t_ul	key;
	int		lg;

	i = 0;
	j = 0;
	lg = 0;
	while (key_word[i])
	{
		key = hash(key_word[i]);
		while (db[j])
		{
			if (key == hash(db[j]))
				if (is_eq(key_word[i], db[j], db[j + 1]) == 1)
				{
					lg = 1;
					break ;
				}
			j += 2;
		}
		if (!db[j] || db[j] == 0)
			print_keyword(key_word[i], NULL);
		j = 0;
		i++;
	}
}

char	**to_search(char *str)
{
	int 	i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '\n' && str[i - 1] == '\n')
			break ;
		i++;
	}
	str[i] = '\0';
	i++;
	return (ft_strsplit(str + i, '\n'));
}

int		main(void)
{
	char	*res;
	char	**key_word;
	char	**db;

	res = lecteur();
	key_word = to_search(res);
	db = ft_strsplit(res, '\n');
	resolv(db, key_word);
	return (0);
}