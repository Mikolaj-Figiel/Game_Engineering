#include <SFML/Graphics.hpp>

int main(){
  sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
  sf::RectangleShape box(sf::Vector2f(200.f, 200.f));
  box.setFillColor(sf::Color::Red);
  sf::CircleShape shape(10.f);
  shape.setFillColor(sf::Color::Blue);
  shape.setPosition(sf::Vector2f(50.f, 40.f));
  sf::CircleShape shape2(10.f);
  shape2.setFillColor(sf::Color::Blue);
  shape2.setPosition(sf::Vector2f(150.f, 40.f));
  sf::RectangleShape mouth(sf::Vector2f(100.f, 50.f));
  mouth.setFillColor(sf::Color::Green);
  mouth.setPosition(sf::Vector2f(40.f, 120.f));

  while (window.isOpen()){
      sf::Event event;
      while (window.pollEvent(event)){
      if (event.type == sf::Event::Closed){
        window.close();
      }
    }
    window.clear();
    window.draw(box);
    window.draw(shape);

    // you cannot draw a shape, move it, then draw it again and expect the first one to stay there.
    // you need multiple objects with the same properties to do that
    //shape.setPosition(sf::Vector2f(150.f, 40.f));

    window.draw(shape2);
    window.draw(mouth);
    window.display();
  }
  return 0;
}