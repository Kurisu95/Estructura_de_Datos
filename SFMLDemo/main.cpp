#include <SFML/Graphics.hpp>
#include "Menu.h"
#include <iostream>

using namespace std;
std::vector< sf::RectangleShape > mangos;
std::vector< sf::RectangleShape > mangos2;

sf::RectangleShape addSFMLMango1(int weight, int position){


    sf::RectangleShape mango;
    mango.setSize(sf::Vector2f(100, 130));
    mango.setFillColor(sf::Color(255, 110, 0));
    switch (position){
        case 1:
            mango.setPosition(100.0f,700.0f);
            break;
        case 2:
            mango.setPosition(80.0f,450.0f);
            break;
        case 3:
            mango.setPosition(250.0f,550.0f);
            break;
        case 4:
            mango.setPosition(350.0f,350.0f);
            break;
        case 5:
            mango.setPosition(600.0f,450.0f);
            break;
        case 6:
            mango.setPosition(700.0f,600.0f);
            break;
    }

    mangos.push_back(mango);
    return mango;
}

sf::RectangleShape addSFMLMango2(int weight, int position){


    sf::RectangleShape mango;
    mango.setSize(sf::Vector2f(100, 130));
    mango.setFillColor(sf::Color(255, 110, 0));
    switch (position){
        case 1:
            mango.setPosition(100.0f,700.0f);
            break;
        case 2:
            mango.setPosition(80.0f,450.0f);
            break;
        case 3:
            mango.setPosition(250.0f,550.0f);
            break;
        case 4:
            mango.setPosition(350.0f,350.0f);
            break;
        case 5:
            mango.setPosition(600.0f,450.0f);
            break;
        case 6:
            mango.setPosition(700.0f,600.0f);
            break;
    }

    mangos2.push_back(mango);
    return mango;
}

int main() {


    //Define Window
    sf::RenderWindow window(sf::VideoMode(2000,1230),"Awesome");
    Menu menu(window.getSize().x, window.getSize().y);
    Menu menu2(window.getSize().x, window.getSize().y);
    bool treeView = true;
    bool menu1view = false;
    bool menu2view = false;
    bool menu3view = false;

    //Define Background
    sf::RectangleShape background(sf::Vector2f(window.getSize().x,window.getSize().y));
    background.setPosition(0.0,0.0);

    sf::Texture backgroundTexture;
    backgroundTexture.loadFromFile("./Assets/background.png");
    background.setTexture(&backgroundTexture);

    //Define Tree
    sf::RectangleShape tree(sf::Vector2f(902.0f,1050.0f));
    tree.setPosition(10.0,200.0);

    sf::Texture treeTexture;
    treeTexture.loadFromFile("./Assets/tree.png");
    tree.setTexture(&treeTexture);

    //Define Second Tree
    sf::RectangleShape tree2(sf::Vector2f(902.0f,1050.0f));
    tree2.setPosition(1000.0,200.0);

    sf::Texture treeTexture2;
    treeTexture2.loadFromFile("./Assets/tree.png");
    tree2.setTexture(&treeTexture);

    //Input text
    sf::Font font;
    font.loadFromFile("open-sans/OpenSans-Bold.ttf");
    sf::String playerInput;
    sf::Text playerText("",font,30);
    playerText.setPosition(60,300);
    playerText.setColor(sf::Color::Black);

    //Mango Texture
    sf::Texture mangoTexture;
    mangoTexture.loadFromFile("./Assets/mango.png");

    while(window.isOpen()){



        sf::Event event;

        while(window.pollEvent(event)) {

            switch (event.type){
                case sf::Event::KeyPressed:

                    switch (event.key.code)
                    {
                        case sf::Keyboard::Up:
                            if(!treeView){
                                if(menu1view)
                                    menu.MoveUp();
                                if(menu2view)
                                    menu.MoveUp();
                                if(menu3view)
                                    menu.MoveUp();
                            }
                            break;

                        case sf::Keyboard::Down:
                            if(!treeView){
                                if(menu1view)
                                    menu.MoveDown();
                                if(menu2view)
                                    menu.MoveDown();
                                if(menu3view)
                                    menu.MoveDown();
                            }
                            break;

                        case sf::Keyboard::Return:
                            if(!treeView){
                                switch (menu.GetPressedItem())
                                {
                                    case 0:
                                        std::cout << "Adding Fruit" << std::endl;
                                        switch (mangos.size()){
                                            case 0:{
                                                if(menu1view)
                                                    addSFMLMango1(10,1);
                                                if(menu2view)
                                                    addSFMLMango1(10,1);
                                                if(menu3view)
                                                    menu.MoveDown();

                                            }
                                                break;
                                            case 1:{
                                                addSFMLMango1(10,2);
                                            }
                                                break;
                                            case 2:{
                                                addSFMLMango1(10,3);
                                            }
                                                break;
                                            case 3:{
                                                addSFMLMango1(10,4);
                                            }
                                                break;
                                            case 4:{
                                                addSFMLMango1(10,5);
                                            }
                                                break;
                                            case 5:{
                                                addSFMLMango1(10,6);
                                            }
                                                break;
                                            default:
                                                cout << "LIMIT REACHED!!"<<endl;
                                                break;
                                        }
                                        treeView = true;
                                        menu1view = false;
                                        menu2view = false;

                                        break;
                                    case 1:
                                        std::cout << "Inserting Fruit" << std::endl;
                                        break;
                                    case 2:
                                        std::cout << "Deleting Fruit" << std::endl;
                                        if(mangos.size())
                                            mangos.erase(mangos.begin());
                                        treeView = true;
                                        break;
                                    case 3:
                                        std::cout << "Merging Mango Trees" << std::endl;
                                        break;
                                    case 4:
                                        treeView = true;
                                        break;
                                }
                            }

                            break;
                    }

                    break;
                case sf::Event::TextEntered:{
                    if(event.text.unicode < 128 && menu3view){
                        playerInput +=event.text.unicode;
                        playerText.setString(playerInput);
                    }
                    break;
                }
                case sf::Event::Closed:{
                    window.close();
                    break;
                }

            }

            window.clear();

            if(treeView){
                window.draw(background);
                window.draw(tree);
                window.draw(tree2);
                for (sf::RectangleShape mango : mangos){
                    mango.setTexture(&mangoTexture);
                    window.draw(mango);
                }
                window.draw(playerText);
            }else if(menu3view){
                menu.draw(window);
            }else{
                menu.draw(window);
            }

            window.display();

        }

        if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
            if((sf::Mouse::getPosition(window).x >50 && sf::Mouse::getPosition(window).x <900) &&
                    sf::Mouse::getPosition(window).y > 300 && sf::Mouse::getPosition(window).y <800
            ){
                treeView = false;
                menu1view = true;
                cout << "clicking first tree"<<endl;

            }
            if((sf::Mouse::getPosition(window).x >1050 && sf::Mouse::getPosition(window).x <1900) &&
               sf::Mouse::getPosition(window).y > 300 && sf::Mouse::getPosition(window).y <800
                    ){
                treeView = false;
                menu1view = true;
                cout << "clicking second tree"<<endl;
            }

        }

        window.clear();
        if(treeView){
            window.draw(background);
            window.draw(tree);
            window.draw(tree2);
            for (sf::RectangleShape mango : mangos){
                mango.setTexture(&mangoTexture);
                window.draw(mango);
            }
            window.draw(playerText);

        }else if(menu3view){
            menu.draw(window);
        }
        else{
            menu.draw(window);
        }

        window.display();


    }

    return 0;

}