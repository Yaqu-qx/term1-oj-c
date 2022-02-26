/*ÎÄ¼þµÚÒ»Ì×2 
#include <stdio.h>
#include <stdlib.h>
#define filename "student.doc"
struct student{
    char num[7];
    char name[10];
    int age,s1,s2,s3,s4;
};
int main(void)
{
    int n;  
    scanf("%d",&n);
    FILE *fp;
    struct student chunk[n];
    int i,numread;
    fp=fopen(filename,"r");
    if(fp==NULL){
        printf("²»ÄÜ´ò¿ªÎÄ¼þ£º %s\n",filename);
        exit(1);
    }
    
    for(i=0;i<n;i++){
        fscanf(fp,"%s %s %d %d %d %d",chunk[i].num,chunk[i].name,&chunk[i].age,&chunk[i].s1,&chunk[i].s2,&chunk[i].s3);
        chunk[i].s4 = chunk[i].s1 + chunk[i].s2 + chunk[i].s3;
    }
    //numread = fread(chunk,sizeof(struct student),n,fp);
    fclose(fp);
    for(i=0;i<n;i++){
    	//int s4 = chunk[i].s1 + chunk[i].s2 + chunk[i].s3;
        printf("%6s %-6s %3d %6d %6d %6d %6d\n",chunk[i].num,chunk[i].name,chunk[i].age,chunk[i].s1,chunk[i].s2,chunk[i].s3,chunk[i].s4);
    }
    
    return 0;
}*/

/*
#include <stdio.h>
float fact(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%.2f",fact(n));
    return 0;
}
float fact(int n)
{
    int i=1;
    float t=1.0,s=0.0;
    while(i<=n){
        t=t*1/i++;
        s+=t;
    }
    return s;
}*/

/*µÚÈý´ÎÔÂ¿¼A 
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
/*M ÓÃÁËGETS  
#include <stdio.h>
#include <string.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char str[40000];
		char strr[1010][35];
		gets(str);
		char zh;
		int len = strlen(str);
		zh = str[len-1];
		char *p;
		p = strtok(str," ?.!");
		int i=0;
		while(p)
		{
			strcpy(strr[i++],p);
			p = strtok(NULL," ?.!");
		}
		int flag = 1;
		for (int j=0;j<i/2;j++){
			if(flag){
				flag = 0;
				printf("%s %s",strr[j],strr[i-1-j]);
			}
			else printf(" %s %s",strr[j],strr[i-j-1]);
		}
		if(i<=1) printf("%s%c\n",strr[0],zh);
		else{
			if(i%2==1) printf(" %s%c\n",strr[i/2],zh);
		    else printf("%c\n",zh);
		}
		
	}
	return 0;
 } */
 
//²»ÓÃGETs
/*
#include <stdio.h>
 #include <string.h>
 int main(void)
 {
 	int t;
 	scanf("%d",&t);
 	while(t--)
 	{
 		char str[1010][35];
 		int i=0;
 		char zh ;
 		while(1)
 		{
 			scanf("%s",str[i++]);
 			int len= strlen(str[i-1]);
 			if(str[i-1][len-1]=='.'||str[i-1][len-1]=='!'||str[i-1][len-1]=='?')
			 {
 				zh=str[i-1][len-1];
 				str[i-1][len-1]='\0';
 				break;
			 }
	    }
	     int flag = 1;
		 for (int j=0;j<i/2;j++){
		 	if(flag) {
		 		flag=0;
		 		printf("%s %s",str[j],str[i-1-j]);
			 }
		 	else printf(" %s %s",str[j],str[i-1-j]);
		 }
		 if(i<=1){
		 	printf("%s%c\n",str[0],zh);
		 }
		 else {
		 	if(i%2==1) printf(" %s%c\n",str[i/2],zh);
		    else printf("%c\n",zh);
		 }
		 
    }
	 return 0;
 }

*/


/*J 
 #include <stdio.h>
 int main(void)
 {
 	int n,m,k,flag1=0,flag2=0,flag3=0;
 	scanf("%d %d",&n,&m);
 	int nn=n;
 	while(n--)
 	{
 		scanf("%d",&k);
 		if(k==0){
 			int gj;
 			scanf("%d",&gj);
 			if(m==0){
 				if(gj>=2500) flag1=1;
			 } 
			 else {
			 	if(gj>2100) flag1= 1;
			 }
		 }
		else if(k==1) flag2=1;
		else flag3=1;
	 }
	 if(flag1==1&&flag2==1||(flag3==1&&nn>1)) printf("haoye\n");
	 else printf("QAQ\n");
	 return 0;
 }*/

/*i 
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	long long  num;
	char name[20];
}song;
song arr[100010];
int comp(const void *p,const void *q)
{
	return ((song*)q)->num - ((song*)p)->num;
}
int main(void)
{
	int n,k;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lld %s",&arr[i].num,arr[i].name);
	}
	scanf("%d",&k);
	qsort(arr,n,sizeof(song),comp);
	printf("%s\n",arr[k].name);
	return 0;
}
*/

/*F
#include <stdio.h>
 int main(void)
 {
 	int t,n;
 	int a[25][25],b[25][25];
 	scanf("%d",&t);
 	while(t--)
 	{
 		int flag1=1,flag2=1,flag3=1,flag4=1;
 		scanf("%d",&n);
 		for(int i=0;i<n;i++){
 			for(int j=0;j<n;j++){
 				scanf("%d",&a[i][j]);
			 }
		 }
		 for(int i=0;i<n;i++){
 			for(int j=0;j<n;j++){
 				scanf("%d",&b[i][j]);
 				if(a[i][j]!=b[i][j]) flag1=0;
			 }
		 }
		 for(int i=0,jj=n-1;i<n&&jj>=0;i++,jj--){
		 	for(int j=0,ii=0;j<n&&ii<n;j++,ii++){
		 		if(b[i][j]!=a[ii][jj]) flag2=0;
			 }
		 }
		 for(int i=0,jj=0;i<n&&jj<n;i++,jj++){
		 	for(int j=0,ii=n-1;j<n&&ii>=0;j++,ii--){
		 		if(b[i][j]!=a[ii][jj]) flag3=0;
			 }
		 }
		 for(int i=0,ii=n-1;i<n&&ii>=0;i++,ii--){
		 	for(int j=0,jj=n-1;j<n&&jj>=0;j++,jj--){
		 		if(b[i][j]!=a[ii][jj]) flag4=0;
			 }
		 }
		 if(flag1==1)
		     printf("0\n");
		 else if(flag2==1||flag3==1)
		     printf("1\n");
		 else if(flag4==1)
		     printf("2\n");
		 else printf("-1\n");
	 }
	 return 0;
 }*/
 
/*Ö¸Õë*** 
#include <stdio.h>
#include <stdlib.h>
void find(float num[],int n,float *min,float *max);
int main()
{    
   float min=1000000.0,max=0,num[5];
   int i;
   for(i=0;i<5;i++)
      scanf("%f",&num[i]);
   find(num,5,&min,&max);
   printf("%.1f %.1f",max,min);
   getchar();
   return 0;
}
void find(float num[],int n,float *min,float *max)
{    
   int i;
   for(i=0;i<n;i++)
   {    
      if(num[i]<*min) *min = num[i];
      if(num[i]>*max) *max = num[i];
   }
}*/

/*µÚÈý´ÎÔÂ¿¼B Ë«Ö¸Õë 
#include <stdio.h>
int main(void)
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		int count = 0;
		scanf("%d",&n);
		int a[100000];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int *left, *right;
		left = a;
		right = a;
		int sum=0;
		sum =a[0];
		while(right>=left&&right<=&a[n-1]){
			if(sum==7777) {
				count++;
				right++;
				sum+=*right;
			}
			else if(sum>7777) {
				sum-=*left;
				left++;
			}
			else {
				right++;
				sum+=*right;
			}
		}
		printf("%d\n",count);	
	}
}*/
/*µÚÈý´ÎÔÂ¿¼ E Ë«Ö¸ÕëµÄÓ¦ÓÃ 
#include <stdio.h>
#include <stdlib.h>
struct sz{
	int e;
	int num;
};
struct sz arr[1000010];
int comp(const void*p,const void*q){
	return ((struct sz*)p)->e - ((struct sz*)q)->e;
}
int main(void)
{
	int n,m,b[10]={0},min=1000001;
	scanf("%d %d",&n,&m);
	int k=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[k].e);
			arr[k++].num=i;
		}
	} 
	qsort(arr,k,sizeof(struct sz),comp);
	struct sz *left=arr, *right=arr;
	
	while(right<&arr[k]){
		int flag=1;
		int s=(*right).num;
		b[s]++;
		for(int i=0;i<n;i++){
			if(b[i]==0){
				flag=0;
				break;
			}
		}
		if(flag==0){
			right++;
		}
		else {
		    min = (*right).e-(*left).e<min?(*right).e-(*left).e:min;
			while(left<=right){
				int x = b[(*left).num]-1;
				if(x!=0){
					b[(*left).num]--;
					left++;
					min = (*right).e-(*left).e<min?(*right).e-(*left).e:min;
				}
				else break;
			}
			right++;
			b[(*left).num]--;
			left++;
		}
		
	}
	printf("%d",min);
	return 0;
	
}*/


/*1044
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	char dw[13][5]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	char gw[13][5]={"  ","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	char str[8],strr[8];
	scanf("%d",&n);
	getchar();
	while(n--){
		gets(str);
		if(str[0]<'0'||str[0]>'9'){
			int len=strlen(str),flag=0,i;
			for(i=0;i<len;i++){
				if(str[i]==' ') {
					flag=1;
					break;
				}
			}
			int sum=0;
			if(flag){
				sum=0;
				strcpy(strr,str+i+1);
				str[i] ='\0';
				for(int j=1;j<13;j++){
					if(strcmp(str,gw[j])==0) {
						sum+=j*13;
						break;
					}
				}
				for(int j=0;j<13;j++){
					if(strcmp(strr,dw[j])==0) {
						sum+=j;
						break;
					}
					
				}
				printf("%d\n",sum);
			}
			else{
				for(int j=0;j<13;j++){
					if(strcmp(str,dw[j])==0) {
						sum+=j;
						break;
					}
					if(strcmp(str,gw[j])==0) {
						sum+=j*13;
						break;
					}
				}
				printf("%d\n",sum); 
			}
		}
		else{
			int len=strlen(str),i=0,summ=0;
			while(i<len){
				summ =summ*10+str[i]-'0';
				i++;
			}
			int g=summ/13;
			int d=summ%13;
			if(d!=0){
				if(g>0) printf("%s ",gw[g]);
			    printf("%s\n",dw[d]);
			}
			else{
				if(g>0) printf("%s\n",gw[g]);
				else printf("%s\n",dw[d]);
			}
		}
	}
	return 0;
}*/
/*1046
#include <stdio.h>
int main(void)
{
	int n,count1=0,count2=0;
	scanf("%d",&n);
	int a[100][4];
	for(int i=0;i<n;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		if(a[i][3]==a[i][0]+a[i][2]&&a[i][1]!=a[i][0]+a[i][2]) count1++;
		if(a[i][1]==a[i][0]+a[i][2]&&a[i][3]!=a[i][0]+a[i][2]) count2++;
	}
	printf("%d %d",count1,count2);
	return 0;
}*/

