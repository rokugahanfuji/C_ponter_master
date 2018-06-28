#include <stdio.h>

int main(void)
{
    int hoge = 4;
    void *hoge_p;
    int *p2 = &hoge;
    hoge_p = &hoge;
    printf("%d\n", *(int*)hoge_p);
    printf("%d\n", *p2);
 
    printf("hoge_p %p\n", hoge_p); 
    printf("&hoge_p %p\n", &hoge_p);

    printf("p2 %p\n", p2); 
    printf("&p2 %p\n", &p2);
    return 0;
}
