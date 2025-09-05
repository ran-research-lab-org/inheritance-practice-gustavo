#include "Employee.h"

Employee::Employee(const std::string& name, int id, const std::string& type){
  this ->name = name;
  this ->id = id;
  this ->type = type;
}

/* IMPLEMENT GETTERS*/
std::string Employee::getName(){return name;}
std::string Employee::getType(){return type;}
int Employee::getId(){return id;}
