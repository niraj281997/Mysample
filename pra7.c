
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SQR(x) x * x
struct Foo
{
char *pName;
char *pAddress;
};
void main()
{
struct Foo *obj = malloc(sizeof(struct Foo));
obj->pName = malloc(100);
obj->pAddress = malloc(100);
strcpy(obj->pName,"Your Name");
strcpy(obj->pAddress, "Your Address");
cout<<"HEllo";
cout<<"";
free(obj);
free(obj);
printf("%s ", obj->pName);
printf("%s", obj->pAddress);
free(obj->pName);
free(obj->pAddress);
{
//printf("\n\n\n%d, %d", sizeof('c'), sizeof(100));
}

{

int x=4;
for(;x==0;x--)
{
printf("\n\n\n\n\n x=%d\n", x--);
}
}
}






