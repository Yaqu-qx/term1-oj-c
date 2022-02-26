/*1002
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
 /*
 #include <stdio.h>
 int main(void)
 {
 	long long a,b;
 	scanf("%lld %lld",&a,&b);
 	long long s1 = 1,s;
 	if(a>=999068070)
 	s1 = 0;
 	if(a<=1000)
 	{
 		for(long long i = 2;i<=a;i++){
	 		s = i%999068070;
	 		s1 = s1*s%999068070;
	    }
	}
	if(a>1000&&a<=1000000)
	long long s2 = 1;
	if (b>=999068070)
	s2=0;
	else {
		for(long long i = 2;i<=b;i++){
	 		s = i%999068070;
	 		s2 = s2*s%999068070;
	    }
	}
	
 	if(s1>s2) printf("a is the winner!");
 	else if(s2>s1) printf("b is the winner!");
 	else printf("There is no winner!");
 }*/
 /*
 #include <stdio.h>
 #include <string.h>
 int main(void)
 {
 	char str[101];
 	int n,count=0;
 	scanf("%d",&n);
 	getchar();
 	gets(str);
 	for(int i = 0;i<n;i++){
 		if(str[i]=='o'){
 			for(int j = i+1;j<n;j++){
 				if(str[j]=='s'){
 					for(int k=j+1;k<n;k++){
 						if(str[k] == 'u') count ++;
					 }
				 }
			 }
		 }
	 }
	 printf("%d",count);
 }*/
 /*
 #include <stdio.h>
 int main(void)
 {
 	int n,count = 0;
 	scanf("%d",&n);
 	for(int i = 2;i<=n/2&&n>0;i++){
 		if(n%i==0){
 			count ++;
 			n/=i;
 			i = 1;
		 }
	 }
	 printf("%d",count+1);
	 return 0;
 }*/
 
/* 
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 struct zl{
 	char name[11];
 	int sj;
 	int bh;
 };
 int comp(const void *p,const void *q){
 	return ((struct zl*)p)->sj - ((struct zl*)q)->sj;
 }
 int main(void)
 {
 	struct zl pl[100];
 	int k;
 	scanf("%d",&k);
 	getchar();
 	for(int i=0;i<k;i++){
 		scanf("%s%d",pl[i].name,&pl[i].sj);
 		pl[i].bh=i;
 		//printf("%d",i);
	 }
	qsort(pl,k,sizeof(struct zl),comp);
	int i ,b[100]={0};
	for( i= k-1;i>=0;i--){
		for(int j=i+1;j<k;j++){
			if(strcmp(pl[i].name,pl[j].name)==0){
				b[i] = 1;
				break;
			}
		}
	}
	for (int i=0;i<k;i++){
		if(b[i]!=1){
			printf("%d\n",pl[i].bh+1);
		}
	}
	return 0;
 }*/
 
 
 /*
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 struct zl{
	char name[11];
	int sj;
	int bh;
 };
 int comp(const void *p,const void *q){
	return ((struct zl*)p)->sj - ((struct zl*)q)->sj;
 }
 int main(void)
 {
	struct zl pl[100];
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%s %d",pl[i].name,&pl[i].sj);
		pl[i].bh=i;
	 }
	qsort(pl,k,sizeof(struct zl),comp);
	printf ("%d\n",pl[0].bh + 1);
	for(int i= 1;i<k;i++){
		int flag = 0;
		for(int j=i-1;j>=0;j--){
			if(strcmp(pl[i].name,pl[j].name)==0){
				flag = 1;
				break;
			}
		}
		if(flag) continue;
		printf("%d\n",pl[i].bh + 1);
	}
	return 0;
 }*/
 
 /*
 #include <stdio.h>
 int main(void)
 {
 	int n;
 	scanf("%d",&n);
 	while(n--)
 	{
 		int a;
 		float b;
 		scanf("%d %f",&a,&b);
 		if(a<91) printf("NO\n");
        else if(a==99) printf("YES\n");
        else {
            if(b==0.9) printf("YES\n");
            else if(b==0.8) {
                if(a>=96) printf("YES\n");
                else printf("NO\n");
            }
            else if(b==0.7){
                if(a>=97) printf("YES\n");
                else printf("NO\n");
            }
            else if(b==0.6){
                if(a>=98) printf("YES\n");
                else printf("NO\n");
            }
            else printf("NO\n");
        }
	 }
  } */
/*  
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct zl{
	char name[11];
	int sj;
	int bh;
};
int comp(const void* p, const void* q) {
	return ((struct zl*)p)->sj - ((struct zl*)q)->sj;
}
int main(void)
{
	struct zl pl[100];
	int k;
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%s %d",pl[i].name, &pl[i].sj);
		pl[i].bh = i;
	}
    qsort(pl, k, sizeof(struct zl), comp);
	int b[100];
	int i, u;
	for (i = k - 1, u = 1; i >= 0; i--, u++) {
		int flag = 0;
		for (int j = i + 1; j < k; j++) {
			if (strcmp(pl[i].name, pl[j].name) == 0) {
				flag = 1;
				break;
			}
		}
		if (flag) {
			u--;
			continue;
		}
		b[u] = pl[i].bh+1;
	}
	for (i = u - 1; i >= 1; i--) {
		printf("%d\n", b[i]);
	}
	return 0;
}*/

