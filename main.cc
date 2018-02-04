
#include "turtle.hh"

#include <iostream>
using namespace std;

int main() {
	Color color(0,1,1);
	PSTurtle t(500, 500);
	t.setup();
	t.set_pendown(true);
	//t.pencolor(color);		//cout << "color is: " << t.get_color() << endl;
	t.pencolor_gray(0.9);
	t.pensize(3);
	t.forward(100)
		.left(90)
		.forward(100)
		.left(90)
		.forward(100)
		.left(90)
		.forward(100)
		.set_pendown(false)
		.right(45)
		.forward(100)
		.set_pendown(true)
		.backward(200)
		.right(90)
		.backward(200)
		.right(90)
		.backward(200)
		.right(90)
		.backward(200);

	return 0;
}

