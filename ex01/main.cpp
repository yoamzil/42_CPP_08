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

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}