/*1047
#include <stdio.h>
struct member{
	int dwbh;
	int dybh;
	int score;
};
int main(void)
{
	int n,b[1010]={0};
	struct member arr[10010];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d-%d %d",&arr[i].dwbh,&arr[i].dybh,&arr[i].score);
		int s=arr[i].dwbh;
		b[s]+=arr[i].score;
	}
	int max=b[1], m =1,i;
	for( i=1;i<=1000;i++){
		if(b[i]>max){
			max=b[i];
			m=i;
		}
	}
	printf("%d %d",m,max);
}*/
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[110],b[110];
	scanf("%s %s",a,b);
	int len1=strlen(a), len2=strlen(b);
	if(len1<=len2){
		int s=len2-len1;
		for(int i=s;i<len2;i++){
			if(i%2==0){
				if((a[i-s]-'0'+b[i]-'0')%13==10) b[i]='J';
				else if((a[i-s]-'0'+b[i]-'0')%13==11) b[i]='Q';
				else if((a[i-s]-'0'+b[i]-'0')%13==12) b[i]='K';
				else b[i] =(a[i-s]-'0'+b[i]-'0')%13 +'0';
			}
			else{
				int mm=b[i] - a[i-s];
				if(mm<0) mm+=10;
				if(mm==10) b[i]='J';
				else if(mm==11) b[i]='Q';
				else if(mm==12) b[i]='K';
				else b[i] = mm + '0';
			}
		}
	}
	else{
		int s=len1-len2;
		for(int i=0;i<len2;i++){
			if(i%2==1){
				int mm=b[i] - a[i+s];
				if(mm<0) mm+=10;
				if(mm==10) b[i]='J';
				else if(mm==11) b[i]='Q';
				else if(mm==12) b[i]='K';
				else b[i] = mm + '0';
			}
			else{
				if((a[i+s]-'0'+b[i]-'0')%13==10) b[i]='J';
				else if((a[i+s]-'0'+b[i]-'0')%13==11) b[i]='Q';
				else if((a[i+s]-'0'+b[i]-'0')%13==12) b[i]='K';
				else b[i] =(a[i+s]-'0'+b[i]-'0')%13 +'0';
			}
		}
	}
	printf("%s",b);
	return 0;
}*/

/*1048
#include <stdio.h>
#include <string.h>
int main(void)
{
		char a[110],b[110];
		scanf("%s %s",a,b);
		int len1=strlen(a), len2=strlen(b);
		if(len1<=len2){
			int s=len2-len1;
			for(int i=s;i<len2;i++){
				if((len2-i)%2==1){
					if((a[i-s]-'0'+b[i]-'0')%13==10) b[i]='J';
					else if((a[i-s]-'0'+b[i]-'0')%13==11) b[i]='Q';
					else if((a[i-s]-'0'+b[i]-'0')%13==12) b[i]='K';
					else b[i] =(a[i-s]-'0'+b[i]-'0')%13 +'0';
				}
				else{
					int mm=b[i] - a[i-s];
					if(mm<0) mm+=10;
					if(mm==10) b[i]='J';
					else if(mm==11) b[i]='Q';
					else if(mm==12) b[i]='K';
					else b[i] = mm + '0';
				}
			}
			printf("%s",b);
		}
		else{
			int s=len1-len2;
			for(int i=0;i<len2;i++){
				if((len2-i)%2==0){
					int mm=b[i] - a[i+s];
					if(mm<0) mm+=10;
					if(mm==10) b[i]='J';
					else if(mm==11) b[i]='Q';
					else if(mm==12) b[i]='K';
					else b[i] = mm + '0';
				}
				else{
					if((a[i+s]-'0'+b[i]-'0')%13==10) b[i]='J';
					else if((a[i+s]-'0'+b[i]-'0')%13==11) b[i]='Q';
					else if((a[i+s]-'0'+b[i]-'0')%13==12) b[i]='K';
					else b[i] =(a[i+s]-'0'+b[i]-'0')%13 +'0';
				}
			}
			for(int i=0;i<s;i++){
				if((len1-i)%2==1){
					printf("%c",a[i]);
				}
				else{
					if(a[i]=='0') printf("%c",'0');
					else printf("%c",10-(a[i]-'0')+'0');
				}
			}
			printf("%s",b);
		}
	
	return 0;
}*/
/*±ðÈËµÄ×ö·¨ÀûÓÃº¯Êý 1048
char cal(char a, char b, int n)//????????????????
{
	char c;
	int number;
	if (n % 2 == 0)//??n????
	{
		number = (b - '0') - (a - '0');
		number = number >= 0 ? number : number + 10;
		c = '0' + number;
		return c;
	}
	else//??n????
	{
		number = (b - '0') + (a - '0');
		number %= 13;
		switch (number)
		{
		case 10:
			c = 'J';
			break;
		case 11:
			c = 'Q';
			break;
		case 12:
			c = 'K';
			break;
		default:
			c = number + '0';
			break;
		}
		return c;
	}
}
*/
/*1155
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[110];
	while(gets(str)){
		for(int i=0;i<strlen(str);i++){
			//if(str[i]<='9'&&str[i]>='0'){
			//	printf("%c",str[i]);
			//}
		    if(str[i]<='z'&&str[i]>='a'){
				switch(str[i]){
					case 'a':
					case 'b':
					case 'c':
						printf("%c",'2');
					    break;
					case 'd':
					case 'e':
					case 'f':
						printf("%c",'3');
						break;
					case 'g':
					case 'h':
					case 'i':
						printf("%c",'4');
						break;
					case 'j':
					case 'k':
				    case 'l':
				    	printf("%c",'5');
				    	break;
				    case 'm':
				    case 'n':
					case 'o':
					    printf("%c",'6');
						break;	
					case 'p':
				    case 'q':
					case 'r':
					case 's':
					    printf("%c",'7');
						break;	
				    case 't':
					case 'u':
					case 'v':	
					    printf("%c",'8');
						break;	
				    case 'w':
					case 'x':
					case 'y':
				    case 'z':	
					    printf("%c",'9');
						break;
				}
			} 
			else if(str[i]>='A'&&str[i]<='Z'){
				if(str[i]=='Z'){
					printf("a");
				}
				else printf("%c",str[i]-'A'+1+'a');
		    }
		    else {
				printf("%c",str[i]);
			}
		}
		printf("\n");
	}
	
	return 0;
}*/

/*1530
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[110000];
	while(gets(str),strcmp(str,"END")!=0){
		for(int i=0;i<strlen(str);i++){
				switch(str[i]){
					case 'A':
					case 'W':
					case 'F':
						printf("%c",'I');
					    break;
					case 'C':
						printf("%c",'L');
						break;
					case 'M':
						printf("%c",'o');
						break;
					case 'S':
						printf("%c",'v');
						break;
					case 'D':
					case 'P':
					case 'G':
					case 'B':
						printf("%c",'e');
						break;
					case 'L':
						printf("%c",'Y');
				    	break;
					case 'X':
						printf("%c",'u');
						break;	
		            default:
					    printf("%c",str[i]);
						break;
				}
				
			} 
			
		printf("\n");
	}
	
	return 0;
}*/
/*1601
#include <stdio.h>
int main(void)
{
	int n,p,q,i;
	scanf("%d",&n);
	int a[11][11]={0};
	for( p=0,q=n,i=1;i<=n*n;){
		while(p++,p<=n&&a[p][q]==0){
			a[p][q]=i++;
		}
		p--;
		while(q--,q>=1&&a[p][q]==0){
			a[p][q]=i++;
		}
		q++;
		while(p--,p>=1&&a[p][q]==0){
			a[p][q]=i++;
		}
		p++;
		while(q++,q<=n&&a[p][q]==0){
			a[p][q]=i++;
		}
		q--;
	}
	
	for(int j=1;j<=n;j++){
		int flag=1;
		for(int k=1;k<=n;k++){
			if(flag) {
				flag=0;
				printf("%d",a[j][k]);
			}
			else
			printf(" %d",a[j][k]);
		}
		printf("\n");
	}
}
*/

/*µÝ¹é³¬Ê±ÁË 
#include <stdio.h>
int fbn(int n){
	if(n==1||n==2){
		return 1;
	}
	else return fbn(n-1)+fbn(n-2);
}
int isfbn(int n){
	int flag = 0;
	for(int i=1;i<=25;i++){
		if(fbn(i)==n){
			flag=1;
			break;
		}
	}
	if(flag) return 1;
	else return 0;
}
int main(void)
{
	int n;
	while(~scanf("%d",&n)){
		
		if(!isfbn(n)) printf("sjy win\n");
	    else printf("mwy win\n");
	}
	return 0;
}
*/

/*1829 ·ÇµÝ¹é²»È»»á³¬Ê± 
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int fib[500];
    fib[0] = 1, fib[1] = 2;
    for (int i = 2; i <= 70;i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    int n;
    while (cin >> n&&n)
    {
        int mark = 0;
        for (int i = 0; i <= 70; i++) {
            if (fib[i] == n) mark = 1, cout << "sjy win" << endl;
            if (fib[i] > n) break;
        }
        if (!mark) cout << "mwy win" << endl;
    }
 
    return 0;
}*/

/*dodo5-6-1
#include <string.h>
#include <stdio.h>
void sort (char *words[], int n)         
{ 
   char * temp;
   int i,j;
   for (i=0; i<n-1; i++ )
   { 
     // k=i;
      for (j=i+1;j<n;j++)
      {
          if ( strcmp (words[i],words[j]) > 0 ) 
             // k=j;
         //if ( k != i)
          {
              temp = words[i];  
              words[i] = words[j]; 
              words[j] = temp; 
          }
      }    
   }
}
void print(char *words[],int n)         
{ 
    int i;
    for (i=0;i<n; i++ )
    printf("%s\n",words[i]);
}
int main ()                            
{ 
   char *words[5] = {NULL,NULL,NULL,NULL,NULL};
   char a[5][100];  
   for(int i=0;i<5;i++)
   {
      words[i] = a[i];
      scanf("%s", words[i]); 
   }       
   sort (words, 5 );
   print (words, 5 );
   return 0;
}*/
/*dodo 5-6-2
#include <stdio.h>
void fun(int *w, int p, int n)
{
    int b[p];
    for(int j=0;j<p;j++){
        b[j] = w[j];
    }
    for(int i=p,k=0;i<n;k++,i++){
        w[k]=w[i];
    }
    for(int i=n-p,j=0;i<n;i++,j++){
        w[i]=b[j];
    }
    
}

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int i,p,n=15;
	scanf("%d",&p);
	fun(a,p,n);
	for(i=0;i<n;i++){
		printf("%3d",a[i]);
	}
	return 0;
 } */
 /*ÊµÏÖÊý×éÑ­»·ÒÆ¶¯ 
 void fun(int *w, int p, int n)
{
   int i,j,t;
   for(i=p;i<=n-1;i++)     //Ñ­»·ÓÒÒÆn-p´Î
   {
      t=w[n-1];            
      for(j=n-2;j>=0;j--)   //ÊµÏÖÑ­»·ÓÒÒÆ
         w[j+1]=w[j];
      w[0]=t;
   }
}

*/

