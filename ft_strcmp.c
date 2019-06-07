/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <mjalenqu@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/03 15:03:05 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/07 08:43:02 by zseignon    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "hotrace.h"

int		ft_strcmp(char *s1, char *s2)
{

	t_ul		p1;
	t_ul		p2;

	p1 = (t_ul)s1;
	p2 = (t_ul)s2;
	while ((((t_ul *)p1)[0] & ~((t_ul *)p2)[0]) == 0 &&
			((t_byte *)p1)[0] != '\0' && ((t_byte *)p2)[0] != '\0')
	{
		p1 += 8;
		p2 += 8;
	}
	while (((t_byte *)p1)[0] == ((t_byte *)p2)[0] &&
			((t_byte *)p1)[0] != '\0' && ((t_byte *)p2)[0] != '\0')
	{
		p1 += 1;
		p2 += 1;
	}
	return (((t_byte *)p1)[0] - ((t_byte *)p2)[0]);
/*
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
	*/
}
