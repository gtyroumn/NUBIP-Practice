#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    double length;

    printf("Enter the coordinates of the origin of the vector (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the end of the vector (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    int dx = x2 - x1;
    int dy = y2 - y1;

    length = sqrt(dx * dx + dy * dy);

    printf("The length of the vector: %.6lf\n", length); 

    return 0;
}