/*1003 x与x要一样T-T 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char **argv)
{
	int cnt;
	scanf("%d",&cnt);
	while(cnt--)
	{
		char str[105];
		scanf("%s",str);
		int state=0,i,Afront=0,Amiddle=0,Alater=0;
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]!='P'&&str[i]!='A'&&str[i]!='T')
				break;
			if(str[i]=='P')
				if(state==0)
					state=1;
				else
					break;
			if(str[i]=='A')
				if(state==1)
					state=2;	
				else if(state==2)
					Amiddle++;
				else if(state==0)
					Afront++;
				else
					Alater++;
			if(str[i]=='T')
				if(state==2)
					state=3;
				else
					break;
		}
		while(Amiddle)
		{
			Alater-=Afront;
			Amiddle--;
		}
		if(i<strlen(str)||state!=3||Afront!=Alater)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return EXIT_SUCCESS;
}*/
/*1004
#include <stdio.h>
#include <stdlib.h>
struct student{
	char name[11];
	char id[11];
	int grade;
};
int comp(const void *p,const void *q){
	return ((struct student *) p)->grade - ((struct student *) q)->grade;
}
int main(void)
{
	struct student array[1000];
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%s %s %d",array[i].name,array[i].id,&array[i].grade);
	}
	qsort(array,n,sizeof(struct student),comp);
	printf("%s %s\n",array[n-1].name,array[n-1].id);
	printf("%s %s\n",array[0].name,array[0].id);
 } */
 /*1005
 #include <stdio.h>
int main(void)
{
	int k, a[100], s[100], b[100] = { 0 };
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &a[i]);
		s[i] = a[i];
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {
			if (i != j) {
				if (a[j] == 1) a[j] = s[j];
				while (a[j] > 1) {
					if (a[j] % 2 == 0) {
						a[j] /= 2;
						if (a[j] == s[i]){
							b[i] = 1;
							a[j] = s[j];
							break;
						}
					}
					else {
						a[j] = (a[j] * 3 + 1) / 2;
						if (a[j] == s[i]){
							b[i] = 1;
							a[j] = s[j];
							break;
						}
					}
				}
				if (b[i] == 1) break;
			}

		}
	}
	int flag = 1;
	for (int i = 0; i < k; i++) {
		for (int j = i + 1; j < k; j++) {
			if (b[i] == 0 && b[j] == 0) {
				if (s[j]>s[i]) {
					int t = s[j];
					s[j] = s[i];
					s[i] = t;
				}
			}
		}
	}
	for (int i = 0; i < k; i++) {
		if (b[i] == 0) {
			if (flag) {
				flag = 0;
				printf("%d", s[i]);
			}
			else printf(" %d", s[i]);
		}
	}
	return 0;
}*/
/*1006
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int b=0,s=0,g=0;
	if (n>=100){
		b = n/100;
		s=n/10%10;
		g=n%10;
	}
	else if(n>=10){
		s=n/10;
		g=n%10;
	}
	else g = n;
	for (int i=b;i>0;i--){
		printf("B");
	}
	for (int i=s;i>0;i--){
		printf("S");
	}
	for (int i=1;i<=g;i++){
		printf("%d",i);
	}
	return 0;
}
*/
/*1007
#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,a[100000];
	scanf("%d",&n);
	a[1]=2;
	int k = 2;
	for(int i=3;i<=n;i++){
		if(i%2==0){
			continue;
		}
		else{
			int limit = sqrt(i) + 1,flag=1;
		    for (int j=3;j<=limit;j+=2){
				if(i%j==0) {
					flag = 0;
					break;
				}
			}
			if (flag) {
				a[k] = i;
				k++;
			}
		}	
	}
	int count = 0;
	for (int i=1;i<k-1;i++){
		if(a[i+1]-a[i]==2) count++;
	}
	printf("%d",count);
	return 0;
}*/
/*1008
#include <stdio.h>
int main(void)
{
	int n, t, a[100];
	scanf("%d %d", &n, &t);
	int t2 = t % n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int count = 0, flag = 1;
	for (int i = n - t2;; i++) {
		if (i == n ) i = 0;
		if (flag) {
			flag = 0;
			printf("%d", a[i]);
			count++;
		}
		else {
			printf(" %d", a[i]);
			count++;
		}
		if (count == n) break;
	}
	return 0;
}*/
/*1009
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[81], sstr[81][81];
	gets(str);
	char *p;
	p=strtok(str," \n");
	int i=0;
	while (p)
	{
		strcpy(sstr[i],p);
		i++;
		p = strtok(NULL," \n");
	}
	int flag = 1;
	for (int j=i-1;j>=0;j--){
		if (flag){
			printf("%s",sstr[j]);
			flag = 0;
		}
		else printf(" %s",sstr[j]); 
	}
	return 0;
 } 
*/
/*1010
#include <stdio.h>
int main(void)
{
	int a[1001],b[1001],flag=1,i=0;
	char ch;
	while (1){
		scanf("%d%d",&a[i],&b[i]);
		ch = getchar();
		i++;
		if (ch=='\n') break;
	}
	if (i==1&&b[0]==0) printf("0 0\n");
	else {
		for (int j=0;j<i;j++){
			if(b[j]==0) continue;
			else{
				if(flag){
					printf("%d %d",a[j]*b[j],b[j]-1);
					flag = 0;
		        }
				else
				printf(" %d %d",a[j]*b[j],b[j]-1);
			}
			
		}
		
	}
	
	return 0;
}*/
/*1011
#include <stdio.h>
int main(void)
{
	int n,count =1;
	scanf("%d",&n);
	while (n--){
		long long a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		if (a+b>c){
			printf("Case #%d: true\n",count);
	    }
	    else printf("Case #%d: false\n",count);
		count ++;
	}
	return 0;
}*/
/*1012
#include <stdio.h>
int main(void)
{
	int n,a,s1=0,s2=0,A1=0,A2=0,A4=0,max=0,count=0,num=0,num2=0,flag=1;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a);
		if (a%5==0&&a%2==0) {
			A1+=a;
			s1++;
		} 
		else if(a%5==1) {
			count++;
			if(count%2==1)
			{
				A2+=a;
			}
			else A2+=-a;
	    }
	    else if(a%5==2) num++;
	    else if(a%5==3){
	    	A4+=a;
	    	num2++;
		}
		else if(a%5==4) {
			s2++;
			if(flag) {
				max=a;
				flag=0;
			}
			else {
				if(a>max) max=a;
			}
		}
	}
	if(s1==0) printf("N "); else printf("%d ",A1);
	if(count==0) printf("N "); else printf("%d ",A2);
	if(num==0) printf("N "); else printf("%d ",num);
	if(num2==0) printf("N "); else printf("%.1f ",(double)A4/num2);
	if(s2==0) printf("N"); else printf("%d",max);
	return 0;
}*/
/*1013
#include <stdio.h>
#include <math.h>
int flag,c[1000000];
int main(void)
{
	int a,b,count=0;
	
	scanf("%d%d",&a,&b);
	for (int i=1;i<=1000000&&count<=b;i++){
		flag=0;
		int limit = sqrt(i)+1;
		if(i==1) continue;
		else if(i==2) {
			count++;
			c[count] = i;
		}
		else if(i%2==0) continue;
		else {
			for(int j=3;j<=limit;j+=2){
			    if(i%j==0) {
			    	flag=1; break;
				}
			}
			if(flag) continue;
			else {
				count++;
				c[count] = i;
				
			}
		}
	}
	int s=0;
	for(int i=a;i<=b;i++){
		s++;
		if(i!=b){
			if(s%10==0)
			printf("%d\n",c[i]);
			else printf("%d ",c[i]);
		}
		else printf("%d",c[i]);
	}
	return 0;
}*/

