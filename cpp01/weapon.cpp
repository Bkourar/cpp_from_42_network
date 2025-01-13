#include <iostream>

class   Weapon{
    public:
        const char    *getType();
        void            setType(const char *str);
        Weapon (const char *input);
        ~Weapon ();
    private:
        const char  *message;
};

Weapon::Weapon(const char *input) {
    message = input;
}

Weapon::~Weapon() {
    std::cout<< "weapon is over" << std::endl;
}

const char*    Weapon::getType() {return message;}
void     Weapon::setType(const char *str) {
    message = str;
}

class   HumanA{
    public:
        // HumanA (const char* arr, Weapon &type_clube) : Aweapon(type_clube) {
        //     name = arr;
        // }
        HumanA (const char* arr, Weapon &type_clube);
        ~HumanA ();
        void    attack();
    private:
        Weapon &Aweapon;
        const char  *name;
};

HumanA::HumanA (const char* arr, Weapon &type_clube) : Aweapon(type_clube) {
    name = arr;
}

HumanA::~HumanA() {
    std::cout<< "humanA is over" << std::endl;
}

void    HumanA::attack(void) {
    std::cout << name << std::endl;
}

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

HumanB::HumanB(const char *arr) {
    name = arr;
}

HumanB::~HumanB() {
    delete Bweapon;
    std::cout << "Bweapon is deleted" << std::endl;
}

void    HumanB::attack(void) {
    std::cout << name << std::endl;
}

void    HumanB::setWeapon(Weapon &B_weapon) {
    Bweapon = new Weapon(B_weapon);
}


int main()
{
    //----------- HumanA----------
    Weapon club1 = Weapon("crude spiked club");
    HumanA bob("Bob", club1);
    bob.attack();
    club1.setType("some other type of club");
    bob.attack();
    //----------- HumanB----------
    Weapon club2 = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club2);
    jim.attack();
    club2.setType("some other type of club");
    jim.attack();
    return (0);
}