#include <stdio.h>

struct Rectangle{
    float width;
    float height;
};

float area(struct Rectangle rect){
    return rect.width * rect.height;
}

float perimeter(struct Rectangle rect){
    return 2 * (rect.width + rect.height);
}

float areaPtr(struct Rectangle *rect){
    return rect->width * rect->height;
}

float perimeterPtr(struct Rectangle *rect){
    return 2 * (rect->width + rect->height);
}

int main(){
    struct Rectangle rect;
    
    scanf("%f", &rect.width);
    scanf("%f", &rect.height);
    
    printf("Square: %.2f\n", area(rect));
    printf("Perimeter: %.2f\n", perimeter(rect));
    
    printf("Square: %.2f\n", areaPtr(&rect));
    printf("Perimeter: %.2f\n", perimeterPtr(&rect));
    
    return 0;
}