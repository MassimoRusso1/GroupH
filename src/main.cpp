#include <developer.hpp>
#include <iostream>
#include <memory>
#include <vector>

auto main() -> int
{
    //Create a vector of "Developer" smart pointers
    std::vector<std::shared_ptr<Developer>> developers;
    //Create a "SeniorDeveloper" named "Massimo Russo" and assign the username "MassimoRusso1" to it
    std::shared_ptr<SeniorDeveloper> senior_developer = std::make_shared<SeniorDeveloper>("Massimo Russo", "MassimoRusso1");
    //Create a "JuniorDeveloper" named "Nico Rast" and assign the username "tsarocin" to it
    std::shared_ptr<JuniorDeveloper> junior_developer = std::make_shared<JuniorDeveloper>("Nico Rast", "tsarocin");

    //Add "JuniorDeveloper" and "SeniorDeveloper" to the developers vector by dynamically casting them to "Developer" smart pointers
    developers.push_back(std::dynamic_pointer_cast<Developer>(junior_developer));
    developers.push_back(std::dynamic_pointer_cast<Developer>(senior_developer));

    for (const auto& itr : developers)
    {   
        //Call the solve_problem() method for each developer
        itr->solve_problem();
        //Output a newline after each developer's problem is solved
        std::cout << std::endl;
    }

    return 0;
}