
Create file ft_strrealloc.c
Write a function to reallocate a string increasing it by size (length).
malloc a new striing, memdel old string, return pointer to new string
********************************************************************************************************
char	*ft_strrealloc(char **ptr, size_t size)

Create file ft_strappend.c
Write a function at append two strings together
Reallocate a string increasing it by size (length)
********************************************************************************************************
/*
**  ft_strappend_xo (x = reallocated  o = unchanged)
**	dst is reallocated to fit dst and s2 strings
**	s2 is remains unchanged and not freed
**	The string appended in order of dst + s2
*/
char    *ft_strappend_xo(char **dst, char *s2)

/*
**  ft_strappend_xx (x = reallocated  x = freed)
**	dst is reallocated to fit dst and s2 strings
**	s2 is remains unchanged and not freed
**	The string is appended in order of dst + s2
*/
char    *ft_strappend_xx(char **dst, char **s2)

/*
**  ft_strappend_ox (o = unchanged  x = reallocated)
**	dst is reallocated to fit dst and s2 strings
**	s2 is remains unchanged and not freed
**	The string is appended in order of s2 + dst
*/
char    *ft_strappend_ox(char *s2, char **dst)


/*
**  ft_strappend_oo (o = unchanged  o = unchanged)
**	dst is unchanged and not freed
**	s2 is unchanged and not freed
**	The string is appended in order of dst + s2
** 	for this use case use ft_strjoin
*/

Add this function to ft_strappend.c
Write a function at append a string and a character together
Reallocate a string increasing it by size (length)
********************************************************************************************************
/*
**  ft_strappend_xo_chr (x = reallocated  o = unchanged)
**	dst is reallocated to fit dst and c2 chr
**	c2 is remains unchanged and not freed
**	The string appended in order of dst + c2
*/
char    *ft_strappend_xo_chr(char **dst, char c2)

Leveraging what you learning itoa and itoa_base, expand to work with unsigned long long int
********************************************************************************************************
char	*ft_itoa_base_unsigned(unsigned long long int n, int b)
int		ft_numlen_base_unsigned(unsigned long long int n, size_t base)


create a function called ft_pow,  man pow
create a function called ft_round, man round
********************************************************************************************************
long double	ft_pow(long double n, long double pow)
long double	ft_dtoa_round(long double nbr, int decimal_places)

https://linux.die.net/man/3/round
https://linux.die.net/man/3/pow


Leveraging what you learning itoa and itoa_base, expand to work with double
Create new function call dtoa double to a string
********************************************************************************************************
char	*ft_dtoa(long double d, size_t p, size_t base)

https://pubs.opengroup.org/onlinepubs/9699919799/functions/fprintf.html
http://www.cplusplus.com/reference/cstdio/printf/
https://codeforwin.org/2017/08/typecasting-c-programming.html
https://flylib.com/books/en/4.344.1.9/1/