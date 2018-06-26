/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrepak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 10:55:47 by nrepak            #+#    #+#             */
/*   Updated: 2018/06/26 10:55:48 by nrepak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASM_H
# define ASM_H
# define 		USAGE 			"Usage: ./asm file_name[.s]"
# define		USAGE1			"Can't read source file "						 
# define		LEX_ERROR		"Lexical error at ["
# define		SYNT_ERROR		"Syntax error\n"
# define		USAGE_ERROR			-1
# include "./mylib/ft_printf.h"

typedef struct s_name_comm
{
	char		*name;
	char		*comment;
	int			count;
}				t_name_comm;


int file_check(int fd, t_name_comm *info);
#endif
