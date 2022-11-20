#include <stdio.h>

typedef struct
{
	int x;
	int y;
}Point;

void print_points(Point *boint);

int main(void)
{
	int i;
	Point points[10];

	for (i = 0; i < 10; i++)
	{
		points[i].x = i;
		points[i].y = 10 - i;
	}
	print_points(points);
	return (0);
}

void print_points(Point *boint)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("p%d = (x:%d, y:%d)\n", i, boint[i].x, boint[i].y);
	}
}