/*1840
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[210];
	while(gets(str)){
		int len=strlen(str);
		int flag1=1,flag2=1;
		for(int i=1;i<len/2;i++){
			if(str[i]!=str[len-i]){
				flag1=0;
				break;
			}
		}
		for(int i=0;i<(len-1)/2;i++){
			if(str[i]!=str[len-2-i]){
				flag2=0;
				break;
			}
		}
		if(flag1||flag2) printf("zz happy!\n");
		else printf("zz cry\n");
	}
}*/
/*1800
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int num;
	int bw;
	int sw;
	int gw;
	int b;
}N;
int comp(const void*p,const void*q){
	return ((N*)p)->num - ((N*)q)->num;
}
int main(void)
{
	int n;
	N arr[1010];
	while(scanf("%d",&n),n){
		int a;
		for(int i=0;i<n;i++){
			scanf("%d",&a);
			arr[i].num=a;
			arr[i].gw=a%10;
			arr[i].sw=a/10%10;
			arr[i].bw=a/100;
			arr[i].b=0;
		}
		qsort(arr,n,sizeof(N),comp);
		int flag=0;
		for(int i=0;i<n;i++){
			if(arr[i].b==1) continue;
			for(int j=0;j<n;j++){
				if(arr[j].b==1||i==j) continue;
				else {
					if(arr[i].num==arr[j].num||(arr[i].gw==arr[j].gw&&arr[i].sw==arr[j].bw&&arr[i].bw==arr[j].sw)||
					(arr[i].sw==arr[j].sw&&arr[i].gw==arr[j].bw&&arr[i].bw==arr[j].gw)||(arr[i].bw==arr[j].bw&&arr[i].gw==arr[j].sw&&arr[i].sw==arr[j].gw))
					{
						arr[i].b=1;
						arr[j].b=1;
					}
				}
			}
		}
		
		for(int i=0;i<n;i++){
			if(arr[i].b==0) {
				printf("%d ",arr[i].num);
				flag=1;
			}
		}
		
		if(flag==0) printf("None");
		printf("\n");
	}
	
	return 0;
}*/
/*1692
#include <stdio.h>
int main(void)
{
	char isbn[15];
	while(gets(isbn)){
		int sbm=isbn[12]-'0';
		int right=0,k=1;
		for(int i=0;i<11;i++){
			if(isbn[i]!='-'){
				right+=(isbn[i]-'0')*k++;
			}
		}
		right%=11;
		if(right!=10){
			if(right==sbm) printf("Right\n");
			else{
				isbn[12]=right+'0';
				printf("%s\n",isbn);
			}
		} 
		else{
			if(isbn[12]=='X') printf("Right\n");
			else{
				isbn[12]='X';
				printf("%s\n",isbn);
			}
		}
	}
	return 0;
}*/
/*1049 ´¿cÕâ¸ö±àÒëÆ÷long doubleÐÍµÄºÃÏñÊä²»³öÀ´ 
#include <stdio.h>
int main(void)
{
	int n;
	long double num[100010],sum=0.0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%Lf",&num[i]);
	}
	if(n%2==0)
	{
		for(int i=0,k=n,j=1;i<n/2;i++,k--,j++){
			sum+=(num[i]+num[n-1-i])*k*j;
		}
	}
	
	else
	{
		for(int i=0,k=n,j=1;i<=n/2;i++,k--,j++){
			if(i==n/2){
				sum+=num[i]*k*j;
			}
			else{
				sum+=(num[i]+num[n-1-i])*k*j;
			}
		}
	}
	printf("%.2Lf\n",sum);
	return 0;
}*/
 /*1049C++
 #include<iostream>
using namespace std;
int main()
{
    int cnt;cin>>cnt;
    long double sum=0.0;
    for(int i=1;i<=cnt;++i)
    {
        long double temp;cin>>temp;
        sum+=temp*i*(cnt+1-i);
    }
    printf("%.2Lf\n",sum);
    return 0;
}
*/
/*1050  ÊÖ¶¯¿ª¶¯Ì¬¿Õ¼ä 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int comp(const void *p, const void *q){
	return *(int*)q - *(int*)p;
}
int main(void)
{
	int t,m,n;
	scanf("%d",&t);
	int y[t];
	double a=sqrt((double)t);
	int aa=a;
	for(int i=aa;i>=1;i--){
		if(t%i==0){
			int x=t/i;
			m=i>=x?i:x;
			n=i<x?i:x;
			break;
		}
	}
	for(int i=0;i<t;i++){
		scanf("%d",&y[i]);
	}
	qsort(y,t,sizeof(int),comp);
	int i=0,j=0,k=0,b[20000][100]={0};
	b[0][0]=y[0];
	while (k<t-1){
		while(b[i][j+1]==0&&j+1<n) b[i][++j]=y[++k];
		while(b[i+1][j]==0&&i+1<m) b[++i][j]=y[++k];
		while(b[i][j-1]==0&&j-1>=0) b[i][--j]=y[++k];
		while(b[i-1][j]==0&&i-1>=0) b[--i][j]=y[++k];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j==0)
			printf("%d",b[i][j]);
			else printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
 } */
 /*
 #include<stdio.h>
#include<stdlib.h>
#include<math.h>
int compare(const void *a,const void *b)
{
	return -*(const int*)a+*(const int*)b;
}
int main(int argc,char **argv)
{
	int cnt;
	scanf("%d",&cnt);
	int i,j,index=1;
	int *array=(int*)calloc(cnt+1,sizeof(int));
	for(i=1;i<=cnt;i++)
		scanf("%d",&array[i]);
	qsort(array+1,cnt,sizeof(int),compare); 
	int n=(int)floor(sqrt(cnt)),m;
	while(cnt%n)
		n--;
	m=cnt/n;
	int **matrix=(int**)calloc(m+5,sizeof(int*));
	for(i=0;i<=m+5;i++)
		matrix[i]=(int*)calloc(n+5,sizeof(int));
	i=j=1;
	while(cnt>0)
	{
		while(matrix[i][j]==0&&j<=n)
			matrix[i][j++]=array[index++],cnt--;
		j--,i++;
		while(matrix[i][j]==0&&i<=m)
			matrix[i++][j]=array[index++],cnt--;
		i--,j--;
		while(matrix[i][j]==0&&j>=1)
			matrix[i][j--]=array[index++],cnt--;
		j++,i--;
		while(matrix[i][j]==0&&i>=1)
			matrix[i--][j]=array[index++],cnt--;
		i++,j++;
	}
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			printf("%d%c",matrix[i][j],j==n?'\n':' ');
	return EXIT_SUCCESS;
}
*/

/*1828
#include <stdio.h>
#include <stdlib.h>
int comp(const void*p,const void*q){
	return *(int *)q-*(int *)p;
}
int main(void)
{
    int n;
    int a[110];
    while(scanf("%d",&n),n){
    	int sum=0;
    	for(int i=0;i<n;i++){
    		scanf("%d",&a[i]);
		}
		qsort(a,n,sizeof(int),comp);
		if(a[n-1]<2) printf("-1\n");
		else{
			for(int i=0;i<n-1;i++){
				sum+=a[i];
			}
			printf("%d\n",sum+2);
		}
	}
	return 0;
}*/
/*1826
#include <stdio.h>
#include <string.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		char a[110][110];
		int b[110]={0};
		for(int i=0;i<n;i++){
			scanf("%s",a[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(strcmp(a[i],a[j])==0) {
					b[i]++; b[j]++;
				}
			}
		}
		int max=b[0];
		for(int i=0;i<n;i++){
			if(b[i]>max) max=b[i];
		}
		printf("%d\n",max+1);
	}
	return 0;
}*/
/*1828
#include <stdio.h>
#include <stdlib.h>
int comp(const void*p,const void*q){
	return *(int *)q-*(int *)p;
}
int main(void)
{
    int n;
    int a[110];
    while(scanf("%d",&n),n){
    	int sum=0;
    	for(int i=0;i<n;i++){
    		scanf("%d",&a[i]);
		}
		qsort(a,n,sizeof(int),comp);
		if(a[n-1]<2) printf("-1\n");
		else{
			for(int i=0;i<n-1;i++){
				sum+=a[i];
			}
			printf("%d\n",sum+2);
		}
	}
	return 0;
}*/
/*1826
#include <stdio.h>
#include <string.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		char a[110][110];
		int b[110]={0};
		for(int i=0;i<n;i++){
			scanf("%s",a[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(strcmp(a[i],a[j])==0) {
					b[i]++; b[j]++;
				}
			}
		}
		int max=b[0];
		for(int i=0;i<n;i++){
			if(b[i]>max) max=b[i];
		}
		printf("%d\n",max+1);
	}
	return 0;
}*/
/*1842
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student{
	char name[110];
	int score;
};
int comp(const void*p,const void*q){
	return ((struct student*)q)->score -((struct student*)p)->score;
} 
int main(void)
{
	int n;
	scanf("%d",&n);
	struct student arr[1010];
	for(int i=0;i<n;i++){
		scanf("%s %d",arr[i].name,&arr[i].score);
		int len = strlen(arr[i].name);
		arr[i].name[len-1]='\0';
	}
	qsort(arr,n,sizeof(struct student),comp);
	int m,count;
	scanf("%d",&m);
	while(m--){
		char s[110];
		scanf("%s",&s);
		count =0;
		for(int i=0;i<n;i++){
			if(strcmp(s,arr[i].name)==0){
				for(int j=i-1;j>=0;j--){
					if(arr[i].score==arr[j].score) count++;
				}
				printf("%d\n",i-count);
				break;
			}
		}
	}
	return 0;
}
*/
/*1845
#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	while(n--){
		char a[110],b[110];
		int c[110];
		scanf("%s %s",a,b);
		int len=strlen(a),k=0;
		for(int i=0;i<len;i++){
			int cc=a[i]-'0'-(b[i]-'0');
			c[k++]=abs(cc);
		}
		int flag=0;
		if(strcmp(a,b)==0) printf("%d\n",0);
		else{
			if(len==1){
				printf("%d\n",c[0]);
			}
			else{
				for(int i=0;i<len;i++){
					if(c[i]!=0||flag==1) {
						printf("%d",c[i]);
						flag=1;
					}
				}
				printf("\n");
			}
		}
		
	}
	return 0;
}*/

/*1851
#include <stdio.h>
#include <string.h>
int zh(char *s){
	int len = strlen(s),sum=0,count=0;
	if(s[0]>='0'&&s[0]<='9') {
		for(int i=0;i<len;i++){
			sum=s[i]-'0'+sum*10;
		}
		return sum;
	}
	else {
		char a[310],b[310];
		int k1=0,k2=0,i;
		for(i=4;i<len;i++){
			if(s[i]=='(') count++;
			if(s[i]==','&&count>0) count--;
			else if(s[i]==','&&count==0){
				break;
			} 
			a[k1++] = s[i];
		}
		a[k1]='\0';
		for(int j=i+1;j<len-1;j++){
			b[k2++]=s[j];
		}
		b[k2]='\0';
		if(s[0]=='a') return zh(a) + zh(b);
		else if(s[0]=='m'){
			int d;
			if(s[1]=='a') return d=zh(a)>zh(b)?zh(a):zh(b);
			else return d=zh(a)<zh(b)?zh(a):zh(b);
		} 
	}
}
int main(void)
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--){
		char str[310];
		gets(str);
		printf("%d\n",zh(str));
	}
	return 0;
}*/

/*
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	while(n--){
		int flag=1;
		int a[9][9],b[9][9]={0},c[9][9]={0},d[10]={0};
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				scanf("%d",&a[i][j]);
				int t=a[i][j]-1;
				b[i][t]++;
		    	if(b[i][t]>1) {
					flag=0;
				}
			}
		}
		if(flag!=0){
			for(int j=0;j<9;j++){
				for(int i=0;i<9;i++){
					int t=a[i][j]-1;
					c[t][j]++;
					if(c[t][j]>1){
						flag=0;
						break;
					}
				}
				if(flag==0) break;
			}
		}
		if(flag!=0){
			for(int i=0;i<9;i+=3){
				for(int j=0;j<9;j+=3){
					int d[10]={0};
					for(int m=i;m<i+3;m++){
						for(int k=j;k<j+3;k++){
							int t=a[m][k];
							d[t]++;
							if(d[t]>1){
								flag=0;
								break;
							}
						}
						if(flag==0) break;
					}
					if(flag==0) break;
				}
				if(flag==0) break;
			}
		}
		if(flag==0) printf("Wrong\n");
		else printf("Right\n");
	}
	return 0;
}*/

/*
#include <stdio.h>
int main(void)
{
	int a,b,c,d,e;
	while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)!=EOF){
		int min = a;
		min = a<b?a:b;
		if(min==a) min = a<c?a:c;
		else min=b<c?b:c;
		if(d<e){
			int sy=(a*b*c)-2*d*((a-2*e)*(b-2*e)+(a-2*e)*(c-2*e)+(b-2*e)*(c-2*e));
			printf("%d\n",sy);
		}
		else if(d>=e&&d<(min+1)/2){
			int sy1=4*e*e*(a+b+c-4*e);
			int sy2=(a-2*d)*(b-2*d)*(c-2*d);
			printf("%d\n",sy1>sy2?sy1:sy2);
		}
		else if(d>=(min+1)/2) printf("%d\n",4*e*e*(a+b+c-4*e));
	}
	return 0;
}*/
/*1951
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	while(n--){
		double s;
		scanf("%lf",&s);
		double t1,t2;
		t1 = 50.0 + s/3.0;
		t2 = s/1.2;
		if(t1==t2) printf("All\n");
		else printf("%s\n",t1<t2?"Bike":"Walk");
	}
	return 0;
}*/

