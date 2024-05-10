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

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>


class   Span
{
    private:
		unsigned int		N;
		std::vector<int>	numbers;

    public:
        Span();
        ~Span();
        Span(Span const &original);
        Span  &operator=(Span const &original);

		Span(unsigned int N);
		void	addNumber(int number);
		int		shortestSpan();
		int		longestSpan();
		void	addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);
		   void printContents() const {
        for (std::vector<int>::const_iterator it = numbers.begin(); it != numbers.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    };
};

#endif