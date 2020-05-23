/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 14:37:20 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/09/10 14:10:32 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_info
{
	char			*filename;
	char			*user;
	char			*group;
	char			*perm;
	int				links;
	int				size;
	time_t			time;
	struct s_info	*next;
}					t_info;

char				*ft_strdup(const char *src);
void				ft_strdel(char **as);
void				ft_striter(char *s, void(*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t				ft_strlcat(char*dst, const char *src, size_t size);
size_t				ft_strlen(const char *str);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *little,
		size_t len);
char				**ft_strsplit(char const *s, char c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
int					ft_putendl(char const *s);
void				ft_putendldel(char *str);
int					ft_putstr(const char *s);
int					ft_putchar(char c);
int					ft_putnbr(int n);
void				ft_strclr(char *s);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				ft_bzero(void *s, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const	void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);

int					is_space(char c);
int					is_prime(int n);
int					arrlen(char **str);
int					word_count(const char *str, char c);
int					word_len(const char *str, char c);
char				*assign_string(char const *src, char *dest);
char				*alt_strtrim(char const *s, char c);
void				print_list(t_list *start);
void				ft_lstaddend(t_list **alst, t_list *new);
int					is_printf(char c);
int					is_flag(char c);
void				print_arr(char **array);
char				*ft_itoa_unsigned(unsigned int n);
int					print_oct(unsigned int n);
int					print_hex(unsigned int n, char *mod);
int					strchr_count(char *str, char c);
int					strchr_printf(char *str, char c);
int					contain_printf(char *str);
unsigned int		numlen(unsigned int num);
void				ft_putnbr_32(unsigned int n);

char				**split_str(const char *str);
char				*check_mods(const char *str);
char				*temp_check(char *split, char *temp);
char				**get_mods(char **split);
char				get_char_params(va_list list);
char				*get_str_params(va_list list);
int					get_int_params(va_list list);
int					get_unsigned_params(va_list list);
void				*get_void_params(va_list list);
int					flag_len(const char *str);
int					find_zero(char *str);
int					print_zero(int zero, int num);
int					find_space(char *str);
int					print_space(int num, char *str);
int					print_char_params(va_list list, char *mod);
int					print_str_params(va_list list, char *mod);
int					print_int_params(va_list list, char *mod);
int					print_unsigned_params(va_list list, char *mod);
int					print_other_params(va_list list, char *mod);
int					print_addr(void *var);
int					print_params(char *mod, va_list list);
int					print_check(char *mod, va_list list, int i);
int					elseif(int i);
int					print_string(char *str, va_list list, char **mods);
int					ft_printf(const char *str, ...);

void				ft_padstr(char *str, int pad);
void				ft_padstrdel(char *str, int pad);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void(*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void(*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
