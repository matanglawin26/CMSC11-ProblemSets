#include <stdio.h>

typedef struct {
    unsigned int x, y;
    float cX, cY;
}point;

typedef struct{
    int brX, brY, length, width;
}rect;

void display(point z, rect r);
point getZXY();
rect getRXY();
int area(point z,rect r);
int perimeter(point z, rect r);
point center(point z,rect r);
void isSquare(point z,rect r);

int main(){
    rect re;
    point z, centerPoint;
    int t,size;

    printf("Enter number of test cases: ");
    scanf("%d",&t);
    point zList[t];
    rect reList[t];

    for(int i = 0; i<t;i++){        
        zList[i] = getZXY();
        reList[i] = getRXY();
    }

    printf("\nOutput:\n");
    for(int i = 0;i < t;i++){      
        display(zList[i],reList[i]);
        printf("\n");
        isSquare(zList[i],reList[i]);
        printf("AREA: %d\n",area(zList[i],reList[i]));
        printf("PERIMETER: %d\n",perimeter(zList[i],reList[i]));
        centerPoint = center(zList[i],reList[i]);
        printf("CENTER POINT: (%.2f, %.2f)\n",centerPoint.cX,centerPoint.cY);
    }

    return 0;
}

void display(point z, rect r){
    printf("------------------------------------------------\n");
    for(int i = 0;i <= r.brY;i++){
        for(int j = 0;j <= r.brX;j++){
            if(i>= z.y && j>= z.x){
                if(i==z.y || i==r.brY)
                    printf("#");
                else{
                    if(j==z.x||j==r.brX)
                        printf("#");
                    else
                        printf(" ");
                }
            }else
                printf(" ");
        }
        printf("\n");
    }
}
point getZXY(){
    point z;
    scanf("%d %d",&z.x, &z.y);
    return z;
}
rect getRXY(){
    rect r;
    scanf("%d %d",&r.brX,&r.brY);
    return r;
}
int area(point z, rect r){    
    int area;
    r.length = r.brX-z.x;
    r.width = r.brY-z.y;
    area = r.length*r.width;
    return area;
}
int perimeter(point z,rect r){
    int perim;      
    r.length = r.brX-z.x;
    r.width = r.brY-z.y;
    perim = (2*r.length)+(2*r.width);
    return perim;
}
point center(point z,rect r){
    point center;
    center.cX = ((float)z.x+(float)r.brX)/2;
    center.cY = ((float)z.y+(float)r.brY)/2;    
    return center;
}
void isSquare(point z,rect r){    
    r.length = r.brX-z.x;
    r.width = r.brY-z.y;
    if(r.length==r.width)
        printf("SQUARE\n");
    else
        printf("RECTANGLE\n");
}
