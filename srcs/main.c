/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 17:16:11 by qfremeau          #+#    #+#             */
/*   Updated: 2016/01/12 15:55:06 by qfremeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/normalize.h"

int		main(int argc, char const *argv[])
{
	int		ret;
	int		i;

	if (argc < 2)
	{
		IFERROR(printf(KRED "__Error: no file name as arguments\n" RESET);)
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		IFTRACE(printf(KORG "Begin of While loop to read arg #%d: %s\n" RESET, i, argv[i]);)
		ret = read_file(argv[i], i);
		if (ret == FAIL)
		{
			i++;
			ret = TRUE;
			IFTRACE(printf(KORG "Go back at beginning of While loop\n" RESET);)
			continue;
		}
		i++;
	}
	IFDEBUG(printf(KGRN "__Exiting main\n" RESET);)
	return (0);
}