/*1952
#include <stdio.h>
int main(void)
{
	int n,flag=1;
	scanf("%d",&n);
	for(int i=0;(n-i*7)>=0;i++){
		if((n-i*7)%4==0){
			flag=0;
			int s=(n-i*7)/4;
			if(s<7){
				while(s--) printf("4");
				while(i--) printf("7");
				break;
			}
			else i+=3;
		}
	}
		if(flag) {
			printf("-1");
		}
	
	return 0; 
}*/

/*1958
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    	int n;
    	scanf("%d",&n);
    	int w;
    	w=(1+2*5+3*(5+1)/5+n+n/4-n/100+n/400)%7;
    	//printf("%d\n",w);
    	switch(w)
    	{
    		case 0: 
			printf("%d\n",9);
    	    break;
    	    case 1:
    	    case 6: 
			printf("%d\n",6);
    	    break;
    	    default: printf("%d\n",5);
		}
    	    
	}
	return 0;
}*/

/*1960
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int grade,black,flag=0;
		int count=0,tall[5];
		scanf("%d %d",&grade,&black);
		if(black==0) {
			if(grade<6) count=0;
			else if(grade>=6&&grade<11) count=4;
			else if(grade>=11&&grade<16) count=7;
			else count=10;
		}
		else {
			if(grade<6) count=0;
			else if(grade>=6&&grade<11) count=5;
			else if(grade>=11&&grade<16) count=8;
			else count=12;
		}
		for(int i=0;i<5;i++){
			scanf("%d",&tall[i]);
		}
		if(count==0) printf("none\n");
		else{
			for(int i=0;i<5&&count>0;i++){
				count--;
				tall[i]-=300;
				if(tall[i]<=0){
					flag++;
				}
				else {
					i--;
				}
			}
			if(flag==1) printf("first blood\n");
			else if(flag==2) printf("double kill\n");
			else if(flag==3) printf("triple kill\n");
			else if(flag==4) printf("ultra kill\n");
			else printf("rampage\n");
		}
	    printf("\n");
	}
	return 0;
}*/
/*1961
#include <stdio.h>
int main(void)
{
	int n,flag=1,count=0;
	scanf("%d",&n);
	while(n>0){
		int d=n%10;
		if(d==4||d==7) count++;
		else {
			flag = 0;
			break;
		}
		n/=10;
	}
	if(flag)
	while(count>0){
		int d1=count%10;
		if(d1==4||d1==7) {
			count/=10;
			continue;
		}
		else {
			flag=0;
			break;
		}
		
	}
	if(flag) printf("YES\n");
	else printf("NO\n");
	return 0; 
}*/

/*1873 ¹ýÁË ±ß³Ë±ß³ý 
#include <stdio.h>
int main(void)
{
	long long n,k,pl=1;
	scanf("%lld %lld",&n,&k);
	long long ws=k;
	for(long long i=1;i<=n;i++){
		pl*=i;
		while(pl%10==0){
			pl/=10;
		}
		if(pl>100000000000) pl%=100000000000;
	}
	//printf("%lld",pl);
	long long m=1,count=1;
	while(ws--){
		m*=10;
		if(pl>m) count++;
	}
	if(count<k) {
		long long s=k-count;
		while(s--) printf("0");
		printf("%lld\n",pl);
	}
	else {
		pl%=m;
		m/=10;
		while(pl<m){
			printf("0");
			m/=10;
		}
		printf("%lld",pl);
	}
	return 0;
}*/
//ÓÅÐã×ö·¨1873
/* 
#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
	long long n,k,sum=1,a[11],t,fin;
	scanf("%lld%lld",&n,&k);
	fin=k;
	k=pow(10,k);
	for(int i=1; i<=n; i++) {
		sum*=i;
		while(sum%10==0) {
			sum=sum/10;
		}
		sum=sum%(long long)pow(10,12);
	}
	sum=sum%k;
	printf("%0*lld", fin, sum);
}
*/
/*1895 ÓÃb[n]Êý×é¼ÇÈë×ÖÄ¸¸öÊýÊ±¼ÇµÃ¹éÁã 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		int b[300]={0};
		int flag=1;
		char str1[110],str2[110];
		gets(str1);
		gets(str2);
		int len1=strlen(str1), len2=strlen(str2);
		for(int i=0;i<len1;i++){
			if(str1[i]==' ') continue;
			int c=str1[i];
			b[c]++;
		}
		for(int i=0;i<len2;i++){
			if(str2[i]==' ') continue;
			int d=str2[i];
			b[d]--;
		}
		for(int i=0;i<300;i++){
			if(b[i]!=0) flag=0;
		}
		if(flag) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
*/
/*1896 Ì«¹·ÁË£¡£¡£¡Ó¢ÎÄºÃ³¤ ¾¹ÊÇÕÒe 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int s;
		s=n/958;
		printf("%d\n",s);
	}
	return 0;
 } */
 /*1
#include <stdio.h>
int main(void)
{
	long long n;
	scanf("%lld",&n);
	long long a[100010],b[100010];
	for(long long i=0;i<n-1;i++){
		scanf("%lld",&a[i]);
	}
	for(long long i=0;i<n-1;i++){
		scanf("%lld",&b[i]);
	}
	long long max=b[0];
	long long sum=a[0];
	for(long long i=0;i<n-1;i++){
		if(b[i]>max&&i!=n-2) {
			max=b[i];
			if(b[i+1]>max) {
				max=b[i+1];
				sum+=a[i+1];
			}
			else if(b[i+1]==b[i]){
				sum+=a[i+1]<a[i]?a[i+1]:a[i];
			}
			else {
				sum+=a[i];
			}
			i++;
		}
		else if(b[i]>max&&i==n-2) sum+=a[i];
	}
	printf("%lld",sum);
	return 0;
 } 
*/

/*
#include <stdio.h>
long long a[10000010];
int main(void)
{
	long long n;
	scanf("%lld",&n);
	for(long long i=0;i<=n;i++){
		if(i==0||i==1||i==2||i==3) {
			a[i]=i;
		
		}
		else{
			a[i]=a[i-1]+a[i-3];
			if (a[i]>1000000007)
			a[i]%=1000000007;
		}
	}
	printf("%lld",a[n]);
	return 0;
}*/

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[100005];
	int count=0,flag=0,f=0;
	while(gets(str)){
		int len=strlen(str);
		for(int i=0;i<len;i++){
			if(str[i]=='{') {
				flag++; f=1;
			}
			if(str[i]=='}') flag--;
			if(i!=len-1&&str[i]==':'&&str[i+1]=='w') {
				count++;
				i++;
			}
		}
		if(flag==0&&f) break;
	}
	printf("%d",count);
	return 0;
}
*//*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[100005];
	int count=0;
	//int n=100000;
	while(gets(str)){
		int len=strlen(str);
		for(int i=0;i<len;i++){
			if(i!=len-1&&str[i]==':'&&str[i+1]=='w') {
				count++;
				i++;
			}
		}
	}
	printf("%d",count);
	return 0;
}*/
/*
#include <stdio.h>
struct k{
	int sj;
	int hjz;
	double dj;
};
int comp(const void *p,const void *q){
	double pp=((struct k*)p)->dj;
	double qq=((struct k*)q)->dj;
	return pp-qq>0?1:-1;
}
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	struct k arr[1005];
	for(int i=0;i<m;i++){
		scanf("%d %d",&arr[i].sj,&arr[i].hjz);
		arr[i].dj=(double)arr[i].hjz/arr[i].sj;
	}
	qsort(arr,m,sizeof(struct k),comp);
	
}
*/

/*
#include <stdio.h>
int max[1000][1000];
struct k{
	int sj;
	int hjz;
	double dj;
};
int comp(const void *p,const void *q){
	double pp=((struct k*)p)->dj;
	double qq=((struct k*)q)->dj;
	return pp-qq>0?1:-1;
}*/
/*
int main(void)
{
	int n,m;
	int a[1010],b[1010];
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(int i=0;i<=n;i++){
		max[0][i]=0;
	}
	for(int j=1;j<=m;j++)                                                                                         
    {                                                
        for(int k=1;k<=n;k++)                                   
        {
            if(b[j-1]>k)
            {                                        
                max[j][k]=max[j-1][k];               
            }
            else
            {
                int x=max[j-1][k];                       
                int y=a[j-1]+max[j-1][k-b[j-1]];
                max[j][k]=x>y ? x:y;
            }                                                                                                         
        }
    }
    printf("%d\n",max[m][n]);
}*/
/*±³°ü 
#include<iostream>
using namespace std;
#include <algorithm>
 int dp[1000][1000]={{0}};
int main()
{
	int n,m;
	int w[1010],v[1010];
	scanf("%d %d",&n,&m);
	for(int i=1;i<=m;i++){
		scanf("%d %d",&w[i],&v[i]);
    }
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (j < w[i])
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
		}
    }
		cout<<dp[m][n]<<endl;
	return 0;
}*/

/*
#include <stdio.h>
#include <stdlib.h>
int comp(const void*p,const void*q)
{
	return *(int *)p-*(int *)q;
}
int main(void)
{
	int m,n,k,a[1010];//Ã¿ÖÖÓÎÏ·µÄÊ±¼ä 
	int b[1010],sum=0;//Ï²»¶µÄ 
	int x[1010];//É¾È¥Ï²»¶µÄÊ£ÓàµÄÓÎÏ· 
	int c[1010]={0}; //¼ÇÈëÊÇ·ñÎªÏ²»¶µÄ 
	scanf("%d %d %d",&n,&m,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;i++){
		scanf("%d",&b[i]);
	}
	int s=k-m;//»¹ÒªÍæ¼¸ÖÖ 
	for(int i=1;i<=m;i++){
		int d=b[i];
		sum+=a[d];
		c[d]=1;
	}
	int u=0;
	for(int i=1;i<=n;i++){
		if(c[i]!=1) x[u++] = a[i];
	}
	qsort(x,u,sizeof(int),comp);
	for(int i=1,j=0;i<=s;i++){
		sum+=x[j++];
	}
	printf("%d",sum);
	return 0;
}*/
/*
#include <stdio.h>
#include <math.h>
struct m{
	int x;
	int y;
	int k;
};
int main(void)
{
	int a,b,u1[11],u2[11];
	struct m arr1[11],arr2[11];
	scanf("%d %d",&a,&b);
	for(int i=0;i<a;i++){
		scanf("%d %d %d",&arr1[i].x,&arr1[i].y,&arr1[i].k);
	}
	for(int i=0;i<b;i++){
		scanf("%d %d %d",&arr2[i].x,&arr2[i].y,&arr2[i].k);
	}
	for(int i=0;i<a;i++){
        if(arr1[i].k==1){
        	double max=-1.0;
        	for(int j=0;j<b;j++){
        		double p1=abs(arr2[j].x-arr1[i].x);
        		double p2=abs(arr2[j].y-arr1[i].y);
        		double c=sqrt(pow(p1,2.0)+pow(p2,2.0));
        		if(c>max) {
        			max=c;
        			u1[i]=j+1;
				}
			}
		}
		else{
			double min=1000;
        	for(int j=0;j<b;j++){
        		double p1=abs(arr2[j].x-arr1[i].x);
        		double p2=abs(arr2[j].y-arr1[i].y);
        		double c=sqrt(pow(p1,2.0)+pow(p2,2.0));
        		if(c<min) {
        			min=c;
        			u1[i]=j+1;
				}
			}
		}
	}
	for(int i=0;i<b;i++){
        if(arr2[i].k==1){
        	double max=-1.0;
        	for(int j=0;j<a;j++){
        		double p1=abs(arr1[j].x-arr2[i].x);
        		double p2=abs(arr1[j].y-arr2[i].y);
        		double c=sqrt(pow(p1,2.0)+pow(p2,2.0));
        		if(c>max) {
        			max=c;
        			u2[i]=j+1;
				}
			}
		}
		else{
			double min=1000;
        	for(int j=0;j<a;j++){
        		double p1=abs(arr1[j].x-arr2[i].x);
        		double p2=abs(arr1[j].y-arr2[i].y);
        		double c=sqrt(pow(p1,2.0)+pow(p2,2.0));
        		if(c<min) {
        			min=c;
        			u2[i]=j+1;
				}
			}
		}
	}
	for(int i=0;i<a;i++){
		printf("%d ",u1[i]);
	}
	printf("\n");
	for(int i=0;i<b;i++){
		printf("%d ",u2[i]);
	}
	return 0;
}*/

