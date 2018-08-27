#include <iostream>
#include <vector>
#include <string>
#include "example.hpp"

int main()
{
    std::vector<student> students;

    students.push_back(student{"Harry", "Potter", 1});
    students.push_back(student{"Ron", "Weasley", 2});
    students.push_back(student{"Hermione", "Granger", 3});
	
	// Set via individual member variables
	student st;
	std::string first = "tristan";
	std::string last = "Brindle";
	
	st.set_first_name(first);
	st.set_last_name(last);
	st.set_id(4);
	students.push_back(st);

    for (const auto& s : students) {
        std::cout << s << '\n';
    }
}
