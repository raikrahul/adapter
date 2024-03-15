
#include "Target.h"

#include <iostream>

void get_new_city_name(RandomCityasTarget* pTarget)
{
    std::cout << "New city name: " << pTarget->GetCityName() << std::endl;
}



int main()
{
	std::cout << "from main " << std::endl;
}
