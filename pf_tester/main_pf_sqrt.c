
/*
** source
** https://github.com/PraveenVignesh/sqrt/blob/master/sqrt_newton_raphson.c
** https://mathworld.woLFram.com/ExponentLaws.html
*/

#include <stdio.h>

long double ft_sqroot(long double x,long double n)
{
    long double t;
	long double c;

    t=((x*x)+n)/(2*x);
	c=((t*t)+n)/(2*t);
	if(t == x || c == x)
		return(t);
    else
        return(ft_sqroot(t,n));
}

long double ft_sqrt(long double n)
{
	return(ft_sqroot(n/2,n));
}

int main(void)
{
	long double n;
	n = 9; printf("Square Root|%40.25LF|\n", ft_sqrt(n));
	n = 10; printf("Square Root|%40.25LF|\n", ft_sqrt(n));
	n = 11; printf("Square Root|%40.25LF|\n", ft_sqrt(n));
	n = 12; printf("Square Root|%40.25LF|\n", ft_sqrt(n));
	n = 13; printf("Square Root|%40.25LF|\n", ft_sqrt(n));
}