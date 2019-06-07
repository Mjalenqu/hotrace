/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   hotrace.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <mjalenqu@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/05 14:27:55 by mjalenqu     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/07 08:37:29 by zseignon    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HOTRACE_H
#define HOTRACE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

#define BUF_SIZE 8000000
#define STR_SIZE 1024

typedef unsigned long   t_ul;
typedef unsigned char	t_byte;

typedef	struct	s_data
{
    char    *str;
    t_ul    key;
}				t_data;

/*
**  main.c
*/
int		main(void);

/*
**	reader.c
*/
char	**main_reader(void);
char	*ft_strdup(char *str);
char	*ft_strjoin(char   *s1, char *s2);
long	ft_strlen(char *s);
int		get_next_line(  int fd, char **line);
char	*ft_strnew(int size);
char	*ft_strcpy(char *dest, char *str);
char	*ft_strchr(  char *s, int c);
char	*ft_strsub(char   *s, unsigned int start, size_t len);
void	ft_bzero(void *elem, int i);
void	ft_putstr(char *str);
void	ft_putendl(char *str);
void	search(char **data, t_ul hash, char *keyword);
t_ul	hash(char *str);
int		ft_strcmp(  char *s1,   char *s2);
void	ft_strcat(char **dest, char *str);
char	*lecteur(void);
void	print_keyword(char *keyword, char *value);
char    **ft_strsplit(char *s, char c);

#endif
