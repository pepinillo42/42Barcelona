/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybarley <cybarley@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 20:02:55 by cybarley          #+#    #+#             */
/*   Updated: 2024/06/13 21:37:09 by cybarley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_numbers(void)
{
    int i;

    i = '0';
    while (i <= '9')
    {
        write(1, &i, 1);
        i++;
    }
    
}

/*int main(void)
{
    ft_print_numbers();
    return 0;
}*/
