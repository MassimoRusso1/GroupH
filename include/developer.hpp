#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <string>

class Developer
{
   private:
    std::string name_;
    std::string alias_;

   public:
    Developer(std::string name, std::string alias);

    auto get_name() const -> std::string;
    auto get_alias() const -> std::string;
    virtual void solve_problem() const = 0;
    static void drink_coffee();
};

class SeniorDeveloper : public Developer
{
   public:
    SeniorDeveloper(const std::string& name, const std::string& alias);
    void solve_problem() const override;
};

class JuniorDeveloper : public Developer
{
   public:
    JuniorDeveloper(const std::string& name, const std::string& alias);
    void solve_problem() const override;
};

#endif