#pragma once
#include <string>
#include "Gun.h"
class Soldier
{
private:
    std::string _name;
    Gun *_ptr_gun;
    /* data */
public:
    Soldier(std::string name);
    ~Soldier();
    void addBulletToGun(int num);
    bool fire();
    void addGun(Gun *ptr_gun);
};