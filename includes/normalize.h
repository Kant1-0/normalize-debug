/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 17:19:11 by qfremeau          #+#    #+#             */
/*   Updated: 2016/01/07 17:24:28 by qfremeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NORMALIZE_H
# define NORMALIZE_H

// ************************************************************************** //
// Includes
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

// ************************************************************************** //
// Macro for True or False
#define BOOL int
#define SUCCESS 1
#define FAIL -1
#define TRUE 1
#define FALSE 0

// Macro for read function
#define BUFSIZE 4095

// Macro for printf colors
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KORG  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define RESET "\033[0m"

// ************************************************************************** //
// Preproccesors read_file.c
int		read_file(char const *file, char *buf)

#endif