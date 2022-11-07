//#include<stdio.h>
//
//int main()
//{
//    int n, i, x;
//    double sum = 0;
//
//    while (scanf_s("%d", &n) != -1) 
//    {
//        if (n > 0)
//        {
//            x = 1;
//            for (i = 1; i <= 2 * n - 1; i += 2)
//            {
//                if (x % 2 != 0) sum += 1.0 / i;
//                else sum -= 1.0 / i;
//                x++;
//            }
//            printf("%.2lf\n", sum*4);
//        }
//    }
//
//    return 0;
//} 