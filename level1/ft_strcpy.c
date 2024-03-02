/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taretiuk <taretiuk@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:46:06 by taretiuk          #+#    #+#             */
/*   Updated: 2023/08/29 10:51:39 by taretiuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Hello world";
	char	dest[12];

	ft_strcpy(dest, src);

	int	i;
	i = 0;
	while (dest[i] != '\0')
	{
		ft_putchar(dest[i]);
		i++;
	}
	return (0);
}
*/
