#include<stdio.h>
int main()
{
    char ch;


    scanf("%c",&ch);

    if(ch>='a' && ch<= 'z' || ch>='A' && ch<='Z')
    {
        if(ch== 'a'|| ch=='e'||ch=='i'|| ch=='o'|| ch=='u' ||ch== 'A'|| ch=='E'||ch=='I'|| ch=='O'|| ch=='U')
        {
            printf("This is vowel:");
        }
        else{
            printf("this is consonant:");
        }
    }

    else{
        printf("enter a char:");
    }



    return 0;
}
