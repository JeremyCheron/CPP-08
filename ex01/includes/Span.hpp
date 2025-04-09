/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 08:54:26 by jcheron           #+#    #+#             */
/*   Updated: 2025/04/09 08:58:29 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>
#include <stdexcept>

class Span {

	private:

		unsigned int		_maxSize;
		std::vector<int>	_numbers;

	public:

		Span(unsigned int N);
		~Span();
		Span(const Span &src);
		Span &operator=(const Span &src);

		void	addNumber(int n);

		template <typename Iterator>

		void	addNumber(Iterator begin, Iterator end) {
			if (static_cast<unsigned int>(std::distance(begin, end)) + _numbers.size() > _maxSize)
				throw std::runtime_error("Span is full");
			_numbers.insert(_numbers.end(), begin, end);
		}

		int		shortestSpan() const;

		int		longestSpan() const;
};
