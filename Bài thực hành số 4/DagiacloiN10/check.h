#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//kiem tra diem C co nam ben trai doan thang 
int checkAB(Point A, Point B, Point C){
    int val = (B.y - A.y)*(C.x - B.x) - (B.x - A.x) * (C.y - B.y);
    if(val == 0)
        return 0;   
    return (val > 0) ? 1 : 2;  
        /*ham tra ve 0 neu C nam tren AB
          ham tra ve 1 neu C nam ben trai AB
          ham tra ve 2 neu C nam ben phai AB*/
}

//Kiem tra da giac co phai la da giac loi hay khong
void isCovex(Point points[], int n) {
    if(n < 3)
        return; //So dinh < 3 tra ve khong phai da giac loi.

    //Tim diem cuc tri ben trai
    int trai = 0;
    for(int i = 1; i < n; i++) {
        if(points[i].x < points[trai].x);
            trai = i;
    }
    int p = trai, q;
    int count = 0;
    do {
        count++;
        q = (p + 1)%n;
        for(int i = 0; i < n; i++) {
            if(checkAB(points[p], points[i], points[q]) == 2)
                q = i;
        }
        p = q;
    }while(p != trai);
    if(count == n) {
        printf("Day la da giac loi.\n");
    } else {
        printf("Day khong phai la da giac loi.\n");
    }
}