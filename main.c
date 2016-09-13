#include <stdio.h>
#include <stdlib.h>
main()
{
    char mayu,minu;
    scanf("%c",&mayu);
    minu=mayu+32;
    printf("%c",minu);

    return 0;
}

int strindex(char s[], char t)
{
    int i,x;
    x=strlen(s);
    for (x;x==0;x=x-1)
    {
        if (s[x]==t)
            return x;
    }
    return -1;
}
main()
{
char s[]="ciencia de la computacion";
char t='n';
printf("%d",strindex(s,t));
}
