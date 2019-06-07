/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putendl.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <mjalenqu@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/05 15:45:56 by zseignon     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/05 16:48:33 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "hotrace.h"

void		ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void		ft_putendl(char *str)
{
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}
