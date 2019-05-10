/*
 *  PlayPhysics.h
 *  Testbed for Box2D (physics) experiments
 *
 *  Created by Marcelo Cohen on 09/13.
 *  Copyright 2013 PUCRS. All rights reserved.
 *
 */

#ifndef PLAY_PHYSICS_H_
#define PLAY_PHYSICS_H_

#include "GameState.hpp"
#include "InputManager.hpp"
#include "Sprite.hpp"

class FirstMap : public cgf::GameState
{
    public:
        void init();
        void cleanup();

        void pause();
        void resume();

        void handleEvents(cgf::Game* game);
        void update(cgf::Game* game);
        void draw(cgf::Game* game);

        // Implement Singleton Pattern
        static FirstMap* instance()
        {
            return &m_FirstMap;
        }

    protected:
        FirstMap() {}

    private:
        static FirstMap m_FirstMap;

        cgf::InputManager* im;

        int bol_x;
        int bol_y;

        bool firstTime;

        int x, y;
        int dirx, diry;

        cgf::Sprite background;
        cgf::Sprite ball;

        sf::RenderWindow* screen;
        sf::Font font;
        sf::Text text;
        //sf::Music musica;

        void carregarTimes();

        void posicionarJogadores();

};

#endif
