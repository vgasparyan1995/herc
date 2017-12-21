#include <iostream>

#include "storage/Manager.h"

int main()
{
	herc::storage::Manager obj;
	obj.set("key", "value");
	std::cout << obj.get("key") << std::endl;
}
