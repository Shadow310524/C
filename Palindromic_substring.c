#include <stdio.h>
#include<string.h>
#include<stdbool.h>
bool ispalindrome(int start,int end,char str[]){
    while(start<end){
        if(str[start]!=str[end]){
        return false;
        }
        start++;
        end--;
    }
    return true;
}
int main() {
    char str[100];
    int max=0;
    int min=0;
    int maxlen=0;
    scanf(" %[^\n]",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            if(ispalindrome(i,j,str)){
                maxlen=j-i+1;
                if(max<maxlen){
                    max=j;
                    min=i;
                }
            }
        }
    }
    for(int i=min;i<=max;i++){
        printf("%c",str[i]);
    }
    return 0;
}
