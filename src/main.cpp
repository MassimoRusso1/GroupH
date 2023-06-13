#include <developer.hpp>
#include <iostream>
#include <memory>
#include <vector>

auto main() -> int
{
    std::vector<std::shared_ptr<Developer>> developers;
    std::shared_ptr<SeniorDeveloper> senior_developer = std::make_shared<SeniorDeveloper>("Massimo Russo", "MassimoRusso1");
    std::shared_ptr<JuniorDeveloper> junior_developer = std::make_shared<JuniorDeveloper>("Nico Rast", "tsarocin");

    developers.push_back(std::dynamic_pointer_cast<Developer>(junior_developer));
    developers.push_back(std::dynamic_pointer_cast<Developer>(senior_developer));

    for (const auto& itr : developers)
    {
        itr->solve_problem();
        std::cout << std::endl;
    }

    return 0;
}