#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class   HumanA{
    private:
        Weapon &Aweapon;
        const char  *name;
    public:
        HumanA (const char* arr, Weapon &type_clube);
        // HumanA (const char* arr, Weapon &type_clube) : Aweapon(type_clube) , name(arr) {}
        ~HumanA ();
        void    attack();
};

#endif