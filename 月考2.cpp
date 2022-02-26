/*月考2G 
#include <stdio.h>
int main(void)
{
	int n, m, i, j, k, q;
	long long a, c, b;
	while (scanf("%d", &n) != EOF)
	{
		int s[18];
		scanf("%d", &m);
		while (m--) {
			scanf("%lld", &a);
			int i = 1;
		    b = 1;
			while (a / b != 0) {
				i++;
				b *= i;
			}
			b = b / i;
			q = i - 1;
			i--;
			j = 0;
			if (i > n) {
				printf("%d\n", -1);
				continue;
			}
			else {
				while (i!=0) {
					c = a % b;
					s[j] = a / b;
					a = c;
					b = b / i;
					j++;
					i--;
				}
			}
			for (i = 0; i < n; i++) {
				for (k = 0; k < i + 1; k++) {
					if (k < n - q) {
						printf("%d", 0);
					}
					else if (i > n - 1 - s[k - n + q]) {
						printf("%d", 1);
					}
					else printf("%d", 0);
				}
				printf("\n");
			}
		}
    }
	return 0;
}*/
/*4pro D
#include<stdio.h>
int jos(int n);
int main()
{
    int n,s,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        s = jos(n);
        printf("%d ", s);
    }
    return 0;
}
int jos(int n)
{
	int i, c = 0, a[1000] = { 0 }, k, count = 0, d = 0;
	k = n;
	for (i = 1; i <= k&& c < k - 1 ; i++) {
		if (a[i] == 7) {
			if (i == k) {
				i = 0;
			}
			continue;
		}
		count++;
		if (count == 7) {
			c++;
		}
		if (count > 7) {
			count -= 7;
		}
		a[i] = count;
		if (i == k) {
			i = 0;
			//k = k - c;
		}
	}
	for (i = 1; i <= n; i++) {
		if (a[i] != 7) {
			d = i;
			//printf("%d", i);
		}
	}
	return d;
}*/
/*4pro E
#include<stdio.h>
#include<math.h>

double happy(double a);
double a;

int main() {
    while (scanf("%lf", &a) != EOF) {
        printf("%.6lf ", happy(a));
    }
    return 0;
}
double happy(double a)
{
	double xn, xn2;
	xn = xn2 = 1;
	
	do{
		if (a == 0){
		    xn = 0;
		    break;
	    }
	   xn2 = 0.5*(xn + a/ xn);	
	   if (xn == xn2){
	   	break;
	   }
	   else {
	   	xn = xn2;
	   }
	}while (1);
	return xn;
}
*/
/*4pro F
#include<stdio.h>

#include<math.h>

int happy(int year, int month, int day);

int main() {

        char ch;

        int year, month, day;

while (scanf("%d%c%d%c%d", &year, &ch, &month, &ch, &day) != EOF) {

printf("%d ", happy(year, month, day));

}

return 0;

}
int happy(int year, int month, int day)
{
	int a = 1;
	if(month > 12){
		a = -1;
	}
	else if (month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12){
		if (day > 31){
			a = -2;
		}
	}
	else if (month == 4||month == 6||month == 9||month == 11){
		if(day > 30){
			a = -2;
		}
	}
	else {
		if ((year %4 ==0 && year % 100 != 0) || year % 400 == 0){
			if(day > 29){
				a = -2;
			}
		}
		else {
		    if (day > 28){
		    	a = -2;
			}
		}
	}
	return a;
}*/
/*5pro A
#include <stdio.h>
#include <string.h>
int main(void){
	char a[10001];
	int i;
	while (gets(a))
	{
		printf("%c", a[0]);
		for (i = 1; i < strlen(a); i++){
			if(a[i] != a[i - 1]){
				printf("%c", a[i]);
			}
		}
		printf("\n");
    }
}

*/
/*5 pro B
#include <stdio.h>
#include <string.h>
int stremp(char *p1,char *p2);
int main(void)
{
	char a[101], b[101];
	while(gets(a) && gets(b))
	{
		printf ("%d\n", stremp(a,b));
    }
    return 0;
}
int stremp(char *p1,char *p2)
{
	int i, flag = 0, d, s;
	for (i = 0; i < strlen(p1); i ++ ){
		if(p1[i] != p2[i]){
			d = p1[i] - p2[i];
			flag = 1;
			break;
		}
	}
	if (flag == 0){
		s = 0;
	}
	else {
		s = d;
	}
	return s;
}*/
/*5pro C
#include <stdio.h>
int main(void)
{
	int a[3][3] = { 0 };
	int(*p)[3] ;
	int i, j, t;
	while (scanf("%d %d %d", &a[0][0], &a[0][1], &a[0][2]) != EOF)
	{
		//(*p)[3] ;
		p = &a[0];
		for (i = 1; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		for (i = 0; i < 3; i++) {
			for (j = 0; j < i; j++) {
				t = (*(p + j))[i];
				(*(p + j))[i] = (*(p + i))[j];
				(*(p + i))[j] = t;
			}
		}
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				printf("%d ", (*(p + i))[j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}*/
/*5 pro D
#include <stdio.h>
int main(void)
{
	int n;
	int a[100], i;
	while (scanf("%d", &n) != EOF)
	{
		int (*p)[100] = &a;
		for (i = 0; i < n ;i ++){
			scanf("%d", &(*p)[i]);
		}
		for (i = 0; i < n ;i ++){
			printf("%d ", (*p)[n - i - 1]);
		}
		printf("\n");
	}
	return 0;
}*/
/*pro E
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[100];
	int len;
	gets(a);
	len = strlen(a);
	if (a[len-1] == 'c' && a[len - 2] == 'o' && a[len - 3] == 'd'){
		printf("Word\n");
	}
	if (a[len-1] == 's' && a[len - 2] == 'l' && a[len - 3] == 'x'){
		printf("Excel\n");
	}
	if (a[len-1] == 't' && a[len - 2] == 'p' && a[len - 3] == 'p'){
		printf("PowerPoint\n");
	}
	return 0;
 } */
 /*5pro G
 #include<stdio.h>
int isPrime(int x);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(isPrime(n))
        {
            printf("YES ");
        }
        else
        {
            printf("NO ");
        }
    }
    return 0;
}
 int isPrime(int x)
 {
 	int s = 1, i;
 	if (x == 1) s = 0;
 	else if(x == 2) s = 1;
 	else if (x % 2 == 0) s = 0;
 	else {
 		for (i = 3; i <= x / 2; i++ ){
 			if (x % i == 0){
 				s = 0;
 				break;
			 }
		 }
	 }
 	return s;
 }
 */
 /*
 #include <stdio.h>
 #include <string.h>
 int main(void)
 {
	 	int n,i,j;
	 	char s1[100000], s2[100000];
	 	while (scanf("%s", s1) != EOF)
	 	{
	 	scanf("%s", s2);
	 	scanf("%d", &n);
	 	char s3[n + 1];
		 char s4[strlen(s2) - n + 1];
	 	for (i = 0; i < n; i ++ ){
	 		s3[i] = s2[i];
		 }
		 s3[n] = '\0';
		 for (j= 0, i = n; i < strlen(s2); j++, i++){
		 	s4[j] = s2[i];
		 }
		 s4[strlen(s2) - n ] = '\0';
		 printf("%s%s%s\n",s3,s1,s4);
     }
	 return 0;
 }
 */
 /*5proJ
 #include <stdio.h>
 #include <string.h>
int main(void)
{
	char a[25], b[25], c[50];
	int len,i;
	while(scanf("%s", &a) != EOF)
	{
		scanf("%s", &b);
		int e = b[0];
		int d ;
		d = e + 32;
		b[0] = d;
		len = strlen(a) <= strlen(b) ? strlen(a) : strlen(b);
		for (i = 0; i < len; i++){
			printf ("%c",a[i]);
			printf("%c",b[i]);
		}
		printf("\n");
	}
	return 0;
 } 
 */
 /*5proK
 #include <stdio.h>
 #include <string.h>
int main(void)
{
	char a[10001];
	while (gets(a))
	{
		char *p;
		p = strtok(a, " \n");
		while(p)
		{
			puts(p);
			p = strtok(NULL," \n");
		}
		printf("\n");
	}
	return 0;
}*/
/*L
#include <stdio.h>
#include <math.h>
int main(void)
{
	int n, a[100], t, i, pass, exchange;
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i< n; i++){
			scanf("%d", &a[i]);
		}
		for (pass = 1; pass < n; pass ++){
			exchange = 0;
			for (i = 0; i < n - pass; i++){
				if (abs(a[i]) > abs(a[i+1])){
					t = a[i];
					a[i] = a[i + 1];
					a[i + 1] = t;
					exchange = 1;
				}
			}
			if(exchange == 0){
				break;
			}
		}
		for (i = 0; i < n; i++){
			printf("%d ", a[i]);
		}
		printf("\n\n");
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	int a[24], m[24];
	int n, b, c, x, y, d, e, f= 1, f1,j,q,s =0, flag, count = 0;
	int i, k, g, h;
	scanf("%d", &n);
	while (n -- )
	{
		count = 0;
		scanf("%d %d", &b, &c);
		while (b -- ){
			scanf("%d %d",&d, &e );
			if (e >= d)
		    q = e - d + 1;
		    else q= 23 - d + e - 0 + 2;
			s += q;
			for (i = f, j = d; i <= s && j <= e; i++){
				for (k = i - 1; k >0; k--){
					if (j == a[k]){
						flag = 1;
						break;
					}
				}
				if (flag) {
					j ++;
					i--;
					continue;
				}
				a[i] = j;
				if (j == 23){
					j = -1;
				}
				j ++;
			}
			f = i;
		}
		s = 0;
		f1 = 1;
		while (c -- ){
			scanf("%d %d",&g, &h );
			if (h >= e)
		    q = h - g + 1;
		    else q= 23 - g + h - 0 + 2;
			s += q;
			for (i = f1, j = g; i <= s && j <= h; i++){
				for (k = i - 1; k >0; k--){
					if (j == m[k]){
						flag = 1;
						break;
					}
				}
				if (flag) {
					i--;
					j ++;
					continue;
				}
				m[i] = j;
				if (j == 23){
					j = -1;
				}
				j ++;
			}
			f1 = i;
		}
		for (i = 1; i < f1; i++){
			for (j = 1; j < f; j++){
				if (m[i] == a[j]){
					count ++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}	
*/
/* 6 pro B
#include <stdio.h>
 #include <string.h>
int main(void)
{
	char b[1001], a[21];
	int n, i, j, flag ,k;
	scanf("%d", &n);
	getchar();
	while (n--)
	{
		flag = 0;
		gets(a);
		gets(b);
		for (i = 0; i < strlen (b); i ++ ){
			if (b[i] == a[0]){
				k = i;
				for (j = 0; j < strlen (a); j ++ ,i++){
					if (b[i] == a[j]){
						flag = 1;
					}
					else {
						flag = 0;
						break;
					}
				}
				if (flag){
					printf("doctorZ");
					i --;
					continue;
				}
				else {
					i = k; 
				}
		    }
		    printf("%c", b[i]);
		}
		printf("\n");
	}
	return 0;
}

 */
