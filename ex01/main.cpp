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

// int	main()
// {
// 	try
// 	{
//         Span sp = Span(10);
//         std::vector<int> nums;
//         nums.push_back(1);
//         nums.push_back(2);
//         nums.push_back(3);
//         nums.push_back(4);
//         nums.push_back(5);
//         nums.push_back(6);
//         nums.push_back(7);
//         nums.push_back(8);
//         nums.push_back(9);
//         nums.push_back(10);
//         sp.addNumbers(nums.begin(), nums.end());
//     }
//     catch (std::exception &e)
//     {
//         std::cout << "Error!" << std::endl;
//     }
//     return (0);
// }

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
	return 0;
}