/*1014
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[61],str2[61],str3[61],str4[61];
	gets(str1); gets(str2); gets(str3); gets(str4);
	int count=0;
	int len1=strlen(str1), len2=strlen(str2), len3=strlen(str3), len4=strlen(str4);
    for(int i=0;i<len1&&i<len2;i++){
    	if(str1[i]==str2[i]&&count==0){
    		if(str1[i]=='A') {printf("MON ");count++;continue; }
    		else if(str1[i]=='B') {printf("TUE ");count++;continue; }
    		else if(str1[i]=='C') {printf("WED ");count++;continue; }
    		else if(str1[i]=='D') {printf("THU ");count++;continue; }
    		else if(str1[i]=='E') {printf("FRI ");count++;continue; }
    		else if(str1[i]=='F') {printf("SAT ");count++;continue; }
    		else if(str1[i]=='G') {printf("SUN ");count++;continue; }
		}
		if(str1[i]==str2[i]&&count==1){
			if(str1[i]=='0'||str1[i]=='1'||str1[i]=='2'||str1[i]=='3'||str1[i]=='4'||str1[i]=='5'||str1[i]=='6'||str1[i]=='7'||str1[i]=='8'||str1[i]=='9'){
				printf("0%d:",str1[i]-48);break;
			}
			else if(str1[i]=='A'||str1[i]=='B'||str1[i]=='C'||str1[i]=='D'||str1[i]=='E'||str1[i]=='F'||str1[i]=='G'||str1[i]=='H'||
			str1[i]=='I'||str1[i]=='J'||str1[i]=='K'||str1[i]=='L'||str1[i]=='M'||str1[i]=='N')
			 { printf("%d:",str1[i]-55);break;}
		}	
	}
	for(int i=0;i<len3&&i<len4;i++){
		if(str3[i]==str4[i]&&((str3[i]<=90&&str3[i]>=65)||(str3[i]<=122&&str3[i]>=97))){
			if(i<10) printf("0%d",i);
			else printf("%d",i);
			break;
		}
	}
	return 0;
}*/
/*1014 别人的做法 
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc,char **argv)
{
	char str1[100],str2[100],str3[100],str4[100];
	scanf("%s%s%s%s",str1,str2,str3,str4);
	char week[10][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int first=-1,secend=-1,third=-1;
	for(int i=0;;i++)
	{
		if(str1[i]==str2[i]&&first!=-1)
		{
			if(isdigit(str1[i]))
			{
				secend=str1[i]-'0';
				break;
			}
			else if(str1[i]>='A'&&str1[i]<='N')
			{
				secend=str1[i]-'A'+10;
				break;
			}
		}
		if(str1[i]==str2[i]&&first==-1&&(str1[i]>='A'&&str1[i]<='G'))
		{
			first=str1[i]-'A';
		}
	}
	for(int i=0;;i++)
	{
		if(str3[i]==str4[i]&&third==-1&&isalpha(str3[i]))
		{
			third=i;
			break;
		}
	}
	printf("%s %02d:%02d\n",week[first],secend,third);
	return EXIT_SUCCESS;
}
*/
/*才德论明天自己打一次吧 
#include <stdio.h>
struct student{
	int id;
	int d;
	int c;
	int sum;
}; 
int comp(void *p,void *q){
	return ((struct student*)q)->sum - ((struct student*)p)->sum;
}
int main(void){
	struct student array[100000],cdqj[100000],dsc[100000],cdjw[100000],qt[100000];
	int n,low,high,k=0,m=0,j=0,q=0,count=0;
	scanf("%d %d %d",&n,&low,&high);
	for (int i=0;i<n;i++){
		scanf("%d %d %d",&array[i].id,&array[i].d,&array[i].c);
		array[i].sum=array[i].d+array[i].c;
		if(array[i].d>=low&&array[i].c>=low){
			count++;
			if(array[i].d>=high&&array[i].c>=high){
				cdqj[k++] = array[i];
			}
			else if(array[i].d>=high&&array[i].c<high){
				dsc[m++]=array[i];
			}
			else if(array[i].d<high&&array[i].c<high&&array[i].d>array[i].c){
				cdjw[j++]=array[i];
			}
			else qt[q++]=array[i];
			count ++;
		}
	}
	qsort(cdqj,k,sizeof(struct student),comp);
	qsort(dsc,m,sizeof(struct student),comp);
	qsort(cdjw,j,sizeof(struct student),comp);
	qsort(qt,q,sizeof(struct student),comp);
	
	printf("%d\n",count);
	for(int i=0;i<k;i++){
		if(cdqj[i].sum==cdqj[i+1].sum){
			if(cdqj[i].d==cdqj[i+1].d){
				if(cdqj[i].id>cdqj[i+1].id) printf()
			}
			else {
				if(cdqj[i].d>cdqj[i+1].d) printf()
				else printf()
			}
		}
		else printf();
	}
}*/
/*才德论1015 快排练习 
#include<stdio.h>
#include<stdlib.h>
struct man
{
	int number,de,cai;
	int rank;
};
struct man sp[100000];	
int compare(const void *a,const void *b)
{
	const struct man *as=(struct man*)a;
	const struct man *bs=(struct man*)b;
	if(as->rank!=bs->rank)
		return -(as->rank-bs->rank);
	else if((as->de+as->cai)!=(bs->de+bs->cai))
		return -(as->de+as->cai)+(bs->de+bs->cai);
	else if(as->de!=bs->de)
		return -(as->de-bs->de);
	else
		return as->number-bs->number;
}
int main(void)
{
	int N,baseline,additionline;
	scanf("%d%d%d",&N,&baseline,&additionline);
	int index=0,sum=0;
	while(N--)
	{
		int a,b,c,d;
		scanf("%d%d%d",&a,&b,&c);
		if(b<baseline||c<baseline)
			continue;
		sum++;
		if(b>=additionline&&c>=additionline)
		{
			d=4;
			sp[index].number=a;
			sp[index].de=b;
			sp[index].cai=c;
			sp[index++].rank=d;
			continue;
		}
		if(b>=additionline&&c<additionline)
		{
			d=3;
			sp[index].number=a;
			sp[index].de=b;
			sp[index].cai=c;
			sp[index++].rank=d;
			continue;
		}
		if(b>=c&&b<additionline&&c<additionline)
		{
			d=2;
			sp[index].number=a;
			sp[index].de=b;
			sp[index].cai=c;
			sp[index++].rank=d;
			continue;
		}
		d=1;
		sp[index].number=a;
		sp[index].de=b;
		sp[index].cai=c;
		sp[index++].rank=d;
	}
	qsort(sp,index,sizeof(struct man),compare);
	printf("%d\n",sum);
	for(int i=0;i<index;i++)
	{
		printf("%d %d %d\n",sp[i].number,sp[i].de,sp[i].cai);
	}
	return EXIT_SUCCESS;
}
*/
/*1015
#include <stdio.h>
#include <stdlib.h>
struct student {
	int num, de, cai;
	int rank;
};
int compare(const void* a, const void* b)
{
	const struct student* aa = (struct student*)a;
	const struct student* bb = (struct student*)b;
	if (aa->rank != bb->rank) return aa->rank - bb->rank;
	else if (aa->de + aa->cai != bb->de + bb->cai) return -(aa->de + aa->cai - bb->de - bb->cai);
	else if (aa->de != bb->de) return -(aa->de - bb->de);
	else return aa->num - bb->num;
}
struct student array[100000];
int main(void)
{
	int n, L, h, j = 0;
	int sum = 0;
	scanf("%d%d%d", &n, &L, &h);
	for (int i = 0; i < n; i++) {
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if (b < L || c < L) continue;
		sum++;//都小于的已经跳过了所以可以直接sum++; 
		array[j].num = a;
		array[j].de = b;
		array[j].cai = c;
		if (b >= h && c >= h) { array[j++].rank = 1; }
		else if (b >= h && c < h) { array[j++].rank = 2; }
		else if (b < h && c < h && b >= c) { array[j++].rank = 3; }
		else { array[j++].rank = 4; }
	}
	qsort(array, j, sizeof(struct student), compare);
	printf("%d\n", sum);
	for (int i = 0; i < j; i++) {
		printf("%d %d %d\n", array[i].num, array[i].de, array[i].cai);
	}
}*/
/*1016
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[11],str2[11];
	char ch1,ch2;
	int count1=0,count2=0;
	scanf("%s %c %s %c",str1,&ch1,str2,&ch2);
	for(int i=0;i<strlen(str1);i++){
		if(str1[i]==ch1) count1++;
	}
	for(int i=0;i<strlen(str2);i++){
		if(str2[i]==ch2) count2++;
	}
	int a=0,b=0,s1=1,s2=1;
	while (count1--){
		a+=s1*(ch1-48);
		s1*=10;
	}
	while (count2--){
		a+=s2*(ch2-48);
		s2*=10;
	}
	printf("%d",a+b);
	return 0;
}*/
/*1017
#include <stdio.h>
#include <string.h>
int div(char *a,int b);
int main(void)
{
	char a[1001];
	int b;
	scanf("%s %d",a,&b);
	int d=div(a,b);
	if(strlen(a)==1&&a[0]=='0') printf("0");
	else {
		int flag=0;
		for (int i=0;i<strlen(a);i++){
			if(flag==0&&a[i]=='0') continue;
			else {
				flag=1;
				printf("%c",a[i]);
			}
		}
	}
	printf(" %d",d);
	return 0;
}
int div(char *a,int b){
	int i=0,div=0,t;
	while (a[i]!='\0'){
		t=(a[i]-'0'+div*10)%b;
		a[i] = '0'+(a[i]-'0'+div*10)/b;
		div=t;
		i++;
	}
	return div;
}*/
/*1019low
#include <stdio.h>
int main(void)
{
	int n,i,a[5],jx=0,sx=0;
    scanf("%d",&n);
    while (jx-sx!=6174){
    	i=0;
    	while (n>0) {
		a[i++]=n%10;
		n/=10;
		}
		for(int j=0;j<i;j++){
			for(int k=j+1;k<i;k++){
				if(a[k]>a[j]){
					int t=a[k];
					a[k]=a[j];
					a[j]=t;
				}
			}
		}
		int z=i;
		jx=0;sx=0;
		while (i--){
			jx=jx*10+a[z-i-1];
			sx=sx*10+a[i-1+1];
		}
		if(jx-sx==0) {
			printf("%d - %d = 0000\n",jx,sx);
			break;
		}
	    else {
	    	for(int i=0;i<z;i++){
	    		printf("%d",a[i]);
			}
			printf(" - ");
			for(int i=0;i<z;i++){
	    		printf("%d",a[z-1-i]);
			}
			printf(" = %d\n",jx-sx);
		}
	    n=jx-sx;
	}
    return 0;
}
*/
/*1019
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[5]={'0','0','0','0','\0'};
	int flag=1,z=0; char ch;
	while (scanf("%c",&ch),ch!='\n'){
		a[z++] = ch;
	}
    if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]){
    	printf("%s - %s = 0000\n",a,a);
	}
	else {
		while (a[0]!='6'||a[1]!='1'||a[2]!='7'||a[3]!='4'||flag!=0){
			flag=0;
			for(int j=0;j<4;j++){
			for(int k=j+1;k<4;k++){
				if(a[k]>a[j]){
						char t=a[k];
						a[k]=a[j];
						a[j]=t;
				    }
				}
			}
			printf("%s - ",a);
			for(int i=0;i<4;i++){
				printf("%c",a[3-i]);
			}
			int	jx=(a[0]-'0')*1000+(a[1]-'0')*100+(a[2]-'0')*10+a[3]-'0';
			int	sx=(a[3]-'0')*1000+(a[2]-'0')*100+(a[1]-'0')*10+a[0]-'0';
			int c=jx-sx;
			for(int i=0;i<4;i++){
				a[i]='0';
			}
			a[4]='\0';
			int m=3;
			while (c>0){
				a[m--] = c%10+'0';
				c/=10;
			}
		    printf(" = %s\n",a);
		}
	}
    return 0;
}*/