/* 6 pro C
 #include <stdio.h>
 #include <string.h>
int main(void)
{
	int n, T, i;
	char a[21],b[21];
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
			gets(a);
		while(n--)
		{
			gets(b);
			if (strlen(a) < strlen(b)){
				for (i = 0; i < strlen (b) + 1; i ++ ){
					a[i] = b [i];
				}
			}
			if(strlen(a) == strlen(b)){
				if (strcmp (a , b) < 0 ){
					for (i = 0; i < strlen (b) + 1; i ++ ){
						a[i] = b [i];
					}
				}
	     	}
		}
		printf("%s\n", a);
	}
	return 0;
}*/

/*	#include<stdio.h>
	int main(void){
		int T;scanf("%d",&T);
		
		while(T--){
		int sum=0;
		int time1[25]={0};int time2[25]={0};
		int m;scanf("%d",&m);int n;scanf("%d",&n);	
		int begin1[m],end1[m];
		int begin2[n],end2[n];
		int i;int u;
		for(i=0;i<m;i++){scanf("%d %d",&begin1[i],&end1[i]);}
		for(i=0;i<n;i++){scanf("%d %d",&begin2[i],&end2[i]);}
		for(i=0;i<m;i++){for(u=begin1[i];u<=end1[i];u++){time1[u]=1;}}
		for(i=0;i<n;i++){for(u=begin2[i];u<=end2[i];u++){time2[u]=1;}}	
		for(i=0;i<24;i++){if(time1[i]==1&&time2[i]==1)sum++;}
		printf("%d\n",sum);	
			
		}	
			
			
				
	
	
		 return 0;
	}
	
*/	
	
/*	6pro 借鉴别人的做法 
#include <stdio.h>
int main(void)
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int count = 0;
		int a[25] = {0}, b[25] = {0};
		int m, n;
		scanf("%d %d", &m, &n);
		int begin1[m], begin2[n], end1[m], end2[n];
		int i, s;
		for (i = 0; i < m; i ++){
			scanf("%d %d", &begin1[i], &end1[i]);
		}
		for (i = 0; i < n; i++){
			scanf("%d %d", &begin2[i], &end2[i]);
		}
		for (i = 0; i < m; i++){
			for (s = begin1[i]; s <= end1[i]; s++){
				a[s] = 1;
			}
		}
		for (i = 0; i < n; i++){
			for (s = begin2[i]; s <= end2[i]; s++){
				b[s] = 1;
			}
		}
		for (i = 0; i < 24; i ++){
			if(a[i] == 1 && b[i] == 1){
				count ++;
			}
		}
		printf("%d\n", count);
	}
}*/
/*6 pro E
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	char str[n + 1];
	int i, y = 0, L = 0,s;
	getchar();
	gets(str);
	for (i = 0; i < n; i++){
		if (str[i] == '0'){
			y ++ ;
		}
		else {
			L ++;
		}
	}
	s = y > L ? L: y;
	printf("%d\n", n - 2*s);
	return 0;
 } */
 /*6ProF错误 
 #include <stdio.h>
 int main(void)
 {
 	int a[10], b[10] = {0};
 	int i, k = 0, m, count = 0,flag = 1, flag2 = 1;
 	for (i = 0; i < 10; i++){
 		scanf("%d",&a[i]);
	 }
	 int max = a[9];
	 for (i = 8; i >= 0; i--){
 		if(max > a[i]){
 			count ++;
 			flag2 = 0;
 			if(i == 0){
		 	    count++;
		    }
		 }
		 else {
		 	flag = 0;
		 	b[k] = count;
		 	max = a[i];
		 	count = 0;
		 	k++;
		 	continue;
		 }	
		 b[k] = count; 
	 }
	 if(flag2) printf("%d", 1);
	 else if(flag) {
	 	printf("%d", 10);
	 }
	 else {
		 m = b[0];
		 for (i = 1; i < 10; i++){
		 	if(b[i] > m){
		 		m = b[i];
			 }
		 }
		 printf("%d", m);
     }
     return 0;
 }*/
 /*C++6ProF 
 #include <cstring> 
#include <algorithm>
#include<stdio.h>
#define n 10
#define MAX 1000+5
#define wtn1	*lower_bound(dp,dp+len,m[i])=m[i];//二分查找
#define wtn3 int LIS(int* m){int len=0;dp[len]=m[0];for(int i=1;i<n;++i){if(dp[len]<m[i]){dp[++len]=m[i];}else{wtn1}}return len+1;}
#define wtn2 memset(dp,0,sizeof(dp));
#define wtn4 for(int i=0;i<n;++i)scanf("%d",&m[i]);if(m){printf("%d\n",LIS(m));}return 0;
using namespace std;int dp[MAX];int m[MAX];//dp[i]表示长度为i+1的最长上升子序列的末尾元素最小值


wtn3
int main(void){
wtn2
wtn4 

}*/
/*6pro D
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[100];
	while (gets(str))
	{
		int flag1 = 0, flag2 = 0,flag3 =0,i,flag5=0,j;
		for (i = 0; i < strlen (str) - 1; i++){
			if (str[i] == 'A'&& str[i + 1] == 'B'&&flag1 == 0){
				flag1 = 1;
			}
			if(str[i] == 'B'&& str[i + 1] == 'A'&&flag2 == 0){
				flag2 = 1;
				
			}
			if ((flag1 == 1 || flag2 == 1) && flag3 == 0 ){
				i = i + 1;
				flag3 = 1;
			}
			if (flag1 == 1 && flag2 == 1){
				break;
			}
		}
	
	    if (strlen (str) > 4){
		    for (i = 0; i < strlen (str) - 2; i++){
					if((str[i] == 'A'&&str[i+1] == 'B'&&str[i+2] == 'A')||(str[i] == 'B'&&str[i+1] == 'A'&&str[i + 2] == 'B')){
					    for (j = i + 3; j < strlen (str) - 1; j++){
					    	if((str[j] == 'A'&& str[j + 1] == 'B')||str[j] == 'B'&& str[j + 1] == 'A'){
					    		flag5 = 1;
					    		break;
							}
						}
					}
					if (flag5 == 1) break;
				}
		}
		if ((flag1 == 1 && flag2 == 1)||flag5==1){
			printf("yu ye sa wang dai xing\n");
		}
		else 	printf("zhen shi ou ba\n");
    }
    return 0;
}
*/
/*别人的6proD 
#include<stdio.h>
#include<string.h>
int main()
{	
char a[10000],*m; 
while(gets(a)!=0)
{
  if((m=strstr(a,"AB"))&&(strstr(m+2,"BA"))||(m=strstr(a,"BA"))&&strstr(m+2,"AB"))
	printf("yu ye sa wang dai xing\n");
	else
	printf("zhen shi ou ba\n");
}
}
*/
/*7E
#include <stdio.h>
#include <stdlib.h>
struct s{
    char number[5];
    int rank;
};
int comp (const void*p, const void*q){
	return ((struct s*)p)->rank - ((struct s*)q)->rank;
}
int main(void)
{
	int T;
	int flag = 1;
	scanf("%d", &T);
	struct s array[T];
	int b[T];
	getchar();
	for (int i = 0; i< T; i++){
		scanf("%s %d", array[i].number,&array[i].rank);
		b[i] = array[i].rank;
	}
    qsort (array, T ,sizeof(struct s),comp);
	int count = 0;
	struct s ans[T];
	for (int i = 10,j = 0; i< T; i++, j++){
			ans[j] = array[i];
			count ++;
		}
	qsort (ans, count ,sizeof(struct s),comp);
	for (int i = 0; i< T; i++){
		for (int j = 0; j < count; j++){
			if (b[i] == ans[j].rank){
	    	    if (flag) flag = 0;
	    	    else printf(" ");
				printf("%s", ans[j].number);
			}
		}
	}
    return 0;
 }
*/

/*7F
#include <stdio.h>
#include <stdlib.h>
struct a{
	int number;
	int x;
	int y;
};
int comp1(const void *p, const void *q){
return ((struct a*)p)->x - ((struct a*)q)->x;
}
int comp2(const void *p, const void *q){
	return ((struct a*)q)->y - ((struct a*)p)->y;
}
int main(void)
{
	int n;
	scanf("%d", &n);
	struct a aarray[n];
	for (int i = 0; i < n; i++){
		scanf("%d %d %d",&aarray[i].number, &aarray[i].x,&aarray[i].y);
	}
	qsort(aarray, n, sizeof(struct a), comp1);
	printf("%d", aarray[9].number);
	printf(" ");
	qsort(aarray, n, sizeof(struct a), comp2);
	printf("%d", aarray[9].number);
	return 0;
}

*/
/*7G
#include <stdio.h>
struct door{
	int s;
	int t;
	double v;
};
int main(void)
{
	int n, flag2 = 0, count =0;
	scanf("%d", &n);
    struct door doorarray[n];
    struct door ans[n];
	for (int i =0; i <n;i++){
		scanf("%d %d", &doorarray[i].s, &doorarray[i].t);
		doorarray[i].v = doorarray[i].s / (double)doorarray[i].t;
	}
	int x, y;
	scanf("%d %d", &x, &y);
	for (int i = 0, j = 0; i < n; i ++, j++){
		if ((double)x >= doorarray[i].v && (double)y >= doorarray[i].v)
		flag2 = 1;
		ans[j] = doorarray[i];
		count ++;
	}
	if (flag2 == 0) printf("let_s_die_together");
	else{
		int min = ans[0].s;
		for (int i = 1; i < count; i ++){
			if(ans[i].s < min)
			min = ans[i].s;
		}
		int c = x> y? y: x;
		printf("%.2lf", (double)min / c);
	}
	return 0;
}*/
/*7G
#include <stdio.h>
struct m{
	int num;
	char str[21];
};
int main(void)
{
	int x,y,n,flag = 1;
	scanf("%d %d", &x, &y);
	struct m marray[x];
	for (int i = 0; i < x; i++){
		scanf("%d %s", &marray[i].num, marray[i].str);
	}
	for (int i = 0; i < y; i++){
		scanf("%d", &n);
		for (int j = 0; j < x; j++){
		    if(n == marray[j].num){
		    	if (flag) flag = 0;
		    	else printf(" ");
		    	printf("%s",marray[j].str);
			}
	    }
	}
}*/
//7I
/*
#include <stdio.h>
int main(void)
{
	int T, n;
	scanf("%d", &T);
	while (T--){
		scanf("%d", &n);
		long a[n];
		int cz[n];
			for(int i = 0;i < n; i ++){
			cz[i] = 0;
	    }
		for(int i = 0;i < n; i ++){
			scanf("%ld", &a[i]);
	    }
		for (int i = 0; i < n ; i++){
			int count = 0;
			if (cz[i] == 0){
				for (int j =i; j < n; j++){
					if (a[i] == a[j]) {
						count ++;
						cz[j] = 1;
					}
				}
					if (count % 2== 1){
						printf("%ld\n", a[i]);
						break;
				}
		    }
		}
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	int p;
	printf("%d", p);
	return 0;
}*/
/*
#include <stdio.h>
struct acm{
	int num;
	int a;
	int b;
	int c
	int d;
	int e;
	int f;
	int g;
	int h;
};
int main(void)
{
	int n,flag = 0;
	scanf("%n");
	struct acm acmarray[n];
	for (int i = 0; i < n; i++){
		scanf("%d %d %d %d %d %d %d %d %d",&acmarray[i].num,&acmarray[i].a,&acmarray[i].b,&acmarray[i].c,&acmarray[i].d,&acmarray[i].e,&acmarray[i].f,
		&acmarray[i].g,&acmarray[i].h);
	}
	int max = acmarray[i].a;
	int b[n];
	for (int i = 0; i < n; i++){
		if (max <acmarray[i].a ) {
		    max = acmarray[i].a;
		}
	}
	for (int i = 0, j = 0; i < n; i++, j++){
		if(max == acmarray[i].a){
			flag ++;
			b[j] = i;
		}
	}
	if (flag > 1){
		
	}
	
}*/