/*
#include <stdio.h>
int main(void)
{
	int t,b[20];
	scanf("%d",&t);
	while(t--){
		int a[4];
		for(int i=0;i<4;i++){
			scanf("%d",&a[i]);
		}
		int k=0,count=0;
		while(!(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])){
			count++;
			int min=a[0],m=0;
			for(int i=1;i<4;i++){
				if(a[i]<min){
					min=a[i];
					m=i;
				}
			}
			a[m]++;
			if(m==0) {
				b[k++]=3;
				if(a[2]==4){
					a[2]=1;
					a[1]=1;
					a[3]=1;
				}
			}
			else if(m==1) {
				b[k++]=4;
				if(a[3]==4){
					a[2]=1;
					a[3]=1;
					a[0]=1;
				}
			}
			else if(m==2){
				b[k++]=1;
				if(a[0]==4){
					a[0]=1;
					a[1]=1;
					a[3]=1;
				}
			} 
			else{
				b[k++]=2;
				if(a[1]==4){
					a[1]=1;
					a[2]=1;
					a[0]=1;
				}
			} 
		}
		if(count==0) printf("%d",0);
		else{
			printf("%d\n",count);
			for(int i=0;i<k;i++){
				printf("%d ",b[i]);
			}
		}
		printf("\n");
	}
	return 0;
}*/
/*2002
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[20],str2[20];
	gets(str1);
	gets(str2);
	int len1=strlen(str1),len2=strlen(str2);
	int n1,n2,y1,y2,d1,d2;
	if(len1==18) {
		n1=(str1[6]-'0')*1000+(str1[7]-'0')*100+(str1[8]-'0')*10+str1[9]-'0';
		y1=(str1[10]-'0')*10+str1[11]-'0';
		d1=(str1[12]-'0')*10+str1[13]-'0';
	}
	else {
		n1=1900+(str1[6]-'0')*10+str1[7]-'0';
		y1=(str1[8]-'0')*10+str1[9]-'0';
		d1=(str1[10]-'0')*10+str1[11]-'0';
	}
	if(len2==18) {
		n2=(str2[6]-'0')*1000+(str2[7]-'0')*100+(str2[8]-'0')*10+str2[9]-'0';
		y2=(str2[10]-'0')*10+str2[11]-'0';
		d2=(str2[12]-'0')*10+str2[13]-'0';
	}
	else {
		n2=1900+(str2[6]-'0')*10+str2[7]-'0';
		y2=(str2[8]-'0')*10+str2[9]-'0';
		d2=(str2[10]-'0')*10+str2[11]-'0';
	}
	if(n1<n2) printf("1");
	else{
		if(n1>n2) printf("-1");
		else if(n1==n2){
			if(y1<y2) printf("1");
			else if(y1>y2) printf("-1");
			else{
				if(d1<d2) printf("1");
				else if(d1>d2) printf("-1");
				else  printf("0");
			}
		}
	}
	return 0;
 } */
 /*1978
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 int comp(const void*p,const void*q){
 	return *(char*)p-*(char*)q;
 }
 void swap(char *x,char*y){
 	char *temp;
 	*temp=*x;
 	*x=*y;
 	*y=*temp;
 }
 void qpl(char *a,int begin,int end){
 	
 	if(begin>=end){
 		for(int i=0;i<end;i++){
 			printf("%c",a[i]);
		 }
		 printf(" ");
	 }
	 else {
	 	for(int i=begin;i<end;i++){
	 		if(begin!=i){
	 			char z=a[i];
	 			for(int j=i;j>begin;j--){
	 				a[j]=a[j-1];
				}
				a[begin]=z;
			 }
			qpl(a,begin+1,end);
		    if(begin!=i){
		    	char z=a[begin];
		    	for(int j=begin;j<i;j++){
	 				a[j]=a[j+1];
				}
				a[i]=z;
			} 
		 }
	 }
 }
 int main(void)
 {
 	int t;
 	scanf("%d",&t);
 	getchar();
 	while(t--){
 		char a[10000];
 		gets(a);
 		int len=strlen(a);
 		qsort(a,len,sizeof(char),comp);
 		qpl(a,0,len);
        printf("\n");
	 }
	 return 0;
 }
 */
 /*
 #include<stdio.h>
void permu(char*data, int cur)
{
	int i,j;
	
	if(data[cur]=='\0')                                        
                {
		printf("%s\n",data);
		return;
	}                                                           //??data[cur]?‘/0’,??????date.
	
	for(i=cur; data[i]; i++){
		char tmp = data[i]; 
		for(j=i-1; j>=cur; j--) data[j+1] = data[j];
		data[cur] = tmp;			
        //????????????_??
        
		permu(data, cur+1);	
		//??????,?????????,?????????		

		tmp = data[cur]; 
	    for(int j = cur;j < i;j ++) data[j] = data[j + 1];  //??
		data[i] = tmp;
		//??????????????????			
	}
}

int main()
{
   
	char a[10000];
	gets(a);
	permu(a,0);
	return 0;
}*/
/*1978C++ ²»¶®£¡£¡£¡£¡£¡ ¶®ÁË 
 #include <string.h>
 //#include <stdio.h>
 #include <iostream>
 #include <algorithm>
 #include <bits/stdc++.h>
 
int comp(const void*p,const void*q){
 	return *(int *)p-*(int*)q;
 }
 using namespace std;
 int main()
 {
 	int t;
 	cin>>t;
 	getchar();
 	while(t--){
 		string a;
 		cin>>a;
 		//int len=strlen(a);
 		sort(a.begin(),a.end());
 		//printf("%s ",a);
 		do{
 			
 			cout <<a<<" ";
		 }
 		while(next_permutation(a.begin(),a.end()));
        printf("\n");
	 }
 }*/
 /*11-2
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 int main(void)
 {
 	char a[1000];
 	gets(a);
 	int len=strlen(a);
 	a[0]-=32;
 	for(int i=1;i<len;i++){
 		if(a[i]==' '&&a[i+1]>='a'&&a[i+1]<='z'){
 			a[i+1]-=32;
		 }
	 }
	 FILE *fp;
	 fp=fopen("test11","w");
	 if(fp==NULL){
	 	printf("can not open this file.");
	 	exit(0);
	 }
	 fputs(a,fp);
	 fclose(fp);
	 return 0;
  } 
*/
 
 /*2053
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 int comp(const void*p,const void*q){
 	return *(int *)p-*(int *)q;
 }
 int binary(int a[],int n,int key){
 	int low,high,mid;
 	low=0; high=n-1;
 	while(low<=high){
 		mid=(low+high)/2;
 		if(key<a[mid]) high=mid-1;
 		else if(key>a[mid]) low=mid+1;
 		else{
 			for(int j=mid;j<=high;j++){
 				if(a[j]==key) mid=j;
			 }
			 return mid;
		 }
	 }
 }
 int a[2000001];
 int main(void)
 {
 	int n;
 	scanf("%d",&n);
 	for(int i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	qsort(a,n,sizeof(int),comp);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]); 
	}
	printf("\n");
	int m;
	scanf("%d",&m);
	while(m--){
		int key;
		scanf("%d",&key);
		int x=binary(a,n,key);
		printf("%d\n",x+1);
	}
 }*/
 
 /*2116
 #include <stdio.h>
 #include <string.h>
 char str[100010];
 int countx[100010];
 int main(void){
 	int n;
 	scanf("%d",&n);
 	getchar();
 	while(n--)
 	{
 		gets(str);
 		int len=strlen(str),sum=0,cx=0,cb=0;
 		for(int i=0;i<len;i++){
 			if(str[i]=='X'){
 				cx++;
			 }
			countx[i]=cx;
		 }
		 for(int i=len-1;i>=0;i--){
		 	if(str[i]=='B') cb++;
		 	if(str[i]=='J'){
		 		sum=(sum+countx[i]*cb%1000000007)%1000000007;
			 }
		 }
		 printf("%d\n",sum);
	 }
	 return 0;
 }*/
 
 /*1040
 #include <stdio.h>
 #include <string.h>
 char str[100010];
 int main(void){
	gets(str);
	int len=strlen(str),sum=0,cx=0,cb=0;
	for(int i=0;i<len;i++){
		if(str[i]=='B'){
			cx++;
		 }
	 }
	 for(int i=0;i<len;i++){
	 	if(str[i]=='B') cx--;
	 	if(str[i]=='X') cb++;
	 	if(str[i]=='J'){
	 		sum=(sum+cx*cb%1000000007)%1000000007;
		 }
	 }
	 printf("%d\n",sum);
	 return 0;
 }*/
 /*2109
 #include <stdio.h>
 #include <math.h>
 #define pi 3.1415926535
 int main(void)
 {
 	int t,n,k;
 	double a,b,bb,sum;
 	scanf("%d",&t);
 	while(t--){
 		scanf("%d %d",&n,&k);
 		int kk=k;
 		scanf("%lf",&a);
 		sum = (n-1)*a+0.50*a;
 		b=cos(pi/(double)n);
 		bb=a;
 		while(k>1&&k--){
 			bb*=b;
 			sum+=(n-0.5)*bb;
		 }
		 //for(int i=1;i<k;i++){
		 	
		 //}
		 if(kk==0) sum=(n-1)*a;
		 else sum+=(n-1)*bb*b;
		printf("%lf\n",sum);
	 }
	 return 0;
 }
 */
 
 /*2076
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--){
		char str[10000];
		gets(str);
		int len=strlen(str);
		int flag=0;
		for(int i=0;i<len;i++){
			if(i>=5&&str[i]==' '){
				if(str[i-5]=='p'&&str[i-4]=='r'&&str[i-3]=='i'&&str[i-2]=='n'
				&&str[i-1]=='t'){
					flag=1;
					printf("(");
				}
				else printf("%c",str[i]);
			}
			else printf("%c",str[i]);
		}
		if(flag) printf(")\n");
		else printf("\n");
	}
	return 0;
 } 
 */
 
 /*2078
 #include <stdio.h>
 #include <stdlib.h>
 int comp(const void*p,const void *q){
 	return *(int *)p-*(int *)q;
 }
 int main(void)
 {
 	int n;
 	scanf("%d",&n);
 	int a[1010];
 	for(int i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	 qsort(a,n,sizeof(int),comp);
	 for(int i=0;i<n;i++){
	 	printf("%d ",a[i]);
	 }
	 return 0;
 }*/
