# include <stdio.h>

int square(int length)
{
    int area = length * length , perimeter = 4 * length;
    printf("Area = %dcm^2\n",area);
    printf("Perimeter = %dcm",perimeter);
}

int rectangle(int length[2])
{
    int area = length[0] * length[1] , perimeter = 2*length[0] + 2*length[1];
    printf("Area = %dcm^2\n",area);
    printf("Perimete = %dcm",perimeter);
}

int main(void)
{
    int rect[2];
    int length,choice;

    printf("What shape?\n1.Square \n2.Rectangle\nEnter:");
    scanf("%d",&choice);
    
    if (choice==1)
    {
        printf("Enter length:");
        scanf("%d",&length);
        square(length);
    }
    else if (choice==2)
    {
        printf("Enter length and breadth:");
        for (int i=0; i<2; i++)
        {
            scanf("%d",&rect[i]);
        }
        rectangle(rect);

    }


}