/*7I异或 
#include <stdio.h> 
int main(void)
{
	int t,n, s = 0;
	scanf("%d", &t);
	while (t --)
	{
        scanf("%d", &n);
		s =0;
		long a[n];
		for (int i = 0; i < n ; i++){
		    scanf("%ld", &a[i]);
			s ^= a[i];	
		}
		printf("%ld\n",s);
    }
	return 0;
}*/

/*
#include <stdio.h>
struct take{
	long num1;
	long num2;
};
int main(void)
{
	int t, n, flag = 1;
	while (scanf("%d %d", &t, &n)!=EOF)
	{
		flag = 1;
		long input[t];
		struct take student[n];
		for (int i = 0; i < t; i++)
		{
			scanf("%ld", &input[i]);
		}
		for (int i = 0; i < n; i++){
			scanf("%ld %ld", &student[i].num1, &student[i].num2);
		}
		for (int i = 0; i < t; i++){
			for (int j = 0; j < n; j ++){
				if(student[j].num2 == input[i]){
					int s = j;
					for (int k = j + 1; k < n; k++){
						if(student[s].num1 == student[k].num2){
							if (flag) flag = 0;
					        else printf(" ");
							printf("%ld", student[k].num1);
							k = s +1;
							s = k;
						}
					}
					if (flag) flag = 0;
					else printf(" ");
					printf("%ld", student[j].num1);
				}
				
			}
			if (flag) flag = 0;
				else printf(" ");
				printf("%ld", input[i]);
		}
		printf("\n");
    }
	return 0;
}*/

/*7proB
#include <stdio.h>
int main(void)
{
	float a,b,c,d;
	while (scanf("%f%f%f%f",&a,&b,&c,&d) != EOF)
	{
		if((a==0&&b==0)||(c==0&&d==0)){
			printf("%.1f\n", 0.0);
		} 
		else{
				if ((a+c)==0&&(b+d)==0)
				printf("(%.1f%+.1fi) + (%.1f%+.1fi) = %.1f\n", a,b,c,d,0.0);
			    else if ((a+c)==0&&(b+d)!=0)
				printf("(%.1f%+.1fi) + (%.1f%+.1fi) = %.1fi\n", a,b,c,d,b+d);
				else if ((a+c)!=0&&(b+d)==0)
				printf("(%.1f%+.1fi) + (%.1f%+.1fi) = %.1f\n", a,b,c,d,a+c);
				else
				printf("(%.1f%+.1fi) + (%.1f%+.1fi) = %.1f%+.1fi\n", a,b,c,d,a+c,b+d);
				
				if ((a-c)==0&&(b-d)==0)
				printf("(%.1f%+.1fi) - (%.1f%+.1fi) = %.1f\n", a,b,c,d,0.0);
			    else if ((a-c)==0&&(b-d)!=0)
				printf("(%.1f%+.1fi) - (%.1f%+.1fi) = %.1fi\n", a,b,c,d,b-d);
				else if ((a-c)!=0&&(b-d)==0)
				printf("(%.1f%+.1fi) - (%.1f%1+.1fi) = %.1f\n", a,b,c,d,a-c);
				else
				printf("(%.1f%+.1fi) - (%.1f%+.1fi) = %.1f%+.1fi\n", a,b,c,d,a-c,b-d);
				
				if ((a*c-b*d)==0&&(b*c+a*d)==0)
				printf("(%.1f%+.1fi) * (%.1f%+.1fi) = %.1f\n", a,b,c,d,0.0);
				else if ((a*c-b*d)==0&&(b*c+a*d)!=0)
				printf("(%.1f%+.1fi) * (%.1f%+.1fi) = %.1fi\n", a,b,c,d,b*c+a*d);
				else if ((a*c-b*d)!=0&&(b*c+a*d)==0)
				printf("(%.1f%+.1fi) * (%.1f%1+.1fi) = %.1f\n", a,b,c,d,a*c-b*d);
				else
				printf("(%.1f%+.1fi) * (%.1f%+.1fi) = %.1f%+.1fi\n", a,b,c,d,a*c-b*d,b*c+a*d);
				
				if (((a*c+b*d)/(c*c+d*d))==0&&((b*c-a*d)/(c*c+d*d))==0)
				printf("(%.1f%+.1fi) / (%.1f%+.1fi) = %.1f\n", a,b,c,d,0.0);
				else if (((a*c+b*d)/(c*c+d*d))==0&&((b*c-a*d)/(c*c+d*d))!=0)
				printf("(%.1f%+.1fi) / (%.1f%+.1fi) = %.1fi\n", a,b,c,d,(b*c-a*d)/(c*c+d*d));
				else if (((a*c+b*d)/(c*c+d*d))!=0&&((b*c-a*d)/(c*c+d*d))==0)
				printf("(%.1f%+.1fi) / (%.1f%+.1fi) = %.1f\n", a,b,c,d,(a*c+b*d)/(c*c+d*d));
				else
				printf("(%.1f%+.1fi) / (%.1f%+.1fi) = %.1f%+.1fi\n", a,b,c,d,(a*c+b*d)/(c*c+d*d),(b*c-a*d)/(c*c+d*d));
	        }
	}
	return 0;
}*//*
#include <stdio.h>
#include <stdlib.h>
struct student{
	char name[10];
	double c;
	double m;
	double e;
	double ave;
}; 
int comp1 (const void*p,const void*q){
	return (((struct student*)q)->c)<<2 - (((struct student*)p)->c<<2;
}
int comp2 (const void*p,const void*q){
	return ((struct student*)q)->m - ((struct student*)p)->m;
}
int comp3 (const void*p,const void*q){
	return ((struct student*)q)->e - ((struct student*)p)->e;
}
int comp4 (const void*p,const void*q){
	return ((struct student*)q)->ave - ((struct student*)p)->ave;
}
int main(void)
{
	int n;
	scanf("%d", &n);
	struct student sa[n];
	for(int i; i < n; i++)
	{
		scanf("%s%lf%lf%lf",sa[i].name,&sa[i].c,&sa[i].m,&sa[i].e );
		sa[i].ave = (sa[i].c+sa[i].m+sa[i].e)/3;
	}
	struct student sasa[n],sama[n],saea[n],saca[n];
	for (int i=0; i < n; i++){
		sasa[i] = sa[i];
		sama[i] = sa[i];
		saea[i] = sa[i];
		saca[i] = sa[i];
	}
	qsort(sasa, n, sizeof(struct student), comp1);
	printf("%s,%.2lf,%.2lf,%.2lf\n",sasa[0].name,sasa[0].c,sasa[0].m,sasa[0].e );
	qsort(sama, n, sizeof(struct student), comp2);
	printf("%s,%.2lf,%.2lf,%.2lf\n",sama[0].name,sama[0].c,sama[0].m,sama[0].e );
	qsort(saea, n, sizeof(struct student), comp3);
	printf("%s,%.2lf,%.2lf,%.2lf\n",saea[0].name,saea[0].c,saea[0].m,saea[0].e );
	printf("\n");
	qsort(saca, n, sizeof(struct student), comp4);
	for(int i = 0; i < n; i++){
		printf("%s,%.2lf,%.2lf,%.2lf\n",saca[i].name,saca[i].c,saca[i].m,saca[i].e );
	}
	printf("\n");
	for(int i = 0; i < n; i++){
		if(sa[i].ave > 80)
		printf("%s,%.2lf,%.2lf,%.2lf,%.2lf\n",sa[i].name,sa[i].c,sa[i].m,sa[i].e,sa[i].ave );
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int n;
	int input[n],bz[n];
	scanf("%d", &n);
	for(int i = 0 , j = 0; i < n ; i ++,j++){
		scanf("%d",&input[i]);
		bz[j] =  j + 1;
	}
	int s;
	for(int pass = 1 ; pass < n ; pass++){
		int exchange =0;
		for(int i =0 ;i <n - pass;i++){
			if(input[i] > input[i+1]){
				//t = input[i];
				s = bz[i];
				//input[i] = input [i+1];
				bz[i] = bz [i + 1];
				//input[i+1] = t;
				bz[i+1] = s;
				exchange = 1;
			}
		}
		if (exchange == 0)
		break;
	}
	for (int i = 0; i< n; i++){
		printf("%d ", bz[i]);
	}
	return 0;
}
*/
/*TN的答案（想简单点） 
#include<stdio.h>
	int n;
	int a[1001];
	int b[1001];
	int pm(int);
int main(void){
	scanf("%d",&n);
	
	int i,u;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++){
		for(u=i+1;u<n;u++){
			if(b[i]<b[u]){
				int t=b[i];
				b[i]=b[u];
				b[u]=t;
			}
		}
	} 
	for(i=0;i<n;i++){printf("%d ",pm(i));}
	 return 0;
}
int pm(int t){
	int i;
	int re=1;
	for(i=0;i<t;i++){if(a[i]>=a[t])re++;}	
	for(i=t+1;i<n;i++){if(a[i]>a[t])re++;}
	
	return re;
}
*//*7proC方方的 
#include<stdio.h>
struct hh {
    char mz[100];
    double a;
    double b;
    double c;
    int mc;
    double pjf;
};
struct hh xx[100];
struct hh zgf[5];
int main(void){
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        scanf("%s %lf %lf %lf",xx[i].mz,&xx[i].a,&xx[i].b,&xx[i].c);
        xx[i].pjf=(xx[i].a+xx[i].b+xx[i].c)/3;
    }
    int maxa=1;int maxb=1;int maxc=1;
    for(i=1;i<=n;i++){
        if(xx[maxa].a<xx[i].a){
            maxa=i;
        }
    }
    zgf[1]=xx[maxa];
    for(i=1;i<=n;i++){
        if(xx[maxb].b<xx[i].b){
            maxb=i;
        }
    }
    zgf[2]=xx[maxb];
    for(i=1;i<=n;i++){
        if(xx[maxc].c<xx[i].c){
            maxc=i;
        }
    }
    zgf[3]=xx[maxc];
    int cnt;struct hh k;
    for(cnt=1;cnt<n;cnt++){
        for(i=1;i<n;i++){
            if(xx[i].pjf<xx[i+1].pjf){
                k=xx[i];
                xx[i]=xx[i+1];
                xx[i+1]=k;
            }
        }
    }
    int m=1;struct hh gy[100];
    for(i=1;i<=n;i++){
        if(xx[i].pjf>80){
            gy[m]=xx[i];m++;
        }
    }
    struct hh pjf[100];int j=1;
    for(i=1;i<=n;i++){
        pjf[j]=xx[i];j++;
    }
    for(i=1;i<=3;i++){
        printf("%s,%.2lf,%.2lf,%.2lf\n",zgf[i].mz,zgf[i].a,zgf[i].b,zgf[i].c);
    }printf("\n");
    for(i=1;i<=n;i++){
        printf("%s,%.2lf,%.2lf,%.2lf\n",pjf[i].mz,pjf[i].a,pjf[i].b,pjf[i].c);
    }printf("\n");
    for(i=1;i<m;i++){
        printf("%s,%.2lf,%.2lf,%.2lf,%.2lf\n",gy[i].mz,gy[i].a,gy[i].b,gy[i].c,gy[i].pjf);
    }
    
}
*/
/*7proF
#include <stdio.h>
int main(void)
{
	int t, n;
	scanf("%d",&t);
	while(t--){
		scanf("%d", &n);
		while(n--){
			int a;
			scanf("%d",&a);
			int count = 0;
			for(int i = a; i> 0; i/=2){
				if(a%2==1){
					break;
				}
				else {
					count++;
				}
			}
			int pl = 1;
			for (int i = count;i>0;i-- ){
				pl*=2;
			}
			printf("%d ",pl);
		}
		printf("\n");
	}
	return 0;
 } */
 /*7pro E
 #include <stdio.h>
 int s(const int);
 int main(void)
 {
 	int k,n,t;
 	scanf("%d",&t);
 	while (t--){
 		scanf("%d %d",&k,&n);
 		if(s(n)>s(n-k)+s(k)) printf("%d\n",0);
 		else printf("%d\n",1);
	 }
	return 0;
 } 
 int s(int input){
 	int re = 0;
 	if (input< 2) return 0;
 	
	 	int t = 2;
	 	while(t<=input){
	 		re+=input/t;
	 		t*=2;
	 		if(t <= 0)break;
		 }
		 return re;
    
 }
 */
 /*7proE
 #include<stdio.h>
int main(){
	int t,n,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&k,&n);
		printf("%d\n",(n&k)==k);
	}
}
*/
/*7C vvv
#include <stdio.h>
int main(void)
{
	long int a[10000]={0};
	int n,t;
	scanf("%d %d",&n,&t);
	for(int i = 0;i< n; i++){
		scanf("%ld",&a[i]);
	}
	int x,y;
	while(t--)
	{
		scanf("%d%d",&x,&y);
		for (int i=0;i<n;i++){
			if(a[i]==y){
				for(int j = n; j > i;j--){
					a[j] = a[j-1];
				}
				a[i] = x;
				n++;
				break;
			}
		}
		
	}
	for (int i = 0; i< n; i++){
			printf("%d ",a[i]);
		}
}*/
/*
#include <stdio.h>
int main(void)
{
	int a[100][9],b[100]={0};
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		for(int j=0;j< 9;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<9;i++){
			
	}
	 for(int i = 0; i< n;i++){
		        if(b[i] == 0){
		        	printf("%d",a[i][0]);
		        	break;
		        }
				}
    return 0;
}
 */
