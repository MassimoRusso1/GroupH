#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include<string>
class Developer
{
public:
    Developer(const std::string& name, const std::string& alias);
    virtual void solve_problem();
    auto get_name() const -> std::string;
    auto get_alias() const -> std::string;

protected:
    static void drink_coffee();
private:
    std::string name_;
    std::string alias_;
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