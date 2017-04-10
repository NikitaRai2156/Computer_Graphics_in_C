#include<graphics.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main(){
    int dx, dy, x, y, p, x1, y1, x2, y2;
    int gd, gm;

    printf("Enter x1, y1 and x2, y2: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "");

    dx = x2 - x1;
    dy = y2 - y1;
    p = 2*dy - dx;

    x = x1;
    y = y1;
    putpixel(x, y, WHITE);

    while(x <= x2){
        if(p < 0){
            x = x + 1;
            y = y;
            p = p + 2*dy;
        }
        else{
            x = x + 1;
            y = y + 1;
            p = p + 2*dy - 2*dx;
        }
        putpixel(x, y, WHITE);
    }
    getch();
    closegraph();
}
