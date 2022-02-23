#include <SFML/Graphics.hpp>
#include <iostream>
#include "ship.h"

sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
sf::RectangleShape box(sf::Vector2f(200.f, 200.f));
sf::Texture spritesheet;
sf::Sprite invader;
std::vector<Ship *> ships;




void Load() {
	if (!spritesheet.loadFromFile("res/img/invaders_sheet.png")) {
		std::cerr << "Failed to load spritesheet!" << std::endl;
	}
	invader.setTexture(spritesheet);
	invader.setTextureRect(sf::IntRect(sf::Vector2(0, 0), sf::Vector2(32, 32)));
	Invader* inv = new Invader(sf::IntRect(sf::Vector2(0, 0), sf::Vector2(32, 32)), { 100,100 });
	ships.push_back(inv);
	
}

void Update(sf::RenderWindow& window) {
    // Update Everything
	static sf::Clock clock;
	float dt = clock.restart().asSeconds();
	for (auto& s : ships) {
		s->Update(dt);
	};
}

void Render(sf::RenderWindow &window) {
    // Draw Everything
	window.draw(box);
	window.draw(invader);
	for (const auto s : ships) {
		window.draw(*s);
	}
}


int main() {
	//initialise and load
	
	box.setFillColor(sf::Color::Black);
	


	Load();
	while (window.isOpen()) {
		//float dt = clock.restart().asSeconds();
		window.clear();
		Update(window);
		Render(window);
		window.display();
		//Wait for Vsync
	}
	//Unload and shutdown
}