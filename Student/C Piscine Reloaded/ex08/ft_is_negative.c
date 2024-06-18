/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybarley <cybarley@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 20:22:07 by cybarley          #+#    #+#             */
/*   Updated: 2024/06/13 21:37:41 by cybarley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_is_negative(int n)
{
    n = '0';
    if(n >= '0')
    {
        write(1, &"P", 1);
    }
    else
    {
        write(1, &"N", 1);
    }
    
}
/*int main(void)
{
    ft_is_negative(3);
    return(0);
}*/