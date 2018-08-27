//
// Created by Tristan Brindle on 01/11/2017.
//

#include "example.hpp"

std::ostream& operator<<(std::ostream& os, const student& s)
{
    os << "First name: " << s.first_name << '\n'
       << "Last name: " << s.last_name << '\n'
       << "ID number: " << s.id_number << '\n';
    return os;
}

// Constructor
student::student()
{
}

student::~student()
{
}

student::student(const std::string& first, const std::string& last, const int id)
    : first_name{first}, last_name{last}, id_number{id}
    {
    }

// Member functions
const auto& student::get_first_name() const
{
    return first_name;
}

void student::set_first_name(std::string& str)
{
	str.at(0) = static_cast<char>(std::toupper(str.at(0)));
	first_name = str;
}

const auto& student::get_last_name() const
{
    return last_name;
}

void student::set_last_name(const std::string& str)
{
    last_name = str;
}

const auto& student::get_id() const
{
    return id_number;
}

void student::set_id(const int num)
{
    id_number = num;
}