/*2098 
 #include <stdio.h>
 #include <math.h>
 int gcd(int x,int y){
 	int r;
 	while(1)
 	{
 		r=x%y;
 		if(r==0){
 			break;
		 }
		x=y;
		y=r;
	 }
	 return y;
 }
 int main(void)
 {
 	int n;
 	scanf("%d",&n);
 	int aa=0,bb=1;//´æÃ¿Ò»´Î¼Óºó½á¹û
 	while(n--)
 	{
 		int a,b;
 		scanf("%d/%d",&a,&b);
 		int p=abs(gcd(a,b));//·Ö±ðÇóÁ½¸öÓÐÀíÊý·Ö×ÓÄ¸µÄ×î´ó¹«ÒòÊý
		 a/=p;b/=p;//»¯¼ò
		 aa=(aa*b)+(bb*a);
		 bb=bb*b;
		 int r=abs(gcd(aa,bb));
		 aa/=r;bb/=r;//»¯¼ò 
	 }
	 if(aa>0){//´óÓÚ0µÄÇé¿ö 
	 	if(aa>=bb){//·Ö×Ó´ó 
	 		if(bb==1) printf("%d",aa);//ÕûÊýÇé¿ö 
	 		else{
	 			int zs=aa/bb;
	 			int fz=aa%bb;
	 			printf("%d %d/%d",zs,fz,bb);
			 }
		 }
		else{//·ÖÄ¸´ó 
			printf("%d/%d",aa,bb);
		} 
	 }
	 else if(aa==0) printf("0");//dµÈÓÚ0 
	 else{//Ð¡ÓÚÁã 
	 	if(-aa>=bb){
	 		if(bb==1) printf("%d",aa);
	 		else{
	 			int zs=-aa/bb;
	 			int fz=-aa%bb;
	 			printf("-%d %d/%d",zs,fz,bb);
			 }
		 }
		else{
			printf("%d/%d",aa,bb);
		} 
	 }
	 return 0;
 }
 */
 
/* 2117
 #include <stdio.h>
 #define ll long long
 int main(void)
 {
 	ll m,n;
 	while(~scanf("%lld %lld",&m,&n))
 	{
 		//ll t=n-m-1,
		 //ll count=(n+m)/5,
		 //fj=count*5-n-1,//µÚÒ»¸ö·Ö½×¶Î¼´È¡mÒ²µ½²»ÁËcount*5 
		// count1=fj/5;//·Ö½âµãÇ°ÄÜ¹¹³É¼¸¸ö5µÄ±¶Êý ji ÏÂÃæÄÇ¸öÑ­»·Ö´ÐÐ¼¸´Î 
		// ll flag=1,sum=0;
		// ll qjw=fj;//Ã¿¸öÇø¼äÎ²×îºóÒ»¸öÊýÖµ 
		//for(ll i=count-1,k=0;i>=0&&k<=count1;i--,k++){
		// 	     if(flag) {
		// 	     	if(qjw<5) sum+=qjw*i;
		// 	     	else
		// 	     	sum+=(qjw-(count1-k)*5+1)*i;flag=0;
		 //	     	qjw=(count1-k)*5-1;
		//		  }
		//		  else if(qjw==4) {
		//		  	sum+=4*i;
		//		  	break;
		//		  }
		 //	     else{
		 //	     	sum+=5*i;
		 //	     	qjw=(count1-k)*5-1;
		//		  }
		 //}
	 	//ll first=count-(fj+1)/5;//·Ö½çµãºóÃæµÄÆðÊ¼Öµ
	 	//ll bf=m/5-(fj+1)/5+1;//¿ÉÒÔ·ÖÎª¼¸²¿·Ö 
	 	//ll qjw2=((fj+1)/5+1)*5-1;//Ã¿¸öÇø¼äÎ²×îºóÒ»¸öÊýÖµ
		 //for(ll i=first,k=0;i>=0,k<bf;i--,k++){
		 //	if(k==0) {
		 //		sum+=(qjw2-(fj+1)+1)*i;
		 //		qjw2+=5;
		//	 }
		 //	else if(qjw2>m) {
		 //		sum+=(5-(qjw2-m))*i;
		 //		break;
		//	 }
		 //	else sum+=5*i;
		 //} 
		 ll sum=0;
		for(ll i=1;i<=m;i++){
			sum+=(i+n)/5-i/5;
		}
	 	printf("%lld\n",sum);
	 }
 	return 0;
 }
*/


/*dodo13.1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	FILE*fp=fopen("test13.txt","r");
	if(fp==NULL) {
		printf("can nat open test13.txt\n");
		exit(1);
	}
	char a[100];
	while(fgets(a,100,fp)!=NULL)
	printf("%s\n",a);
	fclose(fp);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{ 	
   FILE *fp;
   char ch;
   fp = fopen("test13.txt","r");  
   if (fp == NULL)
   { 
      printf("can not open test13.txt");
	 exit(0);
   }
   ch =  fgetc(fp);   
   while(ch != EOF)
   {  
      putchar(ch);     
      ch = fgetc(fp);
   }
   fclose(fp);
   return 0;        
}
*/

/*2049
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, *a;
    scanf("%d", &n);
	a=(int*)malloc(n*sizeof(int));//ÄãµÄ´úÂë½«»á±»Ç¶ÔÚÕâ
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    printf(" ");
    return 0;
} 
*/
/*¶¯Ì¬¿ª¶þÎ¬Êý×é ÏÈ¿ª´óºó¿ªÐ¡ 
scanf("%d%d", &n, &m);
    a=(int **)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    *(a+i)=(int *)malloc(m*sizeof(int));
*/


/*2051
#include <stdio.h>
int cost(int n){
	if(n==1||n==0) return 0;
	else if(n%2==0){
		return 2*cost(n/2)+n;
	}
	else if(n%2==1){
		return cost(n/2)+cost(n/2+1)+n;
	} 
}
int main(void)
{
	int n;
	scanf("%d",&n);
	while(n--){
		int a;
		scanf("%d",&a);
		printf("%d\n",cost(a));
	}
 } */


/*2153
 #include <stdio.h>
 int main(void)
 {
 	int t;
 	scanf("%d",&t);
 	while(t--){
 		int n;
 		scanf("%d",&n);
 		int a[5];
 		int sum=0;
 		for(int i=0;i<n;i++){
 			scanf("%d",&a[i]);
 			sum+=a[i];
		 }
		int sum1=0, sum2=sum;//sum2´æ·ÅÃ¿´Î¸÷¸öÎ»ÀÛ¼ÓºóµÄÊý  sum1Ôò½øÐÐÃ¿´ÎÀÛ¼Ó 
		while(1){ 
			if(sum2<10){
				printf("%d\n",sum);break;
			} 
			int d=sum%10;
			sum1+=d;
			sum/=10;
			if(sum==0){//sumÓÃÀ´³ý10·ÖÀëÃ¿¸öÎ»µÄÊý 
				sum2=sum1; //sum==0½øÐÐÏÂÒ»´Î²Ù×÷ 
				sum=sum2;
				sum1=0;
			}
		}
	 }
	 return 0;
 }*/
/*2161
#include <stdio.h>
int main(void)
 {
 	int t;
 	scanf("%d",&t);
 	while(t--){
 		int n,flag=0;
 		scanf("%d",&n);
 		if(n%7==0) {
 			printf("1\n");flag=1;
		 }
 		else{
 			int nn=n;
			while (nn>0){
				int d=nn%10;
				if(d==7){
					flag=1;
					printf("1\n");
					break;
				}
				nn/=10; 
			} 
			if(flag==0){
				int sum=n,sum1=0,sum2=n;
				while(1){ 
					if(sum2<10){
						if(sum2==7){
							printf("1\n");
							flag=1;
						}
						break;
					} 
					int d=sum%10;
					sum1+=d;
					sum/=10;
					if(sum==0){//sumÓÃÀ´³ý10·ÖÀëÃ¿¸öÎ»µÄÊý 
						sum2=sum1; //sum==0½øÐÐÏÂÒ»´Î²Ù×÷ 
						sum=sum2;
							sum1=0;
					}
				}
			}    
		}
	    if(flag==0) printf("0\n");
	}
	return 0;
}*/

/*1051¿Óµã£º Èç¹ûÊÇ0.0µ½-0.005 %.2lf»áËÄÉáÎåÈë±ä³É-0.0£¨ÓÃÇ°×º+Ê±£© 
#include <stdio.h>
#include <math.h>
int main(void)
{
	double r1,r2,p1,p2;
	scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
	double sb1,xb1,sb2,xb2;
	sb1=r1*cos(p1); xb1=r1*sin(p1);
	sb2=r2*cos(p2); xb2=r2*sin(p2);
	double sb3,xb3;
	sb3=sb1*sb2-xb1*xb2;
	xb3=sb1*xb2+sb2*xb1;
	if(sb3<0.0&&sb3>=-0.005) sb3=0.0;
	if(xb3<0.0&&xb3>=-0.005) xb3=0.0;
	printf("%.2lf%+.2lfi",sb3,xb3);
	return 0;
}
*/
/*1052//ÕâÌâÌ«¿ÓÁË£¡£¡£¡£¡£¡ ¾¹È»ÓÐÈÕÎÄ´ò²»³ö ¶¨ÒåÒ»¸öº¯Êý±È½ÏºÃ 
#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[3][15][10]; int b[3]={0};//×°Ã¿ÖÖ±íÇéµÄ¸öÊý 
	for(int a=0;a<3;a++){
		char str[10000];//Ã¿ÐÐ±íÇéÔ´ 
		gets(str);
		int len = strlen(str);
		for(int i=0,u=0;i<len;i++){
			if(str[i]=='['){
			//	if(str[i+2]==']'||str[i+3]==']'||str[i+4]==']'||str[i+5]==']'){
					int k=0,j;
					for(j=i+1;j<len;j++){
						if(str[j]==']'){
							break;
						} 
						else
						s[a][u][k++]=str[j];//×°Èëµ½ÈýÎ¬±íÇé¼¯ºÏÖÐ 
					}
					s[a][u][k]='\0';
					b[a]++;
					i=j;
					u++;
			//	}
			}
		}
	}
	int n; 
	scanf("%d",&n);
	while(n--){
		int flag=1;
		int c[5];//×°±íÇéÐòºÅ 
		for(int i=0;i<5;i++){
			scanf("%d",&c[i]);
			if(i==2){
				if(c[i]>b[2]||c[i]<1) {
					flag=0; break;
				}
			}
			else {
				if(c[i]>b[i%2]||c[i]<1){
					flag=0; break;//²»·ûºÏ ±ê¼ÇÎª0ÍË³öÑ­»· 
				}
			}
		}
		if(flag)//Èç¹û·ûºÏµÄ 
		for(int i=0;i<=5;i++){ 
			if(i==0||i==4){
				printf("%s",s[0][c[i]-1]);
				if(i==0) printf("(");
				//flag=0;
			}
			else if(i==1||i==3){
				printf("%s",s[1][c[i]-1]);
				if(i==3) printf(")");
				//flag=0;
			}
			else {
				printf("%s",s[2][c[i]-1]);
				//flag=0;
			}
		}
		if(flag==0) printf("Are you kidding me? @\\/@");
		printf("\n");
	}
	return 0;
}*/
/*1053
#include <stdio.h>
int main(void)
{
	int n,kz=0,knkz=0;
	double e;
	int D;
	scanf("%d %lf %d",&n,&e,&D);
	//int b[1001]={0};//ÓÃÓÚÅÐ¶ÏÊÇ·ñ¿ÕÖÃºÍ¿ÉÄÜ¿ÕÖÃ 
	for(int i=0;i<n;i++){
		int ts,count=0;
		scanf("%d",&ts);
		double energy[ts];
		for(int j=0;j<ts;j++){
			scanf("%lf",&energy[j]);
			if(energy[j]<e) count++;
		}
		if(count>ts/2&&ts>D){
			kz++;
		} 
		else if(count>ts/2&&ts<=D) knkz++;
	}
	double kzl,knkzl;
	kzl=kz/(double)n*100.0; knkzl=knkz/(double)n*100.0;
	printf("%.1lf%% %.1lf%%",knkzl,kzl);
	return 0;
}*/
/*1054
#include <stdio.h>
#include <string.h>
int isnum(char num[],int len){
	int flag=0,count=0;//±ê¼ÇÊÇ·ñÓÐÐ¡Êýµã²¢ÇÒ±éÀúµ½Ð¡ÊýµãÁË 
	for(int i=0;i<len;i++){
		if(i==0){
			if(!((num[i]>='0'&&num[i]<='9')||num[i]=='-'||num[i]=='.')) return 0;
			else {
				if(num[i]=='.') flag++;
			    continue;
			} 
		}
		if(!(num[i]>='0'&&num[i]<='9'||num[i]=='.')){
			return 0;//º¬ÓÐ×Ö·ûÔòÎª¼Ù ÇÒ²»ÊÇÐ¡Êýµã 
		}
		//else if(num[i]=='-') count1--;//¸ºÊý¶àÒ»Î» 
		else if(num[i]=='.'){
			flag++;
		}
		//if(flag==0) count1++;//ÕûÊý²¿·ÖÎ»Êý 
		if (flag) count++;//ÓÐÐ¡Êýµã¼ÇÈëÐ¡ÊýµãºóÓÐ¼¸Î» 
		if (flag>1) return 0;
		if(count>3) return 0;
	}
	return 1;
}
double benum(char num[],int len){
	double t=0.0,t2=1,ff=0.0;
	int flag=0;//ÊÇ·ñÓÐÐ¡ÊýµãÈç¹ûÓÐ±ê¼ÇÎª1 
	for(int i=0;i<len;i++){
		if(i==0&&num[i]=='-'){
			ff=1; continue;//±ê¼ÇÊÇ·ñÎª¸ºÊý 
		} 
		if(num[i]=='.') {
			flag=1; continue;
		}
		if(flag==0){//»¹ÔÚÐ¡ÊýµãÇ° 
			t=t*10+num[i]-'0';
		}
		else {//ÔÚÐ¡Êýµãºó 
			t2*=0.1;//Ð¡Êýµãºó¼¸Î» 
			t+=t2*(num[i]-'0');
		}
	}
	if(ff) return -t;
	else return  t; 
}
int main(void)
{
	int n,f=0;
	double sum=0.0;
	char num[50];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",num);
		int len=strlen(num);
		if(isnum(num,len)==0||benum(num,len)>1000||benum(num,len)<-1000){
			printf("ERROR: %s is not a legal number\n",num);
		}
		else {
			f++;
			double b=benum(num,len);
			sum+=b;
		}
	}
	if(f>1) printf("The average of %d numbers is %.2lf\n",f,sum/f);
	else if(f==1) printf("The average of %d number is %.2lf\n",f,sum/f);//Ì«¿ÓÁËÌ«¿ÓÁË ÎÒ£º@#$@#!!(¿ÚÍÂ·Ò·¼£© 
	else printf("The average of 0 numbers is Undefined\n");
	return 0;
}*/

