#include "Paladin.h"
#include "Utility.h"
#include <string>

// Paladin::Paladin
Paladin::Paladin(std::string n,int hp, int armor) : Character(hp, armor, 10), name(n)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(6);
}

//Paladin::getName
const std::string& Paladin::getName()
{
    return name;
}

//Paladin::getStats
std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
