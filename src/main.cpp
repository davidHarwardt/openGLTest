#include <iostream>

#define GLEW_STATIC
#include "gl/glew.h"

#define SDL_MAIN_HANDLED
#include "SDL2/SDL.h"

#include "math/math.h"
#include "utils/loader/loader.h"

#define WIN_WIDTH 800
#define WIN_HEIGHT 600

void setup()
{
    std::string content;

    std::cout << "file-----------" << std::endl;

    if(Loader::readFile("test.txt", &content))
    {
        std::cout << content << std::endl;
    }

    std::cout << "file-----------" << std::endl;
}

void draw()
{
    
}

int main(int argc, char** args)
{
    std::cout << "Test" << std::endl;

    SDL_Window* window = SDL_CreateWindow("Test", 100, 100, WIN_WIDTH, WIN_HEIGHT, SDL_WINDOW_OPENGL);
    SDL_GLContext context = SDL_GL_CreateContext(window);

    setup();

    bool running = true;

    while (running)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            if(event.type == SDL_KEYDOWN)
            {
                switch(event.key.keysym.sym)
                {
                    case SDLK_ESCAPE:
                        running = false;
                        break;

                    case SDLK_t:
                        std::cout << "test" << std::endl;
                        break;

                    default:
                        break;
                }
            }
            else if(event.type == SDL_QUIT)
            {
                running = false;
            }

            glViewport(0, 0, WIN_WIDTH, WIN_HEIGHT);
            glClearColor(0, 0.2, 0.2, 1.0);
            glClear(GL_COLOR_BUFFER_BIT);

            draw();

            SDL_GL_SwapWindow(window);
        }
    }
    
    std::cout << "closing..." << std::endl;

    return 0;
}