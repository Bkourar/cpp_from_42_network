#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class   HumanB{
    public:
        void    attack();
        void    setWeapon(Weapon&);
        HumanB (const char *arr);
        ~HumanB ();
    private:
        Weapon      *Bweapon;
        const char  *name;
};

#endif