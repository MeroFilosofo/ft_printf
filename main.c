/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivromero <ivromero@student.45urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 01:31:13 by ivromero          #+#    #+#             */
/*   Updated: 2023/06/04 19:30:56 by ivromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

#include "ft_printf.h"


int	main(void)
{
	ft_printf("\001\002\007\v\010\f\r\n", '1');
	ft_printf("uno es:%c\n", '1');
	printf("uno es:%c\n", '1');
	ft_printf("dos es:%s\n", "2222222");
	printf("dos es:%s\n", "2222222");
	ft_printf("tres es:%d\n", 3333333);
	printf("tres es:%d\n", 3333333);
	ft_printf("cuatro es:%i\n", 4444444);
	printf("cuatro es:%i\n", 4444444);
	ft_printf("cinco es:%u\n", 5555555);
	printf("cinco es:%u\n", 5555555);
	ft_printf("seis es:%x\n", 6666666);
	printf("seis es:%x\n", 6666666);

    printf("Tamaño del puntero: %zu bytes", sizeof(void *));

	return (0);
}
