#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include<string>
class developer
{
public:
    developer(const std::string& name, const std::string& alias);
    virtual void solve_problem();
public:
    static void drink_coffee();
private:
    std::string name;
    std::string alias;
};
class SeniorDeveloper
{
public:
    SeniorDeveloper(const std::string& name, const std::string& alias);
    void solve_problem() const override;
};
class JuniorDeveloper
{
public:
    JuniorDeveloper(const std::string& name, const std::string& alias);
    void solve_problem() const override;
};
#endif