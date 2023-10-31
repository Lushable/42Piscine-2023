/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <flus@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 01:50:54 by flus            #+#    #+#             */
/*   Updated: 2023/07/22 21:14:56 by flus             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n) 
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
#include <stdio.h>
int main()
{
char a[] = "sude";
char b[] = "mert";

	printf("%s",ft_strncpy(a,b,4));
}