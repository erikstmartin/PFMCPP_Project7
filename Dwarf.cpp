#include "Dwarf.h"
#include "Utility.h"

//Dwarf::Dwarf
Dwarf::Dwarf(std::string n,int hp, int armor) : Character(hp, armor, 4), name(n)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(5);
}

//Dwarf::getName
const std::string& Dwarf::getName()
{
    return name;
}

//Dwarf::getStats
std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}

void Dwarf::attack(Character& opponent)
{
    Character::attack(opponent);
}
