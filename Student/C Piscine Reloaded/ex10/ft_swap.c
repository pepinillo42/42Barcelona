/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybarley <cybarley@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:13:28 by cybarley          #+#    #+#             */
/*   Updated: 2024/06/13 21:35:44 by cybarley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_swap(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}

/*int main()
{
int a;
int b;
a = 's';
b = 'i';
ft_swap(&a, &b);
write(1, &a, 1);
write(1, &b, 1);
return (0);
}*/