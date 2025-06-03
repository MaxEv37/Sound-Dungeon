#include "../include/game.hpp"

int main() 
{
	const int WIDTH = 800;
	const int HEIGHT = 600;

	sf::RenderWindow window(sf::VideoMode({ WIDTH, HEIGHT }), "Dungeon Renderer");

	Game game(window);	

	// Change to true to toggle Developer Mode. Alternatively, in the help menu, press the Enter key, 
	// then the P key. That will enable developer mode.
	game.run(false);

	return 0;
}