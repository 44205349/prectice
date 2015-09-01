#include<iostream>
#include<string.h>

int main(void)
{
	int total;
	total = 0;
	for(int i =  50;i <= 100;i++)
	{
		total += i;
	}
	std::cout << "50+51+52+...+100 equle " << total << std::endl; 
	return 0;
}