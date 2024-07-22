#include <stdio.h>
#include<string.h>
int anagram(char *str1,char *str2){
   if(strlen(str1)!=strlen(str2)) {
        return 0;
    }
    int seen1[26]={0};
    int seen2[26]={0};
    
        for(int i=0;str1[i];i++){
            seen1[str1[i]-'a']++;
            seen2[str2[i]-'a']++;
        }
    

    for(int i=0;i<26;i++){
        if(seen1[i]!=seen2[i]){
            return 0;
        }
    }
    return 1;
}
int main() {
    int num;
    int copy=0;
    scanf("%d",&num);
    char str[num][100];
    for(int i=0;i<num;i++){
        scanf("%s",str[i]);
    }
    for(int i=0;i<num;i++){
        copy=0;
        if(strcmp(str[i],"")>0){
        for(int j=i+1;j<num;j++){
            if(anagram(str[i],str[j])){
                copy=1;
                strcpy(str[j],"");
            }
}
        }
        if(copy){
            printf("%s",str[i]);
        }
    }
        
   

    return 0;
}
