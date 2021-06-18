#include<stdio.h>

int main(){
    float a1,b1,c1,a2,b2,c2;

    printf("\na1=");
    scanf("%f",&a1);
    printf("b1=");
    scanf("%f",&b1);
    printf("c1=");
    scanf("%f",&c1);
    printf("a2=");
    scanf("%f",&a2);
    printf("b2=");
    scanf("%f",&b2);
    printf("c2=");
    scanf("%f",&c2);

    printf("とし、次で定められる連立方程式を解く\n");
    printf("a1x+b1y=c1\n");
    printf("a2x+b2y=c2\n\n");

    if (a1!=0 && b1!=0 && a2!=0 && b2!=0){
      
    //係数が特殊な場合の表記について
    if (b1>=0){
        if (a1==1){
            if (b1==1){
                printf("x+y=%f\n",c1);
            }else{
                printf("x+%fy=%f\n",b1,c1);
            }
        
        }else{
            if (b1==1){
                printf("%fx+y=%f\n",a1,c1);
            }else{
                printf("%fx+%fy=%f\n",a1,b1,c1);
            }
        }
    }else{
        if (a1==-1){
            if (b1==-1){
                printf("-x-y=%f\n",c1);
            }else{
                printf("-x-%fy=%f\n",-b1,c1);
            }
        
        }else{
            if (b1==-1){
                printf("%fx-y=%f\n",a1,c1);
            }else{
                printf("%fx-%fy=%f\n",a1,-b1,c1);
            }
        }
    }

    if (b2>=0){
        if (a2==1){
            if (b2==1){
                printf("x+y=%f\n",c2);
            }else{
                printf("x+%fy=%f\n",b2,c2);
            }
        
        }else{
            if (b2==1){
                printf("%fx+y=%f\n",a2,c2);
            }else{
                printf("%fx+%fy=%f\n",a2,b2,c2);
            }
        }
    }else{
        if (a2==-1){
            if (b2==-1){
                printf("-x-y=%f\n",c2);
            }else{
                printf("-x-%fy=%f\n",-b2,c2);
            }
        
        }else{
            if (b2==-1){
                printf("%fx-y=%f\n",a2,c2);
            }else{
                printf("%fx-%fy=%f\n",a2,-b2,c2);
            }
        }
    }

    //不定、不能について
    if (b1/a1-b2/a2==0){
        if (c1/a1-c2/a2!=0){
            printf("\nこれを満たすx,yは存在しない\n\n");
        }else{
            if (b1/a1>=0){
                if (b1/a1==1){
                    printf("\nよって x=%f-c , ",c1/a1);
                }else{
                    printf("\nよってx=%f-%fc , ",c1/a1,b1/a1);
                }
            }else{
                if (b1/a1==-1){
                    printf("\nよって x=%f+c , ",c1/a1);
                }else{
                    printf("\nよって x=%f+%fc , ",c1/a1,-b1/a1);
                }
            }    

            printf("y=c");
            printf(" （c：任意定数）\n\n");
            
        }
    }else{
        printf("\nよって x=%f , ",c1/a1-(b1/a1)*(c2/a2-c1/a1)/(b2/a2-b1/a1));
        printf("y=%f\n\n",(c2/a2-c1/a1)/(b2/a2-b1/a1));
    }
    }else{
        if (a1=0)
        {
            printf("x+%fy=%f\n",b1,c1);
            printf("%fx+%fy=%f\n",a2,b2,c2);
            printf("\nよって x=%f , ",(c2-b2*c1/b1)/a2);
            printf("y=%f\n\n",c1/b1);
        }
        
    }

}