#include <SFML/Graphics.hpp>
#include <iostream>
#include "Cashier.h"
#include "Customer.h"
#include "Menu.h"
#include "Menu2.h"

using namespace std;

std::vector< sf::CircleShape > line;
std::vector< int > arrangements;
int arr[9];
Cashier t;

sf::CircleShape SFMLEnqueue(char priority){

    int position;
    // Sit in Random Position
    while(true){
        position = rand() % 9 + 1;
        if(!arr[position]){
            arr[position]=1;
            break;
        }
    }
    int id = rand() % 200 + 1;
    opType operation = deposit;
    sf::CircleShape client(50);

    Customer *customer = new Customer(id, operation, priority);

    //Define Color by Priority
    switch (priority){
        case 'A':
            client.setFillColor(sf::Color::Red);
            break;
        case 'B':
            client.setFillColor(sf::Color::Blue);
            break;
        case 'C':
            client.setFillColor(sf::Color::Green);
            break;
        case 'D':
            client.setFillColor(sf::Color::Yellow);
            break;

    }

    switch (position){
        case 1:
            client.setPosition(260.0f,425.0f);
            break;
        case 2:
            client.setPosition(460.0f,425.0f);
            break;
        case 3:
            client.setPosition(660.0f,425.0f);
            break;
        case 4:
            client.setPosition(260.0f,620.0f);
            break;
        case 5:
            client.setPosition(460.0f,620.0f);
            break;
        case 6:
            client.setPosition(660.0f,620.0f);
            break;
        case 7:
            client.setPosition(260.0f,820.0f);
            break;
        case 8:
            client.setPosition(460.0f,820.0f);
            break;
        case 9:
            client.setPosition(660.0f,820.0f);
            break;
    }
    int pos = t.Enqueue(customer);
    cout<< pos <<endl;
    line.insert(line.begin() + pos, client);
    arrangements.insert(arrangements.begin() + pos,pos);
    return client;
}

int main() {


    //Define Window
    sf::RenderWindow window(sf::VideoMode(2000,1230),"Awesome");
    Menu menu(window.getSize().x, window.getSize().y);
    Menu2 menu2(window.getSize().x, window.getSize().y);
    bool bankView = true;
    bool menu1view = false;
    bool menu2view = false;

    //Define Background
    sf::RectangleShape background(sf::Vector2f(window.getSize().x,window.getSize().y));
    background.setPosition(0.0,0.0);

    sf::Texture backgroundTexture;
    backgroundTexture.loadFromFile("./Assets/bank.jpeg");
    background.setTexture(&backgroundTexture);


    while(window.isOpen()){



        sf::Event event;

        while(window.pollEvent(event)) {

            switch (event.type){
                case sf::Event::KeyPressed:

                    switch (event.key.code)
                    {
                        case sf::Keyboard::Up:
                            if(!bankView){
                                if(menu1view)
                                    menu.MoveUp();
                                if(menu2view)
                                    menu2.MoveUp();
                            }
                            break;

                        case sf::Keyboard::Down:
                            if(!bankView){
                                if(menu1view)
                                    menu.MoveDown();
                                if(menu2view)
                                    menu2.MoveDown();
                            }
                            break;

                        case sf::Keyboard::Return:
                            if(!bankView){
                                if(menu1view){
                                    switch (menu.GetPressedItem())
                                    {
                                        case 0:
                                            if(line.size() != 9){
                                                bankView = false;
                                                menu1view = false;
                                                menu2view = true;
                                            }else{
                                                cout<<"Bank is FULL!!"<<endl;
                                            }
                                            break;
                                        case 1:
                                            if(line.size() != 0){
                                                t.Dequeue();
                                                line.erase(line.begin());
                                                arr[arrangements[0]] = 0;
                                                arrangements.erase(arrangements.begin());
                                            }else{
                                                cout<<"Bank is EMPTY"<<endl;
                                            }
                                            bankView = true;
                                            menu1view = false;
                                            break;
                                        case 2:
                                            bankView = true;
                                            menu1view = false;
                                            break;
                                    }
                                }
                            }

                            break;
                        case sf::Keyboard::RShift:
                            if(!bankView){
                                if(menu2view){
                                    switch (menu2.GetPressedItem())
                                    {
                                        case 0:
                                            std::cout << "Enqueue Priority A" << std::endl;
                                            bankView = true;
                                            menu2view = false;
                                            SFMLEnqueue('A');
                                            break;
                                        case 1:
                                            std::cout << "Enqueue Priority B" << std::endl;
                                            bankView = true;
                                            menu2view = false;
                                            SFMLEnqueue('B');
                                            break;
                                        case 2:
                                            std::cout << "Enqueue Priority C" << std::endl;
                                            bankView = true;
                                            menu2view = false;
                                            SFMLEnqueue('C');
                                            break;
                                        case 3:
                                            std::cout << "Enqueue Priority D" << std::endl;
                                            bankView = true;
                                            menu2view = false;
                                            SFMLEnqueue('D');
                                            break;
                                    }
                                }
                            }
                    }

                    break;
                case sf::Event::Closed:{
                    window.close();
                    break;
                }

            }

            window.clear();

            if(bankView){
                window.draw(background);
                for (sf::CircleShape client : line){
                    window.draw(client);
                }
            }else if(menu1view){
                menu.draw(window);
            }else if(menu2view){
                menu2.draw(window);
            }

            window.display();

        }

        if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
            if(bankView){
                if((sf::Mouse::getPosition(window).x >1255 && sf::Mouse::getPosition(window).x <1735) &&
                   sf::Mouse::getPosition(window).y > 640 && sf::Mouse::getPosition(window).y <990
                        ){
                    bankView = false;
                    menu1view = true;

                }
            }

        }

        window.clear();
        if(bankView){
            window.draw(background);
            for (sf::CircleShape client : line){
                window.draw(client);
            }

        }else if(menu1view){
            menu.draw(window);
        }else if(menu2view){
            menu2.draw(window);
        }

        window.display();


    }

    return 0;

}