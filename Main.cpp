#include "Name.h"

using namespace name;

int main()
{
	Name_pairs test;

	test.read_names();
	test.read_ages();
	test.print();
	test.sort();
	test.print();
}