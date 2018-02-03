/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domelche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 16:45:58 by domelche          #+#    #+#             */
/*   Updated: 2017/12/03 16:46:01 by domelche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include "libft/libft.h"

# define BUFF_SIZE 1024

typedef struct		s_file
{
	int				fd;
	char			*buf;
	size_t			buf_size;
	size_t			i;
}					t_file;

int					get_next_line(const int fd, char **line);

#endif
