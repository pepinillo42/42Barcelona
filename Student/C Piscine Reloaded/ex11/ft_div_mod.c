/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybarley <cybarley@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:02:14 by cybarley          #+#    #+#             */
/*   Updated: 2024/06/18 20:02:24 by cybarley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
*div = a / b;
*mod = a % b;
}

/*int main(void)
{
    int a;
    int b;
    int div, mod; 
    
    a = 10;
    b = 5;
    
    ft_div_mod(a, b, &div, &mod);
    write(1, &mod, 1);
    return(0);
}*/