//I
/*
#include <stdio.h>
#include <math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	double a;
	scanf("%lf",&a);
	long long p,q;
	scanf("%lld %lld",&p,&q);
	for(i=1;i<=n;i++){
		double x=sqrt(a*a/(p*p+q*q));
		a=x*p;
	}
	printf("%.6f",a);
	return 0;
}
 */
//ÔÂ¿¼1 J´íÎó´ð°¸
/*
#include <stdio.h>
int main()
{
int T,i,j,k;
scanf("%d",&T);
do
{
	int n;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
    	for(j=1;j<=2*n;j++){
    		printf(" ");
    	}
    		if(i>n){
    			i=2*n-i;
			}
    		for(k=1;k<=i;k++){
    			if(k==1||k==i)
    			printf("*");
    			else
    			printf(" ");
			}
			printf("\n");
	}
	for(i=1;1<=n;i++){
		for(j=1;j<=2*n;j++){
			printf(" ");
		}
		printf("\n");
	}
    for(i=1;i<=4*n+1;i++){
    	printf("*");
	}
	printf("\n");
	for(i=1;1<=4*n;i++){
		if(i==2||i==4*n)
		printf("*");
		else
		printf(" ");
	}
	printf("\n");
	for(i=1;i<=4*n-1;i++){
		if(i==1||i==2)
		printf(" ");
		else
		printf("*");
	}
	printf("\n");
	printf("\n");
}while (T--);
return 0;
}*/
//ÔÂ¿¼1J
/*
#include <stdio.h>
int main()
{
	int T, i, j, k,c,a,b,d,e,m;
	scanf("%d", &T);
	while(T--)
	{
		int n;
		scanf("%d", &n);
		for (i = 1; i <= 2 * n - 1; i++) {
			for (j = 1; j <= 2 * n; j++) {
				printf(" ");
			}
			if (i > n) {
				c = 2 * n - i;
			}
			else
				c = i;
			for (k = 1; k <= c; k++) {
				if (k == 1 || k == c)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		for (m = 1; m <= n; m++) {
			for (a = 1; a <= 2 * n; a++) {
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
		for (b = 1; b <= 4 * n + 1; b++) {
			printf("*");
		}
		printf("\n");
		for (d = 1; d <= 4 * n; d++) {
			if (d == 2 || d == 4 * n)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		for (e = 1; e <= 4 * n - 1; e++) {
			if (e == 1 || e == 2)
				printf(" ");
			else
				printf("*");
		}
		    if(T!=0){
			printf("\n");
			printf("\n");
		}
	}
	return 0;
}*/
/*

#include <stdio.h>
int main()
{
	int T,i,j,k,c;
	scanf("%d",&T);
	while (T--)
	{
		int n;
	    scanf("%d",&n);
	    for(i=1;i<=2*n-1;i++){
	    	for(j=1;j<=2*n;j++){
	    		printf(" ");
	    	}
    		if(i>n){
    			c=2*n-i;
			}
			else
			c=i;
    		for(k=1;k<=c;k++){
    			if(k==1||k==c)
    			printf("*");
    			else
    			printf(" ");
			}
			printf("\n");
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=2*n;j++){
				printf(" ");
			}
			printf("\n");
		}
	    for(i=1;i<=4*n+1;i++){
	    	printf("*");
		}
		printf("\n");
		for(i=1;i<=4*n;i++){
			if(i==2||i==4*n)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
		for(i=1;i<=4*n-1;i++){
			if(i==1||i==2)
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
		printf("\n");
	}
	return 0;
}*/

/*
µÚÁùÕÂ1 
#include <stdio.h>
int main() 
{
	int T, n , k , i;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		scanf("%d",&k);
		int a[10000];
		for (i=0;i<n;++i){
			scanf("%d",&a[i]);
			}
		for (i=0;i<n;++i){
			if (a[i]==k){
				printf("%d",i+1);
				break;
	        }
		}
	printf("\n");
   }
   return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int T, n, k, i, flag;
	scanf("%d",&T);
	while(T--)
	{
		flag = 0;
		scanf("%d", &n);
		scanf("%d", &k);
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(i=0;i<n;i++){
			if(k==a[i]){
				flag=1;
				break;
			}
		}
		if(flag){
			printf("madan\n");
		}
		else if(flag==0){
			printf("why am I so diao\n");
		}
	}
	return 0;
} 
 */
 
 
 /*ÕÂÁùD 
#include <stdio.h>
int main(void)
{
	int T;
	int n, k, m, i, t, exchange, j, sum;
	scanf("%d", &T);
	while (T--)
	{   
	    sum = 0;
		scanf("%d%d%d", &n, &k, &m);
     	int a[1000];
		for(i = 0; i < m; i++){
			scanf("%d", &a[i]);
		}
		for(i = 1; i < m; i++){
			exchange=0;
			for(j = 0; j < m - i; j++){
				if (a[j] > a[j+1]){
					t = a[j];
					a[j] = a[j + 1];
					a[j + 1] = t;
					exchange = 1;
				}
			}
			if (exchange == 0){
				break;
			}	
        }
		for (i = 0; i < k; i++){
			sum += a[i];
		}
		if (sum <= n){
			printf("%d\n",0);
		}
		else printf("%d\n", sum - n);
	}
	return 0;
}*/

