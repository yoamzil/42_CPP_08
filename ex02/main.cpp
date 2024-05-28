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

#include "MutantStack.hpp"

int main() {
    MutantStack<int> mstack;

    // Test push and size
    for(int i = 0; i < 10; ++i) {
        mstack.push(i);
    }
    std::cout << "Size after pushing 10 elements: " << mstack.size() << std::endl;

    // Test iterator
    std::cout << "Elements in the stack: ";
    for(MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Test pop
    mstack.pop();
    std::cout << "Size after popping one element: " << mstack.size() << std::endl;

    // Test top
    std::cout << "Top element after popping: " << mstack.top() << std::endl;

    // Test copy constructor
    MutantStack<int> mstack2(mstack);
    std::cout << "Size of copied stack: " << mstack2.size() << std::endl;

    // Test assignment operator
    MutantStack<int> mstack3;
    mstack3 = mstack;
    std::cout << "Size of stack after assignment: " << mstack3.size() << std::endl;

    return 0;
}

// int main() {
//     MutantStack<int> mstack;

//     // Test push and size
//     for(int i = 0; i < 10; ++i) {
//         mstack.push(i);
//     }
//     std::cout << "Size after pushing 10 elements: " << mstack.size() << std::endl;

//     // Test iterator
//     std::cout << "Elements in the stack: ";
//     for(MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
//         std::cout << *it << " ";
//     }
//     std::cout << std::endl;

//     // Test pop
//     mstack.pop();
//     std::cout << "Size after popping one element: " << mstack.size() << std::endl;

//     // Test top
//     std::cout << "Top element after popping: " << mstack.top() << std::endl;

//     // Test copy constructor
//     MutantStack<int> mstack2(mstack);
//     std::cout << "Size of copied stack: " << mstack2.size() << std::endl;

//     // Test assignment operator
//     MutantStack<int> mstack3;
//     mstack3 = mstack;
//     std::cout << "Size of stack after assignment: " << mstack3.size() << std::endl;

//     return 0;
// }
