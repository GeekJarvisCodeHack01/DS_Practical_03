#include <stdio.h>

int main()
{
    int size, v, c;
    printf("Enter the size of stack : ");
    scanf("%d", &size);

    int sta[size], top = -1;
    
    printf("1 for push\n");
    printf("2 for pop\n");
    printf("3 for diplay\n");
    printf("4 for exit\n");

    while (1)
    {
        printf("Enter the operations : ");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            if (top == size - 1)
            {
                printf("overload");
            }
            else
            {
                printf("Enter the push value\n");
                scanf("%d", &v);
                sta[++top] = v;

                printf("%d push value in stack\n", v);
            }

            break;
        case 2:
            if (top == -1)
            {
                printf("stack khali h dost\n");
            }
            else
            {
                printf("%d nikal di gai h\n", sta[top--]);
            }
            break;
        case 3:
            if (top == -1)
            {
                printf("Stack khali h dost\n");
            }
            else
            {
                printf("Stack elements dekhe : \n");
                for (int i = top; i >= 0; i--)
                {
                    printf("%d ", sta[i]);
                }
                printf("\n");
            }
            break;

            case 4:
            return 0;

        default:

        printf(" 1 se 4 number select karo na");
            break;
        }
    }
}