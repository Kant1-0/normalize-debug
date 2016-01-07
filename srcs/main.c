/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 17:16:11 by qfremeau          #+#    #+#             */
/*   Updated: 2016/01/07 17:25:03 by qfremeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/normalize.h"

int		main(int argc, char const *argv[])
{
	char	buf[BUFSIZE];
	int		ret;

	if (argc < 2)
	{
		printf(KRED "__Error: No file name written as arguments\n" RESET);)
		return (0);
	}
	ret = read_file(argv[1], buf);
	if (ret == FAIL)
		return (0);
	list_tetriminos(buf, ret);
	return (0);
}
