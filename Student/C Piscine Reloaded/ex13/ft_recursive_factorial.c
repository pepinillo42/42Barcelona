/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybarley <cybarley@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:22:18 by cybarley          #+#    #+#             */
/*   Updated: 2024/06/27 13:44:22 by cybarley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_factorial(int nb)
{
	if(nb < 0)
		return(0);
	else if(nb <= 1)
		return(1);
	else
		return (nb * ft_recursive_factorial(nb - 1));	
} 
/*int main(void)
{
	int nb;
	nb = 4;
	int result = ft_recursive_factorial(nb);
	return(result);
}/*

