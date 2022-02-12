
#include <stdio.h>

int GetMax(int X, int Y) {
        return X > Y ? X : Y;
}
int GetMin(int X, int Y) {
        return X < Y ? X : Y;
}


int GetCommonDivisor(int X, int Y) {
        
        if(GetMax(X, Y) / GetMin(X, Y) != 0 && GetMax(X, Y) % GetMin(X, Y) == 0) {
                return GetMin(X, Y);
        }        
        
        int w = GetMin(X, Y);
        
        while(!(X % w == Y % w && X % w == 0)) {
                w --;        
        }
        
        return w;
}

int main(void) {
        
        int A, B;
        
        scanf("%d %d", &A, &B);
        
        printf("\n%d\n\n", GetCommonDivisor(A, B));
        
        return 0;
} 
