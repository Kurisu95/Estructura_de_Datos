//
// Created by Christian Rivera on 2019-05-26.
//

#include "Menu2.h"


Menu2::Menu2(float width, float height)
{
    if (!font.loadFromFile("open-sans/OpenSans-Bold.ttf"))
    {
        // handle error
    }

    menu[0].setFont(font);
    menu[0].setColor(sf::Color::Red);
    menu[0].setString("Priority A");
    menu[0].setPosition(sf::Vector2f(width / 2.4, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));

    menu[1].setFont(font);
    menu[1].setColor(sf::Color::White);
    menu[1].setString("Priority B");
    menu[1].setPosition(sf::Vector2f(width / 2.4, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

    menu[2].setFont(font);
    menu[2].setColor(sf::Color::White);
    menu[2].setString("Priority C");
    menu[2].setPosition(sf::Vector2f(width / 2.4, height / (MAX_NUMBER_OF_ITEMS + 1) * 3));

    menu[3].setFont(font);
    menu[3].setColor(sf::Color::White);
    menu[3].setString("Priority D");
    menu[3].setPosition(sf::Vector2f(width / 2.4, height / (MAX_NUMBER_OF_ITEMS + 1) * 4));

    selectedItemIndex = 0;
}


Menu2::~Menu2()
{
}

void Menu2::draw(sf::RenderWindow &window)
{
    for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
    {
        window.draw(menu[i]);
    }
}

void Menu2::MoveUp()
{
    if (selectedItemIndex - 1 >= 0)
    {
        menu[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex--;
        menu[selectedItemIndex].setColor(sf::Color::Red);
    }
}

void Menu2::MoveDown()
{
    if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS)
    {
        menu[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex++;
        menu[selectedItemIndex].setColor(sf::Color::Red);
    }
}