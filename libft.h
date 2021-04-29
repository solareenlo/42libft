/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 05:05:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/29 23:27:01 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# define INTMAX 0x000000007FFFFFFF
# define INTMIN 0x0000000080000000
# define LONGMAX 0x7FFFFFFFFFFFFFFF
# define LONGMIN 0x8000000000000000
# define SIZEMAX 0xFFFFFFFFFFFFFFFF

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_array
{
	int		*array;
	size_t	used;
	size_t	size;
}	t_array;

typedef struct s_deque
{
	int	*val;
	int	front;
	int	back;
	int	size;
}	t_deque;

typedef struct s_stack
{
	int		*val;
	size_t	back;
	size_t	size;
}	t_stack;

typedef int	t_cmp(const void *a, const void *b);

size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dlen);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin_free(char *s1, char *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s, const char *find, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		*ft_intdup(int *a, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_endl_fd(int n, int fd);
int		ft_put_error(char *s);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
char	*ft_itoa(int n);
void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dst, const void *src, int val, size_t n);
void	*ft_memchr(const void *src, int val, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *dst, int val, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_free_null(char **ptr);
int		ft_atoi(const char *s);
char	**ft_split(char const *s, char c);
void	ft_split_free_int(int **ptr, size_t n);
void	ft_swap(void *a, void *b, size_t size);
void	ft_insertionsort(int *a, size_t n, t_cmp *cmp);
void	ft_quicksort(void *base, int l, int r);
void	ft_quicksort2(int *a, int l, int r, t_cmp *cmp);
void	ft_qsort_int(int *a, int l, int r, t_cmp *cmp);
void	ft_heapsort(int *a, size_t n, t_cmp *cmp);
void	ft_mergesort(int *a, int l, int r);
char	*ft_median3(char *a, char *b, char *c, t_cmp *cmp);
int		ft_median3_int(int *a, int index[3], t_cmp *cmp);
int		ft_fls(int mask);
int		ft_flsl(long mask);
int		ft_flsll(long long mask);
int		ft_ffs(int mask);
int		ft_ffsl(long mask);
int		ft_flsll(long long mask);
int		ft_array_init(t_array *a, size_t size);
int		ft_array_insert(t_array *a, int element);
void	ft_array_free(t_array *a);
int		ft_array_is_sorted(int *a, size_t size, t_cmp *cmp);
int		ft_array_sort2(int *a, t_cmp *cmp);
int		ft_array_sort3(int *a, t_cmp *cmp);
int		ft_array_sort4(int *a, t_cmp *cmp);
int		ft_array_sort4_4(int *a, t_cmp *cmp);
int		ft_array_sort4_5(int *a, t_cmp *cmp);
int		ft_array_sort4_6(int *a, t_cmp *cmp);
int		ft_array_get_median(int *a, size_t n, t_cmp *cmp);
int		ft_array_get_first_quartile(int *a, size_t n, t_cmp *cmp);
void	ft_array_reverse(int *a, int start, int end);
int		ft_array_get_type5(int a[5], t_cmp *cmp);
int		ft_array_get_type5_0(int a[5], t_cmp *cmp);
int		ft_array_get_type5_0_0(int a[5], t_cmp *cmp);
int		ft_array_get_type5_0_1(int a[5], t_cmp *cmp);
int		ft_array_get_type5_0_2(int a[5], t_cmp *cmp);
int		ft_array_get_type5_1(int a[5], t_cmp *cmp);
int		ft_array_get_type5_2(int a[5], t_cmp *cmp);
int		ft_array_get_type5_3(int a[5], t_cmp *cmp);
int		ft_array_get_type5_4(int a[5], t_cmp *cmp);
int		ft_array_get_type5_5(int a[5], t_cmp *cmp);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
t_deque	*ft_deque_init(int n);
int		ft_deque_is_full(t_deque *dq);
int		ft_deque_is_one(t_deque *dq);
int		ft_deque_is_empty(t_deque *dq);
int		ft_deque_is_sorted(t_deque *dq, t_cmp *cmp);
int		ft_deque_is_sorted_front(t_deque *dq, int size, t_cmp *cmp);
int		ft_deque_is_sorted_back(t_deque *dq, int size, t_cmp *cmp);
void	ft_deque_swap_front(t_deque *dq);
void	ft_deque_push_front(t_deque *dq, int item);
void	ft_deque_push_back(t_deque *dq, int item);
void	ft_deque_pop_front(t_deque *dq);
void	ft_deque_pop_back(t_deque *dq);
int		ft_deque_get_front(t_deque *dq);
int		ft_deque_get_front_second(t_deque *dq);
int		ft_deque_get_front_third(t_deque *dq);
int		ft_deque_get_back(t_deque *dq);
int		ft_deque_get_size(t_deque *dq, int start, int end);
int		ft_deque_get_median(t_deque *dq, int size, t_cmp *cmp);
int		ft_deque_get_first_quartile(t_deque *dq, int size, t_cmp *cmp);
void	ft_deque_copy(t_deque *dst, const t_deque *src);
void	ft_deque_copy_front_back(t_deque *dst, t_deque *src,
			int front_size, int back_size);
void	ft_deque_put(t_deque *dq);
int		ft_deque_sort2_front(t_deque *dq, t_cmp *cmp);
int		ft_deque_sort3_front(t_deque *dq, t_cmp *cmp);
int		ft_deque_sort4_front(t_deque *dq, t_cmp *cmp);
void	ft_deque_free(t_deque *dq);
void	ft_deque_clear(t_deque *dq);
t_stack	*ft_stack_init(size_t n);
int		ft_stack_is_full(t_stack *s);
int		ft_stack_is_empty(t_stack *s);
void	ft_stack_push_back(t_stack *s, int item);
void	ft_stack_pop_back(t_stack *s);
int		ft_stack_get_back(t_stack *s);
void	ft_stack_put(t_stack *s);
void	ft_stack_free(t_stack *s);
int		ft_min(int a, int b);
int		ft_max(int a, int b);
int		get_next_line(int fd, char **line);

#endif
