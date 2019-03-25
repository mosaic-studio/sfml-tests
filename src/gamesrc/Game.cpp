#include "include/Game.hpp"
#include "include/GameState.hpp"

namespace cgf
{
	using namespace std;

	Game::Game(unsigned int minFPS, unsigned int maxFPS){
		this->minFPS = minFPS;
		this->maxFPS = maxFPS;
	}

	void Game::init(std::string title, unsigned int height, unsigned int width, bool fullScreen){
		this->height = height;
		this->width = width;
		this->window = new sf::RenderWindow(sf::VideoMode(width, height), title);
		this->view = window->getView();
		this->fullScreen = fullScreen;
		running = true;

		cout << "Game Started!" << endl;
	}

	void Game::changeState(cgf::GameState* state){

	}

	void Game::handleEvents(){

	}

	void Game::update(){

	}
	void Game::draw(){

	}
	void Game::clean(){
		this->window->clear();
	}
} // cgf
