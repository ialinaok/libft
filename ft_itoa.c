/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:28:12 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/17 17:05:33 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	count_digits(int n)
{
	int	count;
	int	minus;
	
	if (n == -2147483618)
	{
		return (11);
	}
	minus = 0;
	if (n < 0)
	{
		n = n * (-1);
		minus = 1;
	}
	if (n < 10 && n > 0)
	{
		return (1 + minus);
	}
	if (n >= 10)
	{
		count = count_digits(n / 10);
		return (1 + count + minus);
	}
}

static void	put_nbr(char *str, int n)
{
	if (n < 0)
	{
		*str++ = '-';
		if (n == -2147483648)
		{
			*str = "2147483648";
			return ;
		}
		n *= -1;
	}
	if (n >= 10)
	{
		put_nbr(str, n/10);
	}
	*str = n % 10 + '0';
	str++;
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	str = malloc(count_digits(n) + 1);
	put_nbr(str, n);
	str[count_digits(n)] = '\0';
	return (str);
}
