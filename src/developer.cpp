//include header files and input/output stream (iostream) and strings
#include <developer.hpp>    
#include <iostream>
#include <string>

//Implementation of the get_name() member function
auto Developer::get_name() const -> std::string
{
    return name_;
}

//Implementation of the get_alias() member function and return this
auto Developer::get_alias() const -> std::string
{
    return alias_;
}

//Overloading the << operator to output Developer object to an ostream
auto operator<<(std::ostream& out, const Developer& print_dev) -> std::ostream&
{
    out << "Name: " << print_dev.get_name() << "\n"
        << "Alias: " << print_dev.get_alias();
    // Return the ostream object to allow chaining of the operator
    return out;
}

//Implementation of the static member function drink_coffee()
void Developer::drink_coffee()
{
    std::cout << "I need an esspresso!" << std::endl;
}

//Implementation of the solve_problem() member function in SeniorDeveloper
void SeniorDeveloper::solve_problem() const
{
    std::cout << *this << std::endl;
    std::cout << "That was sooo easy!!!" << std::endl;
    drink_coffee();
}

//Implementation of the solve_problem() member function in JuniorDeveloper
void JuniorDeveloper::solve_problem() const
{
    std::cout << *this << std::endl;
    std::cout << "I nearly died!!! \nThat was difficult" << std::endl;
    drink_coffee();
}

//Constructor for Developer class
Developer::Developer(std::string name, std::string alias) : name_{std::move(name)}, alias_{std::move(alias)}
{
}

//Constructor for SeniorDeveloper class, derived from Developer
SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias) : Developer(name, alias)
{
}

//Constructor for JuniorDeveloper class, derived from Developer
JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias) : Developer(name, alias)
{
}