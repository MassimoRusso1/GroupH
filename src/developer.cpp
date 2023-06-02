#include "developer.hpp"
#include <iostream>
#include <string>

Developer::Developer(const std::string& name, const std::string& alias) : name_{name}, alias_{alias}
{
}

SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias) : Developer(name, alias)
{
}

JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias) : Developer(name, alias)
{
}

void Developer::drink_coffee()
{
    std::cout<<"I need an esspresso!" <<std::endl;
}

void SeniorDeveloper::solve_problem() const
{
    std::cout <<*this << std::endl;
    std::cout << "That was sooo easy!!!"
    drink_coffee();
}

void JuniorDeveloper::solve_problem() const
{
    std::cout <<*this << std::endl;
    std::cout << "I nearly died!!!"
    drink_coffee();
}

auto operator<<(std::ostream& out, const Developer& dev) -> std::ostream&
{
    out <<"Name: " <<dev.get_name()<< "\n"
}