/*
#include <stdio.h>
int main(void)
{
	int n, i;
	double sum;
	while (scanf("%d", &n)!=EOF)
	{
		sum = 0.0;
		int a[100];
		for (i = 0; i < n; i++){
			scanf("%d", &a[i]);
			sum += a[i];
		}
		printf("%.2lf\n", sum / n);
   }
   return 0;
} 
*/
/*Áùf 
#include <stdio.h>
int main(void)
{
	int T, N;
	int i, a[20];
	scanf("%d", &T);
	while (T--)
	{   
	    a[0] = 1;
	    a[1] = 2;
		scanf("%d", &N);
		for (i = 2; i < N; i++){
			a[i] = a[i - 1] + a[i - 2];
		}
		printf("%d\n",a[N - 1]);
	}
	return 0;
}
*/

/*ÁùC  
#include <stdio.h>
int main(void)
{
	int t, n, k;
	scanf("%d", &t);
	while (t--)
	{
		int i, j, sum = 0;
		scanf("%d", &n);
		scanf("%d", &k);
		int a[n][n];
		for (i = 0; i < n; i++){
			for (j = 0; j < n; j++){
				scanf("%d", &a[i][j]);
			}
		}
		for (i = 0; i < n; i++){
			for (j = i + 1; j < n; j++){
				if (a[i][j] > k){
					sum+=1;
				}
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
*/


/*ÁùI 
#include <stdio.h>
int main(void)
{
	int a[4][4];
	int c , b, i, j, min, t;
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			scanf("%d", &a[i][j]);
		}
	}
	min = a[0][0];
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			if (a[i][j] < min){
				t = a[i][j];
				a[i][j] = min;
				min = t;
				c = i;
				b = j;
			}
		}
	}
	printf("%d %d\n", c, b);
}*/

/*ÁùJ 
#include <stdio.h>
int main(void)
{
	int a[5][5];
	int i, j ,sum = 50;
	for(i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			scanf("%d", &a[i][j]);
			if (i == j||i + j == 4){
				sum += a[i][j];
			}
		}
	}
	printf("%d\n", sum);
	if (sum > 100){
		printf("wo de tian!\n");
	}
	else printf("make monkey!\n");
	return 0;
}*/
/*ÁùM 
#include <stdio.h>
int main(void)
{
	int a[2][10];
	int i, j, c = 0, L = 0;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 10; j++){
			scanf("%d", &a[i][j]);
			if (i == 0)
			c += a[i][j];
			else 
			L += a[i][j];
		}
	}
	if (c >= L){
		printf("why am i so diao?\n");
	}
	else printf("cjc died!\n");
	return 0;
}
*/
/*
//µÚËÄÕÂC 
#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAXV 1000011
int isPrime[MAXV + 1];
int prime[MAXV + 1]; 
int size=0; 
void getprime();
int main()
{
    int t;
    scanf("%d",&t);
    getprime();
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(isPrime[n])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

void getprime()
{
	int i, j;
	memset(isPrime, 1, sizeof(isPrime));
	isPrime[1] = 0;
	for(i = 2; i < MAXV + 1; i++){
		if (isPrime[i]){
			//prime[size++] = i;
			for (j = i * 2; j < MAXV + 1;j += i){
				isPrime[j] = 0;
			}
		}
    }
}*/

/*
//Ö¸Õë G
#include <stdio.h>
double (*p)(int n);
double a(int n);
double b(int n);
int main(void)
{
	double sum = 0.0;
	int n;
	scanf("%d", &n);
	if (n % 2 == 0)
	p = a;
	else if (n % 2 != 0)
	p = b;
	printf("%.2f", p(n));
	return 0;
}
double a(int n)
{
	int i;
	double sum = 0.0;
	for (i = 2; i <= n; i += 2){
		sum += 1.0 / i;
	}
	return sum;
}
double b(int n)
{
	int i;
	double sum = 0.0;
	for (i = 1; i <= n; i += 2){
		sum += 1.0 / i;
	} 
	return sum;
}
	*/
/*
#include <stdio.h>
int *p(int *n);
int main(void)
{
	int n, a, i;
	double sum = 0.0;
	scanf("%d", &n);
	a = *p(&n);
	if (a % 2 == 0){
		for (i = 2; i <= a; i += 2){
			sum += 1.0 / i;
		}
	}
	else if (a % 2 != 0){
		for (i = 1; 1 <= a; i += 2){
			sum += 1.0 / i;
		} 
	}
	printf("%.2f", sum);
	return 0;
}
int *p(int *n)
{
	return n;
}

*/
/*
c
void b (int x, int y, char z);
int main(void)
{
	int N, x, y, i, j;
	char z;
	char a[4][4] = {'0'};
	scanf("%d", &N);
	while (N--)
	{
		void (*p) (int x, int y, char z);
		scanf("%d %d", &x, &y);
		scanf("%c", &z);
		p = b;
		p (x, y, z);
	}
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void b (int x, int y, char z)
{
	char a[4][4] = {'0'};
	a[x][y] = z;
}
*/
/*
#include <stdio.h>
int main(void)
{
	int n, m, k, i, j, d,sum = 0;
	scanf("%d %d %d", &n, &m, &k);
	int a[n][m], b[m][k], c[n][k];
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < m; i++){
		for (j = 0; j < k; j++){
			scanf("%d", &b[i][j]);
		}
	}
	for (i = 0; i < n; i++){
		for (d = 0; d < k; d++){
			sum = 0;
			for (j = 0; j < m; j++){
				sum += a[i][j]*b[j][d];
			}
			c[i][d] = sum;
		}
	}
	for (i = 0; i < n; i++){
		for (j = 0; j < k; j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
