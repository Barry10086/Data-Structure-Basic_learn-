#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

void get_next(string T,int next[]){
    int i=1,j=0;
    next[1]=0;
    while (i<T.length())
    {
        /* code */
        if (j==0||T[i]==T[j])
        {
            /* code */
            ++i;
            ++j;
            next[i]=j;
        }
        else{
            j=next[j];
        }
        
    }
    
}

int main(){

}