/*
Using the previous function, create a narrative game.
1 . The player picks a choice, between :
Sarah Shepard, Born on planet Earth at 24/08/2087. Captain of the crusader ship The Explorer
Phil spector, Born on planet Mars at 26/08/2038. Pilot of the H-Hunter n° 3434-DFG
Whifghy, the metamorph. Created  in Sector SD/F67. Child of the bioship Sxiot
2. The federation gives you a mission on your origin planet as a radio message addressed to your character. You have the choice of the content of the mission (3-5 different chapters) but you have to use generic messages and replace with the characteristics of your character.
3. Good luck !
*/

#include <iostream>
#include <string>
#include <array>

std::array < std::string, 3> messages{};

#pragma region Personnas


struct Personna {
    std::string name;
    std::string title;
    std::string planet;
    std::string ship;
};


Personna initAPersonna(
    std::string name_,
    std::string title_,
    std::string planet_,
    std::string ship_) {

    Personna characterInitiated;
    characterInitiated.name = name_;
    characterInitiated.title = title_;
    characterInitiated.ship = ship_;
    characterInitiated.planet = planet_;

    return characterInitiated;

}

int main()
{

    return 0;
}

