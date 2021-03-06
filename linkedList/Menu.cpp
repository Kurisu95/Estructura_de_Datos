//
// Created by Christian Rivera on 2019-05-20.
//

#include "Menu.h"


Menu::Menu(float width, float height)
{
    if (!font.loadFromFile("open-sans/OpenSans-Bold.ttf"))
    {
        // handle error
    }

    menu[0].setFont(font);
    menu[0].setColor(sf::Color::Red);
    menu[0].setString("Add Fruit");
    menu[0].setPosition(sf::Vector2f(width / 2.4, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));

    menu[1].setFont(font);
    menu[1].setColor(sf::Color::White);
    menu[1].setString("Insert Fruit");
    menu[1].setPosition(sf::Vector2f(width / 2.4, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

    menu[2].setFont(font);
    menu[2].setColor(sf::Color::White);
    menu[2].setString("Delete Fruit");
    menu[2].setPosition(sf::Vector2f(width / 2.4, height / (MAX_NUMBER_OF_ITEMS + 1) * 3));

    menu[3].setFont(font);
    menu[3].setColor(sf::Color::White);
    menu[3].setString("Merge");
    menu[3].setPosition(sf::Vector2f(width / 2.2, height / (MAX_NUMBER_OF_ITEMS + 1) * 4));

    menu[4].setFont(font);
    menu[4].setColor(sf::Color::White);
    menu[4].setString("Exit");
    menu[4].setPosition(sf::Vector2f(width / 2.1, height / (MAX_NUMBER_OF_ITEMS + 1) * 5));

    selectedItemIndex = 0;
}


Menu::~Menu()
{
}

void Menu::draw(sf::RenderWindow &window)
{
    for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
    {
        window.draw(menu[i]);
    }
}

void Menu::MoveUp()
{
    if (selectedItemIndex - 1 >= 0)
    {
        menu[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex--;
        menu[selectedItemIndex].setColor(sf::Color::Red);
    }
}

void Menu::MoveDown()
{
    if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS)
    {
        menu[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex++;
        menu[selectedItemIndex].setColor(sf::Color::Red);
    }
}