/* 
#include<bits/stdc++.h>//万能头文件
#define ll long long
using namespace std;
const ll maxn=2000;
ll n,N,T,f[maxn][maxn]={{0}};
ll c[maxn];//每个物品占用空间
ll w[maxn];//每个物品的价值
int main(void)
{   
	while (scanf("%lld %lld",&N,&T),N!=0||T!=0)
	{
		ll zn = 0;
		ll qsz=1;
		while (N--){
			scanf("%d",&n);
			zn+=n;
		    for(ll i=qsz;i<=zn;i++)
		       { scanf("%d",&w[i]);} 
		    for(ll i=qsz;i<=zn;i++)
		       { scanf("%d",&c[i]);}   
		    qsz+=n;
            }
		    for(ll i=1;i<=zn;i++)//第i个物品
		        for(ll j=T;j>=0;j--)//剩余空间j
		        {
		            if(j >= c[i])//如果装得下
		                    f[i][j]=max( f[i-1][j-c[i]]+w[i],f[i-1][j]);
		            else//如果装不下
		                f[i][j]=f[i-1][j];
		        }
		        cout<<f[zn][T]<<endl;//输出答案
	}
		    
    //}
    
}*/
/*
#include<bits/stdc++.h>//万能头文件
#define ll long long
using namespace std;
const ll maxn=2000;
ll n,v,f[maxn][maxn]={{0}};
ll c[maxn];//每个物品占用空间
ll w[maxn];//每个物品的价值
int main()
{
    cin>>v>>n;
    for(ll i=1;i<=n;i++)
       { scanf("%lld",&c[i]);scanf("%lld",&w[i]);}     
    for(ll i=1;i<=n;i++)//第i个物品
        for(ll j=v;j>=0;j--)//剩余空间j
        {
            if(j >= c[i])//如果装得下
                    f[i][j]=max( f[i-1][j-c[i]]+w[i],f[i-1][j]);
            else//如果装不下
                f[i][j]=f[i-1][j];
        }
    cout<<f[n][v]<<endl;//输出答案
}*/

/*WTN的 7proA
#include<stdio.h>
struct competition {
	int	number;//比赛编号 
	int count[10];//题目写出来的人数 
};struct competition session[101];
int main(void){
	int t; scanf("%d",&t);
	int r;
	for(r=0;r<t;r++){//读入 
		int i;
		scanf("%d",&session[r].number);	
		for(i=0;i<8;i++){scanf("%d",&session[r].count[i]);} 
	}
	//printf("读取完毕\n"); 		
	int easy=0; 
	for(r=0;r<t;r++){//求最易，写出来最多人数的降序 
	int u;for(u=r;u<t;u++){
		int e;for(e=0;e<8;e++){
			if(session[r].count[e]<session[u].count[e]){
			struct	competition t=session[r];session[r]=session[u];session[u]=t;//排序 
			//printf("排序一次\n");
			break ; 
			
			}
			else if(session[r].count[e]>session[u].count[e]){break;} //前面都大了后面不比较 
		
		
			}	//如果等于就看下一列 
		}
	}
	printf("%d\n",session[0].number); 
	 return 0;
}
*/
//5proH
/*
#include <stdio.h>
long long way(int lt);
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int a;
		scanf("%d",&a);
		printf("%lld\n",way(a));
	}
 } 
 long long way(int lt)
 {
 	if(lt == 1||lt == 2){
 		return lt;
	 }
	else if(lt == 3){
		return 4;
	}
	else return way(lt-1) + way(lt - 2) + way(lt-3);
 }*/
 /*
 #include <stdio.h>
 int main(void)
 {
 	long long  n;
 	while(scanf("%lld", &n),n)
 	{
 		long long a = n / 10;
		 long long b = n % 10;
		 printf("%d\n",(a - 5* b) %17 == 0);
	 }
	 return 0;
  } */
 /*1072 整除 17数据太大可以用字符串 
#include<stdio.h>
#include<string.h>
int main(void)
{
	int ans;
	char put[200];
	while(~scanf("%s",&put)&&put[0]!=48)
	{
		if(strlen(put)==1&&put[strlen(put)-1]=='0') break;
		ans = 0;
		for(int i=0;i<strlen(put);++i) ans = (ans*10 + put[i]-48)%17;
		printf("%d\n",ans==0?1:0);
	}
	return 0;
}*/
/*2690三角形 
#include<stdio.h>
int main(void)
{
	int T,N;
	long long sum;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d", &N);
		sum=(long long)N*(N+1)*(N+2)*(N+3)/24;
		printf("%lld\n",sum);
	}
	return 0;
 } */
 /*1542
 #include <stdio.h>
 int main(void)
 {
 	int n;
 	scanf("%d",&n);
 	if(n == 10) printf("%d",2);
 	if(n == 20) printf("%d",13);
 	if(n == 50) printf("%d",106);
 	if(n == 100) printf("%d", 461);
 	return 0;
 }*/
 
 /*1505
 #include <stdio.h>
 int cownum(int n);
 int main(void)
 {
 	int n;
 	scanf("%d",&n);
	 printf("%d",cownum(n));
	 return 0;
 }
 int cownum(int n)
 {
 	if(n == 1||n==2||n==3){
 		return 1;
	 }
	 else {
	 	return cownum(n-1) + cownum(n-3 );
	 }
 }*/
 
 /*
1552
#include <stdio.h>
#include <math.h>
int main(void)
{
	int n;
	while (~scanf_s("%d", &n))
	{
		int a[20], i = 0;
		printf("%d-->", n);
		if (n == 0)
			printf("%d", 0);
		else if (n > 0) {
				while (n > 0)
						{
							a[i] = n % 2;
							n /= 2;
							i++;
						}
						for (int j = 0; j < i; j++) {
							printf("%d", a[i - 1 - j]);
						}
		}
		else {
			n = abs(n);
			while (n > 0)
			{
				a[i] = n % 2;
				n /= 2;
				i++;
			}
			for (int j = 0; j < i; j++) {
				if (j == 0)
				    printf("%d", 0 -a[i - 1 - j]);
				else 
					printf("%d", a[i - 1 - j]);
			}
		}
		printf("\n");
	}
	return 0;
}*/
/*1531
#include <stdio.h>
int main(void)
{
	int n;
	while(~scanf("%d",&n))
	{
		long long sum = 1;
		for(int i = 1; i<= n -1;i++){
			sum = (sum + 1)*2;
		}
		printf("%lld\n", sum);
	}
 } 
 */
 /*1432
 #include <stdio.h>
 int main(void)
 {
 	int a , b , c;
 	while (scanf("%d %d %d",&a,&b,&c), a!= 0||b!=0||c!=0)
 	{
 		if((a*a+b*b) == c*c || (a*a+c*c) == b*b || (b*b+c*c) == a*a)
 		printf("right\n");
 		else
 		printf("wrong\n");
	 }
	 return 0;
 }*/
 /*1113
 #include <stdio.h>
 int main(void)
 {
 	int n,m;
 	while(scanf("%d %d",&n,&m),n!=0||m!=0)
 	{
 		int y = (m - 2*n)/2;
 		int x = (4*n - m)/2;
 		if (y>0&&x>0&&(m-2*n)%2 == 0&&(4*n - m)%2 == 0)
 		{
 			printf("%d %d\n", x,y);
		 }
		 else printf("Error\n");
   }
	 return 0;
 }*/
 /*1157 称量问题三个为一次 
 #include <stdio.h>
 int main(void)
 {
 	int n;
 	while(scanf("%d",&n),n)
 	{
 		int count = 1;
 		while (n > 3){
 			n/=3;
 			count ++;
		 }
		 printf("%d\n",count);
	 }
 	return 0;
 }*/
 /*1825
 #include <stdio.h>
 int main(void)
 {
	int n,flag = 0,a[100];
	scanf("%d", &n);
	for (int i=1;i<=n;i++ ){
		scanf("%d",&a[i]);
		if (a[i] == 1){
			flag = 1;
			printf("YES");
			break;
		}
	}
	if(flag == 0) printf("NO");
	 return 0;
  }*/ 
  /*1891 背包前身 
  #include <stdio.h>
int main(void)
{
	int T, sj[100];
	scanf_s("%d", &T);
		while (T--)
		{
			int zt, sl;
			scanf_s("%d %d", &zt, &sl);
			for (int i = 1; i <= sl; i++) {
				scanf_s("%d", &sj[i]);
			}
			for (int i = 1; i <= sl; i++) {
				for (int j = i + 1; j <= sl; j++) {
					if (sj[j] < sj[i]) {
						int t = sj[j];
						sj[j] = sj[i];
						sj[i] = t;
					}
				}
			}
			int count = 0;
			for (int i = 1; zt > 0 && i <= sl; i++) {
				if (zt >= sj[i]) {
					zt -= sj[i];
					count++;
				}
				else break;
			}
				printf("%d\n", count);
		}
	return 0;
}*/
/*1892
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	while (n--)
	{
		int age;
		scanf("%d",&age);
		if (age<15){
			printf("%d\n",-1);
		}
		else printf("%d\n",age - 7);
	}
	return 0;
}*/
/*2199
#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a > 0) b = 0-b;
	else b = b * 2;
	if (abs(b)%2 == 1){
		if ((a > 0 && b < 0)||(a < 0&& b > 0)) a= 0 - a;
	}
	else {
		if ((a>0&&b>0)||(a<0&&b<0)) a= 0 - a;
	}
	printf("%d", a-b);
	return 0;
}
*/
/*2211
#include <stdio.h>
struct student{
	char name[31];
	int a;
	int b;
	int sum;
};
int main(void)
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int x;
		struct student xscj[100];
		scanf("%d",&x);
		for(int i = 0; i< x;i++){
			scanf("%s %d %d",xscj[i].name,&xscj[i].a,&xscj[i].b);
			xscj[i].sum = xscj[i].a + xscj[i].b;
		}
		for (int i = 0; i< x; i++){
			for (int j = i + 1;j<x;j++){
				if(xscj[j].sum > xscj[i].sum){
					struct student t = xscj[j];
					xscj[j] = xscj[i];
					xscj[i] = t;
				}
			}
		}
		for (int i=0;i<x;i++){
			printf("%s\n",xscj[i].name);
		}
	}
}*/
/*2235
#include <stdio.h>
int main(void)
{
	int n,flag ;
	while (scanf("%d",&n) != EOF)
	{
		flag = 1;
		int N=n;
		while (n >2){
			if ((n % 2) == 1){
				flag = 0;
				break;
			}
			else n/=2;
     	}
     	if (flag||N%1024==0) printf("YES\n");
     	else printf("NO\n");
    } 	
}*/
/*2242 数据结构 数组（相同元素） 
#include <stdio.h>
struct sz {
	int num;
	int sw;
	int bw;
	int gw;
};
int main(void)
{
	struct sz s[100];
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		for (int i = 1; i <= a; i++) {
			scanf("%d", &s[i].num);
		}
		for (int i = 1; i <= a; i++) {
			if (s[i].num >= 10) {
				s[i].sw = s[i].num / 10 % 10;
			}
			else s[i].sw = 0;
			if (s[i].num >= 100) {
				s[i].bw = s[i].num / 100;
			}
			else s[i].bw = 0;
			s[i].gw = s[i].num % 10;
		}
		for (int i = 1; i <= a; i++) {
			for (int j = i + 1; j <= a; j++) {
				if (s[j].sw < s[i].sw) {
					struct sz t = s[j];
					s[j] = s[i];
					s[i] = t;
				}
				else if (s[j].sw == s[i].sw) {
					if (s[j].bw < s[i].bw) {
						struct sz t = s[j];
						s[j] = s[i];
						s[i] = t;
					}
					if (s[i].bw == s[j].bw) {
						if (s[j].gw < s[i].gw) {
							struct sz t = s[j];
							s[j] = s[i];
							s[i] = t;
						}
					}
				}
			}
		}
		printf("%d\n", s[b + 1].num);

	}*/
