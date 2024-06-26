/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybarley <cybarley@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:06:54 by cybarley          #+#    #+#             */
/*   Updated: 2024/06/28 15:06:51 by cybarley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    while(*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}

/*int main(void)
{
    ft_putstr("Jelou");
    return (0);
}*/