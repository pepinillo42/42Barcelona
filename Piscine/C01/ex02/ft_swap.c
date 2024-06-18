/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybarley <cybarley@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:29:10 by cybarley          #+#    #+#             */
/*   Updated: 2024/04/06 19:51:33 by cybarley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*int	main(void)
{

	int	a; 
	int	b;
	a = 'o';
	b = 'n';
	ft_swap(&a, &b);
	write(1, &a, 1);
	write(1, &b, 1);
	return (0);
}*/
