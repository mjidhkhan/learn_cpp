
#include <iostream>
#define LOG(x) std::cout << x << std::endl

void Increment(int& value)
{
	value++;
	LOG("A: "<< value);
}
void Decrement(int* value)
{
	(*value)--;
	LOG("B: "<< value);
}

int main()
{
	
	// Pointers *, ** [single, double pointer]
	char* buffer = new char[8]; // pointer
	memset(buffer, 0 ,8);
	char** ptr = &buffer; // pointer to pointer
	LOG("Char Ptr: "<< ptr);

	// Refrences &
	int a  = 5;
	int b  = 5;

	Increment(a); // passed to refrence
	Decrement(&b); // passed to pointer
	
	LOG("A (increment) passed to refrence: "<< a);
	LOG("B (decrement) passed to pointer: "<< b);

	int&  ref1 = a;
	int&  ref2 = a;
	//ref1 = 2;
	LOG("A: ref1: "<< ref1);
	LOG("b: ref2: "<< ref2);
	return 0;
}
