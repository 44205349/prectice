#include <iostream>
#include "Sales_item.h"
int main(void)
{
	Sales_item book[2];
	std::cin >> book[0];
	std::cin >> book[1];
	if(book[0].same_isbn(book[1]))
	{
		
		std::cout << book[0] + book[1] << std::endl;
	}
	else{
		std::cerr << "Date must refer to same ISBN" << std::endl;
		return -1;
	}
	return 0;
}
