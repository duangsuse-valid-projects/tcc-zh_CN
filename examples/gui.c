#!./tcc -run -lX11
#include <stdlib.h>
#include <stdio.h>
#include <X11/Xlib.h>

/* Yes, TCC can use X11 too ! */

int main(int argc, char **argv)
{
    Display *display;
    Screen *screen;

    display = XOpenDisplay("");
    if (!display) {
        fprintf(stderr, "无法打开X11显示!\n");
        exit(1);
    }
    printf("X11显示已经打开.\n");
    screen = XScreenOfDisplay(display, 0);
    printf("显示宽 %dpx\n高 %dpx\n颜色深 %dbit\n",
           screen->width,
           screen->height,
           screen->root_depth);
    XCloseDisplay(display);
    return 0;
}
