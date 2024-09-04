/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:52:14 by tsabri            #+#    #+#             */
/*   Updated: 2024/09/04 09:34:25 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	int	i;
	int	j;
	if (argc > 1)                            // why 1 , because there is an argument which is ./a.out
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0') 
			{
				if (argv[i][j] == 'z')
				{
					write(1,&argv[i][j], 1);
					write(1, "\n", 1);
					return (0);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}