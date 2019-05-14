#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

int main() {



    sf::RenderWindow window(sf::VideoMode(1000,700),"Awesome");
    sf::RectangleShape player(sf::Vector2f(100.0f,100.0f));
    player.setFillColor(sf::Color::Red);

    sf::Font font;

    font.loadFromFile("open-sans/OpenSans-Bold.ttf");



    sf::Text text("Hello World",font,11);

    text.setCharacterSize(32);

    text.setPosition(window.getSize().x/2 - text.getGlobalBounds().width/2,

                     window.getSize().y/2 - text.getGlobalBounds().height/2);



    while(window.isOpen()){



        sf::Event event;

        while(window.pollEvent(event)) {

            switch (event.type){
                case sf::Event::Closed:{
                    window.close();
                    break;
                    case sf::Event::TextEntered:{
                        if(event.text.unicode < 128){
                            printf("%c", event.text.unicode);
                        }
                    }
                }

            }

            window.clear(sf::Color::Black);

            window.draw(player);
            window.display();

        }
        sf::Vector2f playerPos = player.getPosition();
        if((sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) &&  playerPos.x > 0.000000){
            player.move(-0.5f, 0.0f);
        }
        if((sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))  &&  playerPos.x < 900.000000){
            player.move(0.5f, 0.0f);
        }
        if((sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))  &&  playerPos.y > 0.000000){
            player.move(0.0f, -0.5f);
        }
        if((sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))  &&  playerPos.y < 599.000000){
            player.move(0.0f, 0.5f);
        }
        window.clear();
        window.draw(player);
        window.display();


    }

    return 0;

}