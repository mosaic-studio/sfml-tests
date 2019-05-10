#include "include/FirstMap.hpp"
#include "include/InputManager.hpp"
#include <iostream>

namespace cgf
{
using namespace std;

	FirstMap FirstMap::m_FirstMap;

	void FirstMap::init(){
		im = cgf::InputManager::instance();
		im->addKeyInput("left", sf::Keyboard::Left);
    	im->addKeyInput("right", sf::Keyboard::Right);
	}

	void FirstMap::handleEvents(cgf::Game* game){
		sf::Event event;
    	sf::View view = screen->getView();
	}

}