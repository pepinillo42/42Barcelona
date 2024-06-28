/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybarley <cybarley@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:39:18 by cybarley          #+#    #+#             */
/*   Updated: 2024/06/28 12:14:59 by cybarley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}
	return (length);
}

/*int main()
{
    char *str;
    int length = ft_strlen("Jelou");
    {
        write(1, str, 1);
    }
    return (length);
}*/