#include <stdio.h>
#include <SFML/Graphics.hpp>
using namespace sf;


int main()
{
	RenderWindow window(VideoMode(320, 480), "Tetris Game!");
	// �������� � �������� ��������
	//Image img; //������� ������ Image (�����������)
	//img.loadFromFile("C:\\Users\\user\\projects\\tetris\\images\\tiles.png");//��������� � ���� ���
	Texture texture;
	//texture.loadFromFile("C:\\Users\\user\\projects\\tetris\\images\\tiles.png");
	texture.loadFromFile("..\\images\\tiles.png");
	

	// �������� �������
	Sprite sprite(texture);
	
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

		// ��������� �������
		window.draw(sprite);

		// ��������� ����
		window.display();
	}
		
	
	return 0;
}