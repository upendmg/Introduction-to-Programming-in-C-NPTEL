#include<stdio.h>
int isPalindrome(int x) {
    int y,z;
    z = x;
    y = 0;
    if(z < 0)
        return 0;
    while(z != 0){
        y = y*10+z%10;
        z = z/10;
    }
    
    if(x < 0)
        return y==-x;
    return y==x;
        
}
int main(){
	int x;
	scanf("%d",&x);
	printf("%s\n",isPalindrome(x) ? "yes" : "no");
    return 0;
}