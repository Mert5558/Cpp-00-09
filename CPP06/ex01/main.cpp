

#include "Serializer.hpp"

int main()
{
	Serializer s;
	Data data;
	Data *ptr;

	data.name = "Hello";
	data.value = 42;
	ptr = &data;
	std::cout << "Data: " << ptr->name << " " << ptr->value << std::endl;
	uintptr_t raw = s.serialize(ptr);
	std::cout << "Raw: " << raw << std::endl;
	Data *ptr2 = s.deserialize(raw);
	std::cout << "Data: " << ptr2->name << " " << ptr2->value << std::endl;
	return (0);
}
