#include <stdio.h>
#include <SFML/Graphics.hpp>
using namespace sf;


int main()
{
	RenderWindow window(VideoMode(320, 480), "Tetris Game!");
	// Создание и загрузка текстуры
	//Image img; //создаем объект Image (изображение)
	//img.loadFromFile("C:\\Users\\user\\projects\\tetris\\images\\tiles.png");//загружаем в него фай
	Texture texture;
	//texture.loadFromFile("C:\\Users\\user\\projects\\tetris\\images\\tiles.png");
	texture.loadFromFile("..\\images\\tiles.png");
	

	// Создание спрайта
	Sprite sprite(texture);
	
	// Главный цикл приложения: выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем события в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
			{
				// тогда закрываем его
				window.close();
			}
		}
		// Установка цвета фона - белый
		window.clear(Color::White);

		// Отрисовка спрайта
		window.draw(sprite);

		// Отрисовка окна
		window.display();
	}
		
	
	return 0;
}