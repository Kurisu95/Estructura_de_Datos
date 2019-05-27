//
// Created by Christian Rivera on 2019-05-26.
//

#ifndef SFMLBANK_MENU2_H
#define SFMLBANK_MENU2_H


#include "SFML/Graphics.hpp"

#define MAX_NUMBER_OF_ITEMS 4

class Menu2
{
public:
    Menu2(float width, float height);
    ~Menu2();

    void draw(sf::RenderWindow &window);
    void MoveUp();
    void MoveDown();
    int GetPressedItem() { return selectedItemIndex; }

private:
    int selectedItemIndex;
    sf::Font font;
    sf::Text menu[MAX_NUMBER_OF_ITEMS];

};


#endif //SFMLBANK_MENU2_H
