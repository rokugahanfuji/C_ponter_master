#include <stdio.h>

void get_xy(double x, double y)
{
    /* 仮引数x_p, y_pの値とアドレスを表示する。 */
    printf("x_p:%f, y_p:%f\n", x, y);
    printf("&x_p:%p, &y_p:%p\n", (void*)&x, (void*)&y);

    /* 引数で渡されたアドレスに、値を格納する。 */
    x = 1.0;
    y = 2.0;
}

int main(void)
{
    double x = 0;
    double y = 0;

    /* 変数x, yのアドレスを表示する。 */
    printf("main: &x:%p, &y:%p\n", (void*)&x, (void*)&y);

    /*
     * 引数として変数x, yのアドレスを渡し、
     * get_xy()側で、そのアドレスに値を格納してもらう。
     */
    get_xy(x, y);

    /* 受け取った値を表示する。 */
    printf("x:%f, y:%f\n", x, y);
 
    return 0;
}
