//
// Created by Christian Rivera on 2019-05-19.
//

#ifndef SFMLMENU_MENU_H
#define SFMLMENU_MENU_H

#include "SFML/Graphics.hpp"

#define MAX_NUMBER_OF_ITEMS 5

class Menu
{
public:
    Menu(float width, float height);
    ~Menu();

    void draw(sf::RenderWindow &window);
    void MoveUp();
    void MoveDown();
    int GetPressedItem() { return selectedItemIndex; }

private:
    int selectedItemIndex;
    sf::Font font;
    sf::Text menu[MAX_NUMBER_OF_ITEMS];

};


#endif //SFMLMENU_MENU_H