/*2189
#include <stdio.h>
int main(void)
{
	int n;
	char s;
	while(scanf("%d %c",&n,&s)!=EOF)
	{
		for(int i=1;i<=n+4;i++){
			for(int j=1;j<=n*4+7;j++){
				if(i==1||i==n+4) printf("-");
				else if(j==1||j==n*4+7) printf("|");
				else if(i==2||i==n+3||j==2||j==n*4+6) printf(" ");
				else if(j==3||j==n*4+5||j==2+n||j==5+2*n||j==4+3*n||j==6+3*n) printf("%c",s);
				else if((i==n/2+3&&j>=4&&j<=1+n)||((i==3||i==n+2)&&j>=4+n&&j<=3+2*n)||(i==n+2&&(j>=7+3*n&&j<=4+4*n)))
				printf("%c",s);
				else if(i>=3&&i<=2+n){
					if(j==6+2*n-i||j==2*n+2+i) printf("%c",s);
					else printf(" ");
				} 
				else printf(" ");
			}
			printf("\n");
		}
		
	}
	return 0;
}*/
/*2213
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,x=0,y=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int d=n-2*i;
			if(d%3==0) {
				y=d/3;
				x=i;
				break;
			}
			if(d==0) {
				x=n/2; break;
			}
			if(d<0) break;
		}
		if(x==0&&y==0) printf("WA\n");
		else printf("%d %d\n",x,y);
	}
	return 0;
}
*/
/*2223
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--){
		double heave,mr,wr;
		int m,w,big;
		scanf("%lf %d %d %lf %lf",&heave,&m,&w,&mr,&wr);
		if(heave>m*mr+w*wr) printf("you are too heavy to move!\n");
		else if(heave==m*mr+w*wr) printf("%d\n",m+w);
		else{
			big=wr>mr?1:0;
			if(big==1){
				if(heave>wr*w) {
					heave-=wr*w;
					if(heave/mr-(int)(heave/mr)==0)
					printf("%d\n",w+heave/mr);
					else printf("%d\n",w+heave/mr+1);
				}
				else if(heave==wr*w) printf("%d\n",w);
				else printf("%d\n",w-(int)((wr*w-heave)/wr));
			}
			else{
				if(heave>mr*m) {
					heave-=mr*m;
					if(heave/wr-(int)(heave/wr)==0)
					printf("%d\n",(int)(m+heave/wr));
					else printf("%d\n",(int)(m+heave/wr+1));
				}
				else if(heave==mr*m) printf("%d\n",m);
				else printf("%d\n",m-(int)((mr*m-heave)/mr));
			}
		}
	}
	return 0;
}*/

/*2241
#include <stdio.h>
int main(void)
{
	int n,m;
	double H,h,sum;
	while(~scanf("%d %d %lf",&n,&m,&H)){
		sum=0.0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%lf",&h);
				if(h<H) sum+=(H-h)*100;
			}
		}
		printf("%d\n",(int)sum);
	}
	return 0;
}*/
/*2485
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int d;
		scanf("%d",&d);
		int x,y,flag=0;
		for(int i=1;;i++){
			for(int j=1;j<i;j++){
				if(i*i-d*j*j==1){
					x=i;
					y=j;
					flag=1;
					break;
				}
			}
			if(flag) break;
		}
		printf("%d %d\n",x,y);
	}
	return 0;
}*/
/*2516
#include <stdio.h>
int main(void)
{
	int a[25][4]={0},t,x,y;
	scanf("%d",&t);
	while(t--){
		int time,zl,num;
		scanf("%d %d %d",&time,&zl,&num);
		a[time][zl]+=num;
	}
	while(scanf("%d %d",&x,&y),x||y){
		printf("%d\n",a[x][y]);
	}
	return 0;
}*/
/*2520
#include<stdio.h>
int solve(int N);
int main()
{  
    int N; 
    scanf("%d",&N);
    printf("%d\n",solve(N));  
    return 0;  
} 
int solve(int N){
	if(N==0) return N;
	else if(N%3==0) return N/3;
	else return N/3+1;
}*/
/*2549
#include <stdio.h>
#include <math.h>
int main(void)
{
	int a1,a2,b1,b2,c1,c2;
	scanf("%d %d %d",&a1,&b1,&c1);
	scanf("%d %d %d",&a2,&b2,&c2);
	if(a1==a2) printf("Y e s\n");
	else if (a2-a1==1||(a1==7&&a2==1)){
		if(b2<b1) printf("Y e s\n");
		else if(b2==b1) {
			if(c2<=c1) printf("Y e s\n");
			else printf("N o\n");
		}
		else printf("N o\n");
	}
	else printf("N o\n");
	return 0;
}*/
/*2349
#include <stdio.h>
char num[1000010];
int main(void)
{
	int n,sum=0;
	scanf("%d",&n);
	getchar();
	gets(num);
	for(int i=0;i<n;i++){
		if(num[i]=='0'||num[i]=='6'||num[i]=='9') sum++;
		else if(num[i]=='8') sum+=2;
	}
	printf("%d",sum);
	return 0;
}*/
/*2215
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--){
		char str[110];
		gets(str);
		int len=strlen(str);
		for(int i=2;i<len;i++){
			if((str[i]=='R'||str[i]=='r')&&(str[i-1]=='s'||str[i-1]=='S')&&(str[i-2]=='s'||str[i-2]=='S')){
				str[i]=str[i-1]=str[i-2]='*';
				i+=2;
				continue;
			}
			if(i>=5) {
				if((str[i]=='a'||str[i]=='A')&&(str[i-1]=='c'||str[i-1]=='C')&&(str[i-2]=='i'||str[i-2]=='C')&&
				(str[i-3]=='r'||str[i-3]=='R')&&(str[i-4]=='f'||str[i-4]=='F')&&(str[i-5]=='a'||str[i-5]=='A')){
					str[i-5]='A';str[i-4]='F';str[i-3]='R';str[i-2]='I';str[i-1]='C';str[i]='A';
					
				}
			}
		}
		printf("%s\n",str);
	}
	return 0;
}*/
/*2267
#include <stdio.h>
int main(void)
{
	int n;
	while(~scanf("%d",&n))
	{
		int x,y,z,xy[10][10]={0},xz[10][10]={0},yz[10][10]={0};
		while(n--){
			scanf("%d %d %d",&x,&y,&z);
			xy[x][y]=1;xz[x][z]=1;yz[y][z]=1;
		}
		int a=0,b=0,c=0;
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				a+=xy[i][j];
			}
		}
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				b+=xz[i][j];
			}
		}
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				c+=yz[i][j];
			}
		}
		printf("%d %d %d\n",a,b,c);
	}
	return 0;
}*/
/*2454
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int s,w,l;
	s=n/4;
	if(n%4==0) printf("4ÔªµÄ±Ê%dÖ§\n",s);
	else {
		w=n%4%2;l=n%4/2;
		s=s-w-l;
		if(w!=0&&l!=0) printf("4ÔªµÄ±Ê%dÖ§ 5ÔªµÄ±Ê%dÖ§ 6ÔªµÄ±Ê%dÖ§\n",s,w,l);
		else if(w==0&&l!=0) printf("4ÔªµÄ±Ê%dÖ§ 6ÔªµÄ±Ê%dÖ§\n",s,l);
		else if(w!=0&&l==0) printf("4ÔªµÄ±Ê%dÖ§ 5ÔªµÄ±Ê%dÖ§\n",s,w);
		
		
	}
	return 0;
}*/
/*2194
#include <stdio.h>
void ps(char strr[1100][1100],int k,int i,int j){//±¶Êý´¦Àí×°ÈëÁíÒ»¸ö¸ü´óµÄÊý×éÖÐ 
	for(int m=(i+1)*k-1,s=1;s<=k;s++,m--){
		for(int mm=(j+1)*k-1,ss=1;ss<=k;ss++,mm--)
		strr[m][mm]='*';
	}
}
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--){
		char str[1010][1010]={0};//Ã¿´Î¹éÁã 
		int n,r,t,c,a,b;
		scanf("%d %d",&r,&n);//»­²¼´óÐ¡ºÍÖ±ÏßÊý 
		while(n--){
			scanf("%d %d %d %d",&t,&c,&a,&b);
			if(t==0) {
				for(int i=a;i<=b;i++) str[i][c]='*';//Ð±ÂÊÎªÊúÏß 
			}
			else if(t==2){
				for(int i=a;i<=b;i++) str[c][i]='*';//Ð±ÂÊ²»´æÔÚºáÏß 
			}
			else if(t==1){//Ð±ÂÊÎª1 
				for(int i=a,j=c+a;i<=b;i++,j++) str[i][j]='*';
			}
			else for(int i=a,j=c-a;i<=b;i++,j--) str[i][j]='*';//Ð±ÂÊÎª-1 
		}
		for(int i=0;i<r;i++){
			for(int j=0;j<r;j++){
				if(str[i][j]=='*') printf("*");
				else printf(" ");
			}
			printf("\n");
		}//Êä³öÔ­Õó 
		int q;
		scanf("%d",&q);//Ñ¯ÎÊ´ÎÊý 
		if(q!=0)
		while(q--){
			char strr[1100][1100]={0};//Ã¿´Î¹éÁã 
			int k;
			scanf("%d",&k);//Ëõ·Å±¶Êý
			for(int i=0;i<r;i++){
				for(int j=0;j<r;j++){
					if(str[i][j]=='*')
					ps(strr,k,i,j);
				}
			}
			for(int i=0;i<r*k;i++){
				for(int j=0;j<r*k;j++){
					if(strr[i][j]=='*') printf("*");
					else printf(" ");
				}
				printf("\n");
			} 
		}
	}
	return 0;
}*/

