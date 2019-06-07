/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   reader.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <mjalenqu@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/05 14:52:01 by mjalenqu     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/07 08:34:33 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "hotrace.h"



void	stockage(char *tab, char *tmp, char *stock)
{
	int i;
	int j;

	i = 0;
	j = 8;
	while (tmp[i])
	{
		tab[j] = tmp[i];
		i++;
		j++;
	}
	tab[j] = '\0';
	j++;
	i = 0;
	while (stock[i])
	{
		tab[j] = stock[i];
		i++;
		j++;
	}
	tab[j] = '\0';
}

/*
**	lecture de l'entree standard
*/

char	**main_reader(void)
{
	char	**tab;
	char	*tmp;
	char	*stock;
	int		i;

	i = 0;
	tmp = NULL;
	tab = malloc(sizeof(char *) * 100000000);
	while (1)
	{
		get_next_line(0, &tmp);
		if (!tmp || tmp[0] == '\0')
			break ;
		get_next_line(0, &stock);
		tab[i] = malloc(sizeof(char) * (ft_strlen(tmp) + ft_strlen(stock)) + 10);
		((t_ul**)tab)[i][0] = hash(tmp);
		stockage(tab[i], tmp, stock);
		i++;
	}
	tab[i] = 0;
	return (tab);
}