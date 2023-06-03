#include <iostream>
#include <memory>
#include <vector>

#include "developer.hpp"

auto main() -> int
{
    std::vector<std::shared_ptr<Developer>> developers;
    std::shared_ptr<SeniorDeveloper> senior_developer =
        std::make_shared<SeniorDeveloper>("Massimo Russo", "MassimoRusso1");
    std::shared_ptr<JuniorDeveloper> junior_developer = std::make_shared<JuniorDeveloper>("Nico Rast", "tsarocin");

    developers.push_back(junior_developer);
    developers.push_back(senior_developer);

    for (const auto& itr : developers)
    {
        itr->solve_problem();
        std::cout << std::endl;
    }

    return 0;
}