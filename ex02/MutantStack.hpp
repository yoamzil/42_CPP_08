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

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class   MutantStack : public std::stack<T>
{
    private:
        std::stack<T>   _stack;
    public:
        MutantStack(){}
        ~MutantStack(){}
        MutantStack(MutantStack const &original)
        {
            *this = original;
        }
        MutantStack  &operator=(MutantStack const &original)
        {
            if (this != &original)
            {
                *this = original;
            }
            return (*this);
        }

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin()
        {
            return std::stack<T>::c.begin();
        }
		iterator	end()
        {
            return std::stack<T>::c.end();
        }
};

#endif