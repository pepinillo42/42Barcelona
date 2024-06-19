/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybarley <cybarley@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:00:56 by cybarley          #+#    #+#             */
/*   Updated: 2024/06/19 23:17:03 by cybarley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_factorial(int nb)
{
    int i;
    int factorial;

    if (nb < 0)
        return 0;
    
    factorial = 1; 

        for(i = 1; i <= nb; i++)
        {
        factorial *= i;  
        }

        return factorial;
}

/*int main(void)
{
    int result = ft_iterative_factorial(4);
    return result;
}*/