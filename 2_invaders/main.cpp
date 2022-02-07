#include <SFML/Graphics.hpp>


void Update(double dt) {
    // Update Everything
}

void Render() {
    // Draw Everything
}


int main(){
  sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!");
 
  while (window.isOpen()){
      sf::Event event;
      while (window.pollEvent(event)){
      if (event.type == sf::Event::Closed){
        window.close();
      }
    }
    window.clear();

    // you cannot draw a shape, move it, then draw it again and expect the first one to stay there.
    // you need multiple objects with the same properties to do that
    //shape.setPosition(sf::Vector2f(150.f, 40.f));


    window.display();
  }
  return 0;
}