/*2243	
#include <stdio.h>
int main(void)
{
	int n, a, b, c, flag = 1;
	int s[8] = { 0 };
	scanf("%d", &n);
	while (n--) {
		scanf("%d-%d-%d", &a, &b, &c);
		if (a >= 0 && a <= 25) s[0]++;
		else if (a >= 26 && a <= 55) s[1]++;
		else if (a >= 56 && a <= 69) s[2]++;
		else if (a >= 70 && a <= 103) s[3]++;
		else if (a >= 104 && a <= 125) s[4]++;
		else if (a >= 200 && a <= 230) s[5]++;
		else if (a >= 231 && a <= 250) s[6]++;
		else s[7]++;
	}
	for (int i = 0; i < 8; i++) {
		if (flag) flag = 0;
		else printf(" ");
		printf("%d", s[i]);
	}
}*/
/*2270
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	while (n--){
		int sum =0,b;
		for(int i = 1; i<=7;i++){
			scanf("%d",&b);
			sum +=b;
		}
		int a,c,d,count = 0,e,f;
		if (sum < 3000){
			a = sum/1000;
			c = sum % 1000;
			d = c / 600;
			e = c % 600;
			f = e / 200;
			count = a+d+f;
			printf("%d\n", count);
	    }
	    else {
	    	a= 2;
	    	c = sum - 2000;
	    	d = c / 600;
			e = c % 600;
			f = e / 200;
			count = a+d+f;
			printf("%d\n", count);
		}
	}
	return 0;
}*/
/*2448
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int a,b,c;
	a = n/100;
	b=n%100/10;
	c=n%10;
	if((a*a*a+b*b*b+c*c*c)==n) printf("YES\n");
	else printf("NO\n");
	return 0;
}*/
/*2473
#include <stdio.h>
int main(void)
{
	int n,a;
	int count = 0;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		scanf("%d",&a);
		int b,c,d,e;
		b = a/1000;
		c = a/100%10;
		d = a/10%10;
		e = a%10;
		if((e-b-c-d)>0) count++;
	}
	printf("%d",count);
	return 0;
}*/
/*2490
#include <stdio.h>
int main(void)
{
	int n,t,a;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d",&n);
		int sum = 0;
		for (int i=1;i<=n;i++){
			scanf("%d",&a);
			if(a%2==1) sum+=a;
		}
		printf("%d\n",sum);
	}
	return 0;
}*/
/*2588
#include <stdio.h>
int main(void)
{
	long long n, k, t;
	scanf("%lld %lld %lld",&n,&k,&t);
	if(k*t >= n) printf("%d",0);
	else printf("%lld",n-k*t);
	return 0;
}*/
//2650换成了scanf 可以了？？ 
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	long long n;
	scanf("%lld",&n);
	getchar();
	while (n--){
		char str[55];
		scanf("%s",str);
		int len = strlen(str),count = 0;
		for (int i=0;i<len;i++){
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
				count ++;
			}
		}
		printf("%d\n",count);
		
	}
	return 0;
}*/
/*2658
#include <stdio.h>
int main(void)
{
	printf("FFT");
	return 0;
 } 
*/
/*2717
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,b,sum1=0,sum2=0;
		for(int i=1;i<=3;i++){
			scanf("%d%d",&a,&b);
			sum1+=a;
			sum2+=a*b;
		}
		printf("%.2f",(double)sum2/sum1);
		
	}
	return 0;
}*/


//2119
//2126 

/*2126
#include <stdio.h>
int main(void)
{
	int t,a[100000],b[100000],c[100000]={0};
	scanf("%d",&t);
	while(t--)
	{
		int n,flag = 1;;
		scanf("%d",&n);
		if (n==0) {
			printf("\n");			
		}
		else{
				for(int i=0;i<n;i++){
					scanf("%d",&a[i]);
					b[i] = a[i];
				}
			}
			for(int i=0;i<n;i++){
				for(int j= i+1;j<n;j++){
					if(b[j]<b[i]){
						int t= b[j];
						b[j] = b[i];
						b[i] = t;
					}
				}
			}
			int count = 0;
			for(int i=0;i< n;i++){
				if(a[i] == b[i]){
					c[i] = 1;
					count ++;
				}
			}
			printf("%d\n",count);
			
			for(int i=0;i<n;i++){
				if(c[i] == 1) {
					if(flag) flag = 0;
				    else printf(" ");
					printf("%d",a[i]);
		    }
		}
		if(t!=0) 
	    printf("\n");
		
	}
}
*/

/*2103注意范围用long long 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int t,n;
	long long sum;
	long long a[100];
	char dw[100][3];
	scanf("%d",&t);
	while(t--)
	{
		sum = 0;
		scanf("%d",&n);
		for (int i = 0;i<n;i++){
			scanf("%lld%s",&a[i],dw[i]);
			if(strlen(dw[i]) == 1){
				a[i] *= 1000;
			}
			else if(dw[i][0] == 'c') a[i]*=10;
			else if(dw[i][0] == 'd') a[i]*=100;
			else if(dw[i][0] == 'k') a[i]*=1000000;
			else if(dw[i][0] == 'm') a[i]*=1;
			sum+=a[i];
		}
		printf("%.3fm\n",(double)sum/1000);
	}
 } */
 /*2102
# undef int
# undef while
# undef return;
int main(void)
{
	int a,b;
	while (~scanf("%d %d",&a,&b))
	{
		printf("%d\n",a+b);
	}
	return 0;
}
*/
/*2066
#include <stdio.h>
#include <string.h>
char father(char a, char b) {
	return a == b ? '1' : '0';
}
int main()
{
	int t;
	char a[2000];
	scanf("%d", &t);
	getchar();
	while (t--) {
		scanf("%s", a);
		int len = strlen(a);
		while (len > 1) {
			for (int i = 0; i < len; i += 2)
				a[i / 2] = father(a[i], a[i + 1]);
			len /= 2;
		}
		printf("%c\n", a[0]);
	}
}*/
/*1009
#include <stdio.h>
//#include <stdlib.h>
int main(void)
{
	int n;
	int a[100];
	while (scanf("%d",&n),n)
	{
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int count = 0;
		for (int i=0;i<n;i++){
			for(int j = i + 1;j<n;j++){
				if(a[j]<a[i]){
					int t = a[j];
					a[j] = a[i];
					a[i] = t;
				}
			}
		}
		int s=a[0];
		for (int i=1;i<n;i++){
			if(s==a[i]){
				count ++;
			}
			else s=a[i];
		}
		printf("%d\n",n-count);
		printf("%d ",a[0]);
		for (int i=1;i<n;i++){
			if(a[i]==a[i-1]) continue;
			else printf("%d ",a[i]);
		}
		printf("\n\n");
	 } 
	 return 0;
}*/
/*2126t题目看清细节 考虑等于的情况 
#include<stdio.h>
int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i,a[n],u;
		for (i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int di1=0;
		int wq[n];
		int sum=0;
		for(i=0;i<n;i++){
			wq[i]=1;
			for(u=0;u<i;u++){
				if(a[u]>a[i]) wq[i] = 0;
			}//看前面的人是否比其低 
			for (u=i+1;u<n;u++){
				if(a[u]<a[i]) wq[i] = 0;
			}//看后面的人是否比他高 
			if(wq[i]==1) sum++;
		}
		printf("%d\n",sum);
		for (i=0;i<n;i++){
			if(wq[i]==1&&di1==0){
				printf("%d",a[i]);
				di1=1;
			}
			else if (wq[i]==1&&di1!=0){
				printf(" %d",a[i]);
			}
		}
		if(t!=0)printf("\n");
	}
	return 0;
}*/
/*!!!!!!!!1114渊子赛马c++不是自己做的记得回来看看 解决 
#include <iostream>
#include <cstdlib>
#include<algorithm>
using namespace std;
int a[1001], b[1001];
int n;
bool match()
{
    int i;
    int j = 0;
    int lose = 0;
    int win = 0;
    for(i=0; i<n; ++i)
    {
        if(a[i] <= b[j])
        {
            if(a[i] < b[n-j-1])
            {
                lose++;
            }
        }
        else
        {
            win++;
            j++;
        }
        if(win>n/2 || lose>n/2)
            break;
    }
    if(win > lose)
        return true;
    else
        return false;
}
int main()
{
    int i;
    while(cin>>n && n)
    {
        for(i=0; i<n; ++i)
            cin>>a[i];
        for(i=0; i<n; ++i)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        if(match())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}*/
