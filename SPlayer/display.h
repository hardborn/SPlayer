#pragma once
#include "SDL.h"
#include <array>
#include <memory>

struct SDL
{
	SDL();
	~SDL();
};

class Display
{
public:
	Display(const unsigned width,const unsigned height);
	
	// Copy frame to display
	void refresh(std::array<uint8_t*, 3> planes, std::array<size_t, 3> pitches);

	// Handle events
	void input();

	bool get_quit();
	bool get_play();

private:
	bool quit_{ false };
	bool play_{ false };

	SDL sdl_;
	std::unique_ptr<SDL_Window, void(*)(SDL_Window*)> window_;
	std::unique_ptr<SDL_Renderer, void(*)(SDL_Renderer*)> renderer_;
	std::unique_ptr<SDL_Texture, void(*)(SDL_Texture*)> texture_;
	SDL_Event event_;
};

