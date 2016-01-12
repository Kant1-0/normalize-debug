/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 17:25:21 by qfremeau          #+#    #+#             */
/*   Updated: 2016/01/12 17:04:04 by qfremeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/normalize.h"

// ************************************************************************** //
// Gets the size file for buffer in read_file function 
static size_t		get_bufsize(FILE **fd)
{
	size_t	bufsize;

	fseek(*fd, 0L, SEEK_END);
	bufsize = ftell(*fd);
	fseek(*fd, 0L, SEEK_SET);

	return (bufsize + 1);
}

// ************************************************************************** //
// Output errors if files creations failed
static BOOL			error_fopen(FILE *fd_src, FILE *fd_dst, int nb, char const
	*file, char * new_file)
{
	if (fd_src == NULL)
	{
		IFERROR(printf(KRED "__Error: cannot open file #%d: %s\n" RESET, nb, 
			file);)
		return (FAIL);
	}
	if (fd_dst == NULL)
	{
		IFERROR(printf(KRED "__Error: cannot create new_file #%d: %s\n" RESET, 
			nb, new_file);)
		return (FAIL);
	}
	return (SUCCESS);
}

// ************************************************************************** //
// Reads file for search & replace function 
BOOL			read_file(char const *file, int nb)
{
	IFTRACE(printf(KORG "Entering read_file\n" RESET);)

	size_t	bufsize;
	char	*new_file;
	char	*findme[3]			= {"IFDEBUG", "IFTRACE", "IFERROR"};
	//char	*replacewith[3]		= {"WORKED1", "WORKED2", "WORKED3"};
	FILE	*fd_src;
	FILE	*fd_dst;
	int		i;

	// ===================================
	// Opens file, then creates a new file
	new_file = ft_strjoin("new_", file);
	fd_src = fopen(file, UPDATE);
	fd_dst = fopen(new_file, CREATE);
	if (error_fopen(fd_src, fd_dst, nb, file, new_file) == FAIL)
		return (FAIL);
	
	// ========================================
	// Write the new file with replace function
	bufsize = get_bufsize(&fd_src);
	char	buf[bufsize];
	char	newbuf[bufsize];

	i = 0;
	while ( fgets(buf, bufsize, fd_src) != NULL)
	{

		if ( ft_strstr(buf, findme[i]) != NULL)
		{
			// do 1 or more replacements
            // the result should be placed in newbuff
            // just watch you dont overflow newbuff...
		}
		else
		{
			ft_strcpy(newbuf, buf);
		}
		fputs(newbuf, fd_dst);		
	}
	fclose(fd_dst);
	fclose(fd_src);
	IFDEBUG(printf(KGRN "__Succeed read_file\n" RESET);)
	return (SUCCESS);
}
