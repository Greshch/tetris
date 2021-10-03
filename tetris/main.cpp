#include <SFML/Graphics.hpp>
using namespace sf;


int main()
{
	RenderWindow window(VideoMode(320, 480), "Tetris Game!");
	// ������� ���� ����������: �����������, ���� ������� ����
	while (window.isOpen())
	{
		// ������������ ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
			{
				// ����� ��������� ���
				window.close();
			}
		}
		// ��������� ����� ���� - �����
		window.clear(Color::White);
		// ��������� ����
		window.display();
	}
		
	
	return 0;
}