#include "Main.hpp"

int main()
{
    std::cout << "Hello World Marlon!" << std::endl;
    // float x = 0.f;
    // int y = 0.f;
    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works! Yeah!!");
    sf::CircleShape shape(window.getSize().x/3);

    shape.setFillColor(sf::Color::White);

    sf::Texture shapeTexture;
    shapeTexture.loadFromFile("content/sfml.png");
    shape.setTexture(&shapeTexture);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
			    window.close();
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
            shape.move(0.5f, 0);
		}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
            shape.move(-0.5f, 0);
		}

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