/*1019 测试 
#include <stdio.h>
int main(void)
{
for(int q=0;q<=999;q++){ 
char a[5];
 for(int i=0;i<4;i++){
    a[i]='0';
   }
 printf("%d:\n",q);

 int qq=q;
 int r=3;
 while (qq>0){
    a[r--] = qq%10+'0';
    qq/=10;
   }
   a[4]='\0';
 
 
 int flag=1;
    //scanf("%s",a);
    if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]){
     printf("%s - %s = 0000\n",a,a);
 }
 else {
  while (a[0]!='6'||a[1]!='1'||a[2]!='7'||a[3]!='4'||flag!=0){
   flag=0;
   for(int j=0;j<4;j++){
   for(int k=j+1;k<4;k++){
    if(a[k]>a[j]){
      char t=a[k];
      a[k]=a[j];
      a[j]=t;
        }
    }
   }
   printf("%s - ",a);
   for(int i=0;i<4;i++){
    printf("%c",a[3-i]);
   }
   int jx=(a[0]-'0')*1000+(a[1]-'0')*100+(a[2]-'0')*10+a[3]-'0';
   int sx=(a[3]-'0')*1000+(a[2]-'0')*100+(a[1]-'0')*10+a[0]-'0';
   int c=jx-sx;
   for(int i=0;i<4;i++){
    a[i]='0';
   }
   a[4]='\0';
   int m=3;
   while (c>0){
    a[m--] = c%10+'0';
    c/=10;
   }
      printf(" = %s\n",a);
  }
 }}
    return 0;
}
*/


/*1019wtn的c++ 
#include<bits/stdc++.h>
#define wtn tql
using namespace std;
int sx(int n){
 int a[4];
 for(int i=0;i<4;i++){
  a[i]=n%10;
  n/=10;
 }
 sort(a,a+4);
 int re=0;
 for(int i=0;i<4;i++){
  re*=10;
  re+=a[i];
 }
 return re;
}
int jx(int n){
 int a[4];
 for(int i=0;i<4;i++){
  a[i]=n%10;
  n/=10;
 }
 sort(a,a+4);
 int re=0;
 for(int i=3;i>=0;i--){
  re*=10;
  re+=a[i];
 }
 return re;
}
int main(void){
 int n;
 cin>>n;
 while(n!=0) {
 int a,b,c;
 a=jx(n);
 b=sx(n);
 c=a-b;
 n=c; 
 cout<<setw(4)<<setfill('0')<<a<<" - "<<setw(4)<<setfill('0')<<b<<" = "<<setw(4)<<setfill('0')<<c<<endl;
 if(n==6174)break;
 }

return 0;
}*/
/*1020
#include <stdio.h>
#include <stdlib.h>
struct mooncake{
	double kc;
	double zsj;
	double dj; 
};
int comp(const void *p,const void *q){
	double qq = ((struct mooncake*)q)->dj;
	double pp = ((struct mooncake*)p)->dj;
	return  (pp>qq) ? -1 : 1; 
}
int main(void)
{
	struct mooncake price[1010];
	int n;
	double b;
	scanf("%d %lf",&n,&b);
	for(int i=0;i<n;i++){
		scanf("%lf",&price[i].kc);
	}
	for(int i=0;i<n;i++){
		scanf("%lf",&price[i].zsj);
	}
	for(int i=0;i<n;i++){
		price[i].dj=price[i].zsj/price[i].kc;
	}
	qsort(price,n,sizeof(struct mooncake),comp);
	int j=0;
	double sum=0;
	int flag=0;
	while (b>0){
		b-=price[j].kc;
		if(b>=0)
		sum += price[j].zsj;
		if(j==n-1) {
			if(b>=0) flag=1;
			j++;
			break;
		}
		j++;
	}
	if(b==0||flag==1) printf("%.2f",sum);
	else{
		sum+=(b+price[j-1].kc)*price[j-1].dj;
		printf("%.2f",sum);
	}
	return 0;
 } */
/*
void sort(double dj[],int n)
{
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(dj[j])
		}
	}
}*/

/*1021
#include <stdio.h>
int main(void)
{
	char ch;
	int cs[10]={0},i;
	while (ch=getchar(),ch!='\n'){
        i = ch-'0';
		cs[i]++;
	}
	for (int i=0;i<10;i++){
		if(cs[i]!=0) printf("%d:%d\n",i,cs[i]);
	}
	return 0;
}*/
/*1021注意0的情况 
#include <stdio.h>
int main(void)
{
	long long a, b, d;
	scanf_s("%lld %lld %lld", &a, &b, &d);
	long long sum = a + b;
	long long change[40];
	int j = 0;
	if (sum == 0) printf("%d", 0);
	else {
		while (sum > 0) {
			change[j++] = sum % d;
			sum /= d;
		}
		for (int i = j - 1; i >= 0; i--) {
			printf("%lld", change[i]);
		}
	}
	
	return 0;
}*/


