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
void isSquare(rect r);

int main(){
    rect re;
    point z, centerPoint;
    int t,size;

    scanf("%d",&t);
    size = t;
    point zList[size];
    rect reList[size];

    while(t--){
        zList[t] = getZXY();
        reList[t] = getRXY();
        // scanf("%d %d",&re.brX, &re.brY);
    //     scanf("%d %d",&re.br.x, &re.br.y);
    }
    // z.x = 5;
    // z.y = 4;
    // re.br.x = 11;
    // re.br.y = 19;
    // re.brX = 11;
    // re.brY = 19;
    // re.length = re.brX-z.x;
    // re.width = re.brY-z.y;
    printf("Output:\n");
    for(int i = size-1;i>=0;i--){      
        display(zList[i],reList[i]);
        printf("\n");
        isSquare(reList[i]);
        printf("AREA: %d\n",area(zList[i],reList[i]));
        printf("PERIMETER: %d\n",perimeter(zList[i],reList[i]));
        centerPoint = center(zList[i],reList[i]);
        printf("CENTER POINT: (%.2f,%.2f)\n",centerPoint.cX,centerPoint.cY);
    }
    // display(z,re);
    // printf("\n");
    // isSquare(re);
    // printf("AREA: %d\n",area(z,re));
    // printf("PERIMETER: %d\n",perimeter(z,re));
    // centerPoint = center(z,re);
    // printf("CENTER POINT: (%.2f,%.2f)\n",centerPoint.cX,centerPoint.cY);

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
    // printf("ZXY %d %d\n",z.x,z.y);
    return z;
}
rect getRXY(){
    rect r;
    scanf("%d %d",&r.brX,&r.brY);
    // printf("RXY %d %d\n",r.brX,r.brY);
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
void isSquare(rect r){
    if(r.length==r.width)
        printf("SQUARE\n");
    else
        printf("RECTANGLE\n");
}
