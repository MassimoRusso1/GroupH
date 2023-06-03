#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <string>
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

class SeniorDeveloper : public Developer
{
   public:
    SeniorDeveloper(const std::string& name, const std::string& alias);
    virtual void solve_problem() const = 0;
};

class JuniorDeveloper : public Developer
{
   public:
    JuniorDeveloper(const std::string& name, const std::string& alias);
    virtual void solve_problem() const = 0;
};
#endif