/*1023 陷阱如果1-9中只有9的个数不为零那么之后i++变为10直接退出了  for循环中不绝对连续时i加减容易出错要看清那 
#include <stdio.h>
int main(void)
{
	int count[10];
	for(int i=0;i<10;i++){
		scanf("%d",&count[i]);
	}
	int flag=0,j;
	for (int i=1;i<10;i++){
		if(flag == 1){
			while(count[0]--){
				printf("%d",0);
			}
			flag=2;
			i=j;
		}
		else if(count[i]!=0&&flag==0){
			flag=1;
		    printf("%d",i);
		    count[i]--;
		    i--;
		    j=i;
		}
		else if (flag==2){
			while (count[i]--){
				printf("%d",i);
			}
		}
	}
}*/
/*h
#include <stdio.h>
int main(void)
{
		int t,z,c;
		int b;
		scanf("%d",&t);
		while(t--){
			scanf("%d %d",&z,&c);
			printf("[");
			for(int i=1;i<=z;i++){
				if(i<=c) printf("#");
				else printf("-");
			}
			b = c*100/z;
			printf("] %d%%\n",b);
		}
	return 0;
}*/
/*j
#include <stdio.h>
#include <string.h>
char str[1000010];
int main(void)
{
	int t,n;
	
	scanf("%d",&t);
	while (t--)
	{
		int sum=0;
		scanf("%d",&n);
		while (n--)
		{
			int b[1100]={0};
			scanf("%s",str);
			int k=0,flag=0;
			for(int i=0;i<strlen(str);i++){
				if(str[i]=='.') continue;
				else {
					int u=str[i];
					b[u]=1;
				}
			}
			int count=0;
			for(int i=0;i<=1100;i++){
				if(b[i]==1) count++;
			}
			sum+=count;
		}
		printf("%d\n",sum);
	}
	return 0;
}
*/
/*D
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int k=n;
	char str[1000000];
	while (n--){
		scanf("%s",str);
	}
	int len = strlen(str);
	printf("%d",len*k);
	return 0;
}
*/
/*G
#include <stdio.h>
int main(void)
{
	int n,a,b;
	int pm[1010],s[1010];
	scanf("%d",&n);
	while(n--)
	{
		int x,y;
		scanf("%d%d",&a,&b);
		for (int i=1;i<=a;i++){
			pm[i]=i;
			s[i]=i;
		}
		while(b--)
		 {
		 	scanf("%d%d",&x,&y);
		 	if(pm[x]>pm[y]){
		 		pm[x]=pm[y];
		 		pm[y]++;
			 }
		 }
		 for (int i=1;i<=a;i++){
		 	for(int j=i+1;j<=a;j++)
		 	{
		 		if(pm[j]<pm[i]){
		 			int t=s[j];
		 			s[j]=s[i];
		 			s[i]=t;
				 }
			 }
		 }
		 for(int j=1;j<=a;j++)
		 	{
		 		
		 			if(j!=a)
		 			printf("%d ",s[j]);
		 			else
		 			printf("%d\n",s[j]);
				 
			 }
	}
	return 0;
}*/
/*1024
#include<stdio.h>
#include <string.h>
int main(void)
{
	int n;
	char efront[10010], after[20010], ch;
	int i = 0, k;
	while (scanf("%c", &ch), ch != 'E')
	{
		efront[i++] = ch;
	}
	if (efront[0] == '-') printf("-");
	scanf("%d", &n);
	if (n < 0) {
		after[1] = '0';
		after[2] = '.';
		int count = 0;
		k = 3;
		for (int j = 1; j < i;  k++) {
			count++;
			if (count <= -n - 1) after[k] = '0';
			else {
				if (efront[j] == '.') {
					j++;
					after[k] = efront[j];
					j++;
				}
				else { after[k] = efront[j]; j++; }
			}
		}
		for (int g = 1; g < k; g++) {
			printf("%c", after[g]);
		}
	}
	else if (n > 0)
	{
		if (i - 3 >= n) {
			after[1] = efront[1];
			k = 2;
			int count2 = 0;
			for (int g = 3; g <i; g++) {
				count2++;
				if (count2 != n + 1)
					after[k++] = efront[g];
				else if (count2 == n + 1) {
					after[k++] = '.';
					g--;
				}
			}
		}
		else {
			k = 1;
			for (int g = 1; g < i; g++) {
				if (efront[g] == '.') continue;
				else after[k++] = efront[g];
			}
			for (int j = 1; j <= n + 3 - i; j++) {
				after[k++] = '0';
			}
		}
		if (after[1] == '0') {
			for (int g = 1; g < k-1; g++) {
				if (after[k - 2] == '0' && after[k - 1] == '0') {
					printf("0"); break;
				}
				if (after[g + 1] == '.') {
					for (int m = g; m < k; m++) {
						printf("%c", after[m]);
					}
					break;
				}
				else if (after[g + 1] == '0') {
					continue;
				}
				else {
					for (int m = g + 1; m < k; m++) {
						printf("%c", after[m]);
					}
				}
			}
		}
		else {
			for (int g = 1; g < k; g++) {
				printf("%c", after[g]);
			}
		}
	}
	return 0;
}
*/
/*1026
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;
	cin >> a >> b;
	long long c;
	c=(b-a)/100.0+0.5;
		long long s , f , m;
		s = c/3600;
		f = c%3600/60;
		m = c%60;
//	if(s>=100)
//	printf("%lld:%2lld:%2lld",s,f,m);
    printf("%02lld:%02lld:%02lld",s,f,m);
	return 0;
}
*/
/*c++1027
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int a;
	char ch;
	cin >> a >> ch;
	int i,sum=1;
	for(i=3;;i+=2){
		if(a>=sum+2*i) {
			sum+=2*i;
			continue;
		}
		else break;
	}
	int leave = a-sum;
	for(int j=1;j<=i-2;j++){
		for(int k=1;k<=(i-1)/2-abs((i-1)/2-j)-1;k++){
			cout <<' ';
		}
		for(int k=1;k<=1+2*abs((i-1)/2-j);k++){
			cout << ch;
		}
		cout<<'\n';
	}
	cout<<leave<<endl;
	return 0;
}*/
/*1028 快排 
#include <bits/stdc++.h>
using namespace std;
struct people{
	char name[6];
	int n;
	char g1;
	int y;
	char g2;
	int r;
};
people arr[100000];
int compare(const void *p,const void *q);
int main()
{
	
	int t;
	scanf("%d",&t);
    for (int i=0;i<t;i++){
    	cin >> arr[i].name >> arr[i].n >>arr[i].g1 >>arr[i].y >> arr[i].g2 >>arr[i].r;
	}
	qsort(arr,t,sizeof(struct people),compare);
	int max=-1,min=-1;
	for (int i=0;i<t;i++){
		if(arr[i].n<1814) continue;
		else if(arr[i].n==1814) {
			if(arr[i].y<9) continue;
			else if(arr[i].y==9){
				if(arr[i].r<6) continue;
				else {
					min = i; break;
				}
			}
			else {
				min = i; break;
			}
		}
		else {
			min = i; break;
		}
	}
	for (int i=t-1;i>=0;i--){
		if(arr[i].n>2014) continue;
		else if(arr[i].n==2014) {
			if(arr[i].y>9) continue;
			else if(arr[i].y==9){
				if(arr[i].r>6) continue;
				else {
					max = i; break;
				}
			}
			else {
				max = i; break;
			}
		}
		else {
			max = i; break;
		}
	}
	if (max<min||max==-1||min==-1) cout << 0 << endl;
	else
	cout << max-min+1 << " " << arr[min].name <<" " <<  arr[max].name<<endl;
	return 0;
} 
int compare(const void *p,const void *q){
	const struct people*pp = (const struct people*)p;
	const struct people*qq = (const struct people*)q;
	if(pp->n!=qq->n) return pp->n - qq->n;
	else if(pp->y!=qq->y) return pp->y - qq->y;
	else return pp->r - qq->r;
}  */
/*1029
#include <bits/stdc++.h>
using namespace std;
int main()
{
	char str1[85];
	char str2[85];
	char cf[85];
	cin >> str1 >> str2;
	int i,j,k;
	for(i=0,j=0,k=0;i<strlen(str1)&&j<strlen(str2);i++){
		if(str1[i]!=str2[j]) {
			if(str1[i]>='a'&&str1[i]<='z'){
				cf[k++] = str1[i]-32;
			}
			else cf[k++]=str1[i];
			continue;
		}
		else j++;
	}
	if(i<strlen(str1)) {
		for(int u=i;u<strlen(str1);u++){
			if(str1[u]>='a'&&str1[u]<='z'){
				cf[k++] = str1[u]-32;
			}
			else cf[k++]=str1[u];
		}
	}
	for(int s=0;s<k;s++){
		int flag = 0;
		for(int g=s-1;g>=0;g--){
			if(cf[s]==cf[g]){
				flag=1;
				break;
			}
		}
		if (flag==0) {
			
			cout << cf[s];
		}
	}
	return 0;
 } */
 /*
 #include <bits/stdc++.h>
 #define ll long long
 using namespace std;
 ll a[100010];
 int main()
 {
 	ll n,p;
 	cin >> n >> p;
 	for(int i=0;i<n;i++){
 		scanf("%lld",&a[i]);
	 }
	 sort(a,a+n);
	 ll max = 1;
	 for (ll i=0;i<n;i++){
	 	if(a[n-1]<=p*a[i]) {
	 		max= n-i>max?n-i:max;
	 		break;
		 }
	 	for(ll j = max+i;j<n;j++){
	 		if(a[j]>p*a[i]) {
	 			max = j-i>max?j-i:max;
	 			break;
			 }
		 }
	 }
	cout << max <<endl;
	return 0; 
 }*/
 
 
 /*1031
 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {
 	char id[100][19];
 	char m[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
 	int b[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2},trace[100]={0};
 	int n,count=0;
 	scanf("%d",&n);
 	for(int i=0;i<n;i++){
 		scanf("%s",id[i]);
	 }
    for(int j=0;j<n;j++){
    	int k=0,sum=0,flag=0;
    	for(int i=0;i<17;i++){
    		
 			if(id[j][i]-'0'<0||id[j][i]-'0'>9){
 				flag = 1;
 				break;
			 }
		    sum+=(id[j][i]-'0')*b[k++];
			 
			
		}
		if(flag==0){
			if(id[j][17]==m[sum%11]) {
				trace[j]=1;
				count ++;
			}
		}
	}
	if(count==n) printf("All passed");
    else {
    	for(int i=0;i<n;i++){
	    	if(trace[i]==0){
	    		printf("%s\n",id[i]);
			}
	    } 		
	}
	return 0;
}*/
/*1032
#include <bits/stdc++.h>
using namespace std;
struct compititor{
	int xx;
	int score;
};
compititor arr[100010];
int b[100010]={0};
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i].xx >>arr[i].score;
		b[arr[i].xx]+=arr[i].score;
	}
	int max = b[1],s=1;
	for(int i=1;i<=n;i++){
		if(b[i]>max) {
			max=b[i];
			s=i;
		}
	}
	cout << s <<" "<< max <<endl;
	return 0;
}*/
/*有坑第一个字符是空格 则用scanf读入就不对了； 需要改进用C超时了 
#include <stdio.h>
#include <string.h>
char str1[100010];
char str2[100010];
int main(void)
{
	
	int b[1000]={0};
	gets(str1);
	gets(str2);
	int len1=strlen(str1);
	int len2=strlen(str2);
	for (int i=0;i<len1;i++){
		if(str1[i]>='A'&&str1[i]<='Z'){
			int s1=str1[i], s2=str1[i]+32;
			b[s1]=1; b[s2]=1;
		}
		else {
			int s3=str1[i];
			b[s3] = 1;
		}
	}
	if(b[43]==1){
		for(int j=65;j<=90;j++){
			b[j]=1;
		}
	}
	int flag=0;
	for(int i=0;i<len2;i++){
		int s4=str2[i];
		if(b[s4]==0) {
			printf("%c",str2[i]);
			flag=1;
		}
	}
	if(flag==0) printf("\n");
	return 0;
}*/
/*xxxxxxxx
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;
bool judge(char s1, char s2)//这个函数用于比对两个字符，判断有无坏键，是否要输出，s1代表坏键
{
	if (s1 == s2) return false;//如果相同，代表是坏键，返回false
	if (s1 == '+' && (s2 >= 'A'&&s2 <= 'Z'))return false;//虽然不同，但是上档键坏了，所有大写字符不输出
	else if (s2 >= 'a'&&s2 <= 'z')//如果是小写字母，要判断他的大写字母是否是坏键
	{
		if (s2 + 'A' - 'a' == s1)	return false;
		else return true;//一开始就是这句语句没有写，导致提交的时候三个大的测试点不能通过，以后一定要注意每一个if后面都要加上else
	}
	else return true;
}
int main()
{
	char s1[100010];
	char s2[100010];
	gets(s1); gets(s2);
	for (int i = 0; i < strlen(s2); i++)//对比s2中的每一个字符，判断是否要输出
	{
		bool temp = true;
		for (int j = 0; j < strlen(s1); j++)//将s2的字符与s1中每一个字符进行对比
		{
			temp = temp && judge(s1[j], s2[i]);//将所有逻辑判断结果求“与”，必须所有的是true最后结果才为true
		}
		if (temp)cout << s2[i];//所有判断都是true，可以输出
	}
    return 0;
}*/
/*1034
#include <stdio.h>
#include <math.h>
#define ll long long

ll maxy(ll a,ll b){
	return b == 0 ? a : maxy(b, a % b);
	
}
void simple (ll aa,ll bb){
	if(aa==0) printf("%c",'0');
	else {
		if((aa<bb&&aa>0)||(aa<0&&-aa<bb)){
			if(aa<0){
			    printf("(%lld/%lld)",aa,bb);
			}
			else {
			    printf("%lld/%lld",aa,bb);
		    }
		}
		else{
			if(aa<0){
			    if(bb==1){
					printf("(%lld)",aa);
				}
				else {
					ll x1=aa/bb, x2=-1*aa%bb;
					printf("(%lld %lld/%lld)",x1,x2,bb);
				}
			}
			else {
				if(bb==1){
					printf("%lld",aa);
				}
				else {
					ll x3=aa/bb, x4=aa%bb;
					printf("%lld %lld/%lld",x3,x4,bb);
				}
		    }
		}
	}
} 
int main(void)
{
	ll a,b,c,d;
	ll aa,bb,cc,dd;
	scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d);
	ll s1=abs(maxy(a,b)),s2=abs(maxy(c,d));
	//printf("%d\n",s1);
	//printf("%lld",a);
	aa=a/s1;
	//printf("%d\n",aa);
	//printf("%lld\n",-12035765821/1);
	bb=b/s1;
	cc=c/s2;
	dd=d/s2;
	simple(aa,bb); printf(" + ");simple(cc,dd);printf(" = ");
	ll e,f,s3;
	e = aa*dd+cc*bb;
	f = bb*dd;
	s3 = abs(maxy(e,f));
	ll ee=e/s3,ff=f/s3;
	simple(ee,ff);
	printf("\n");
	

	simple(aa,bb); printf(" - ");simple(cc,dd);printf(" = ");
	ll e2,f2,s4;
	e2 = aa*dd-cc*bb;
	f2 = bb*dd;
	s4 = abs(maxy(e2,f2));
	ll ee2=e2/s4,ff2=f2/s4;
	simple(ee2,ff2);
	printf("\n");
	
	simple(aa,bb); printf(" * ");simple(cc,dd);printf(" = ");
	ll e3,f3,s5;
	e3 = aa*cc;
	f3 = bb*dd;
	s5 = abs(maxy(e3,f3));
	ll ee3=e3/s5,ff3=f3/s5;
	simple(ee3,ff3);
	printf("\n");
	
	simple(aa,bb); printf(" / ");simple(cc,dd);printf(" = ");
	if(cc==0) printf("Inf\n");
	else{
		ll e4,f4,s6;
		e4 = aa*dd;
		f4 = bb*cc;
		s6 = abs(maxy(e4,f4));
		ll ee4=e4/s6,ff4=f4/s6;
		if (ff4<0){
			ff4=0-ff4; ee4=0-ee4;
		}
		simple(ee4,ff4);
	}
	return 0;
}
*/
/*1034 csdn
#include <iostream>
#include <cmath>

using namespace std;

//?????
int gcd(long long a, long long b){
    return b == 0 ? a : gcd(b, a % b);
}

void print(long long a, long long b){
    long long c = 0; //??????????,???0
    if(a > 0){ //??
        if(b == 1){ //??3/1
            printf("%lld", a);
        }
        else if(a > b){ //??5/3
            c = a / b;
            a -= b * c;
            printf("%lld %lld/%lld", c, a, b);
        }
        else{ //??? ??3/5
            printf("%lld/%lld", a, b);
        }
    }
    else if(a == 0){ //??0/3
        printf("%c", '0');
    }
    else{ //??
        if(b == 1){ //??-3/1
            printf("(%lld)", a);
        }
        else if(-1 * a > b){ //??-5/3
            c = a / b;
            a = (-1 * a) % b;
            printf("(%lld %lld/%lld)", c, a, b);
        }
        else{ //???
            printf("(%lld/%lld)", a, b);
        }
    }
}

void add(long long a1, long long b1, long long a2, long long b2){
    print(a1, b1);
    printf(" + ");
    print(a2, b2);
    printf(" = ");
    long long a3 = a1 * b2 + a2 * b1;
    long long b3 = b1 * b2;
    //???????,??????
    long long gcd3 = abs(gcd(a3, b3));
    a3 /= gcd3;
    b3 /= gcd3;
    print(a3, b3);
    printf("\n");
}

void subtract(long long a1, long long b1, long long a2, long long b2){
    print(a1, b1);
    printf(" - ");
    print(a2, b2);
    printf(" = ");
    long long a3 = a1 * b2 - a2 * b1;
    long long b3 = b1 * b2;
    //???????,??????
    long long gcd3 = abs(gcd(a3, b3));
    a3 /= gcd3;
    b3 /= gcd3;
    print(a3, b3);
    printf("\n");
}

void multiply(long long a1, long long b1, long long a2, long long b2){
    print(a1, b1);
    printf(" * ");
    print(a2, b2);
    printf(" = ");
    long long a3 = a1 * a2;
    long long b3 = b1 * b2;
    //???????,??????
    long long gcd3 = abs(gcd(a3, b3));
    a3 /= gcd3;
    b3 /= gcd3;
    print(a3, b3);
    printf("\n");
}

void divide(long long a1, long long b1, long long a2, long long b2){
    print(a1, b1);
    printf(" / ");
    print(a2, b2);
    printf(" = ");
    if(a2 == 0){
        printf("Inf");
    }
    else if(a2 < 0){
        long long a3 = -1 * a1 * b2;
        long long b3 = -1 * b1 * a2;
        //???????,??????
        long long gcd3 = abs(gcd(a3, b3));
        a3 /= gcd3;
        b3 /= gcd3;
        print(a3, b3);
    }
    else{
        long long a3 = a1 * b2;
        long long b3 = b1 * a2;
        //???????,??????
        long long gcd3 = abs(gcd(a3, b3));
        a3 /= gcd3;
        b3 /= gcd3;
        print(a3, b3);
    }
    printf("\n");
}

int main(){
    long long a1, b1, a2, b2;
    long long c1 = 0, c2 = 0;
    scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
    //????????,??????
    long long gcd1 = abs(gcd(a1, b1));
    a1 /= gcd1;
    b1 /= gcd1;
    long long gcd2 = abs(gcd(a2, b2));
    a2 /= gcd2;
    b2 /= gcd2;
    //???????????
    add(a1, b1, a2, b2);
    subtract(a1, b1, a2, b2);
    multiply(a1, b1, a2, b2);
    divide(a1, b1, a2, b2);
    return 0;
}
*/
/*1036
#include <stdio.h>
int main(void)
{
	int n;
	char ch;
	scanf("%d %c",&n,&ch);
	int c= n/2.0+0.5;
	for(int i=1;i<=c;i++){
		for(int j=1;j<=n;j++){
			if(j==1||j==n||i==1||i==c){
				printf("%c",ch);
			}
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
*/
//1037
/*
#include <stdio.h>
int main(void)
{
	int g1,g2,s1,s2,k1,k2;
	scanf("%d.%d.%d",&g1,&s1,&k1);
	scanf("%d.%d.%d",&g2,&s2,&k2);
	int sum1,sum2;
	sum1=g1*29*17+s1*29+k1;
	sum2=g2*17*29+s2*29+k2;
	int y=sum2-sum1;
	if(y==0) printf("0.0.0\n");
	else if(y>0) {
		int gg1,ss1,kk1;
		gg1=y/(29*17);
		ss1=y%(29*17)/29;
		kk1=y%29;
		printf("%d.%d.%d\n",gg1,ss1,kk1);
	}
	else {
		int gg2,ss2,kk2;
		gg2=-y/(29*17);
		ss2=-y%(29*17)/29;
		kk2=-y%29;
		printf("-%d.%d.%d\n",gg2,ss2,kk2);
		
	}
	return 0;
}*/
/*
1038
#include <stdio.h>
int main(void)
{
	int a[100010],b[110]={0};
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	int k;
	scanf("%d",&k);
    while(k--){
    	int p;
    	scanf("%d",&p);
		if(k!=0)
		printf("%d ",b[p]);
		else printf("%d",b[p]);
	}
	return 0;
}*/
/*2021ACM E
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str1[1000010];
char str2[1000010];
struct zm{
  	char ch;
    int num;
};
int main(void)
{
  	struct zm arr[27];
  	struct zm arr2[27];
  	int b[1000]={0},b2[1000]={0};
  	gets(str1);
  	gets(str2);
  	int len1 = strlen(str1);
  	int len2 = strlen(str2);
  	for(int i=0;i<len1;i++){
  	  	int s1=str1[i];
  	  	b[s1]++;
	}//计入str1每个字符出现的次数，将其转换为assic码，用数组b储存其出现次数 
	int k=0;
	for(int i=97;i<=122;i++){
		if(b[i]>0){
			char ss=i;
			arr[k].ch=ss;
			arr[k++].num=b[i];
		}
	}//把str1中出现的字符放到结构数组arr中并计入其出现次数 

	for(int i=0;i<len2;i++){
  	  	int s2=str2[i];
  	  	b2[s2]++;
	}//计入str1每个字符出现的次数，将其转换为assic码，用数组b2储存其出现次数 
	int k2=0;
	for(int i=97;i<=122;i++){
		if(b2[i]>0){
			char ss2=i;
			arr2[k2].ch=ss2;
			arr2[k2++].num=b2[i];
		}
	}//把str2中出现的字符放到结构数组arr2中并计入其出现次数 
	
	
	for (int i=0;i<k;i++){
		for(int j=i+1;j<k;j++){
			if(arr[j].num>arr[i].num){
				struct zm t;
				t=arr[j];
				arr[j]=arr[i];
				arr[i]=t;
			}
		}
	}//第一个新字符串排序 
	for (int i=0;i<k2;i++){
		for(int j=i+1;j<k2;j++){
			if(arr2[j].num>arr2[i].num){
				struct zm t2;
				t2=arr2[j];
				arr2[j]=arr2[i];
				arr2[i]=t2;
			}
		}
	}//第二个新字符串排序 	
	if(k!=k2) printf("NO");
	else if(k==0&&k2==0) printf("YES");//两 个字符串都为空，输出YES（可能不用考虑这个但是试了好多次不知道错误就加上了这条语句） 
	else {
		int flag =0 ;
		for(int i=0;i<k;i++){
			if(arr[i].ch!=arr2[i].ch) {
				flag=1;
				printf("NO");
				break;
			}
		}
		if(flag==0) printf("YES");
	}	
	return 0;
}*/
 /*
#include <stdio.h>
int main(void)
{
	int a=1,b=2,c=3,t;
	while(a<b<c){
		t=a;
		a=b;
		b=t;
		c--;
	}
	printf("%d%d%d",a,b,c);
}*/
/*2021acmNO1
#include <stdio.h>
#include <string.h>
char ls[10000010];
int main(void)
{
	gets(ls);
	int n,k;
	int len=strlen(ls);
	scanf("%d",&n);
	while(n--){
		scanf("%d",&k);
		if(ls[k]=='h'){
			printf("all win!\n");
			continue;
	    }
	    int flag=0;
	    for (int i=k,j=k;i>=0&&j<=len-1;i--,j++){
	    	if(ls[i]=='h'&&ls[j]!='h'){
	    		flag=1;
	    		printf("xl win!\n");
	    		break;
			}
			else if(ls[i]!='h'&&ls[j]=='h'){
				flag=1;
				printf("xw win!\n");
				break;
			}
			else if(ls[i]=='h'&&ls[j]=='h'){
				flag=1;
				printf("xl win!\n");
				break;
			}
		}
		if(flag==0) printf("all win!\n");
	}
	return 0;
}*/
/*数塔问题 
#include <stdio.h>
int maxcom(int a,int b){
	return a>b?a:b;
}
int main(void)
{
	int numtree1[100][100],numtree2[100][100]={0};
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			for(int j=0;j<i+1;j++){
				scanf("%d",&numtree1[i][j]);
			}
		}
		for(int i=0;i<n;i++){
			numtree2[n-1][i]=numtree1[n-1][i];
		}
		for(int i=n-2;i>=0;i--){
		    for(int j=0;j<=i;j++){
				numtree2[i][j]=numtree1[i][j]+maxcom(numtree2[i+1][j],numtree2[i+1][j+1]);
			}
		}
		printf("%d\n",numtree2[0][0]);
	}
	
	return 0;
} */

