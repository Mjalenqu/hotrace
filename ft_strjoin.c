/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <mjalenqu@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/02 11:03:25 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/06 14:17:55 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "hotrace.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	long	l_s1;
	long	l_s2;
	int		i;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (s1 && !s2)
		return (ft_strdup((char*)s1));
	if (!s1 && s2)
		return (ft_strdup((char*)s2));
	l_s1 = ft_strlen(s1);
	l_s2 = ft_strlen(s2);
	str = NULL;
	if ((str = (char *)malloc(sizeof(char) * ((l_s1 + l_s2) + 1))) == NULL)
		return (NULL);
	l_s1 = 0;
	while (s1[l_s1])
		str[i++] = s1[l_s1++];
	l_s2 = 0;
	while (s2[l_s2])
		str[i++] = s2[l_s2++];
	str[i] = '\0';
	return (str);
}
