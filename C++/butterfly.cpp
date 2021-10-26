// C++ code to Create a Butterfly
// themed Fractal using Graphics

#include <math.h>
#include <stdlib.h>
#include <winbgim.h>

#define Y 1080
#define X 1920

// c is defined as the angle between each
// iterative lines, changing this would result
// in different and interesting patterns.
#define c 5 * M_PI / 7

// colorVal is used to provide different colors
// for each iterating point/line in the cycle.
int colorVal = 0;

// The core function in the program which is
// recursive in nature and terminates when the
// line size is less than 0.1 pixels.
int Pyt_Tree(float x, float y, float r, float ang)
{

	// Max iteration condition so as to increase
	// the accuracy of the fractal pattern.
	// The closer it is to zero the higher the
	// details but would cost more processing time.
	if (r < 0.1) {

		// combination of type casting and iteration
		// so as to provide a Greatest Integer Function
		// sort of manipulation for the color input.
		setcolor((colorVal++ % 15000) / 1000 + 1);

		// Conversion of the parametric coordinates
		// of the points to the Argand coordinates
		// while displaying them.
		line(x, y, x - r * sin(ang), y - r * cos(ang));

		return 0;
	}

	float r_n;

	if (c > M_PI / 4) {
		r_n = sin(c);
	}
	else {
		r_n = cos(c);
	}

	// Recursive calling of the Pyt_Tree() function
	// to get towards the end of the branch of the
	// fractal tree.
	Pyt_Tree(x - r * sin(ang), y - r * cos(ang),
			r / (2 * r_n), (ang + c));
	Pyt_Tree(x - r * sin(ang), y - r * cos(ang),
			r / (2 * r_n), (ang - c));

	return 0;
}

// Driver code
int main()
{
	initwindow(X, Y);
	Pyt_Tree(X / 2, Y, Y * 0.9, 0);
	getch();
	closegraph();
	return 0;
}

