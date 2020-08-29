//题11-2 查找星期（15 分）
//本题要求实现函数，可以根据下表查找到星期，返回对应的序号。
//序号
//星期
//0
//Sunday
//1
//Monday
//2
//Tuesday
//3
//Wednesday
//4
//Thursday
//5
//Friday
//6
//Saturday
//函数接口定义：
//int getindex( char *s );
//函数getindex应返回字符串s序号。如果传入的参数s不是一个代表星期的字符串，则返回-1。
//裁判测试程序样例：
//#include <stdio.h>
//#include <string.h>
//
//#define MAXS 80
//
//int getindex( char *s );
//
//int main()
//{
//    int n;
//    char s[MAXS];
//
//    scanf("%s", s);
//    n = getindex(s);
//    if ( n==-1 ) printf("wrong input!\n");
//    else printf("%d\n", n);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//输入样例1：
//Tuesday
//输出样例1：
//2
//输入样例2：
//today
//输出样例2：
//wrong input!


#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex( char *s );

int main()
{
    int n;
    char s[MAXS];

    scanf("%s", s);
    n = getindex(s);
    if ( n==-1 ) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}

int getindex( char *s )
{
    int a;
      if(s=="Sunday")
            a=0;
      if(s=="Monday")
            a=1;
        if(s=="Tuesday")
            a=2;
        if(s=="Wednesday")
             a=3;
        if(s=="Thursday")
             a=4;
             a=4;
        if(s=="Friday")
             a=5;
              if(s=="Saturday")
             a=6;
             else a=-1;
    return a;
}