/*2716 ÀëÆ× ²»ÓÃ¶¯ÄÔ×ÓµÄÌâ ÒÔÎªÓÐ¶àÄÑÏëÁË°ëÌì 
#include <stdio.h>
int check(int a[],int len,int k);
int main()
{
	int a[210];
	int t;
	int n,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		for(int i=0;i<2*n;++i)
		{
			scanf("%d",&a[i]);			
		}
		if(check(a,2*n,k)==0)
		{
			puts("KKTXDY");			
		}
		else
		{
			puts("JLSTXDY");			
		}
	}
}
int check(int a[],int len,int k){
	if(k==1) return 1;
	else return 0;
}*/


/*2127
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b,k;
		scanf("%lld %lld %lld",&a,&b,&k);
		long long c=a+b;
		long long result[50];
		int u=0;
		if(c==0) printf("0");
		else{
			while(c>0){
				result[u++]=c%k;
				c/=k;
			}
			for(int i=u-1;i>=0;i--){
				printf("%lld",result[i]);
			}		
		}
		
		printf("\n");
	}
	return 0;
}*/

/*2510
 #include <stdio.h>
 int main(void)
 {
 	int m,n,x,y;
 	scanf("%d %d %d %d",&m,&n,&x,&y);
	int hm[105][105];
	hm[x][y]=0;
	for(int i=x-1;i>=1;i--) hm[i][y]=hm[i+1][y]+1;
	for(int i=x+1;i<=m;i++) hm[i][y]=hm[i-1][y]+1;
	for(int i=1;i<=m;i++){
		for(int j1=y-1;j1>=1;j1--) hm[i][j1]=hm[i][j1+1]+1;
		for(int j2=y+1;j2<=n;j2++) hm[i][j2]=hm[i][j2-1]+1;
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(j==1)
			printf("%d",hm[i][j]);
			else printf(" %d",hm[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

/*2248
 #include <stdio.h>
 #include <string.h>
 int main(void)
 {
 	int n,k,flag=0;
 	char str[105];
 	scanf("%d %d",&n,&k);
 	getchar();
 	gets(str);
 	int h,c;
 	for(int i=0;i<n;i++){
 		if(str[i]=='H') h=i;
 		if(str[i]=='C') c=i;
	 }
	 if(c>h) {
	 	for(int i=c;i>=h;i-=k){
	 		if(str[i]=='#'){
	 			flag=0;break;
			 }
			 else if(str[i]=='H'){
			 	flag=1;break;
			 }
		 }
	 }
	 else{
	 	for(int i=c;i<=h;i+=k){
	 		if(str[i]=='#'){
	 			flag=0;break;
			 }
			 else if(str[i]=='H'){
			 	flag=1;break;
			 }
		 }
	 }
	 if(flag) printf("Assassination success!\n");
	 else printf("Pay back the money!\n");
	 return 0;
 }*/
 
 /*2265²»Òª±©Á¦Ä£ÄâÒªÊýÑ§·ÖÎö
 #include <stdio.h>
 #include <string.h>
 #define ll long long
 int main(void)
 {
 	char str[5010];
 	gets(str);
 	ll len=strlen(str),sum=0;
 	//ll sum2[5010]={0},sum3=0;
 	//for(ll i=0,uu=0;i<len;i++,uu++){
 	//	for(ll j=i,u=0;j<len;j++,u++){
 	//		ll sum1[5010]={0};
 	//		for(ll k=i;k<=j;k++){
 	//			sum1[u]+=str[k];//Ã¿´ÎµÄs(i,j) 
	//		 }
	//		 sum2[uu]=(sum2[uu]+sum1[u])%1000000007;//µÚ¶þ²ãÀÛ¼Ó 
	//	 }
	//	 sum3=(sum3+sum2[uu])%1000000007; //×îºó½á¹û 
	// }
	// printf("%lld",sum3);
	 for(ll i=0,k=1;i<len;i++,k++){
	 	sum=(sum+(len-i)*k*str[i])%1000000007;
	 }
	 printf("%lld",sum);
	 return 0;
 }*/
 /*2674 È¡Ê¯×Ó£¨²©ÞÄÂÛ£© 
 #include <stdio.h>
 int main(void)
 {
 	int n, a[5000];
 	a[0]=1; a[1]=1;
 	for(int i=2;i<5000;i++){
 		a[i]=a[i-1]+a[i-2];
	 }
 	while(~scanf("%d",&n)){
 		for(int i=2;i<5000;i++){
 			if(a[i]==n) {
 				printf("Lucky Day\n");
 				break;
			 }
			 if(a[i]>n){
			 	printf("Bad Day\n");
			 	break;
			 }
		 }
	 }
	 return 0;
 }*/

/*2586¶þ·Ö£¡£¡ ¿¼ÂÇÇå³þ°¡ 
#include <stdio.h>
#include <stdlib.h>
int comp(const void*p,const void*q){
	return *(int *)p-*(int *)q;
}
int ef(int a[],int n,int k){
	int left=0, right=n-1,mid;
	while(left<=right){
		mid=(left+right)/2;
		if(k<a[mid]) right=mid-1;
		else if(k==a[mid]) return mid;
		else left=mid+1;
	}
}
int main(void)
{
	int n,count=0,count2=0,count3=0,w=0;//¼ÇÈë1µÄ¸öÊý 
	scanf("%d",&n);
	int b[100010],s[100010],bb[100010],aa[100010]; 
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
		s[i]=b[i];
	}
	qsort(s,n,sizeof(int),comp);
	for(int i=0;i<n;i++){
		if(s[i]==1) count++;//¼ÇÈë1µÄ¸öÊý 
		if(s[i]<=4) count2++;
		if(s[i]==2) count3++;
		if(s[i]==s[i+1]) continue;
		aa[w]=s[i];
		bb[w++]=n-i-1; //¼ÇÈëÐ¡ÓÚµÈÓÚs[i]µÄg¸öÊý²»°üÀ¨±¾Éí 
	}
	for (int i=0;i<n;i++){
		if(b[i]==1) printf("%d ",0);
		else if(b[i]==2){
			//int e=ef(aa,w,4);
			printf("%d ",n-count2+count);
		} 
		else if(b[i]==3) {
			int e=ef(aa,w,b[i]);
			printf("%d ",bb[e]+count+count3);
		}
		else //printf("%d ",n-1-bb[b[i]]+count);
		{
			int e=ef(aa,w,b[i]);
			printf("%d ",bb[e]+count);
		}
	} 
	return 0;
 } */
 /*1056
 #include <stdio.h>
 int main(void)
 {
 	int n,sum=0;
 	scanf("%d",&n);
 	int a[10];
 	for(int i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	 for(int i=0;i<n;i++){
	 	for(int j=0;j<n;j++){
	 		if(i!=j){
	 			sum+=a[i]*10+a[j];
			 }
		 }
	 }
	 printf("%d",sum);
	 return 0;
 }
 */
 /*1057
 #include <stdio.h>
 #include <string.h>
 int main(void)
 {
    char str[100010];
 	int sum=0;
 	gets(str);
 	int len=strlen(str);
 	for(int i=0;i<len;i++){
 		if(str[i]>='a'&&str[i]<='z') sum+=str[i]-'a'+1;
 		else if(str[i]>='A'&&str[i]<='Z') sum+=str[i]-'A'+1;
	 }
	 int k=0,a[100],count=0;
	 if(sum==0) printf("0 0");
	 else{
	 		while(sum>0){
	 		a[k++]=sum%2;
	 		sum/=2;
		 }
		 for(int i=0;i<k;i++){
		 	if(a[i]==0) count++;
		 }
		 printf("%d %d",count,k-count);
	 }
    return 0;
 }
 */
 
 /*1058  ¿Óµã£ºÑ§ÉúÑ¡µÄÕýÈ·µ«¸öÊýÉÙÓÚ×ÜÕýÈ·¸öÊý 
 #include <stdio.h>
 #include <string.h>
 struct problem {
 	int score,amount,ncorrect;
 	char choices[10];
 };
 int main(void)
 {
 	struct problem arr[110];
 	int npeople,nproblem,student[1010]={0},err[110]={0};
 	scanf("%d %d",&npeople,&nproblem);
 	//if (nproblem<=0||npeople<=0) return 0;
    for(int i=1;i<=nproblem;i++){
    	scanf("%d %d %d",&arr[i].score,&arr[i].amount,&arr[i].ncorrect);
    	for(int j=1;j<=arr[i].ncorrect;j++){
    		scanf(" %c",&arr[i].choices[j]);
		}
	}
	getchar();
	for(int i=1;i<=npeople;i++){
		for(int j=1;j<=nproblem;j++){
			int n,flag=1;
			char ch;
			scanf("(");
			scanf("%d",&n);
			for(int k=1;k<=n;k++){
				scanf(" %c",&ch);
				if(arr[j].choices[k]!=ch){
					flag=0;
				}
			}
			if(flag==1&&n==arr[j].ncorrect) student[i]+=arr[j].score;
			else err[j]++;
			scanf(")");
			getchar();
		}
	}
	for(int i=1;i<=npeople;i++){
		printf("%d\n",student[i]);
	}
	int max=0,f=1;
	for(int i=1;i<=nproblem;i++){
		if(err[i]>0) f=0;
		max=err[i]>max?err[i]:max;
	}
	if(f) {
		printf("Too simple\n");
	    return 0;
	}
	printf("%d",max);
	for(int i=1;i<=nproblem;i++){
		if(err[i]==max) printf(" %d",i);
	}
	return 0;
 }*/
 /*
 #include <stdio.h>
 int isprime(int n){
 	if((n%4==0&&n%100!=0)||n%400==0) return 1;
 	else return 0;
 }
 int main(void)
 {
 	int t;
	 long long sum1=0,sum2=0;
 	scanf("%d",&t);
 	int a[5010];
 	for(int i=1;i<=t;i++){
 		scanf("%d",&a[i]);
	 }
	 int n1,n2,y1,y2,d1,d2,s1,s2,f1,f2;
	 scanf("%d-%d-%d-%d:%d",&n1,&y1,&d1,&s1,&f1);
	 scanf("%d-%d-%d-%d:%d",&n2,&y2,&d2,&s2,&f2);
	 for(int i=1;i<n1;i++){
	 	if(isprime(i)) sum1+=7*31*(24*60)+4*30*(24*60)+29*24*60;
	 	else sum1+=7*31*(24*60)+4*30*(24*60)+28*24*60;
	 }
	 for(int i=1;i<y1;i++){
	 	if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) sum1+=31*(24*60);
	 	else if(i==4||i==6||i==9||i==11) sum1+=30*(24*60);
	 	else{
	 		if(isprime(n1)) {
	 			sum1+=29*(24*60);
			 }
			 else sum1+=28*(24*60);
		 }
	 }
	 sum1+=(d1-1)*(24*60);
	 sum1+=(s1-1)*60;
	 sum1+=f1;
	 for(int i=1;i<n2;i++){
	 	if(isprime(i)) sum2+=7*31*(24*60)+4*30*(24*60)+29*24*60;
	 	else sum2+=7*31*(24*60)+4*30*(24*60)+28*24*60;
	 }
	 for(int i=1;i<y2;i++){
	 	if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) sum2+=31*(24*60);
	 	else if(i==4||i==6||i==9||i==11) sum2+=30*(24*60);
	 	else{
	 		if(isprime(n2)) {
	 			sum2+=29*(24*60);
			 }
			 else sum2+=28*(24*60);
		 }
	 }
	 sum2+=(d2-1)*(24*60);
	 sum2+=(s2-1)*60;
	 sum2+=f2;
	 long long ss=sum2-sum1;
	 int count=0;
	 for(int i=1;i<=t;i++){
	 	if(ss-a[i]>=0) {
	 		count++;
	 		ss-=a[i];
		 }
		 else break;
	 }
	 printf("%d",count);
	 return 0;
 }*/
