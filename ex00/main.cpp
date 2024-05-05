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


#include "easyfind.hpp"

int	main(void)
{
    try
    {
        std::vector<int> array;

        array.push_back(3);
		array.push_back(5);
		array.push_back(42);
		array.push_back(7);
        array.push_back(2);
		array.push_back(1);
		array.push_back(8);
		array.push_back(4);
        array.push_back(9);

        easyfind(array, 50);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	return (0);
}