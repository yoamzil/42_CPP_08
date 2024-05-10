/* ************************************************************************************** */
/*																						  */
/*                                                						d8b		888       */
/*                                                  					Y8P		888       */
/*                                                      						888       */
/*		888  888	  .d88b.   	8888b.  	88888b.d88b.	88888888	888 	888       */
/*		888  888 	d88""88b     	"88b 	888 "888 "88b    	d88P 	888 	888       */
/*		888  888 	888  888 	.d888888 	888  888  888		d88P   	888 	888       */
/*		Y88b 888 	Y88..88P 	888  888 	888  888  888	  d88P    	888 	888       */
/*		"Y88888  	"Y88P"  	"Y888888 	888  888  888	88888888 	888 	888       */
/*	  		 888																          */
/*		Y8b d88P																          */
/*		"Y88P"									By: yoamzil <yoamzil@student.1337.ma>     */
/*																						  */
/* ************************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	// std::cout << "Span constructor called" << std::endl;
}

Span::~Span()
{
	// std::cout << "Span destructor called" << std::endl;
}

Span::Span(Span const &original)
{
	// std::cout << "Span copy constructor called" << std::endl;
	*this = original;
}

Span &Span::operator=(Span const &original)
{
	if (this != &original)
	{
		*this = original;
	}
	return (*this);
}

Span::Span(unsigned int N)
{
	// std::cout << "Span constructor called" << std::endl;
	this->N = N;
	this->numbers.reserve(N);
}

void Span::addNumber(int number)
{
	if (this->numbers.size() < this->N)
	{
		this->numbers.push_back(number);
	}
	else
	{
		throw std::exception();
	}
}

int Span::shortestSpan()
{
	if (this->numbers.size() < 2)
	{
		throw std::exception();
	}
	std::vector<int> sorted = this->numbers;
	std::sort(sorted.begin(), sorted.end());
	int shortest = sorted[1] - sorted[0];
	for (unsigned int i = 1; i < sorted.size(); i++)
	{
		if (sorted[i] - sorted[i - 1] < shortest)
		{
			shortest = sorted[i] - sorted[i - 1];
		}
	}
	return (shortest);
}

int Span::longestSpan()
{
	if (this->numbers.size() < 2)
	{
		throw std::exception();
	}
	std::vector<int> sorted = this->numbers;
	std::sort(sorted.begin(), sorted.end());
	return (sorted[sorted.size() - 1] - sorted[0]);
}

void	Span::addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (this->numbers.size() + std::distance(start, end) <= this->N)
	{
		while (start != end)
		{
			addNumber(*start);
			start++;
		}
	}
	else
	{
		throw std::exception();
	}
}
