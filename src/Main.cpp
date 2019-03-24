#include "Main.hpp"

int main()
{
    std::cout << "Hello World Marlon!" << std::endl;

    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works! Yeah!!");
    sf::CircleShape shape(window.getSize().x/4);

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
            float xPos = shape.getGlobalBounds().width + shape.getPosition().x;
            if( xPos <= (float) window.getSize().x)
                shape.move(0.5f, 0.f);
		}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
            if(shape.getPosition().x >= 0)
                shape.move(-0.5f, 0.f);
		}

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
            float yPos = shape.getGlobalBounds().height + shape.getPosition().y;
            if( yPos <= (float) window.getSize().y)
                shape.move(0.f, 0.5f);
		}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            if(shape.getPosition().y >= 0)
                shape.move(0.f, -0.5f);
		}

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
