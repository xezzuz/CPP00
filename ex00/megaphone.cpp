/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:04:34 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/10 14:17:30 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
	int			i;
	int			j;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	i = 0;
	while (argv[++i]) {
		j = 0;
		while (argv[i][j])
			std::cout << (char)toupper(argv[i][j++]);
	}
	std::cout << std::endl;
	return 0;
}
