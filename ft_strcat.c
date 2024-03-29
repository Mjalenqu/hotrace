/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <mjalenqu@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/02 11:08:51 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/06 13:29:48 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_strcat(char **dest, char *str)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while ((*dest)[i])
		i++;
	while (str[j])
		(*dest)[i++] = str[j++];
	(*dest)[i] = '\0';
}