/*2021-acm-tongshi-1-F
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,k;
	int a[100010];
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	cout << a[k-1] <<endl;
	return 0;
}
*/
/*2021 acm 1 G
#include <iostream>
#include <stdio.h>
#define ll long long
using namespace std;
ll a[1000010];
ll c[1005]={0};
ll d[1000005]={0};
ll b[1000010]={0};
int main()
{
	ll n;
	cin>>n;
	for(ll i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	ll max=1,p=0,k=1;
	ll l0=a[0];
	if(l0<=1000000){
		b[l0] = 1;
	}
	else{
		ll x=l0/1000000;
		ll y = l0%1000000;
		c[x] = 1; d[y] = 1;
	}
	for(ll i=1;i<n;i++){
		ll li=a[i];
		if(li<=1000000){
			if(b[li]==k) {
				max = i-p>max?i-p:max;
				p=i;
				k++;
			}
			else if(i==n-1) {
				max = i-p+1>max?i-p+1:max;
			}
			b[li] = k;
		}
		else{
			ll li1 = li%1000000;
			ll li2 = li/1000000;
			if(c[li2]==k&&d[li1]==k) {
				max = i-p>max?i-p:max;
				p=i;
				k++;
			}
			else if(i==n-1) {
				max = i-p+1>max?i-p+1:max;
			}
			c[li2] = k; d[li1]=k;
		}
		
	}
	cout << max << endl;
	return 0;
}*/
/*2020 acm 4 F
#include <stdio.h>
#include <stdlib.h>
struct ft{
	int wl;
	int zs;
	int jf;
};
int comp(const void*p,const void*q){
	const struct ft *pp=(const struct ft*)p;
	const struct ft *qq=(const struct ft*)q;
	if(pp->jf!=qq->jf) return pp->jf - qq->jf;
	else if(pp->wl!=qq->wl) return qq->wl - pp->wl;
	else return qq->zs - pp->zs; 
}
int comp2(const void*p,const void*q){
	const struct ft *pp=(const struct ft*)p;
	const struct ft *qq=(const struct ft*)q;
	if(pp->wl!=qq->wl) return qq->wl - pp->wl;
	else  return qq->zs - pp->zs;
}
int main(void)
{
	struct ft arr1[1005],arr2[1005];
	int n,k1=0,k2=0,k3=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr1[i].wl);
		arr2[i].wl=arr1[i].wl;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&arr1[i].zs);
		arr2[i].zs=arr1[i].zs;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&arr1[i].jf);
		if (arr1[i].jf==1) k1++;
		else if(arr1[i].jf==2) k2++;
		else k3++;
		arr2[i].jf=arr1[i].jf;
	}//读入 ,让arr2完全等于arr1备用 
	qsort(arr2,n,sizeof(struct ft),comp);
	printf("%d %d %d\n",arr2[0].zs,arr2[k1].zs,arr2[k1+k2].zs);
	qsort(arr1,n,sizeof(struct ft),comp2);
	printf("%d %d",arr1[0].zs, arr1[0].jf);
	return 0;
}*/ 