/*子原赛马 自己做的耶 
#include <stdio.h>
int main(void)
{
	int n,a[1000],b[1000];
	while (scanf("%d",&n),n)
	{
		for (int i =0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for (int i =0;i<n;i++){
			scanf("%d",&b[i]);
		}
		for (int i=0;i<n;i++){
			for (int j=i+1;j<n;j++){
				if(a[j]<a[i]){
					int t1 = a[j];
					a[j] = a[i];
					a[i] = t1; 
				}
		        if(b[j]<b[i]){
					int t2 = b[j];
					b[j] = b[i];
					b[i] = t2; 
				}
			}
		}
		int flag = 1;
		for (int i=0,j=n-1-n/2;i<=n/2,j<=n-1;i++,j++){
			if (b[i]>=a[j]) {
				flag = 0;
				break;
			}
		}
		if(flag) printf("YES\n");
		else printf ("NO\n");
	}
	return 0;
 } */

//1509
//到时候问学长 
/*注意只有一个数的情况的情况 
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--){
		int a[1010],b[1000] = {0},n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for (int i=0;i<n;i++){
			if(i==0){
				if(a[i]>=a[i+1]) b[i] = 1;
			}
			else if(i==n-1){
				if(a[i]>=a[i-1]) b[i] = 1;
			}
			else {
				if(a[i]>=a[i-1]&&a[i]>=a[i+1]) b[i] = 1;
			}
		}
		int max,min;
		for (int i =0;i<n;i++){
			if(b[i]==1) {
				max = a[i];
				min = a[i];
				break;
			}
		}
		for (int i =0;i<n;i++){
			if(b[i]==1) {
			    if(a[i]>max) max = a[i];
			    if(a[i]<min) min = a[i];
			}
		}
		printf("%d %d\n",min,max);
	}
	return 0;
 } //*/
 //1509
 /*#include<stdio.h>
int main(void)
{
	int  t, i;
	int a[1010], maxx, minn, n;
	scanf("%d", &t);
	while (t--) {
		maxx = -1, minn = 10000;
		scanf("%d", &n);
		for (i = 1; i <= n; ++i) {
			scanf("%d", &a[i]);
		}
		a[0] = a[n + 1] = 0;
		for (i = 1; i <= n; ++i) {
			if (a[i] >= a[i - 1] && a[i] >= a[i + 1]) {
				if (a[i] > maxx) maxx = a[i];
				if (a[i] < minn) minn = a[i];
			}
		}
		printf("%d %d\n", minn, maxx);
	}
	return 0;
}*/
 /*
 #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
	int  t, i;
	int a[1010], maxx, minn, n;
	scanf("%d", &t);
	while (t--) {
		maxx = -1, minn = 10000;//根据题目的数据范围进行初始化
		scanf("%d", &n);
		for (i = 1; i <= n; ++i) {
			scanf("%d", &a[i]);
		}
		a[0] = a[n + 1] = 0;
		//a[i]大于0，所以将a[0]和a[n+1]设置成0就可以使问题一般化
		for (i = 1; i <= n; ++i) {
			if (a[i] >= a[i - 1] && a[i] >= a[i + 1]) {
				if (a[i] > maxx) maxx = a[i];
				if (a[i] < minn) minn = a[i];
			}
		}
		printf("%d %d\n", minn, maxx);
	}
	return 0;
}*/


