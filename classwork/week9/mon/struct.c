#include <stdio.h>

typedef struct{
	double x;
	double y;
}Point;

void print_p(Point p) {
    printf("(%.2f,%.2f)\n", p.x, p.y);
}

int main(void) {
    Point a = {1.3, 3.55534};
    Point b;
    b.x = 3.423443;
    b.y = -10.456;
    print_p(a);
    print_p(b);
    return(0);

}