/*1013 
#include <stdio.h>
int main(void)
{
	int a,b,count=0;
	char sl[105][105];
	while(scanf("%d %d",&a,&b),a!=0||b!=0)
	{
		//getchar();
		count++;
		for(int i=0;i<=a+1;i++){
			for(int j=0;j<=b+1;j++){
				if(i==0||j==0||i==a+1||j==b+1){
					sl[i][j]='.';
				}
				else
				scanf(" %c", &sl[i][j]);
			}
		//	getchar();
		}
		printf("Field #%d:\n",count);
		for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++){
				int num=0;
				if(sl[i][j]=='*'){
					printf("*");
				}
				else {
					for(int ii=i-1;ii<=i+1;ii++){
						for(int jj=j-1;jj<=j+1;jj++){
							if(sl[ii][jj]=='*') {
								num++;
							}
						}
					}
					printf("%d",num);
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
 } */
 
 
/*第三次月考A 
#include <stdio.h>
int main(void)
{
		int b[1000]={0};
		char ch;
		int t,n,sum,flag;
		scanf("%d",&t);
		while(t--)
		{
			sum=0;flag=0;
			scanf("%d",&n);
			for(int i=0;i<n;i++){
				scanf(" %c",&ch);
				int s = ch;
				b[s]++;
			}
			for(int i=0;i<1000;i++){
				if(b[i]>0){
					sum+=b[i]/2; 
					if(b[i]%2==1) flag = 1;
					b[i] = 0;
				}
			}
			if(flag) printf("%d\n",sum*2+1);
			else printf("%d\n",sum*2);
		}
		
	return 0;
}*/