/*
#include <stdio.h>
int main(void) 
{
	int sum = 0,a,count = 0;
	for(int i=1;i<=7;i++){
		scanf("%d",&a);
		if(a!=-1) {
			sum +=a;
			count ++;
		}
	}
	printf("%d\n",sum/count);
	return 0;
}*/
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[210];
	int T,flag = 1;
	scanf("%d",&T);
	getchar();
	while(T--)
	{
		flag = 1;
		scanf("%s",str);
		int len = strlen(str);
		for (int i = 0;i<len/2;i++){
			if(str[i]!=str[len-1-i]) flag = 0;
		}
		if(flag == 1) printf("zz happy!\n");
		else printf("zz cry\n");
	}
	return 0;
}*/
/*2119
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,flag = 1;
	scanf("%d",&n);
	char str[n][1000];
	for (int i = n-1;i>=0;i--){
		scanf("%s",str[i]);
	}
	printf("%s\n",str[0]);
	for (int i = 1; i< n; i++){
		for (int j = i - 1; j >=0; j--){
		    flag = strcmp(str[i],str[j]);
		    if(flag == 0) {
		     break;
		    }
		}
		
		if(flag != 0) printf("%s\n",str[i]);
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int n,m,q,a,flag,lj[100000],b;
	scanf("%d %d %d",&n,&m,&q);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		lj[i] = a;
	}
	while(q--){
		flag = 0;
		scanf("%d",&b);
		for(int i=1;i<=n;i++){
			if(lj[i] == b){
				printf("%d ",i);
				flag = 1;
			}
		}
		if(flag==0) printf("%d",-1);
		printf("\n");
	}
 } 
*/
/*
#include <stdio.h>
int main(void)
{
	int n;
	while(scanf("%d",&n),n){
		printf("%d\n",n/2);
	}
	return 0;
}
*/
//2021buC 2347
/*
#include <stdio.h>
int main(void)
{
	
	long long t,x,y,z,b;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld %lld",&x,&y,&z);
		long long a[100010] = {0},c[100010],sum;
		while (x--){
			long long i,n;
			scanf("%lld %lld",&i,&n);
			a[i] = n;
		}
		sum = 0;
		for (int i=1;i<=y;i++){
			sum += a[i];
			c[i] = sum;
		}
		while (z--){
			scanf("%lld",&b);
			if(b>y) printf("%lld\n",c[y]); 
			else printf("%lld\n",c[b]);
		}
	}
}*/
/*
#include <stdio.h>
int main(void)
{
	int n;
	char str[7];
	scanf("%d",&n);
	while (n--){
		scanf("%s",&str);
		if(str[0]=='A') printf("杭州市\n");
		else if(str[0]=='B') printf("宁波市\n");
		else if(str[0]=='C') printf("温州市\n");
		else if(str[0]=='D') printf("绍兴市\n");
		else if(str[0]=='E') printf("湖州市\n");
		else if(str[0]=='F') printf("嘉兴市\n");
		else if(str[0]=='G') printf("金华市\n");
		else if(str[0]=='H') printf("衢州市\n");
		else if(str[0]=='J') printf("台州市\n");
		else if(str[0]=='K') printf("丽水市\n");
		else if(str[0]=='L') printf("舟山市\n");
		else printf("impossible\n");
	}
}*/
/* 2021aacm2第二场C 
#include <stdio.h>
int main(void)
{
	int n, count = 0;
	double a[10000];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lf", &a[i]);
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] < 2.00) count++;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (a[j] > a[i]) {
				double t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	printf("%d\n", count);
	for (int i = 1; i <= n; i++) {
		if (i == 1) {
			printf("%.2lf", a[i]);
		}
		else printf(" %.2lf", a[i]);
	}
	return 0;
}*/
/*
#include <stdio.h>
int xl(int a,int b);
int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",xl(a,b));
	
}
int xl(int a,int b)
{
	if(b==1) 
	return 1;
	else if(a==1)
	return b;
	else 
	return xl(a-1,b) + xl(a,b-1);
}*/
/*https://hznuoj.dup4.cn/OJ/problem.php?cid=1429&pid=4  AC了 
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[1000000],str2[1000000],str11[1000000],str22[1000000];
	scanf("%s",str1);
	int gd,count[24] = {0},s[24];
	char ch;
	int len = strlen(str1);
	for(int i = 0;i<len;i++){
		gd = str1[i] - 97;
		count[gd] ++;
	}
	int i,j;
	for( i = 0,j=0;i<24;i++,j++){
		if(count[i]>0) s[j] = i;
	}
	for(int i = 0;i<j;i++){
		for(int k = i+1;k<j;k++){
			if(count[k]>count[i]) 
			{
				int t=s[k];
				s[k]=s[i];
				s[i]=t;
			}
		}
	}
	for(int i=0;i<j;i++){
		str11[i] = s[i] + 97;
	}
	str11[j] = '\0';
	scanf("%s",str2);
	int gd2,count2[24] = {0},s2[24];
	int len2 = strlen(str2);
	for(int i = 0;i<len2;i++){
		gd2 = str2[i] - 97;
		count2[gd2] ++;
	}
	for(int i = 0,j=0;i<24;i++,j++){
		if(count2[i]>0) s2[j] = i;
	}
	for(int i = 0;i<j;i++){
		for(int k = i+1;k<j;k++){
			if(count2[k]>count2[i]) 
			{
				int t=s2[k];
				s2[k]=s2[i];
				s2[i]=t;
			}
		}
	}
	for(int i=0;i<j;i++){
		str22[i] = s2[i] + 97;
	}
	str22[j] = '\0';
	int cp = strcmp(str11,str22);
	if (cp==0) printf("YES");
	else printf("NO");
	return 0;
	
}*/
/*
#include <stdio.h>
int main(void)
{
	int n,a,b,c;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		c = a;
		int sum = 0;
		if (c == 0) sum = 1;
		else{
			while(c>0){
				b = c%16;
				if(b == 0||b == 4||b == 6||b == 9||b == 10||b == 13){
					sum += 1;
				}
				else if (b == 8||b==11){
					sum+=2;
				}
				c/=16;
			}
	    }
		printf("%d\n",sum);
	}
 } */
 /*  
 #include <stdio.h>
 int a[1000000];
 int main(void)
 {
 	int n;
 	scanf("%d",&n);
 	for(int i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	 for(int i=0;i<n;i++){
	 	for(int j=i+1;j<n;j++){
	 		if(a[j]<a[i]){
	 			int t=a[j];
	 			a[j]=a[i];
	 			a[i]=t;
			 }
		 }
	 }
	 printf("%d",a[(n-1)/2]);
 }*/
 /*
 #include <stdio.h>
 int main(void)
 {
 	printf("2020 - 1024 = 996");
 }*/
 /*
 #include <stdio.h>
 int main(void)
 {
 	int a,b,c;
 	scanf("%d %d %d",&a,&b,&c);
 	if(c > a+b) printf("It's too safe,isn't it?");
 	else printf("It's not safe!GG!");
 	return 0;
 }*/
 /*
 #include <stdio.h>
 int main(void)
 {
 	double a;
 	scanf("%lf",&a);
 	printf("%.2lf",a*0.7);
 }*/
 /*
 #include <stdio.h>
 int main(void)
 {
 	int n,m;
 	scanf("%d %d",&n,&m);
 	int t = (m - 10) / n;
 	if((m-10)%n!=0) printf("%d",t+1);
 	else printf("%d",t);
 }*/
 /*
 #include <stdio.h>
 #include <string.h>
 int main(void)
 {
 	char a[11];
 	gets(a);
 	int len = strlen(a);
 	printf("%c %c",a[0],a[len-1]);
 }*/
 /*
 #include <stdio.h>
 int main(void){
 	long long a,b,c,d,e,f;
 	scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f);
 	printf("%lld %lld %lld %lld",a*c*e,b*c*e+a*d*e+a*c*f,b*d*e+b*c*f+a*d*f,b*d*f);
 	return 0;
 }*/
 /*
 #include <stdio.h>
 #include <math.h>
 #define PI 3.14159
 int main(void)
 {
 	int t;
 	scanf("%d",&t);
 	while(t--){
 	int a,b,c;
 	scanf("%d %d %d",&a,&b,&c);
 	if(a+b <=c||a+c<=b||b+c<=a){
 		printf("Oh my god!!\n");
	 }
	 else {
	 	double p = (a+b+c)/2.0;
	 	double s = sqrt(p*(p-a)*(p-b)*(p-c));
	 	double r = s/p;
	 	printf("%.2lf\n",PI*r*r);
	 }
}
return 0;
 }*/
 /*2808找bug！！！！！！！！！！！！！！！！！！！！找到了啊啊啊啊 
 #include <stdio.h>
 #include <math.h>
 int main(void)
 {
 	int t , n,all1=0,all2=0;
 	scanf("%d%d",&t,&n);
 	int score1,sum1;
	char ch1,ch2;
 	while(t--){
 		int flag = 1,flag2=0;
 		scanf("%d",&score1);
 		sum1 = score1;
 		if(score1==2) {
 			flag = 1; flag2=1;
		 }
 		else if(score1%2==0) {
 			flag = 0;//不是素数 
 			flag2 = 1;// 是二的倍数
		 }
		int limit1 = sqrt(score1) +1;
 		for (int i=3;i<= limit1;i+=2){
 			if (score1 % i == 0) {
			 flag = 0;
			 break;
		    }
		}
		if(flag) sum1 = sum1 * sum1;
		if (flag2) sum1*=2; 
		if(score1%3==0) sum1*=3;
		all1+=sum1;
	 }
	 scanf(" %c",&ch1);
	 int score2,sum2;
	 while(n--){
 		int flag3 = 1,flag4=0;
 		scanf("%d",&score2);
 		sum2 = score2;
 		if(score2==2) {
 			flag3 = 1; flag4 = 1;
		 }
 		else if(score2%2==0) {
 			flag3 = 0;
 			flag4 = 1;
		 }
		 int limit2 = sqrt(score2) +1;
 		for (int i=3;i<= limit2;i+=2){
 			if (score2 % i == 0) {
			 flag3 = 0;
			 break;
		}
		}
		if(flag3) sum2 = sum2 * sum2;
		if (flag4) sum2*=2; 
		if(score2%3==0) sum2*=3;
		all2+=sum2;
	 }
	scanf(" %c",&ch2);
	if (ch1=='Y') {
	 	if(all1 > all2) printf("heiheihei!");
	 	else printf("yingyingying!");
	}
	else {
	 	if(all2 > all1) printf("heiheihei!");
	 	else printf("yingyingying!");
	}	
	return 0;
 }*/
 /*2818
 #include <stdio.h>
 int main(void)
 {
 	int n,a;
 	scanf("%d",&n);
 	while (n--){
 		scanf("%d",&a);
 		for(int i=1;i<a;i++){
 			for(int j=1;j<=3*a-(a-i);j++){
 				if(j==a-i+1||j==a||j==a*2+1||j==2*a+i) 
				printf("*");
 				else printf(" ");
			 }
			 printf("\n");
		 }
		 for(int i=1;i<=a;i++){
		 	for(int j=1;j<=3*a;j++){
		 		if(i==1||i==a||j==1||j==3*a){
		 			printf("*");
				 }
				 else printf(" ");
			 }
			 printf("\n");
		 }
		 if (n!= 0) printf("\n");
	 }
 }*/
 //超时数据过大 之后想想！！！！！！！！！！！！！！！！！！！！ （不会） 
 /*2020 第一次考试 K
#include <stdio.h>
long long powermod(long long a, long long n, long long m)
{
    long long res = 1L;
    while(n) {
        if(n & 1L) {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        n >>= 1;
    }
    return res;
}
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--){
		long long n,sum =0,s;
		scanf("%lld",&n);
		//if(n<7){
			for(long long i=1;i<=n;i++){
				s=powermod(i,i,7);
				sum+=s;
			}
			long long a=sum%7;
			if(a==1) printf("Red\n");
			if(a==2) printf("Orange\n");
			if(a==3) printf("Yellow\n");
			if(a==4) printf("Green\n");
			if(a==5) printf("Blue\n");
			if(a==6) printf("Indigo\n");
			if(a==0) printf("Purple\n");
		//}
		//else if(n>=7){
		//	long long a=n%7;
		//	if(a==1) printf("Indigo\n");
		//	if(a==2) printf("Yellow\n");
		//	if(a==3||a==6||a==0) printf("Blue\n");
		//	if(a==4) printf("Purple\n");
		//	if(a==5) printf("Green\n");
		//}
		
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int a,b,c;
	while (~scanf("%d %d %d",&a,&b,&c)){
		for(int i =1;i<=2*c+2*a;i++){
			if(i<=2*c) printf(" ");
			else printf("*");
		}
		printf("\n");
		for (int i=2;i<=2*c-1;i++){
			for(int j=1;j<=2*c+2*a;j++){
				if(j==2*c+1||j==2*c+2*a)
				printf("*");
				else printf(" ");
			}
			printf("\n");
		}
		
		for(int i=1;i<=2*b;i++){
			for(int j=1;j<=4*c+2*a;j++){
				if(i==1||i==2*b||j==1||j==2*c+1||j==2*c+2*a||j==4*c+2*a){
					printf("*");
				}
				else printf(" ");
			}
			printf("\n");
		}
		
		for(int i= 1;i<=2*c+2*b-2;i++){
			for(int j=1;j<=2*c+2*a;j++){
				if(j==2*c+1||j==2*c+2*a)
				printf("*");
				else if(i==2*c-1||i==2*c+2*b-2){
					if(j<=2*c) printf(" ");
				    else printf("*");
				}
				else printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
    int type,r,sl,h,jl,w,t;
    double area,sum=0;
    scanf("%d",&t);
    while(t--){
    	scanf("%d",&type);
    	if(type==1) {
    		scanf("%d",&r);
    		area = (double)3*r*r;
    		
		}
		else if(type == 2) {
			scanf("%d %d",&sl,&h);
			area = (double)sl*h/2.0;
			
		}
		else {
			scanf("%d %d",&jl,&w);
			area = (double)jl*w;
		}
		sum+=area;
	}
    printf("%.1f",sum);
}*/
/*
#include <stdio.h>
#include <math.h>
int main(void)
{
	int t,n,delta;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&delta);
		int a;
		if(n+delta>0) a=n+delta;
		else a=abs(n+delta-1);
		if(a%400==0||(a%4==0&&a%100!=0)){
			printf("%d\n",29);
		}
		else printf("%d\n",28);
	}
}*/
/*
#include <stdio.h>
int main(void)
{
	int t,n,a[10010];
	scanf("%d",&t);
	while(t--)
	{
		int flag = 1;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
		}
		for (int i=1;i<=n;i++){
			if(a[i]==1) {
				if(i==1){
					if(a[i+1]==2){
						for(int j=2;j<=n;j++){
							if(a[j]-a[j-1]!=1) {
								flag=0;
								break;
							}
						}
					}
					else if(a[i+1]=n){
						for(int j=3;j<=n;j++){
							if(a[j]-a[j-1]!=-1) {
								flag=0;
								break;
							}
						}
					}
					else flag=0;
				}
				else if(i==n){
					if(a[i-1]==2){
						for(int j=i-1;j>1;j--){
							if(a[j]-a[j-1]!=-1) {
								flag=0;
								break;
							}
						}
					}
					else if(a[i-1]=n){
						for(int j=i-1;j>1;j--){
							if(a[j]-a[j-1]!=1) {
								flag=0;
								break;
							}
						}
					}
					else flag = 0;
				}
				else {
					if(a[i-1]==2&&a[i+1]==n){
						for(int j=i+1;j<n;j++){
							if(a[j]-a[j+1]!=1){
								flag=0;
								break;
							}
						}
						for(int j=i-1;j>=1;j--){
							if(a[j]-a[j+1]!=1){
								flag = 0;
								break;
							}
						}
					}
					else if(a[i-1]==n&&a[i+1]==2){
						for(int j=i+1;j<=n;j++){
							if(a[j]-a[j-1]!=1){
								flag=0;
								break;
							}
						}
						for(int j=i-1;j>1;j--){
							if(a[j]-a[j-1]!=1){
								flag = 0;
								break;
							}
						}
					}
					else flag = 0;
				}
			    break;
			}
		}
		if(flag) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}*/
