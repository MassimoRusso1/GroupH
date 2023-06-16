#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP
#include <string>

//Define the Developer class
class Developer
{
   private:
    //Member variable to store the name and alias
    std::string name_;
    std::string alias_;

   public:
    //Constructor that takes a name and an alias as parameters
    Developer(std::string name, std::string alias);

    //getting functions for call up name and alias
    auto get_name() const -> std::string;
    auto get_alias() const -> std::string;
    virtual void solve_problem() const = 0;
    static void drink_coffee();
};

//Define the SeniorDeveloper class derived from Developer
class SeniorDeveloper : public Developer
{
   public:
    //Constructor that takes name and alias as parameters
    SeniorDeveloper(const std::string& name, const std::string& alias);
    //Override the solve_problem function
    void solve_problem() const override;
};

//Define the JuniorDeveloper class derived from Developer
class JuniorDeveloper : public Developer
{
   public:
    //Constructor that takes name and alias as parameters
    JuniorDeveloper(const std::string& name, const std::string& alias);
    //Override the solve_problem function
    void solve_problem() const override;
};

#endif