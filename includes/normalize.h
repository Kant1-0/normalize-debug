/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 17:19:11 by qfremeau          #+#    #+#             */
/*   Updated: 2016/01/12 17:02:34 by qfremeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NORMALIZE_H
# define NORMALIZE_H

// ************************************************************************** //
// Includes
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "../lib/libft.h"

// ************************************************************************** //
// Macro for True or False
#define BOOL int
#define SUCCESS 1
#define FAIL -1
#define TRUE 1
#define FALSE 0

// Macro for reading file
#define UPDATE "r"
#define CREATE "w"

// Macro for printf colors
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KORG  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define RESET "\033[0m"

// ************************************************************************** //
// Debug conditionnal macros
// Uncomment #define _MACRO to choose how to debug
#define _DEBUG

#ifdef _DEBUG
#define IFDEBUG(x) x
#else
#define IFDEBUG(x)
#endif

#define _TRACE

#ifdef _TRACE
#define IFTRACE(x) x
#else
#define IFTRACE(x)
#endif

#define _ERROR

#ifdef _ERROR
#define IFERROR(x) x
#else
#define IFERROR(x)
#endif

// ************************************************************************** //
// Preproccesors read_file.c
int		read_file(char const *file, int nb);

#endif