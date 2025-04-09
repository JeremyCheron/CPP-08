/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:07:01 by jcheron           #+#    #+#             */
/*   Updated: 2025/04/09 09:13:15 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../includes/Span.hpp"

int main(void) {

	std::srand(std::time(0));

	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;

		Span big(10000);
		std::vector<int> vec;
		for (int i = 0; i < 10000; ++i)
			vec.push_back(rand());
		big.addNumber(vec.begin(), vec.end());

		std::cout << "Shortest span : " << big.shortestSpan() << std::endl;
		std::cout << "Longest span : " << big.longestSpan() << std::endl;

	} catch (std::exception &e) {
		std::cerr << "Error : " << e.what() << std::endl;
	}

	return 0;
}
