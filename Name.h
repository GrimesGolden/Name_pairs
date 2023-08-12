#include "std_lib_facilities.h"

namespace name {
	class Name_pairs
	{
	public:
		Name_pairs();
		~Name_pairs();
		void read_names();
		void read_ages();
		void print();
		void sort();

	private:
		vector<string> name;
		vector<double> age;
	};
}