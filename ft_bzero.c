/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bzero.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <mjalenqu@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/02 17:19:12 by mjalenqu     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/07 08:37:38 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "hotrace.h"

void	ft_bzero(void *elem, int i)
{
	int		j;
	char	*r;

	j = 0;
	if (!elem)
		return ;
	r = (char *)elem;
	while (j < i)
	{
		r[j] = 0;
		j++;
	}
}
