#include <stdio.h>

int strlen_TEST(char[]);
int strcpy_TEST(char[],char[]);
int 

int main()
{
    char s1[]="happy";
    char s2[]="dogcute";
    
    //計算字串長度
    printf("%d",strlen_TEST(s1));
    printf("\n");

    //字串的複製
    printf(s1);
    printf("\n");
    strcpy_TEST(s1,s2);
    printf("%s",s1);
    printf("\n");
    
    
    return 0;
}

//計算字串長度
int strlen_TEST(char S[]){
    int len;
    for(len=0;S[len]!='\0';len++);
    
    return len;
}
//字串的複製 
//將S2複製給S1
int strcpy_TEST(char S1[],char S2[]){
    int i;
    for(i=0;S2[i]!='\0';i++){
        S1[i]=S2[i];
    }
    S1[i]='\0'; //在S1最後面加上空字元 , 因為空字元並沒有從S2被拷貝過來
}
