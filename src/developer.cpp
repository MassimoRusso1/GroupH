#include "developer.hpp"

#include <iostream>
#include <string>


Developer::Developer(const std::string& name, const std::string& alias) : name_{name}, alias_{alias}
{
}
auto Developer::get_name() const -> std::string
{
    return name_;
}


auto Developer::get_alias() const -> std::string
{
    return alias_;
}

SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias) : Developer(name, alias)
{
}

JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias) : Developer(name, alias)
{
}


auto operator<<(std::ostream& out, const Developer& dev) -> std::ostream&
{
    out << "Name: " << dev.get_name() << "\n"
        << "Alias: " << dev.get_alias();
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
    std::cout << "I nearly died!!!" << std::endl;
    drink_coffee();
}

