#include <SFML/Graphics.hpp>
#include <iostream>

sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
sf::Texture spritesheet;
sf::Sprite invader;



void Load() {
	if (!spritesheet.loadFromFile("res/img/invaders_sheet.png")) {
		std::cerr << "Failed to load spritesheet!" << std::endl;
	}
	invader.setTexture(spritesheet);
	invader.setTextureRect(sf::IntRect(sf::Vector2(0, 0), sf::Vector2(32, 32)));
}

void Update(double dt) {
    // Update Everything
}

void Render() {
    // Draw Everything
	window.draw(invader);
}


int main() {
	//initialise and load

	bool shouldQuit = false;
	float dt;

	Load();
	while (!shouldQuit) {
		//Caluclate dt
		//Update(dt);
		//Render(window);
		//Wait for Vsync
	}
	//Unload and shutdown
}