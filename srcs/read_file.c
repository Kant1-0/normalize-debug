/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 17:25:21 by qfremeau          #+#    #+#             */
/*   Updated: 2016/01/07 17:25:38 by qfremeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/normalize.h"

// ************************************************************************** //
// Reads and saves file into a buffer string 
int		read_file(char const *file, char *buf)
{
	int		fd;
	int		ret;
	int		ptr_ret;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		printf(KRED "__Error: cannot open file\n" RESET);)
		return (FAIL);
	}
	while ((ret = read(fd, buf, BUFSIZE)) != 0)
	{
		ptr_ret = ret;
		buf[ret] = '\0';
	}
	close(fd);
	return (ptr_ret);
}
