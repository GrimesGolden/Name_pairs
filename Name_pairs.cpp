#include "Name.h"

namespace name {

	void Name_pairs::read_names() {
		// provide an input operation read_names that reads a series of names. 
		int total = 0;

		cout << "How many names would you like to enter?: ";
		cin >> total;
		cout << "\n " << total << " names confirmed\n";

		for (int i = 0; i < total; ++i) {
			string n;
			cout << "Enter name " << (i + 1) << "): ";
			cin >> n;
			name.push_back(n);
		}

		cout << "You entered " << total << " names successfully\n";
	}

	void Name_pairs::read_ages() {
		// provide an input operation read_age() operation that prompts the user with an age for each name.
		cout << "Preparing to read in age's\n";

		for (int i = 0; i < name.size(); ++i) {
			int a = 0;
			cout << "What is " << name[i] << "'s age?: ";
			cin >> a;
			age.push_back(a);
		}

		cout << name.size() << " age's stored succesfully.\n";
	}

	void Name_pairs::print() {
		// provide a print operation that prints out name,age pairs one per line in the order determined by name vector. 
		cout << "DATABASE CONTAINS: \n";
		for (int i = 0; i < name.size(); ++i) {
			cout << name[i] << " Age: " << age[i] << "\n";
		}
	}

	void Name_pairs::sort() {
		// Provide a sort operation that sorts the name vector in alphabetical order and reorganizes age function to match.
		// 
		// First take a copy of the original (unsorted) names. 
		vector<string> name_copy = name;
		// Now sort these names by alphabetical order.
		std::sort(name.begin(), name.end());
		// Create a new vector that will store the sorted ages.
		vector<double> sorted_age;

		// Look through the sorted names vector (n)
		// Find a matching name in the original copy (names_copy)
		// Use the element index at which this match occured (j)
		// Push the age from the original vector index (j) into the sorted_ages. 
		for (int i = 0; i < name.size(); ++i) {
			for (int j = 0; j < name_copy.size(); ++j) {
				if (name[i] == name_copy[j]) {
					sorted_age.push_back(age[j]);
					break;
				}
			}
		}

		// Copy sorted ages into a (modifying ages vector/sorting)
		for (int i = 0; i < sorted_age.size(); ++i) {
			age[i] = sorted_age[i];
		}

		cout << "Database sorted succesfully.";
	}

	Name_pairs::Name_pairs()
	{
	}

	Name_pairs::~Name_pairs()
	{
	}
}