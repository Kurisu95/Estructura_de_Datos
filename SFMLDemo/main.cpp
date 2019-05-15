#include <SFML/Graphics.hpp>
#include <iostream>


int main() {


    //Define Window
    sf::RenderWindow window(sf::VideoMode(2000,1230),"Awesome");

    //Define Shape
    sf::RectangleShape player(sf::Vector2f(100.0f,100.0f));
    player.setPosition(window.getSize().x/2 - (player.getSize().x / 2), window.getSize().y/2 - (player.getSize().y/2));

    sf::Texture playerTexture;
    playerTexture.loadFromFile("./Assets/mango.png");
    player.setTexture(&playerTexture);

    //Define Background
    sf::RectangleShape background(sf::Vector2f(window.getSize().x,window.getSize().y));
    background.setPosition(0.0,0.0);

    sf::Texture backgroundTexture;
    backgroundTexture.loadFromFile("./Assets/background.png");
    background.setTexture(&backgroundTexture);

    //Define Tree
    sf::RectangleShape tree(sf::Vector2f(1102.0f,1250.0f));
    tree.setPosition(800.0,0.0);

    sf::Texture treeTexture;
    treeTexture.loadFromFile("./Assets/tree.png");
    tree.setTexture(&treeTexture);


//    sf::Font font;
//    font.loadFromFile("open-sans/OpenSans-Bold.ttf");
//    sf::Text text("Hello World",font,11);
//    text.setCharacterSize(32);
//    text.setPosition(window.getSize().x/2 - text.getGlobalBounds().width/2,
//
//                     window.getSize().y/2 - text.getGlobalBounds().height/2);



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

            window.draw(background);
            window.draw(tree);
            window.draw(player);
            window.display();

        }
        sf::Vector2f playerPos = player.getPosition();
        if((sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) &&  playerPos.x > 0.000000){
            player.move(-0.5f, 0.0f);
        }
        if((sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))  &&  playerPos.x < (window.getSize().x - player.getSize().x)){
            player.move(0.5f, 0.0f);
        }
        if((sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))  &&  playerPos.y > 0.000000){
            player.move(0.0f, -0.5f);
        }
        if((sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))  &&  playerPos.y < (window.getSize().y - player.getSize().y)){
            player.move(0.0f, 0.5f);
        }
        window.clear();
        window.draw(background);
        window.draw(tree);
        window.draw(player);
        window.display();


    }

    return 0;

}