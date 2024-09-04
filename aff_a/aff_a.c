/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:39:21 by tsabri            #+#    #+#             */
/*   Updated: 2024/09/04 08:50:38 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;	
	if (argc > 1)
	{
		i = 1;
		while (i < argc){
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] == 'a')
				{
					write(1, &argv[i][j],1);
					write(1,"\n", 1);
					return (0);
				}
				j++;
			}
			i++;
		}
	}
	write(1,"\n", 1);
	return (0);
}

//["./a.out", 'Tariq", "Talal", "Milan"]