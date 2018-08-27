//
// Created by Tristan Brindle on 01/11/2017.
//

#ifndef MEMBER_ACCESS_EXAMPLE_HPP
#define MEMBER_ACCESS_EXAMPLE_HPP

#include <iostream>
#include <string>
#include <cctype>  

class student;
std::ostream& operator<<(std::ostream&, const student&);

class student {
public:
    // Constructor
	student();
	~student();
    student(const std::string&, const std::string&, const int);

    // Member functions
    const auto& get_first_name() const;
    void set_first_name(std::string&);
	
    const auto& get_last_name() const;
    void set_last_name(const std::string&);
	
    const auto& get_id() const;
    void set_id(const int);

private:
    friend std::ostream& operator<<(std::ostream&, const student&);
   
    std::string first_name;
    std::string last_name;
    int id_number;
};
#endif //MEMBER_ACCESS_EXAMPLE_HPP
