// #include <stdio.h>
// int main()
// {
//     printf("* * * *\n");
//     printf(" * * *\n");
//     printf("  * *\n");
//     printf("   *\n");
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int n = 4; // 行数，想改几行就改几行
//     for (int i = 0; i < n; i++)
//     {
//         // 打印前导空格
//         for (int j = 0; j < i; j++)
//             printf(" ");
//         // 打印星号和空格
//         for (int j = 0; j < n - i; j++)
//         {
//             if (j > 0) printf(" ");
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int N;
//     int i=1;
//     scanf("%d",&N);
//     do{
//         printf("%d\n",i);
//         i++;
//     }
//     while (i<=N);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int F=150;
//     int C=5*(F-32)/9;
//     printf("fahr=150,celsius=%d",C);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int g=10;
//     int t=3;
//     int height=(0.5)*g*t*t;
//     printf("height = %d",height);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int F;
//     scanf("%d",&F);
//     int C = 5*(F - 32)/9;
//     printf("Celsius = %d",C);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int A,B;
//     scanf("%d,%d",&A,&B);
//     int sum = A + B;
//     int diff = A - B;
//     int pro = A * B;
//     int quo = A / B;
//     printf("%d + %d = %d\n",A,B,sum);
//     printf("%d - %d = %d\n",A,B,diff);
//     printf("%d * %d = %d\n",A,B,pro);
//     printf("%d / %d = %d\n",A,B,quo);
    
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float x;
//     float y;
//     scanf("%f",&x);
//     if(x>=0){
//         y=sqrt(x);
//     }else{
//         y=pow(x+1,2)+2*x+1.0/x;
//     printf("f(x) = %.2f\n",y);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int lower;
//     int upper;
//     scanf("%d %d %d",&lower,&upper,&F);
//     if(0<=lower&&lower<=upper&&upper<=100){
//         printf("fahr celsius\n");
//         }else{
//         printf("Invalid");
//         }
//     for(int F;F>=lower&&F<=upper;F=F+2){
//         float C=5*(F-32)/9;
//         printf("%d %6.1f\n",F,C);
//     }
// }
// #include <stdio.h>
// int main(){
//     int c1,c2;
//     c1=97;
//     c2=98;
//     printf("c1=%c,c2=%c\n",c1,c2);
//     printf("c1=%d,c2=%d\n",c1,c2);
//     return 0;
//}
// #include <stdio.h>
// int main()
// {
//     int a,b;
//     float x,y;
//     char c1,c2;
//     scanf("a=%db=%d",&a,&b);
//     scanf("%f%e",&x,&y);
//     scanf("%c%c",&c1,&c2);
//     printf("a=%d,b=%d\n",a,b);
//     printf("x=%f,y=%e\n",x,y);
//     printf("c1=%c,c2=%c\n",c1,c2);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a,b;
//     float x,y;
//     char c1,c2;
//     scanf("a=%db=%d",&a,&b);
//     scanf("%f%e",&x,&y);
//     scanf("%c%c",&c1,&c2);
//     printf("a=%d,b=%d\n",a,b);
//     printf("x=%f,y=%e\n",x,y);
//     printf("c1=%c,c2=%c\n",c1,c2);
//     return 0;
// }
// #include <stdio.h>
// int main(void)
// {

// char s[100]; 

// int c, i;
// scanf("%c", &c); 

// scanf("%d " ,&i);

// scanf("%s ", s);
// printf("%c ,%d,%s\n" ,c, i, s);
// return 0;

//  }
// #include <stdio.h>
// int main()
// {
//     int num;
//     scanf("%d",&num);
//     if(num%2==0)
//     {
//         printf("%d是偶数",num);
//     }else{
//         printf("%d是奇数",num);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(void)
// {
//     char s[100];
//     int c,i;
//     scanf("%c",&c);
//     scanf("%d",&i);
//     scanf("%s",s);
//     printf("%c ,%d,%s\n",c,i,s);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a=6;
//     a+=a-=a*a;
//     printf("%d",a);
//     return 0;   
// }
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n;
//     int m;
//     int i;
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         m=pow(3,i);
//     }
//     printf("pow(3,%d)=%d\n",i,m);
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n;
//     int m;
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         m=pow(3,i);
//     }
//     printf("pow(3,%d)=%d\n",i,m);
//    return 0;
    
// }
// 
#include <stdio.h>
int sum(int a,int b);
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int i = sum(m,n);
    printf("sum = %d",i);
    return 0;
}
int sum(int a,int b)
{
    int i=0;
    for(i=0;a<=b;a++)
        i+=a;
    return (i);
}