/*超时 2019年秋季学期程序设计基础(C语言)第三次考试（补题）I 解决！！！！！！！！1 
#include <stdio.h>
int main(void)
{
	int n,a[100000],b[100000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int k=0;
	for(int i=0;i<n;i++){
		int m=a[i+1] - a[i];
		for(int j=i+1;j<n;j++){
			if(a[j]-a[i]>m) m=a[j] - a[i];
			b[k] = m;
		}
		k++;
	}
	int max=b[0];
	for(int i=0;i<n;i++){
		if(b[i]>max) max=b[i];
	}
	if(max>0) printf("%d",max);
	else printf("%d",0);
	return 0;
}*/
/*2936
#include <stdio.h>
int main(void)
{
	int n,a[101];
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int exchange=0;
	for(int pass=1;pass<n;pass++){
		for(int j = 0;j<n-pass;j++){
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j] = a[j+1];
				a[j+1]=t;
				exchange ++;
			}
		}
	}
	for(int i = 0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("%d",exchange);
 } */
 
 /*递归费时考虑直接循环 
 #include <stdio.h>
 int main(void)
 {
 	long long n,a[50];
 	scanf("%lld",&n);
 	a[1]=1;
 	a[2]=2;
 	for(int i=3;i<=n;i++){
 		a[i]=a[i-1]+a[i-2];
	 }
	 printf("%lld",a[n]);
 	return 0;
 }*/
 /*2019年秋季学期程序设计基础(C语言)第三次考试（补题）J
 #include <stdio.h>
 #include <string.h>
 int main(void)
 {
 	char str[100010];
 	int flag = 1;
 	gets(str);
 	for (int i = 0;i< strlen(str);i++){
 		if(i>0&&i<strlen(str)-2){
 			if(str[i-1]==' '&&str[i]=='i'&&str[i+1]=='s'&&str[i+2]==' '){
 				printf("was");
 				i=i+1;
			 }
			 else printf("%c",str[i]);
		 }
		else printf("%c",str[i]);
	 }
	 return 0;
 }*/
 /*2083
 #include <stdio.h>
 int main(void)
 {
 	int n,s[100][100];
 	scanf("%d",&n);
 	while (n--)
 	{
 		int a,b,c;
 		scanf("%d %d %d",&a,&b,&c);
 		for(int i=0;i<a;i++){
 			for(int j=0;j<b;j++){
 				scanf("%d",&s[i][j]);
			 }
		 }
		 int d=c%4;
		if(d==0){
			for(int i=0;i<a;i++){
 			    for(int j=0;j<b;j++){
 				    printf("%d ",s[i][j]);
			    }
			    printf("\n");
		    }
		}
		if(d==1){
			for(int j=0;j<b;j++){
 			    for(int i=a-1;i>=0;i--){
 				    printf("%d ",s[i][j]);
			    }
			    printf("\n");
		    }
		}
		if(d==2){
			for(int i=a-1;i>=0;i--){
 			    for(int j=b-1;j>=0;j--){
 				    printf("%d ",s[i][j]);
			    }
			    printf("\n");
		    }
		}
		if(d==3){
			for(int j=b-1;j>=0;j--){
 			    for(int i=0;i<a;i++){
 				    printf("%d ",s[i][j]);
			    }
			    printf("\n");
		    }
		}
		printf("\n");
	 }
	 return 0;
  } */
 /* 泰勒公式之计算星期几 
  #include<stdio.h>
int main()
{
	char a[8][100] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
	int w,y, m, d;//y代表年份，m代表月份，d代表日期
	while (scanf("%d %d %d", &y, &m, &d) != EOF) {
		if (m < 3) {
			m += 12;
			y--;
		}//蔡勒公式在计算1、2月份时要换算成上一年的13、14月份
		w= (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;//蔡勒公式化简，直接使用公式存在错误。
		printf("%s\n", a[(w+1)%7]);//蔡勒公式计算结果换算成日期
	}
	return 0;
}*/
/*计算星期几 
#include<stdio.h>
char s[8][20] = { "Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday" };
int main() {
	int y, d, n, m, sum = 0;
	while (scanf("%d %d %d", &y, &m, &d) != EOF) {
		sum = 0;//选取某一天为基准，本代码以2020年1月1日为起点
		if (y > 2020) {
			for (int i = 2020; i < y; i++) {
				if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
					sum += 366;
				}
				else sum += 365;
			}//计算年份差，区分闰年和平年
			for (int i = 1; i < m; i++) {
				if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)sum += 31;
				else if (i == 4 || i == 6 || i == 9 || i == 11)sum += 30;
				else if (i == 2) {
					if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
						sum += 29;
					}
					else sum += 28;
				}
			}//计算月份差，区分每一个月
			sum += d - 1;//计算日期差
		}//计算2020年1月1日以后的日期用加法
		else {
			for (int i = y; i < 2020; i++) {
				if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
					sum -= 366;
				}
				else sum -= 365;
			}//计算到当年的1月1日，所以后面用加法
			for (int i = 1; i < m; i++) {
				if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)sum += 31;
				else if (i == 4 || i == 6 || i == 9 || i == 11)sum += 30;
				else if (i == 2) {
					if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
						sum += 29;
					}
					else sum += 28;
				}
			}
			sum += d - 1;
		}//计算2020年1月1日前用减法
		if (sum >= 0)sum %= 7;
		else sum = sum % 7;
		if (sum < 0)sum += 7;//换算成正的日期差
		printf("%s\n", s[sum]);
	}
	return 0;
}*/
/*2172
#include <stdio.h>
int main(void)
{
    double n,a,sum;
    int count;
	while (~scanf("%lf",&n))
	{
		sum = 0;
		count = 0;
		while(n--){
			scanf("%lf",&a);
			if(a>0) sum+=a/2.0;
			else sum+=a;
			if (sum < 0) count++;
			
		}
		printf("%d\n",count);
    }
	return 0;
 } */
/*2245 最大公约数经典例子 important！！！！！ 
#include <stdio.h>
#define ll long long
ll f(ll a,ll b); 
int main(void)
{
	int t;
	ll a,b;
	scanf("%d",&t);
	while (t--){
		scanf("%lld %lld",&a,&b);
		for(ll i=b+1;i<=a*b;i++){
			if(b==f(a,i)){
				printf("%lld\n",i);
				break;
			}
		}
	}
	return 0;
  }  
  ll f(ll a,ll b)
  {
  	if(a%b==0) return b;
  	else return f(b,a%b);
  }*/
/*  1490 错误的答案 220后一定要用 C自己做一遍呀！！！！！1 
#include <stdio.h>
int main(void)
{
	int d,t,T;
	long long z=0,z2=0,z3=0,z4=0;
	double s=0.0,g=0.0,s2=0.0,g2=0.0;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&d,&t);//后面用到的都是double的d,t应该定义成double 
		if(d>3&&d<=10){
			s=(d-3)*2.0;
			z = s;
			if (s*10-(double)z*10<5) {
				z=s;
			}
			else z=s+1;//不必这么麻烦 直接+0.5后面用int就可以了 
		} 
		else if(d>10) {
			s=14+(d-10)*3.0;
			z=s;
			if (s*10-(double)z*10<5) {
				z=s;
			}
			else z=s+1;
		}
		g=t/5*2.0;
		z2=g;
		if (g*10-(double)z2*10<5) {
				z2=g;
			}
			else z2=g+1;
		//printf("%d %d",z,z2)	;
			
			
		if(d>3&&d<=10){
			s2=(d-3)*2.5;
			z3 = s2;
			if (s2*10-(double)z3*10<5) {
				z3=s2;
			}
			else z3=s2+1;
		} 
		else if(d>10) {
			s2=17.5+(d-10)*3.75;
			z3=s2;
			if (s2*10-(double)z3*10<5) {
				z3=s2;
			}
			else z3=s2+1;
		}
		g2=t/4*2.5;
		z4=g2;
		if (g2*10-(double)z4*10<5) {
				z4=g2;
			}
			else z4=g2+1;//题目理解错误不用单个四舍五入，直接总和四舍五入 
		printf("%lld\n",z3+z4-z-z2);
	}//总结 想简单点就好。 
	
	return 0;
 }*/ 
 /*1490 c++
 #include <iostream>
using namespace std;
const double FT = 0.4;//改费前等待每分钟附加费
const double LT = 0.625;//改费后等待每分钟附加费
int main()
{
    int n;
    double fm,lm;
    double d,t;
    cin>>n;
    while(n--)
    {
        fm = 0 ; lm = 0;
        cin>>d>>t;
        if(d>10)
        {
            fm += 3.0 * (d-10);
            lm += 3.75 * (d-10);
            d = 10;
        }
        if(d>3)
        {
            fm += 2.0 * (d-3);
            lm += 2.5 * (d-3);
            d = 3;
        }
        fm += FT*t;
        lm += LT*t;
        int ifm = fm + 0.5;//+0.5是为了四舍五入
        int ilm = lm + 0.5;
        //因为起步价相同都为11元所以没有算进去
        cout<<ilm-ifm<<endl;
    }
}*/
/*
#include <stdio.h>
int main(void)
{
	int n,a[30001],count=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0) count++;
	}
	for (int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j] < a[i]){
				int t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	if(count%2==0) printf("%d",a[count]);
	else printf("%d",a[count-1]);
	return 0;
}*/

/*股票 
#include <stdio.h>
int main(void)
{
	int n,a[100000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s=a[0],max=0;
	for(int i=1;i<n;i++){
		if(a[i]<s) s=a[i];
		if(a[i]-s>max) max = a[i]-s;
	}
	printf("%d",max);
}*/
  
 /* 1602
#include <stdio.h>
int main(void)
{
    int i,j,k,x1,x2,count=0;
    for(i=1;i<=1000;i++)
    {
	     k=i;
	     x1=0;x2=0;
	     for(j=1;k!=0;j++)
	     {
	        if(k%2==1)
	        x1++;
	        else if(k%2==0)
	        x2++;  
	        k=k/2;
        }
    if(x1>x2)
       count++; 
    }
    printf("%d %d",count,1000-count);
    return 0;
} 
*/
/*线代 
#include <stdio.h>
int main(void)
{
    int l,r;
    scanf("%d %d",&l,&r);
    printf("%d",-2028-442*r);
	return 0;
}*/

/*
#include <stdio.h>
#include <string.h>
struct compititor{
	char name[12];
	int score;
};
int main(void){
	int t,n,num,a,b;
	scanf("%d",&t);
	while(t--){
		struct compititor array[100];
		scanf("%d",&n);
		int i=0,sum=0;
		while(n--){
			scanf("%d",&num);
			sum+=num;
			while(i<sum){
				int flag = 0;
				scanf("%s %d %d",array[i].name,&a,&b);
				for(int j=i-1;j>=0;j--){
					if(strcmp(array[i].name,array[j].name)==0){
						array[j].score += a+b;
						flag = 1;
					}
				}
				if(flag==1) continue;
				array[i].score = a+b;
				i++;
			}
		}
		int count =0;
		for(int k=1;k<i;k++){
			if(array[k].score<array[0].score) count ++;
		}
		printf("%d\n",count);
	}
}*/

/*
#include <stdio.h>
int main(void)
{
	int n,count = 0;
	scanf("%d",&n);
	while (n!=1) {
		if(n%2==0){
			n/=2;
			count++;
		}
		else if(n%2==1) {
			n = (3*n+1) / 2;
			count ++;
		} 
	}
	printf("%d",count);
	return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char num[110];
	int sum=0;
	scanf("%s",num);
	int len = strlen(num);
	for(int i=0;i<len;i++){
		int n = num[i];
		sum += n-48;
	}
	int k=0;
	int a[1000];
	while (sum > 0)
	{
	
		int s=sum%10;
		a[k] = s;
		k++;
		sum/=10;
	}
	int flag = 1;
	for (int i=k-1;i>=0;i--){
		if(flag) flag = 0;
		else printf(" ");
		if(a[i]==1) printf("yi");
		else if(a[i]==2) printf("er");
		else if(a[i]==3) printf("san");
		else if(a[i]==4) printf("si");
		else if(a[i]==5) printf("wu");
		else if(a[i]==6) printf("liu");
		else if(a[i]==7) printf("qi");
		else if(a[i]==8) printf("ba");
		else if(a[i]==9) printf("jiu");
		else if(a[i]==0) printf("ling");
	}
	return 0;
 } */



	





