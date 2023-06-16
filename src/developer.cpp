#include <developer.hpp>
#include <iostream>
#include <string>

auto Developer::get_name() const -> std::string
{
    return name_;
}

auto Developer::get_alias() const -> std::string
{
    return alias_;
}

auto operator<<(std::ostream& out, const Developer& print_dev) -> std::ostream&
{
    out << "Name: " << print_dev.get_name() << "\n"
        << "Alias: " << print_dev.get_alias();
    return out;
}

void Developer::drink_coffee()
{
    std::cout << "I need an esspresso!" << std::endl;
}

void SeniorDeveloper::solve_problem() const
{
    std::cout << *this << std::endl;
    std::cout << "That was sooo easy!!!" << std::endl;
    drink_coffee();
}

void JuniorDeveloper::solve_problem() const
{
    std::cout << *this << std::endl;
    std::cout << "I nearly died!!! \nThat was difficult" << std::endl;
    drink_coffee();
}

// Constructor for Developer class
Developer::Developer(const std::string& name, const std::string& alias) : name_{std::move(name)}, alias_{std::move(alias)}
{
}

// Constructor for SeniorDeveloper class, derived from Developer
SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias) : Developer(name, alias)
{
}

// Constructor for JuniorDeveloper class, derived from Developer
JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias) : Developer(name, alias)
{
}