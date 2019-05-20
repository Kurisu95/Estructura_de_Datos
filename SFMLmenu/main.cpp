#include "SFML/Graphics.hpp"
#include <iostream>
#include "Menu.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(900, 900), "SFML WORK!");

    Menu menu(window.getSize().x, window.getSize().y);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::KeyPressed:
                    switch (event.key.code)
                    {
                        case sf::Keyboard::Up:
                            menu.MoveUp();
                            break;

                        case sf::Keyboard::Down:
                            menu.MoveDown();
                            break;

                        case sf::Keyboard::Return:
                            switch (menu.GetPressedItem())
                            {
                                case 0:
                                    std::cout << "Adding Fruit" << std::endl;
                                    break;
                                case 1:
                                    std::cout << "Inserting Fruit" << std::endl;
                                    break;
                                case 2:
                                    std::cout << "Deleting Fruit" << std::endl;
                                    break;
                                case 3:
                                    std::cout << "Merging Mango Trees" << std::endl;
                                    break;
                                case 4:
                                    window.close();
                                    break;
                            }

                            break;
                    }

                    break;
                case sf::Event::Closed:
                    window.close();

                    break;

            }
        }

        window.clear();

        menu.draw(window);

        window.display();
    }
}