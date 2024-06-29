/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybarley <cybarley@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:26:38 by cybarley          #+#    #+#             */
/*   Updated: 2024/06/29 20:04:04 by cybarley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int pos;

    pos = 0;

    while(s1[pos] == s2[pos] && s1[pos] != '\0' && s2[pos] !='\0')
    {
        pos++;
    }
    return (s1[pos] - s2[pos]);
}

/*int main(void)
{
    char *str1 = "Hello";
    char *str2 = "Hello";
    int result = ft_strcmp(str1, str2);
    return (result);
}*/
