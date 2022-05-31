#include<stdio.h>
int main(){
    char stringInput[500]={0},subString[100]={0},largestString[100]={0},smallestString[20]={0};
    int initialCount = 0,subStringCount=0,largestLength=0,smallestLength=0,z=0;
    printf("Enter the string : ");
    scanf("%[^\n]s",stringInput);
    int k=0,j=0;
    while(stringInput[k]!='\0'){
    j=0;
        while(stringInput[k]!=' ' && stringInput[k]!='\0'){
            subString[j]=stringInput[k];
            k++;
            j++;
        }
        if(initialCount==0){
            for(int i=0;subString[i]!='\0';i++){
                largestString[i]=subString[i];
                smallestString[i]=subString[i];
            }
            initialCount = 1;
        }
        for(largestLength=0;largestString[largestLength]!='\0';largestLength++);
        for(smallestLength=0;smallestString[smallestLength]!='\0';smallestLength++);
        for(subStringCount=0;subString[subStringCount]!='\0';subStringCount++);
        if(subStringCount > largestLength){
            for(int i=0;i<subStringCount;i++){
                largestString[i]=subString[i];
            }
            largestLength=subStringCount;
        }
        else if(subStringCount < smallestLength){
            for(z=0;z<subStringCount;z++){
                smallestString[z]=subString[z];
            }
            smallestString[z]='\0';
            smallestLength=subStringCount;
        }
        for(int i=0;i<subStringCount;i++){
            subString[i]='\0';
        }
        k++;
    }
    printf("\nLargest Word is: %s\n",largestString);
    printf("Smallest Word is: %s\n",smallestString);
    return 0;
}
