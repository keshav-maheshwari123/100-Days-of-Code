#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the length of rectangle: ");
    scanf("%d",&a);
    printf("Enter the breadth of rectangle: ");
    scanf("%d",&b);
    int area=a*b;
    int p=2*(a+b);
    {
        printf("area= %d\n",area);
        printf("Perimeter= %d\n",p);
        return 0;
    }
}

