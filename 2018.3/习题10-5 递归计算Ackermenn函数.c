//习题10-5 递归计算Ackermenn函数（15 分）
//本题要求实现Ackermenn函数的计算，其函数定义如下：
//
//函数接口定义：
//int Ack( int m, int n );
//其中m和n是用户传入的非负整数。函数Ack返回Ackermenn函数的相应值。题目保证输入输出都在长整型
//范围内。
//裁判测试程序样例：
//#include <stdio.h>
//
//int Ack( int m, int n );
//
//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    printf("%d\n", Ack(m, n));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//输入样例：
//2 3
//输出样例：
//9


#include <stdio.h>

int Ack( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    printf("%d\n", Ack(m, n));

    return 0;
}

int Ack( int m, int n )
{
    int sum;
    if(m==0)
    {
        sum=n+1;
    }

    else if(n==0&&m>0)
        sum=Ack(m-1,1);
    else  if(m>0&&n>0)
     {

      sum=Ack(m-1,Ack(m,n-1));
      }

        return sum;


}
