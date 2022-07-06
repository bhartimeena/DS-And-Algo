#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void copystring(char str1[],char str2[],int index=0){
//     //copy the each character from str1 to str2
//     str2[index] = str1[index];
//     //when the index reach at the end of the string1 return the string
//     if (str1[index] == '\0') 
//         return;

//     // this function increase the index size at every iteration
//     copystring(str1,str2,index+1);
// }

void copystring(char s1[],char s2[]){
    int i=0;
    //run the loop untill it reacj at the end of the string 1 and copy each character to string 2;
    for(i=0;s1[i] !='\0';i++){
        s2[i] =s1[i];
    }

}
int main(){
    char str1[100]="meeeee";
    char str2[100]="youuuu";
    copystring(str1,str2);
    cout<<str2<<endl;
    return(0);

}