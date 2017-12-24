#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

	sf::Window window(sf::VideoMode(1200, 1000), "Marching Cubes");
	
	glLoadIdentity();
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
	glOrtho(-5, 5, -5, 5, -20, 20);
	glDepthRange(-20, 20);
	glClearDepth(1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	while (window.isOpen()) {
        sf::Event Event; 
		while (window.pollEvent(Event)) {
			if (Event.type == sf::Event::Closed) // co sa ma
				window.close();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
				glRotatef(1, 1, 0, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
				glRotatef(-1, 1, 0, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
				glRotatef(1, 0, 1, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
				glRotatef(-1, 0, 1, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
				glRotatef(1, 0, 0, 1);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
				glRotatef(-1, 0, 0, 1);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
				glScaled(1, 1, 1);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
				glScaled(-1, 0, 0);
		}
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glBegin(GL_TRIANGLES);
        glColor3d(1, 0, 0);
        glVertex3d(0, 0, 1);
        glVertex3d(1, 0, 1);
		glVertex3d(0, 1, 1);

		glColor3d(0, 1, 0);
        glVertex3d(0, 0, 0);
        glVertex3d(1, 1, 0);
		glVertex3d(1, 0, 0);
        glEnd();

		window.display(); // zobrazenie

	}


}