# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sstench <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/03 20:34:50 by sstench           #+#    #+#              #
#    Updated: 2019/09/03 21:08:42 by sstench          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
ifconfig -a | grep 'ether ' | cut -d " " -f 2
