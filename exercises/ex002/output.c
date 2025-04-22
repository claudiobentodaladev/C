#include <stdio.h>

int main()
{
    int anynumber = 15;
    float floatnumber = 0.5;
    char name[25] = "claudiobentodala";
    
    printf("%d\n",anynumber);// %d is used to substitued with value  in variable(anynumber)
    printf("%.1f\n",floatnumber);// %f is used to substitued with value  in variable(floatnumber)
    printf("%s",name);// %s is used to substitued with value  in variable(name)
    
    return 0;
}