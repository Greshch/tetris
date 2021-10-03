#include <SFML/Graphics.hpp>
using namespace sf;


int main()
{
	RenderWindow window(VideoMode(320, 480), "Tetris Game!");
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
		// Отрисовка окна
		window.display();
	}
		
	
	return 0;
}