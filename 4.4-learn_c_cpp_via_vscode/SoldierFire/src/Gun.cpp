#include "Gun.h"
#include "iostream"
void Gun::addBullet(int bullet_num)
{
    this->_bullet_count += bullet_num;
}

bool Gun::shoot()
{
    if (this->_bullet_count > 0)
    {
        --this->_bullet_count;
        std::cout << "Shoot successfully" << std::endl;
        return true;
    }
    else
    {
        std::cout << "There is no bullet" << std::endl;
        return false;
    }
}