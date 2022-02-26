 /*1059
 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <stdlib.h>
 struct award{
 	int num;
 	int id;
 	int flag;
 };
 int comp(const void*p,const void*q){
 	return ((struct award*)p)->id-((struct award*)q)->id;
 }
 int sushu(int n){
 	if(n==1) return 0;
 	else if(n==2) return 1;
 	else if(n%2==0) return 0;
 	else {
 		for(int i=3;i<n/2;i+=2){
 			if(n%i==0) return 0;
		 }
		 return 1;
	 }
 }
 int efcz(struct award*arr,int n,int key){
 	int left=0,right=n-1,mid=(n-1)/2;
 	while(left<=right){
 		if(arr[mid].id>key) right=mid-1;
 		else if(arr[mid].id==key) {
 			if(arr[mid].flag==0){
 				arr[mid].flag=1;
 			    return arr[mid].num;
			 }
 			else return -2;
		 }
 		else left=mid+1;
 		mid=(left+right)/2;
	 }
	 return -1;
 }
 int main(void)
 {
 	struct award arr[10010];
 	int n,m;
 	scanf("%d",&n);
 	for(int i=0;i<n;i++){
 		scanf("%d",&arr[i].id);
 		arr[i].num=i+1;
 		arr[i].flag=0;
	 }
	 qsort(arr,n,sizeof(struct award),comp);
	 scanf("%d",&m);
	 while(m--){
	 	int ss;
	 	scanf("%d",&ss);
	 	//int ff=0;
	 	int k=efcz(arr,n,ss);
	 	if(k==-1) printf("%04d: Are you kidding?\n",ss);
	 	else if(k==1) printf("%04d: Mystery Award\n",ss);
	 	else if(k==-2)  printf("%04d: Checked\n",ss);
	    else if(sushu(k)) printf("%04d: Minion\n",ss);
	    else printf("%04d: Chocolate\n",ss);
	 }
	 return 0;
 }*/
 /*1061
 #include <stdio.h>
 #include <stdlib.h>
 int main(void)
 {
 	int n,m;
 	scanf("%d %d",&n,&m);
 	int *df=(int *)malloc(m*sizeof(int));
 	int *answer=(int *)malloc(m*sizeof(int));
 	for(int i=0;i<m;i++){
 		scanf("%d",&df[i]);
	 } 
	for(int i=0;i<m;i++){
    	scanf("%d",&answer[i]);
	}
	for(int i=0;i<n;i++){
		int sum=0,k; 
		for(int j=0;j<m;j++){
			scanf("%d",&k);
			if(k==answer[j]) sum+=df[j];
		}
		printf("%d\n",sum);
	}
	return 0;
 }*/
 
 
 /*1062
 #include<stdio.h>
 int miny(int a,int b){
 	int r=a%b;
 	while(r>0){ 
 		a=b;
 		b=r;
 		r=a%b;
    }
    return b;
 }
 int maxb(int a,int b){
 	return a/miny(a,b)*b;
 }
 int main(void)
 {
 	int n1,m1,n2,m2,k,flag=1;
 	scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
 	int my1=miny(n1,m1),my2=miny(n2,m2);
 	n1/=my1;m1/=my1;n2/=my2;m2/=my2;
 	int mb=maxb(m1,m2);
 	mb=maxb(mb,k);
 	n1*=mb/m1;n2*=mb/m2;
 	if(n1>n2) {
 		int t=n2;
 		n2=n1;
 		n1=t;
	 }
 	for(int i=n1+1;i<n2;i++){
 		int kk=mb/miny(mb,i);
 		if(kk==k) {
 			if(flag){
 				printf("%d/%d",i/miny(mb,i),kk);
 				flag=0;
			 }
			else
 			printf(" %d/%d",i/miny(mb,i),kk);
		 }
	 }
 	return 0;
 	
 }*/
 
/* 1063
#include <stdio.h>
#include <math.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	double mou=0.0;
	int max=0;
	while(n--){
		int pf;
		int a,b;
		scanf("%d %d",&a,&b);
		pf=a*a+b*b;
		max=pf>max?pf:max;
	}
	mou=sqrt(max);
	printf("%.2lf",mou);
	return 0;
}*/

/*1064
#include <stdio.h>
int main(void)
{
	int n,a[40]={0};
	scanf("%d",&n);
	while(n--){
		int k;
		scanf("%d",&k);
		int sum=0;
		while(k>0){
		    sum+=k%10;
		    k/=10;
		}
		a[sum]=1;
	}
	int count=0;
	for(int i=0;i<40;i++){
		if(a[i]==1) count++;
	}
	printf("%d\n",count);
	int flag=1;
	for(int i=0;i<40;i++){
		if(a[i]==1) {
			if(flag){
				 printf("%d",i);
			    flag=0;
			}
			else printf(" %d",i);
		}
	}
	return 0;
}*/

/*1066
#include <stdio.h>
int main(void)
{
	int n,m,a,b,k;
	scanf("%d %d %d %d %d",&n,&m,&a,&b,&k);
	int pi[510][510];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&pi[i][j]);
			if(pi[i][j]>=a&&pi[i][j]<=b) pi[i][j]=k;
		}
	}
	for(int i=1;i<=n;i++){
		int flag=1;
		for(int j=1;j<=m;j++){
			if(flag){
				printf("%03d",pi[i][j]);
				flag=0;
			}
			else printf(" %03d",pi[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[21],s[200];
    int n,count=0;
    scanf("%s %d",str,&n);
    getchar();
    while(1){
        //count++;
        gets(s);
        if(strcmp(str,s)==0) {
            printf("Welcome in\n");
            break;
        }
        else if(strcmp(s,"#")==0) break;
        else {
	        printf("Wng password: %s\n",s);
	        count++;
	    }
        if(count==n) {
            printf("Account locked\n");
            break;
        }
    }
    
    return 0;
}
*/

/*1068
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a[1010][1010];
int b[50000000]={0};
int main(void)
{
    int m,n,tol;
    scanf("%d %d %d",&m,&n,&tol);
    for(int i=0;i<n+2;i++){
        for(int j=0;j<m+2;j++){
            if(i==0||i==n+1||j==0||j==m+1) a[i][j]=-tol-1;
            else{
                scanf("%d",&a[i][j]);
                b[a[i][j]]++;
            }
            
        }
    }
    int count=0,x,y,color;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(abs(a[i][j]-a[i-1][j])>tol&&abs(a[i][j]-a[i+1][j])>tol&&abs(a[i][j]-a[i][j-1])>tol
            &&abs(a[i][j]-a[i][j+1])>tol&&abs(a[i][j]-a[i-1][j-1])>tol&&abs(a[i][j]-a[i-1][j+1])>tol
            &&abs(a[i][j]-a[i+1][j-1])>tol&&abs(a[i][j]-a[i+1][j+1])>tol&&b[a[i][j]]==1){
                count++;
                x=j;y=i;color=a[i][j];
            }
            if(count>1) break;
        }
        if(count>1) break;
    }
    if(count>1) printf("Not Unique\n");
    else if(count==0) printf("Not Exist\n");
    else printf("(%d, %d): %d\n",x,y,color);
    system("pause");
    return 0;
}*/
/*1069
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int n,g,first,kk=0;
    char str[1010][25];//装已打印的
    scanf("%d %d %d",&n,&g,&first);
    getchar();
    char ss[1010][25];
    for(int i=1;i<=n;i++){
        gets(ss[i]);
    }
    if(first>n) printf("Keep going...\n");
    else {
        printf("%s\n",ss[first]);
        strcpy(str[kk++],ss[first]);//把已打印的装入str
        int k=first,flag;
        k+=g;
        while(k<=n){
            flag=1;
            for(int j=0;j<kk;j++){
                if(strcmp(ss[k],str[j])==0) {//判断是否与前重复
                    flag=0;break;
                }
            }
            if(flag==0) {
                k++;
                continue;
            }
            printf("%s\n",ss[k]);
            strcpy(str[kk++],ss[k]);//把已打印的装入str
            k+=g;
        }
        //if(flag==0) printf("Keep going...\n");
    }
    system("pause");
    return 0;
}*/

/*stl A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int flag=1,a=0;
	getline(cin,s);
	for(int i=0;s[i];i++){
		if(s[i]=='(') a++;
		if(s[i]==')') a--;
		if(a<0) {
			flag =0;break;
		}
	}
	if(flag==0) cout<<"NO"<<endl;
	else{
		if(a==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}*/
/*stl B
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	sort(s.begin(),s.end());
	do{
		cout<<s<<endl;
	}while(next_permutation(s.begin(),s.end()));
	return 0;
}*/
/*
#include <cstdio>
#include <deque>
#include <iostream>
using namespace std;
int main(void)
{
	int n;
	priority_queue<pair<int,int>>q;
	
	while(scanf("%d",&n),n){
		if(n==1){
			cin>>p.second>>p.first;
			q.push(p);
		}
		if(n==2){
			if(q.empty) printf("0\n");
			else{
				cout<<q.top();<<endl;
			    q.pop();
			}
			
		}
		if(n==3){
			if(q.empty) printf("0\n");
			else{
				cout<<q.end()+1;<<endl;
				q.erase(end()+1);
			}
		}
	}
	return 0;
}
*/
/* SLT C
#include <cstdio>
#include <map>
#include <iostream>
using namespace std;
int main()
{
	int n,k,p;
	map<int,int> cl;
	while(scanf("%d",&n),n){
		if(n==1){
			scanf("%d %d",&k,&p);
			cl[p]=k;
		}
		if(n==2){
			//vector<int>::iterator it=;
			if(cl.empty()) printf("0\n");
			else{
				map<int,int> ::iterator m;
				m=cl.end();
				m--;
				cout<<m->second<<endl;
			    cl.erase(m);
			}
			
		}
		if(n==3){
			//vector<int>::iterator itt=;
			if(cl.empty()) printf("0\n");
			else{
				cout<<cl.begin()->second<<endl;
				cl.erase(cl.begin());
			}
		}
	}
	return 0;
}*/

/*stl D
#include <iostream>
#include <cstdio>
#include <algorithm>

const int Q=3e4+7;

using namespace std;
int fa[Q], size[Q];
int find(int x){
	while(x!=fa[x]) 
	x=fa[x];
	return x;
}

void merge(int x,int y){
	int a=find(x), b=find(y);
	if(a==b) return;
	else {
		if(size[a]>size[b]) swap(a,b);
		fa[a]=b;
		size[b]+=size[a];
	}
}


int main(void)
{
	int n,m;
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>n>>m,n||m){
		for(int i=0;i<n;i++){
			fa[i]=i;
			size[i]=1;
		}
		while(m--){
			int k,flag=1;
			cin >> k;
			while(k--){
				int d,front;
				cin>>d;
				if(flag) flag=0;
				else merge(front,d);
				front=d;
			}
		}
		cout<<size[find(0)]<<endl;
	}
	return 0;
}*/

/* stl E
#include<iostream>
#include <cstdio>
#include <algorithm>
using namespace std;


struct node{
	int pos,col;
};
struct node arr[1000010];
int color[100];
bool comp(const struct node &a,const struct node &b){
	return a.pos<b.pos;
}
int main(void)
{
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m,po=1,num=0;
	cin>>n>>m;
	int mm=m;
	while(m--){
		int t;
		cin>>t;
		while(t--){
			cin>>arr[num].pos;
			arr[num++].col=po;
			//color[po]++;
		}
		po++;
	}
	sort(arr,arr+n,comp);
	int i,left=0,sum=0;
	int b[65]={0};
	for(i=0;i<n;i++){
		if(b[arr[i].col]==0) sum++;
		b[arr[i].col]++;
		if(sum==mm) break;
	}
	int right=i,ans=1000000000;
	while(right<n){
		b[arr[left].col]--;
		if(b[arr[left].col]==0) {
			ans=min(ans,arr[right].pos-arr[left].pos);
			left++;
			while(right<n){
				right++;
				if(right>=n) break;
				b[arr[right].col]++;
				if(b[arr[right].col]==1) {
					ans=min(ans,arr[right].pos-arr[left].pos);
					break;
				}
			}
		}
		else left++;
	}
	cout<<ans<<"\n";
	return 0;
}*/


/*二分 A 模板 
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
const int N = 1e5 + 7;
int x[N];
int n,c;
bool fine(int mm){
	int cow=1,pre=x[0];
	for(int i=1;i<n;i++){
		if(x[i]-pre<mm) continue;
		else {
			pre=x[i];
			cow++;
		}
	}
	if(cow<c) return false;
	else return true;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>c;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	sort(x,x+n);
	int mid,l=0,r=x[n-1]-x[0];
	while(l<=r){
		mid=(l+r)/2;
		if(fine(mid)) l=mid+1;
		else r=mid-1;
	}
	cout<<r<<"\n";
	return 0;
}*/

/*
#include <cstdio>
#include <iostream>
#include <algorithm>
const double pi=3.14159265;
using namespace std;
int n,f;
int x[10005];
double v[10005];
bool fine(double vv){
	int sum=0; 
	for(int i=0;i<n;i++){
		sum+=(int)(v[i]/vv);
	}
	if(sum<f) return false;
	else return true;
}
int main(void)
{
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&f);
		f++;
		for(int i=0;i<n;i++){
			scanf("%d",&x[i]);
			v[i]=pi*x[i]*x[i];
		}
		if(n==1) {
			printf("%.4lf\n",v[0]/f);continue;
		}
		sort(v,v+n);
		//sort(v,v+n);
		//if(n>=f) printf("%.4lf\n",pi*x[n-f]*x[n-f]);
		//else{                               
			double l=0,r=100000,mid;
	       		while(l+0.00000001<=r){
				mid=(l+r)/2;
				if(fine(mid)) l=mid;
				else r=mid;
			}
			printf("%.4lf\n",mid);
		//}
		
	}
	
	return 0;
	
}
*/
/*
#include <cstdio>
#include <iostream>
#include <algorithm>
const double pi=3.1415926535;
using namespace std;
int n,f;
int x[10005];
double v[10005];
bool fine(double vv){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=(int)(v[i]/vv);
	}
	if(sum<f) return false;
	else return true;
}
int main(void)
{
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&f);
		//if(n==0) {
		//	printf("0.0000\n");continue;
		//}
		f++;
		for(int i=0;i<n;i++){
			scanf("%d",&x[i]);
			v[i]=pi*x[i]*x[i];
		}
		sort(x,x+n);
		//if(n>=f) printf("%.4lf\n",pi*x[n-f]*x[n-f]);
		//else{
			double l=0,r=(double)x[n-1],mid;
	       		while(l+0.000000001<=r){
				mid=(l+r)/2;
				double vv=pi*mid*mid;
				if(fine(vv)) l=mid;
				else r=mid;
			}
			printf("%.4lf\n",pi*mid*mid);
		//}
		
	}
	
	return 0;
	
}*/
/*B
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
const double esp=1e-7;
const double pi=acos(-1);
using namespace std;
int n,f;
double x[100005];
double v[100005];
bool find(double vv){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=(int)(v[i]/vv);
	}
	if(sum<f) return false;
	else return true;
}
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--){
	    double ans=0.0;
		scanf("%d %d",&n,&f);
		//if(n==0) {
		//	printf("0.0000\n");continue;
		//}
		f++;
		for(int i=0;i<n;i++){
			scanf("%lf",&x[i]);
		}
		sort(x,x+n);
		for(int i=0;i<n;i++){
			//scanf("%d",&x[i]);
			v[i]=pi*x[i]*x[i];
		}
		
			double le=0,r=v[n-1],mid;
	       		while(le+esp<=r){
				mid=(le+r)/2;
				if(find(mid)) {
					ans=max(ans,mid);
					le=mid;
				}                          
				else r=mid;
			}
			printf("%.6f\n",ans);
	}
	return 0;
	
}*/
/* 二分F
#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define inf 0x3f3f3f3f
#define eps 1e-9
#define pi 3.1415926
double s;
double vm;
double mid ,midr;
double find(double r,double s){
	double l=s/(pi*r) - r;
	if(l<=r) return 0;
	double h=sqrt(l*l-r*r);
	double v=(pi*r*r*h)/3.0;
	vm=v>vm?v:vm;
	return v;
}
void san(double s){
	double le=0,r=s;//r一定小于s
	
	while(le+eps<=r){
		mid=(le+r)/2;
		midr=(mid+r)/2;
		double va1,va2;
		va1=find(mid,s); va2=find(midr,s);
		if(va1<va2) le=mid;
		else r=midr;
	} 
}
int main()
{
	while(~scanf("%lf",&s))
	{
		vm=-inf;
		san(s);
		printf("%.2lf\n",vm);
		double ll=s/(pi*mid)-mid;
		printf("%.2lf\n",sqrt((ll*ll)-mid*mid));
		printf("%.2lf\n",mid);
	}
	return 0;
 } */



/*
#include <iostream>
#include <cstdio>
#include  <cstring>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;
#define inf 0x3f3f3f3f
#define ll long long
#define eps 1e-9
#define pi 3.1415926
double maxV;
double Calc(double r, double s)
{
    double l = s / (pi * r) - r;
    if (l - r <= 0) return -1; //???
    double h = sqrt(l*l - r*r);
    double v = pi*r*r*h / 3.0;
    if (maxV < v)   maxV = v;  //????????!
    return v; //?????????
}
 
void three(double s) //???
{
    double Left, Right;
    double mid, midmid;
    double mid_value, midmid_value;
    Left = 0;
    Right = s;
    while (Left + eps < Right)
    {
        mid = (Left + Right) / 2;
        midmid = (mid + Right) / 2;
        mid_value = Calc(mid, s);
        midmid_value = Calc(midmid, s);
        // ????????.
        if (mid_value >= midmid_value)   Right = midmid;
        else    Left = mid;
    }
    printf("%.6f\n", maxV);
}
int main()
{
	
	double s;
    while (~scanf("%lf", &s))
    {
        maxV = -inf; //???????
        three(s);
    }
    return 0;
}*/
/*G
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;
int st[5005];

int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&st[i]);
	}
	sort(st,st+n);
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int k=st[i]+st[j];
			for(int u=j+1;u<n;u++){
				if(st[u]<k) count++;
				else break;
			}	
		}
	}
	printf("%d\n",count);
	return 0;
}*/

/*二分	E
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int N=1e4,M=5e7;
int a[N],b[N],c[N],d[N];
int x[M],y[M],count=0;
int two(int k,int nn){
	int left=0,right=nn-1,mid;
	int sum=0;
	while(left<=right){
	   mid=(left+right)/2;
	   if(k+y[mid]==0) {
		   	sum++;
		   	for(int j=mid+1;j<nn;j++){
		   		 if(y[j]+k==0) sum++;
				 else break; 
			}
			for(int u=mid-1;u>=0;u--){
		   		 if(y[u]+k==0) sum++;
				 else break; 
			}
			return sum;
			
	   }
	   if(y[mid]>-k) right=mid-1;
	   else left=mid+1;
	}
    return false;
}
int main(void)
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);
	}
	int t=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			x[t++]=a[i]+b[j];
		}
	}
	int t2=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			y[t2++]=c[i]+d[j];
		}
	}
	sort(x,x+t);
	sort(y,y+t2);
	for(int i=0;i<t;i++){
		int k=x[i];
		int tt=two(k,t2);    //// 为啥这儿要先转一下？？？？ 查 
		ans+=tt;
	}
	printf("%d\n",ans);
	return 0;
}*/

/*二分 c 
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int l,n,m;
const int N=1e5;
int a[N];
bool find(int mid){
	int count=0,pre=0;
	for(int i=0;i<=n;i++){
		if(a[i]-pre<mid){
			count++;
		}
		else pre=a[i];
		if(count>m) return false;
	}
	if(count>m) return false;
	else return true;
}
int main(void)
{
	scanf("%d %d %d",&l,&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	a[n]=l;
	sort(a,a+n);
	int left=0,right=l,mid;
	while(left<=right){
		mid=(left+right)/2;
		if(find(mid)) left=mid+1;
		else right=mid-1;
	}
	printf("%d\n",right);
	return 0;
}
*/

/*/////////////////////////
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
const double eps=1e-11;//注意double 
double n,p1,v1,p2,v2;

double l,m,r;

bool judge0(double mid){
	double t=mid/v2;
	double s=t*v1;
	if(s+mid<n*2+p1-p2) return false;
	else return true;
}

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%lf %lf %lf %lf %lf",&n,&p1,&v1,&p2,&v2);
		if(p2<p1) {
		    swap(p1,p2);
			swap(v1,v2);	
		}
		double left0=0,right0=n*2,mid0;
			while(left0+eps<=right0){
				mid0=(left0+right0)/2;
				if(judge0(mid0)) right0=mid0;
				else left0=mid0;
			}
		double t1=mid0/v2,t2,t3,t4,t5,t6,t7;
		t1=(2*n+p1-p2)/(v1+v2);
		t2=(n+n-p2)/v2>(n+p1)/v1?(n+p1)/v1:(n+n-p2)/v2;
		t3=p2/v2<(n-p1)/v1?(n-p1)/v1:p2/v2;
		
		double tt=(p2-p1)/(v1+v2);
		t4=(n-p2)/v2<p1/v1?p1/v1+2*tt:(n-p2)/v2+2*tt;
		t5=((n+n-p1)/v1)>(p2+n)/v2?(p2+n)/v2:(2*n-p1)/v1;
		double ans=min(min(min(t1,t2),t3),t4);
		ans=min(ans,t5);
	    
		l=p1,m=p2-p1,r=n-p2;
		double left=r,right=2*r+m,mid;
		while(left+eps<=right){
				mid=(left+right)/2;
				if(judge(mid)) right=mid;
				else left=mid;
			}
	    ans=min(ans,mid/v2);
		printf("%.10f\n",ans);
	}
	return 0;
}*/
/*1111111111111111111111111111111111111111111111111111111111
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
const double eps=1e-9;//注意double 
double n,p1,v1,p2,v2,ans;

double judge(double mid){
	if(mid>=p1&&mid<=p2){
		double t1=min((2*mid-p1)/v1,(mid+p1)/v1);
		double t2=min((n-mid+n-p2)/v2,(n-mid+p2-mid)/2);
		return max(t1,t2);
	}
	else if(mid<p1){
		double t1=p1/v1;
		double t2=min((n-mid+n-p2)/v2,(n-mid+p2-mid)/2);
		return max(t1,t2);
	}
	else if(mid>p2){
		double t1=min((2*mid-p1)/v1,(mid+p1)/v1);
		double t2=(n-p2)/v2;
		return max(t1,t2);
	}
}

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%lf %lf %lf %lf %lf",&n,&p1,&v1,&p2,&v2);
		if(p2<p1) {
		    swap(p1,p2);
			swap(v1,v2);	
		}
		double t1,t2,t3,t4;
		t2=(n+n-p2)/v2>(n+p1)/v1?(n+p1)/v1:(n+n-p2)/v2;
		t3=p2/v2<(n-p1)/v1?(n-p1)/v1:p2/v2;
		t4=((n+n-p1)/v1)>(p2+n)/v2?(p2+n)/v2:(2*n-p1)/v1;
		
			double left=0,right=n,mid,midr;
			while(left+eps<=right){
				mid=(left+right)/2;
				midr=(right+mid)/2;
				double a=judge(mid);
				double b=judge(midr);
				if(a<b) right=midr;
				else left=mid;
				t1=b;
			}
		ans=min(min(min(t1,t2),t3),t4);
		printf("%.10lf\n",ans);
	}
	return 0;
}
*/
/* bfs   C
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n,k;
const int maxn=1e5+10;
int vis[maxn];
int b[maxn];



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	queue<int>q;
	cin>>n>>k;
	q.push(n);
	while(q.size())
	{
		int now=q.front();q.pop();
		//if(now>1e5||now<0) break;
		if(now==k) {
			cout<<b[now]<<"\n";
			break;
		}
		if(vis[now]) continue;
		vis[now]=1;
		if(now-1>=0&&now-1<=maxn&&!vis[now-1]) {
			if(!b[now-1])
			b[now-1]=b[now]+1;
			q.push(now-1);
		}
		if(now+1>=0&&now+1<=maxn&&!vis[now+1]){
			if(!b[now+1])
			b[now+1]=b[now]+1;
			q.push(now+1);
		} 
		if(now*2>=0&&now*2<=maxn &&!vis[now*2]) {
			if(!b[now*2])
			b[now*2]=b[now]+1;
			q.push(2*now);
		}
		
		//vis[now-1]=1;vis[now+1]=1;vis[now*2]=1;
	}
	return 0;
}*/

/*A
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int ans,n,k,vis[25];
char s[20][20];


void dsf(int a,int b){
	if(b==k) {
		ans++;return;
	}
	for(int i=a;i<n;i++){
		for(int j=0;j<n;j++){
			if(s[i][j]=='#'&&vis[j]!=1){
				vis[j]=1;
				dsf(i+1,b+1);
				vis[j]=0;
			}
		}
	}
}

int main()
{
	while(scanf("%d %d",&n,&k),n!=-1||k!=-1){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf(" %c",&s[i][j]);
			}
		}
		ans=0;
		dsf(0,0);
		printf("%d\n",ans);
	}
	return 0;
}*/







/*查询 bsf dsf B 000000000000000000000 
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;


int a,b,c,cnt;
int a1,a2,b1,b2,c1,c2,di;
char s[31][31][31];
int id[31][31][31];
int bb[31][31][31];
//int vis[31][31][31];
struct node{
	int x,y,z,st;
};
int m1[6]={1,-1,0,0,0,0},m2[6]={0,0,1,-1,0,0},m3[6]={0,0,0,0,1,-1};
void dfs(int x, int y,int z,int flag){
	
	if(x<0||x>=a||y<0||y>=b||z<0||z>=c) return;
	if(id[x][y][z]==1||s[x][y][z]=='#') return;
	id[x][y][z]=flag;
	for(int i=x-1;i<=x+1;i+=2) dfs(i,y,z,flag);
	for(int i=y-1;i<=y+1;i+=2) dfs(x,i,z,flag);
	for(int i=z-1;i<=z+1;i+=2) dfs(x,y,i,flag);
}


int check(int x,int y,int z){
	if(x<0||x>=a||y<0||y>=b||z<0||z>=c||bb[x][y][z]) return 0;
	if(s[x][y][z]=='#') return 0;
	return 1;
}

int bfs(int x, int y,int z){
	node pre,nxt;
	queue<node>q;
	node first = {x,y,z,0};
	q.push(first);
	bb[x][y][z]=1;
	bb[x][y][z]=1;
	while(q.size()){
		pre=q.front();q.pop();
		if(s[pre.x][pre.y][pre.z]=='E') return pre.st;
		for(int i=0;i<6;i++){
			nxt.x=pre.x+m1[i];
			nxt.y=pre.y+m2[i];
			nxt.z=pre.z+m3[i];
			nxt.st=pre.st+1;
			if(check(nxt.x,nxt.y,nxt.z))  q.push(nxt);
			bb[nxt.x][nxt.y][nxt.z]=1;
		}
		
		
	}
	return 0;
}


int main()
{
	while(scanf("%d %d %d",&a,&b,&c),a||b||c){
        memset(id,0,sizeof(id));//int id[31][31][31]={0};
        memset(bb,0,sizeof(bb));
		////memset(bb,0,sizeof(bb));//int bb[31][31][31]={0};
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				for(int k=0;k<c;k++){
					scanf(" %c",&s[i][j][k]);
					if(s[i][j][k]=='S') {
						a1=i;b1=j;c1=k;
					}
					if(s[i][j][k]=='E') {
						a2=i;b2=j;c2=k;
					}
				}
			}
		}
		bb[a1][b1][c1]=0;
		dfs(a1,b1,c1,1);
		int ans=bfs(a1,b1,c1);
		if(id[a1][b1][c1]==id[a2][b2][c2]){
			printf("Escaped in %d minute(s).\n",ans);
		}
		else printf("Trapped!\n");
	}
	return 0;
}*/

/* 查询  G
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

const int inf=0x3f3f3f3f;
int n,l,r, x,cnt;           //全局和局部注意不要重复定义 
int a[30];

void dfs(int minn,int maxn,int sum, int nn){
	if(nn==n+1) return;
	if(nn==n&&sum>=l&&sum<=r&&maxn-minn>=x) cnt++;
	dfs(minn,maxn,sum,nn+1);//不取
	int minnn=minn<a[nn]?minn:a[nn], maxnn=maxn>a[nn]?maxn:a[nn];
	dfs(minnn,maxnn,sum+a[nn],nn+1);//取 
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>l>>r>>x;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cnt=0;
	dfs(inf,0,0,0);
	cout<<cnt<<"\n";
	
	return 0;
 } */
 
 /* 贪心A
 #include <iostream>
 #include <cstdio>
 #include <algorithm>
 using namespace std;
 const int maxn=1e4+10;
 int n,m,ans;
 int a[maxn],b[maxn];
 
 int main()
 {
 	ans=0;
 	cin>>n>>m;
 	for(int i=0;i<n;i++){
 		cin>>a[i];
	 }
	sort(a,a+n);
	int l=0,r=n-1;
	while(l<=r){
		if(a[l]+a[r]>m) {
			r--;
			ans++;
		}
		else {
			l++;
			r--;
			ans++;
		}
	}
	cout<<ans;
	return 0;
 }*/
 
 
/* B 字符串可排序可相加  
 #include <string>
 #include <algorithm>
 #include <iostream>
 using namespace std;                                
 bool comp(string a, string b){
 	return a+b>b+a;
 }
 
 int main()
 {
 	string str[30];
 	int n;
 	cin>>n;
 	for(int i=0;i<n;i++){
 		cin>>str[i];
	 }
	 sort(str,str+n,comp);
	 for(int i=0;i<n;i++)
	 cout<<str[i];
	 return 0;
 }*/
 
 /* 贪心 c  // 只能对 r排序 
 #include <cstdio>
 #include <iostream>
 #include <algorithm>
 using namespace std;
 struct stage{
 	int l,r;
 }arr[1010];
 
 bool comp(stage a,stage b){
 	return a.r<b.r;
 }
 
 int main()
 {
 	int n;
 	cin>>n;
 	for(int i=0;i<n;i++){
 		scanf("%d %d",&arr[i].l,&arr[i].r);
	 }
	 sort(arr,arr+n,comp);
	 int ans=1; 
	 int e=arr[0].r;
	 for(int i=1;i<n;i++){
	 	if(arr[i].l>=e) {
	 		ans++;
	 		e=arr[i].r;
		 }
	 }
	 printf("%d",ans);
	 return 0;
  } */
  
  
/*D 要开longlong  循环归 0 
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int t,n,a;
long long b[100];

int main()
{
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--){
		memset(b,0,sizeof(b));
		cin>>n;
		while(n--){
			int count=0;
			cin>>a;
			while(a){
				a>>=1;    //注意只>>还未赋值 
				count++;
			}
			b[count]++;
		}
		long long sum=0;
		for(int i=1;i<100;i++){
			if(b[i]==0) continue;
			sum+=(b[i]*(b[i]-1))/2; 
		}
		cout<<sum<<"\n";
	} 
	return 0;
}*/
/* 贪心E 哈夫曼树！！！！ 
#include <cstdio>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn=2e4+10;
int n;
long long a[maxn];


int main()
{
	ios::sync_with_stdio(false);
	cin>>n;
	priority_queue<long long ,vector<long long>,greater<long long> > q;
	long long sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		q.push(a[i]);
	}
	//sort(a,a+n);
	while(!q.empty()){
		long long two=0;
		two+=q.top();q.pop();
		if(q.empty()) break;
		two+=q.top();q.pop();
		sum+=two;
		q.push(two);
	}
	cout<<sum<<"\n";
	return 0;
}
*/
/*
#include <cstdio>
#include <queue>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn=2e5+10;
struct en{
	int bo;
	int gain;
}arr[maxn];
int t,n,m,ans;

bool comp(en a,en b){
	return a.bo<b.bo;
}

bool judge(int n,int m){
	int last=m,die=0,wait=0;//当前血量 
	if(last<arr[0].bo) return false;
	for(int i=0;i<n;i++){
		if(last<arr[i].bo){//自身血量不够打死敌人 
			arr[i].bo-=last-1;//先尽可能地打几下 直到自己只剩1滴血 
			if(wait==0) return false;//如果没有一滴血的敌人说明失败了
			else {
				last=min(m,arr[die].gain);
			    die++;
			    wait--;
			    i--;//当前敌人还没有到一滴血所以不访问下一个 
			}
		}
		else{
			//if(last-arr[i].bool+arr[i].gain>m){
				last-=arr[i].bo-1;
				arr[i].bo=1;
				wait++; //只剩一滴血的敌人数 +1
			//}
			//else {
			//	last-=arr[i].bo;
			//	die++;
			//}
		}
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--){
		cin>>n>>m;
		memset(arr,0,sizeof(arr));
		for(int i=0;i<n;i++){
			cin>>arr[i].bo>>arr[i].gain;
		}
		sort(arr,arr+n,comp);
		if(judge(n,m)) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
	return 0;
}*/




/*  贪心  j 
#include <cstdio>
#include <queue>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn=2e5+10;
struct en{
	int bo;
	int gain;
	int dif;
}arr[maxn];
int t,n,m,ans;

bool comp(en a,en b){
	return a.dif>b.dif;
}

bool comp2(en a, en b){
	return a.gain>b.gain;
}



int main()
{
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--){
		cin>>n>>m;
		memset(arr,0,sizeof(arr));
		for(int i=0;i<n;i++){
			cin>>arr[i].bo>>arr[i].gain;
			if(arr[i].gain>m) arr[i].gain=m;
			arr[i].dif=arr[i].gain-arr[i].bo;
		}
		sort(arr,arr+n,comp);
		long long last=m;
		int flag=1,ii;
		for(int i=0;i<n;i++){
			if(arr[i].dif>=0)
			last += arr[i].dif;
			else{
				ii=i;
				break;
			}
		}
		sort(arr+ii,arr+n,comp2);
		for(int j=ii;j<n;j++){
			last-= arr[j].bo;
			if(last<0) {
				flag=0;break;
			}
			last+=arr[j].gain;
		}
		if(flag) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
	return 0;
}*/

/* 哈夫曼树 h 
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
const int maxn=1010;
int n,a[maxn];



int main()
{
	int t;
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--){
		priority_queue<int,vector<int>,greater<int> >q;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			q.push(a[i]);
		}
		long long sum=0;
		
		while(!q.empty()){
			int now=q.top();q.pop();
			if(q.empty()) break;
			now+=q.top();q.pop();
			sum+=now;
			q.push(now);
		}
		cout<<sum<<"\n";
	}
	return 0;
}*/
/* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!重载运算 
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>                 
using namespace std;
const int maxn=5e4+10;
struct node{
	int l , r, num;
}arr[maxn];

struct st{
	int l , r, num;
	friend bool operator<(const st a, const st b)
	{
		return a.r > b.r;
	}
};
int b[maxn],pre[maxn];


bool comp(node a,node b){
	return a.l<b.l;
}

int main()
{
	ios::sync_with_stdio(false);           //同步别忘关 
	priority_queue<st>q;
	int n,u=1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i].l>>arr[i].r;
		arr[i].num=i+1;
	}
	sort(arr,arr+n,comp);
	int count=0;
	for(int i=0;i<n;i++){
		if(q.empty()){
		    st now={arr[i].l,arr[i].r,++count};
		    b[arr[i].num]=count;
		    q.push(now);
		}
		else{
			st t=q.top();
			if(arr[i].l>t.r){
				q.pop();
				t.r=arr[i].r;
				b[arr[i].num]=t.num;
				q.push(t);
			}
			else{
				st x={arr[i].l,arr[i].r,++count};
				b[arr[i].num]=count;
				q.push(x);
			}
		}
	}
	cout<<count<<"\n";
	for(int i=1;i<=n;i++){
		cout<<b[i]<<"\n";
	}
	return 0;
}*/



/*贪心 K 
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;
const int maxn=1e6+10;
int n,a[maxn];


int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ans;
	ans=a[n-1];
	for(int i=n-2;i>=0;i--){
		ans=abs(a[i]-ans);
	}
	printf("%.10f",(double)ans);
	return 0;
 } */
 
 
 
/* dp A 
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int w[3410];
int v[3410];
int dp[13000];

int main()
{
	ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=v[i];j--){
			dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
		}
	}
	cout<<dp[m]<<"\n";
	return 0;
}*/
/* 动态 C
#include <stdio.h>
#include <string.h>
using namespace std;

char a[500];
char b[500];
int len1, len2;
int dp[500][500];

int max(int x,int y,int z){
	int ans;
	ans=x>y?x:y;
	ans=ans>z?ans:z;
	return ans;
}

int main()
{
	//ios::sync_with_stdio(false);
	while(~scanf("%s %s",a,b)){
		memset(dp,0,sizeof(dp));
		len1=strlen(a); len2=strlen(b);
		for(int i=0; i<len1; i++){
			for(int j=0; j<len2; j++){
				dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j],dp[i][j]+(a[i]==b[j]));
			}
		}
		printf("%d\n",dp[len1][len2]);
	}
	return 0;
}*/

/* 动态规划 D
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[10010];
int dp[10010];

int main()
{
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dp[1]=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i-1;j++){
			if(a[i]>a[j]&&dp[j]>dp[i]) dp[i]=dp[j];
		}
		dp[i]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		//printf("%d",dp[i]);
		ans=max(ans,dp[i]);
	}
	cout<<ans<<"\n";
	return 0;
}*/

/* 动态规划B
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring> 
using namespace std;
const int inf=0x3f3f3f3f;
int p[510];
int v[510];
int n,m,w,e,f;
int dp[10010];


int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		memset(dp,0x3f,sizeof(dp));
		dp[0]=0;
		cin>>e>>f;
		w=f-e;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>p[i]>>v[i];
		}
		for(int i=1;i<=n;i++){
			for(int j=v[i];j<=w;j++){
				dp[j]=min(dp[j],dp[j-v[i]]+p[i]);
			}
		}
		if(dp[w]==inf) printf("This is impossible.\n");
		else printf("The minimum amount of money in the piggy-bank is %d.\n",dp[w]);
	}

	
	return 0;
}*/

/*动态规划 E
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
//const int maxn=2e6;
int n,m;
int v[25];
int dp[1010];


int main()
{
	ios::sync_with_stdio(false);
	cin>>n>>m;
	//int h=(int) pow(2,(double)n);
	for(int i=1;i<=n;i++){
		cin>>v[i];
	}
	dp[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=m;j>=v[i];j--){
		    dp[j]=dp[j-v[i]]+dp[j];
		}
	}
	cout<<dp[m]<<'\n';
	return 0;
}*/


/*动态规划 F
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int inf=0x3f3f3f3f;
int n;
int dp[200001];
int a[150],w[150];

int main()
{
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>w[i];
	}
	int ans=0;
	memset(dp,-inf,sizeof(dp));
	//for(int i=0;i<=200000;i++)  dp[i]=-inf;
	dp[100000]=0;
	for(int i=1;i<=n;i++){
		if(a[i]>0)
		for(int j=200000;j>=a[i];j--){
			   dp[j]=max(dp[j-a[i]]+w[i],dp[j]);
			}
	    else 
	    for (int j=0;j<=200000+a[i];j++){
	    	dp[j]=max(dp[j-a[i]]+w[i],dp[j]);
		}
	}
    for(int u=100000;u<=200000;u++){
    	if(dp[u]>=0&&dp[u]+u-100000>ans) ans=dp[u]+u-100000;
	}
	if(ans<=0) cout<<0<<"\n";
	else cout<<ans<<"\n";
	return 0;
}*/

/*
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int inf=0x3f3f3f3f;
int n;
int dp[200000];
int a[150],w[150];

int main()
{
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>w[i];
		a[i]+=1000;
	}
	int ans=0;
	for(int i=0;i<=200000;i++)  dp[i]=-inf;
	dp[100000]=0;
	for(int i=1;i<=n;i++){
		
		if(a[i]>=0)
		for(int j=200000;j>=a[i];j--){
			dp[j]=max(dp[j-a[i]]+w[i],dp[j]);
			}
	    else 
	    for (int j=1;j<=200000+a[i];j++){
	    	dp[j]=max(dp[j-a[i]]+w[i],dp[j]);
		}            
		//if(a[i]>100000)
	//	for(int j=200000;j>=a[i];j--){
	//		dp[j]=max(dp[j-a[i]]+w[i],dp[j]);
    //			}
	   // else 
	    //for (int j=a[i];j<200000;j++){
	    //	dp[j]=max(dp[j-a[i]]+w[i],dp[j]);
		//}
	}
    for(int u=100000;u<=200000;u++){
    	if(dp[u]>=0) ans=max(dp[u]+u-100000,ans);
	}
	cout<<ans<<"\n";
	return 0;
}
*/
/*
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int inf=0x3f3f3f3f;
int n;
int dp[200000];
int a[150],w[150];

int main()
{
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>w[i];
		a[i]+=1000;
	}
	int ans=0;
	for(int i=0;i<=200000;i++)  dp[i]=-inf;
	dp[100000]=0;
	for(int i=1;i<=n;i++){
	/*	if(a[i]>=0)
		for(int j=200000;j>=a[i];j--){
			dp[j]=max(dp[j-a[i]]+w[i],dp[j]);
			}
	    else 
	    for (int j=1;j<=200000+a[i];j++){
	    	dp[j]=max(dp[j-a[i]]+w[i],dp[j]);
		}*/
		
	/*	if(a[i]>=100000)
		for(int j=200000;j>=a[i];j--){
			dp[j]=max(dp[j-a[i]]+w[i],dp[j]);
   		}
	    else 
	    for (int j=200000-a[i];j>=1;j--){
	    	dp[j]=max(dp[j+a[i]]+w[i],dp[j]);
		}
	}
    for(int u=100000;u<=200000;u++){
    	if(dp[u]>=0) ans=max(dp[u]+u-100000,ans);
	}
	cout<<ans<<"\n";
	return 0;
}*/


/* 搜索E
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;
ll m,n,s,ans;
ll k,a[25][25];
map<ll,ll>mp[25][25];
void dfs1(int x, int y, ll cnt){
	if(x>n||y>m) return ;
	cnt^=a[x][y];
	if(x+y==s) {
		//ans++; 
		mp[x][y][cnt]++;
		return;
	}
    dfs1(x+1,y,cnt);
    dfs1(x,y+1,cnt);
}


void dfs2(int x, int y, ll cnt){
	if(x<1||y<1) return;
	if(x+y==s){
		//cnt^=k;
		ans+=mp[x][y][cnt^k]; 
		return;
	}
	cnt^=a[x][y];//已经亦或过本身放前面会重 
	dfs2(x-1,y,cnt);
	dfs2(x,y-1,cnt);
}



int main()
{
	ios::sync_with_stdio(false);
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	ans=0;
	s=(m+n)/2+1;
	dfs1(1,1,0);
	dfs2(n,m,0);
	cout<<ans<<"\n";
	return 0;
}*/


/*
#clude <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespce std;
int n,x,y;

int prime[100000];

bool isprime(int a){
	int p = sqrt(a)+1;
	for(int i = 2; i <= p; i++){
		if(a%i==0) return false;
	}
	return true;
}



void dfs(int x, int cnt){
	
}



int main()
{
	for(int i = 1000; i <= 9999; i++){
		if(isprime(i)) prime[++k] = i;
	}
	ios::sync_with_stdio(false);
	cin >> n;
	while(n--){
		cin >> x >> y;
	}
	dfs1(x, cnt);
	dfs2(y, cnt);
}*//*



/* 图论 A 
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue> 
using namespace std;
 
int n,m;
struct Edge{
	//起点from，终点to
	int from, to;
};
int in[110];//入度 

int main()
{
	//ios::sync_with_stdio(false);
	//map<int,int>in;
	queue<int>q;
	vector<Edge> G[110];
	cin>>n;
	for(int i=1;i<=n;i++) G[i].clear();
	for(int i=1;i<=n;i++){
		while(cin>>m&&m){
			Edge now;
			now.from=i;
			now.to = m;
			G[i].push_back(now);
			in[m]++;
		}
	}
	for(int i=1;i<=n;i++){
		if(in[i]==0){
			q.push(i);
		}
	}
	
	while(!q.empty()){
		int x=q.front();
		cout<<x<<" ";
		for (int i = 0; i < G[x].size(); i++){
			int t=G[x][i].to;
		    in[t]--;
		    if(in[t]==0) q.push(t);
		} 
		q.pop();
    }
	return 0;
}*/


/* 图论-拓扑+dfs B
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <string> 
#include <cstring>
using namespace std;

string str, str2;
int a, b, len;
int le[25], lenum[125];//分别存每个字符的assci码和每个字符对应的编号 
int ma[125][125];//存边 
int in[25];//存每个点的入度； 
int vis[25];//记入是否访问过 
int cnt;
int pr[25];//dfs的形参用于最后输出 


void dfs(int x, int cnt, int *pr){
	vis[x] = 1;
	cnt++;
	pr[cnt] = le[x];
	if(cnt == len) {//到达长度为一个答案 
		for(int i = 1; i <= len; i++){
			if(i == len) {
				printf("%c\n",pr[i]); 
			}
			else printf("%c",pr[i]); 
		}
		vis[x] = 0;
		return;
	}
	//x指向的点入度-1
	for( int i = 1; i <= len; i++){
		if(ma[x][i] == 1) {
			ma[x][i] = -1;//存在边且已用过 
			in[i]--;
			
		}
	} 
	for(int i = 1; i <= len; i++){
		if(vis[i] == 0 && in[i] == 0) dfs(i, cnt, pr);
	}
	for(int i = 1; i <= len; i++){
		if(ma[x][i] == -1) {
			ma[x][i] = 1;
			in[i]++;    //恢复以消除对后续dfs的影响 
		}
	}
	vis[x] = 0;
} 




int main()
{
	while(getline(cin, str)){
		memset(le, 0, sizeof(le));
		memset(ma, 0, sizeof(ma));
		memset(in, 0, sizeof(in));
		memset(vis, 0, sizeof(vis));
		memset(lenum, 0, sizeof(lenum));
	    sort(str.begin(), str.end());
	    //len = str.size();
	    int tot=0;
		for(int i = 0; i < str.size(); i++){
			if(str[i] != ' ')
			le[++tot] = (int)str[i];
			lenum[str[i]] = tot;
		}
		len = tot;
		getline(cin,str2);
		//读入边 
		for(int i = 0; i < str2.size(); i+=4){
			int x, y;
			x = (int)str2[i]; y = (int)str2[i+2];
			ma[lenum[x]][lenum[y]] = 1;
			in[lenum[y]]++;    
		}
		cnt = 0;
		for(int i = 1; i <= len; i++){
			if(in[i] == 0) dfs(i, cnt, pr);//如果入度为0就深搜索 
		}
		cout<<"\n";
	}
	return 0;
}*/



/*最短路 A
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring> 
#include <utility>
#include <queue>

using namespace std;
const int maxn = 1e3 + 5;
const int inf = 0x3f3f3f3f;
int n, m, x, y, w;
int dis[maxn];
int vis[maxn];
int inq[maxn];

struct node{
	int a, b, s;
};

priority_queue<pair<int ,int>, vector<pair<int ,int> >, greater<pair<int ,int> > >q;
vector<node> G[maxn];

int main()
{
	ios::sync_with_stdio(false);
	memset(dis, 0x3f, sizeof(dis));
	cin >> m >> n;
	while(m--){
		cin >> x >> y >> w;
		node t, t2;
		t.a = x; t.b = y; t.s = w;
		t2.a = y; t2.b = x; t2.s = w;
		G[x].push_back(t);
		G[y].push_back(t2);
	}
	dis[1]= 0;
	q.push(make_pair(0,1));
	inq[1] = 1;
	while(!q.empty()){
		pair<int, int>now = q.top(); q.pop();
		int nn = now.second;
		if(vis[nn]==1) continue;
		vis[nn] = 1;
		for(int i = 0; i < G[nn].size(); i++){
			 int j = G[nn][i].b, k = G[nn][i].s;
			 if(dis[j] > k + dis[nn]){
			 	dis[j] = k + dis[nn];
			 	if(inq[j]==0){
			 		q.push(make_pair(dis[j],j));
			 		inq[j]=1;
				 }
			 	
			 }
        }
        
	}
    cout << dis[n] << "\n";
    return 0;
}
*/

/* B 最短路 
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring> 
#include <utility>
#include <queue>
#include <map>
#include <string>
#include <cstring>

using namespace std;
const int maxn = 40;
const int inf = 0x3f3f3f3f;
int n, m;
string x, y;
double w;
string name;
double dis[maxn];

struct node{
	int b; double s;
};
vector<node> G[maxn];
map<string, int>na;

void bellma(int s){
	for(int i = 1; i <= n; i++){
		dis[i] = 0;
	}
	dis[s] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
	        for(int k = 0; k < G[j].size(); k++){
	        	int to = G[j][k].b; 
	        	dis[to] = max(dis[to], dis[j] *G[j][k].s);
			}		
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	int cnt = 0;
	while(cin >> n, n){
		na.clear();
		for(int i = 1; i <= n; i++){  //注意别忘了清空堆与map 
			G[i].clear();
		}
		int flag = 0;
		int nx = n;
		int tot = 0;
		//字符串转编号 
		while(nx--){
			cin >> name;
			na[name] = ++tot;
		}
		cin >> m;
		//存储边关系 
		while(m--){
			cin >> x >> w >> y;
			node t, t2;
			t.b =na[y]; t.s = w;
			G[na[x]].push_back(t);
		}
		for(int i = 1; i <= n; i++){
			bellma(i);
			if(dis[i] > 1) {
				cout << "Case " << ++cnt << ": Yes\n"; 
				flag = 1;
				break;
			}
		}
		if(!flag)
		cout <<  "Case " << ++cnt << ": No\n";
	}
    return 0;
}*/


/*
最短路 H 
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <cstring>
using namespace std;
const int inf = 0x3f3f3f3f;
struct node{
	int from, to, w;
};

int n,m;
int dis[110];
int vis[110];
int inq[110];
vector <node>g[110];
priority_queue<pair<int ,int>, vector<pair<int ,int> >, greater<pair<int ,int> > >q; 

void dijkstra(){
	dis[1] = 0;
	q.push(make_pair(dis[1],1));
	inq[1] = 1;
	while(!q.empty()){
		pair<int, int>now = q.top();
		q.pop();
		if(vis[now.second]) continue;
		vis[now.second] = 1;
		int from = now.second;
		for(int i =0; i < g[from].size(); i++){
			int to = g[from][i].to;
			int w = g[from][i].w;
			if(dis[to] > dis[from] + w){
				dis[to] = dis[from] + w;
				if(!inq[to]) q.push(make_pair(dis[to], to));
			} 
		}
	}
}

int main()
{
	while(cin >> n >> m, n||m){
		memset(dis, inf, sizeof(dis));
		memset(vis, 0, sizeof(vis));
		memset(inq, 0, sizeof(inq));
		for(int i = 1; i <= n; i++){
			g[i].clear();
		}
		while(m--){
			node no;
			cin >> no.from >> no.to >> no.w;
			g[no.from].push_back(no);
			node no2;
			no2.from = no.to; no2.to = no.from; no2.w = no.w;
			g[no2.from].push_back(no2);
		}
		dijkstra();
		cout << dis[n] << '\n';
	}
	return 0;
}
*/

/*C 最短路 
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <cstring>
using namespace std;
const int inf = 0x3f3f3f3f;
struct node{
	int from, to, w;
};

int n, m, a, b;
int dis[110];
int vis[110];
int inq[110];
vector <node>g[110];
priority_queue<pair<int ,int>, vector<pair<int ,int> >, greater<pair<int ,int> > >q; 

void dijkstra(){
	dis[a] = 0;
	q.push(make_pair(dis[a],a));
	inq[a] = 1;
	while(!q.empty()){
		pair<int, int>now = q.top();
		q.pop();
		if(vis[now.second]) continue;
		vis[now.second] = 1;
		int from = now.second;
		for(int i =0; i < g[from].size(); i++){
			int to = g[from][i].to;
			int w = g[from][i].w;
			if(dis[to] > dis[from] + w){
				dis[to] = dis[from] + w;
				if(!inq[to]) q.push(make_pair(dis[to], to));
			} 
		}
	}
}

int main()
{
	memset(dis, 0x3f, sizeof(dis));
	cin >> n >> a >> b;
	for(int i = 1; i <= n; i++){
		cin >> m; 
		int flag = 1;//又又又又死在这了！！！！ 
		while(m--){
			int to; 
			cin >> to;
			node no;
			no.from = i;
			no.to = to;
			if(flag) {
				no.w = 0; flag = 0;
			}
			else no.w = 1;
			g[i].push_back(no);
	    }
	}
	
	dijkstra();
	if(dis[b] == inf) cout << "-1" << endl;
	else cout << dis[b] << endl;
	return 0;
}
*/
/* 最短路 G
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <map>
#include <cstring>
const int maxn = 5000;
using namespace std;
int ft[110], bk[110];
int mp[110][110];
int n,m;
int win, lost;
int main()
{
	cin >> n >> m;
	int ans = 0;
	while(m--){
		cin >> win >> lost;
		mp[win][lost] = 1;
	}
	for(int k = 1; k <= n; k++){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(mp[i][j] == 0 && mp[i][k] == 1 && mp[k][j] == 1) mp[i][j] = 1;
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(mp[i][j] == 1) bk[i]++;
			if(mp[j][i] == 1) ft[i]++;
		}
		if(bk[i] + ft[i] == n-1) ans++;
	}
	cout << ans << "\n";
	return 0;
}
*/

/* 最短路 D 
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
#include <vector>
#include <cmath>

using namespace std;
const double v1 = 1000.0 / 6.0;
const double v2 = 4000.0 / 6.0;
const int inf = 0x3f3f3f3f;
double time[210];
int mp[210][210];
struct pos{
	int x, y, num, s;//s是否为同一条铁路 
}a[210];
struct node{
	int from, to;
	double w;
};
vector<node>g[210];

double dis(int x1, int y1, int x2, int y2){
	return sqrt((double)((x1 - x2) * (x1 - x2)) + (double)((y1 - y2) * (y1 - y2)));
}

int main()
{
	int x1, x2, y1, y2;
	ios::sync_with_stdio(false);
	int x, y;
	int cnt = 2, tot = 0;
	cin >> x1 >> y1 >> x2 >> y2;
	a[1].x = x1; a[1].y = y1; a[1].num = 1; a[1].s = 0;
	a[2].x = x2; a[2].y = y2; a[2].num = 2; a[2].s = tot++;
	while (cin >> x >> y){
		if(x != -1 && y != -1){
			a[++cnt].x = x; a[cnt].y = y; a[cnt].num = cnt; 
			a[cnt].s = tot; 
		}
		else{
			for(int u = cnt; ; u--){
				node no1, no2;
				no1.from = u; no1.to = u - 1;
				no2.from = u - 1; no2.to = u;
				if(a[u].s == a[u - 1].s) {
					no1.w = dis(a[u].x, a[u].y, a[u-1].x, a[u-1].y) / v2;
					no2.w = dis(a[u].x, a[u].y, a[u-1].x, a[u-1].y) / v2;
					g[u].push_back(no1);
					g[u - 1].push_back(no2);
					mp[u][u-1] = 1;
					mp[u-1][u] = 1;  //注意这个点 
				}
				else break;
			}
			tot++;
		}
	}
	for(int i = 1; i <= cnt; i++){
		time[i] = 999999999.0;
		for(int j = 1; j <= cnt; j++){
			if(i!=j){
				
				if(!mp[i][j]){
					node now;
				    now.from = i; now.to = j;
				    now.w = dis(a[i].x, a[i].y, a[j].x, a[j].y) / v1;
				    g[i].push_back(now);
				}
				
			}
		}
	}
	//blm
	time[1] = 0.0;
	for(int i = 1; i < cnt; i++){
		for(int j = 1; j <= cnt; j++){
			for(int k = 0; k <g[j].size(); k++){
				int to = g[j][k].to;
				double w = g[j][k].w;//注意double  
				if(time[to] > time[j] + w ){
					time[to] = time[j] + w;
				}
			}
		}
	}
	int ans = (int)(time[2] + 0.5); //注意这个点 
	cout << ans << "\n";
	return 0;
}*/

/* 最短路 F spfa
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue> 
#include <vector>
#include <map>

using namespace std;

const int inf = 0x3f3f3f3f;
int dis[1010];
int disn[1010];
int inq[1010];
int n, m, x;
struct node{
	int from, to ,w;
};
vector<node>g[1010], g2[1010];
queue<int>q;

void spfa1()
{
	for(int i= 1; i <= n; i++){
		dis[i] = inf;
	}
	dis[x] = 0;
	q.push(x);
	inq[x] = 1;
	while(!q.empty()){
		int nn = q.front();
		q.pop();
		inq[nn] = 0;
		for(int i = 0; i < g[nn].size(); i++){
			int to = g[nn][i].to;
			int w = g[nn][i].w;
			if(dis[to] > dis[nn] + w){//成功松弛才入队 
				dis[to] = dis[nn] + w;
				if(inq[to] == 0) {
					q.push(to);
					inq[to] = 1;
				}
			}
		}
	}
}

void spfa2()
{
	for(int i= 1; i <= n; i++){
		disn[i] = inf;
	}
	disn[x] = 0;
	q.push(x);
	inq[x] = 1;
	while(!q.empty()){
		int nn = q.front();
		q.pop();
		inq[nn] = 0;
		for(int i = 0; i < g2[nn].size(); i++){
			int from = g2[nn][i].from;
			int w = g2[nn][i].w;
			if (disn[from] > disn[nn] + w) {
				disn[from] = disn[nn] + w;
				if(inq[from] == 0) {
					q.push(from);
					inq[from] = 1;
				}
			}
		}
	}
}
int main()
{
	cin >> n >> m >> x;
	while (m--){
		int f, t, w;
		node now;
		cin >> f >> t >> w;
		now.from = f; now.to = t; now.w = w;
		g[f].push_back(now);
		g2[t].push_back(now);
	}
	spfa1();
	for(int i = 1; i <= n; i++){
		inq[i] = 0;
	}
	spfa2();
	int ans = 0;
	for(int i = 1; i <= n; i++){
		ans = max(dis[i] + disn[i], ans);
	}
    cout << ans << "\n";
	return 0;
}
*/
/*
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
#include <vector>
#include <cstring>
using namespace std;
const int inf = 0x3f3f3f3f;
int a[210];//装点的权值 
int inq[210];
int dis[210];
//int infu[210];// 表示在负环中 
int tim[210];//记入松弛次数
struct node {
	int from, to, w;
};
int n, m, Q;
vector<node>g[210];
queue<int>q; 

void spfa(){
	for(int i = 1; i <= n; i++){
		dis[i] = inf;
	}
	dis[1] = 0;
	q.push(1);
	inq[1] = 1;
	while(!q.empty()){
		int nn = q.front();
		q.pop();
		inq[nn] = 0;
		tim[nn] ++;
		for(int i = 0; i < g[nn].size(); i++){
			int to = g[nn][i].to;
			int w = g[nn][i].w;
			if(dis[to] > dis[nn] + w){
				dis[to] = dis[nn] + w;
			    if(tim[to] <= n && !inq[to]) {//n+1次的就不在放入 这样保证负环一定至少遍历了n+1次 
			    	q.push(to);
			    	inq[to] = 1;
				}
			}
		}
	}
	
}

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	for(int d = 1; d <= t; d++){
		for(int j = 0; j <=300; j++){
			a[j] = 0;
			inq[j] = 0;
			tim[j] = 0;
			//infu[j] = 0;
		}
		for(int i = 1; i <= 210; i++){
			g[i].clear();
		}
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		cin >> m;
		while(m--){
			int f, t;
			node now;
			cin >> f >> t;
			now.from = f;
			now.to = t;
			now.w = (t - f) * (t - f) * (t - f);
			g[f].push_back(now);
		}
		spfa();
		cout << "Case " << d << ":\n";
		cin >> Q;
		while(Q--) {
			int s;
			cin >> s;
			if(tim[s] >= n || dis[s] < 3 || dis[s] == inf)  {
				cout << "?\n";
			}
			else cout << dis[s] << "\n";
		} 
		 
	}
	return 0;
}
*/

/*
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
#include <vector>
#include <cstring>
using namespace std;
const int inf = 0x3f3f3f3f;
int a[210];//装点的权值 
int inq[210];
int dis[210];
int infu[210];// 染色表示在负环中 
int tim[210];//记入松弛次数
struct node {
	int from, to, w;
};
int n, m, Q;
vector<node>g[210];
queue<int>q; 

void dfs(int x){
	infu[x] = 1;
	for(int i = 0; i < g[x].size(); i++){
		int to = g[x][i].to;
		if(!infu[to]) dfs(to);//竟然把函数括号打成了方括号！！！ 
	}
}

void spfa(){
	for(int i = 1; i <= n; i++){
		dis[i] = inf;
	}
	dis[1] = 0;
	q.push(1);
	inq[1] = 1;
	tim[1] = 0;
	while(!q.empty()){
		int nn = q.front();
		q.pop();
		inq[nn] = 0;
		if(infu[nn]) continue;
		for(int i = 0; i < g[nn].size(); i++){
			int to = g[nn][i].to;
			int w = g[nn][i].w;
			if(dis[to] > dis[nn] + w){
				dis[to] = dis[nn] + w;
				tim[to] = tim[nn] + 1;
			    if(!inq[to]) {
			    	if(tim[to] >= n) dfs(to);
			    	q.push(to);
			    	inq[to] = 1;
				}
			}
		}
	}
	
}

int main()
{

	int t;
	scanf("%d", &t);
	for(int d = 1; d <= t; d++){
		for(int j = 0; j <=300; j++){
			a[j] = 0;
			inq[j] = 0;
			tim[j] = 0;
			infu[j] = 0;
		}
		for(int i = 1; i <= 210; i++){
			g[i].clear();
		}
		scanf("%d", &n);
		for(int i = 1; i <= n; i++){
			scanf("%d", &a[i]);
		}
		scanf("%d", &m);
		while(m--){
			int f, t;
			node now;
			scanf("%d %d", &f, &t);
			now.from = f;
			now.to = t;
			now.w = (t - f) * (t - f) * (t - f);
			g[f].push_back(now);
		}
		spfa();
	    printf("Case %d:\n",d);
		scanf("%d",&Q);
		while(Q--) {
			int s;
			scanf("%d", &s);
			if(infu[s] || dis[s] < 3 || dis[s] == inf) {
				printf("?\n");
			}
			else printf("%d\n",dis[s]);
		} 
		 
	}
	return 0;
}
*/


/* 线段数组 C 
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
#define int long long 

using namespace std;
const int maxn = 1e6 + 10;
int a[maxn];
int c[2][maxn];
int l, r, n, q, x, num;

int lowbit(int x){
	return x&-x; 
}

void update(int x, int val){
	int v1 = val * x;
	for(int i = x; i <= n; i = i + lowbit(i)) c[0][i] += val, c[1][i] += v1;
}

int getsum (int x){
	int ans1 = 0, ans2 = 0, xx = x;
	for(int i = x; i > 0; i = i - lowbit(i)){
		ans1 += c[0][i]; ans2 += c[1][i];
	}
	return ans1*(x + 1) - ans2;
}

signed main()
{
	scanf("%lld %lld", &n, &q);
	for(int i = 1; i <= n; i++){
		scanf("%lld", &a[i]);
		update(i, a[i] - a[i - 1]);
	}
	while(q--){
		scanf("%lld", &num);
		if(num == 1){
			scanf("%lld %lld %lld",&l, &r, &x);
			update(l, x);
			update(r + 1, -x);
		}
		if(num == 2){
			scanf("%lld %lld", &l, &r);
			printf("%lld\n",getsum(r) - getsum(l-1));
		}
	}
	return 0;
}
*/
/* 树状树  A
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
const int maxn = 35000;
int n;
int tree[maxn<<2];
int rank[maxn];

void build(int l, int r, int num){
	if(l == r) {
		tree[num] = 0;
		return;
	}
	int mid = (l + r)/2;
	build(l, mid, num<<1);
	build(mid + 1, r, num<<1|1);
	tree[num] = tree[num<<1] + tree[num<<1|1];
}

void update(int l, int r, int x, int num){
	if(l == r){
		tree[num]++;
		return;
	}
	int mid = (l + r)/2;
	if(x <= mid) update(l, mid, x, num<<1);
	else update(mid + 1, r, x, num<<1|1);
	tree[num] = tree[num<<1] + tree[num<<1|1];
}

int query(int l, int r, int x, int num){
	if(l>=1 && r<=x) return tree[num];
	int mid = (l + r)/2;
	int ans = 0;
	if(mid >= 1) ans += query(l, mid, x, num<<1);
	if(mid < x) ans += query(mid + 1, r, x, num<<1|1);
	return ans;
}

int main() 
{
	scanf("%d", &n);
	build(1, 1, 35000);
	for(int i = 0; i < n; i++){
		int x, y;
		scanf("%d %d", &x ,&y);
		rank[query(1, 35000, x+1, 1)]++;
		update(1, 35000, x+1, 1);
	}
	for(int i = 0; i < n; i++){
		printf("%d\n", rank[i]);
	}
	return 0;
} */


/*1025
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
struct node{
	int pre, num, back;
};
struct node2{
	int p, num, b;
};
struct node pre[100010], after[100010];
struct node2 bb[100000];
int main()
{
	int head, n, k;
	scanf("%d %d %d", &head, &n, &k);
	for(int i = 0; i < n; i++){
		int x, y, z;
		scanf("%d %d %d",&x, &y, &z);
		bb[x].p = x;
		bb[x].num = y;
		bb[x].b = z;
	}
	int nn;
	for(int i = 1; i <= n; i++){
			pre[i].pre = bb[head].p;
			pre[i].num = bb[head].num;
			pre[i].back = bb[head].b;
			head = pre[i].back;
			if(head == -1) {
				nn = i;
				break;
			}
		}
//	for(int i = 1; i <= n; i++){
//		printf("%05d %d %05d\n",pre[i].pre, pre[i].num, pre[i].back);
//	}
	int pp = 0, j = k;
	for(int i = 1; i <= nn, j <= nn; i++){
		if(j > pp)
		after[i] = pre[j--];
		else{
			j += k * 2;
			pp += k;
			i--; 
		}
	}
    if(j > nn) j = j - k + 1;
	for(int i = j; i <= nn; i++){
		after[i] = pre[i];
	}
//	for(int i = 1; i <= n; i++){
//	printf("%05d %d %05d\n",after[i].pre, after[i].num, after[i].back);
//	}

	for(int i = 1; i <= nn; i++){
		printf("%05d %d",after[i].pre, after[i].num);
		if(i == nn) printf(" %d\n", -1);
		else printf(" %05d\n",after[i + 1].pre);
	}
	return 0;
 } */
 
/* 树状树 B 
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 50010;
const int inf = 0x3f3f3f3f;
struct node{
	int mmin, mmax;
}tree[maxn<<2];
int mmax = -inf, mmin = inf;
int n, q, a[maxn];

void build(int l, int r, int num){
	if(l == r){
		tree[num].mmin = tree[num].mmax = 0;
		return;
	}
	int mid = (l + r)/2;
	build (l, mid, num<<1);
	build (mid + 1, r, num<<1|1);
	tree[num].mmin = min(tree[num<<1].mmin, tree[num<<1|1].mmin);
	tree[num].mmax = max(tree[num<<1].mmax, tree[num<<1|1].mmax);
}

void update(int l, int r, int pos, int v, int num){
	if(l == r) {
		tree[num].mmin += v;
		tree[num].mmax += v;
		return;
	}
	int mid = (l + r)/2;
	if(pos <= mid) update(l, mid, pos, v, num<<1);
	else update(mid + 1, r, pos, v, num<<1|1); 
	tree[num].mmin = min(tree[num<<1].mmin, tree[num<<1|1].mmin);
	tree[num].mmax = max(tree[num<<1].mmax, tree[num<<1|1].mmax);
}

node query(int l, int r, int xl, int xr, int num){
	if(l>=xl && r<=xr){
		return tree[num];
	}
	int mid = (l + r)/2;
	node ans, a1 = {inf, -inf}, a2 = {inf, -inf};
	if(mid >= xl) a1 = query(l, mid, xl, xr, num<<1);
	if(mid < xr) a2 = query(mid + 1, r, xl, xr, num<<1|1);
	ans.mmax = max(a1.mmax, a2.mmax);
	ans.mmin = min(a1.mmin, a2.mmin);
	return ans;
}

int main()
{
	scanf("%d %d", &n, &q);
	build(1, n, 1);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		update(1, maxn, i, a[i], 1);
	}
	while(q--){
		mmax = -inf, mmin = inf;
		int xl, xr;
		scanf("%d %d", &xl, &xr);
		node ans;
		ans = query(1, maxn, xl, xr, 1);
		printf("%d\n",ans.mmax - ans.mmin);
	}
	return 0;
 } 
 */
/*
线段树  D
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 50010;
struct node{
	int l, r, sum, presum, lastsum, ans;
}tree[maxn<<2];
int a[maxn];
int n, q;

node merge(node ll, node rr){
	node ans;
	ans.l = ll.l;
	ans.r = rr.r;
	ans.sum = ll.sum + rr.sum;                  
	ans.presum = max(ll.presum, ll.sum + rr.presum);
	ans.lastsum = max(rr.lastsum, rr.sum + ll.lastsum);
	ans.ans = max(ll.ans, rr.ans);
	ans.ans = max(ans.ans, ll.lastsum + rr.presum);
	return ans;
}

void push_up(int num){
	tree[num] = merge(tree[num<<1], tree[num<<1|1]);
}

void build(int l, int r, int num){
	tree[num].l = l;
	tree[num].r = r;
	if(l == r){
		tree[num].sum = a[l];
		tree[num].presum = a[l];
		tree[num].lastsum = a[l];
		tree[num].ans = a[l];
		return;
	}
	int mid = (l + r)/2;
	build(l, mid, num<<1);
	build(mid + 1, r, num<<1|1);
	push_up(num);
}

node query(int l, int r, int ql, int qr,int num){
	if(ql<=l && qr>=r){
		return tree[num];
	}
	int mid = (l + r)/2;
	if(mid>=ql && mid<qr) return merge(query(l, mid, ql, qr, num<<1), query(mid + 1, r, ql, qr, num<<1|1));
	else if(mid >= qr) return query(l, mid, ql, qr, num<<1);
	else if(mid < ql) return query(mid + 1, r, ql, qr, num<<1|1);
}

int main()
{
	 scanf("%d",&n);
	 for(int i=1; i<=n; i++){
	 	scanf("%d",&a[i]);
	 }
	 build(1, n, 1);
	 scanf("%d",&q);
	 while(q--){
	 	int l, r;
	 	scanf("%d %d",&l, &r);
	 	node ans;
	 	ans = query(1, n, l, r, 1);
	 	printf("%d\n", ans.ans);
	 }
	 return 0;
} */

/*1035 
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[110], b[110], c[110];

void getin(int a[], int b[]){
	for(int i=2; i<=n; i++){
		sort(a, a+i);
		if(equal(a, a+n, b)){
			sort(a, a+i+1);
			printf("Insertion Sort\n");
			for(int j=0; j<n; j++){
				if(j == n-1) printf("%d\n", a[j]);
				else printf("%d ", a[j]);
			}
			break;
		}
	}
	
}

void merge(int a[], int b[]){
	int i;
	for(i=2; i<=n; i*=2){
		for(int j=0; j<n; j+=i){
			if(j + i < n)
			sort(a+j, a+j+i);//b边界要小心 
			else sort(a+j, a+n);
		}
		if(equal(a, a+n, b)){
			i*=2;
			for(int j=0; j<n; j+=i){
				if(j + i < n)
				sort(a+j, a+j+i);//b边界要小心 
				else sort(a+j, a+n);
			}
			printf("Merge Sort\n");
			for(int j=0; j<n; j++){
				if(j == n-1) printf("%d\n", a[j]);
				else printf("%d ", a[j]);
			}
			break;
		}
	}
}



int main()
{
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		c[i] = a[i];
	}
	for(int i=0; i<n; i++){
		scanf("%d", &b[i]);
	}
	getin(a, b);
	merge(c, b);
	return 0;
}
*/
/*1071
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int k, n;
	cin >> k >> n;
	while(n--){
		int n1, b, t, n2;
		cin >> n1 >> b >> t >> n2;
		if(t > k) printf("Not enough tokens.  Total = %d.\n", k);
		else if(b == 0){
			if(n2 < n1) {
				k += t;
				printf("Win %d!  Total = %d.\n", t, k);
			}
			else{
				k -= t;
				if(k == 0) {
					printf("Lose %d.  Total = %d.\n", t, k);
					printf("Game Over.\n");
					break;
				}
				else {
					printf("Lose %d.  Total = %d.\n", t, k);
				}
			}
		}
		else if(b == 1){
			if(n2 > n1) {
				k += t;
				printf("Win %d!  Total = %d.\n", t, k);
			}
			else{
				k -= t;
				if(k == 0) {
					printf("Lose %d.  Total = %d.\n", t, k);
					printf("Game Over.\n");
					break;
				}
				else {
					printf("Lose %d.  Total = %d.\n", t, k);
				}
			}
		}
	}
	return 0;
}
*/

/*1045
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 100010;
int minn[maxn], mmax[maxn]; 
int a[maxn], b[maxn], n;
const int inf = 0x3f3f3f3f;
int mn = inf, mx = 0;
int main()
{
	scanf("%d", &n);
	if (n==1) {
		int d;
	    scanf("%d",&d);
		printf("%d\n%d",1, d);
	} 
	else{
		for(int i = 1; i <=n; i++){
			scanf("%d", &a[i]);
			if(i == 1) continue;
			mx = max(mx, a[i-1]);
			mmax[i] = mx;
		}
		for(int i = n; i>0; i--){
			if(i == n) continue;
			mn = min(mn, a[i+1]);
			minn[i] = mn;
		}
		int count = 0, k = 1;
		for(int i = 1; i <= n ; i++){
			if(i == 1){
				if(a[i] < minn[i]){
					count++;
				    b[k++] = a[i];
				}
			}
			else if(i == n){
				if(a[i]>mmax[i]){
					count++;
				    b[k++] = a[i];
				}
			}
			else if(a[i]>mmax[i] && a[i]<minn[i]) {
				count++;
				b[k++] = a[i];
			}
		}
		sort(b+1, b+k);
		printf("%d\n",count);
		if(count==0) printf("\n");
		for(int i = 1; i <= count; i++){
			if (i==1)
			printf("%d",b[i]);
			else printf(" %d", b[i]);
		}
	}
	return 0;
} */

/*1055
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
struct people{
	char name[10];
	int tall;
}peo[10005],pl[10005];
int n, k, m, nn;

bool comp(people a, people b){
	if(a.tall != b.tall) return a.tall > b.tall;
	else {
		if(strcmp(a.name, b.name) < 0) return true;
		else return false;
	}
}

void que(people* peo, people* pl, int pre, int end){
	int cnt = (end - pre + 1);
	int mid = (cnt)/2 + pre;
	
	if(cnt%2==0){
		int sum = 2*mid - 1;
		for(int i=pre, j = mid; i<=end; i+=2, j++){
			pl[j] = peo[i];
			pl[sum-j] = peo[i+1];
		}
	}
	else{
		int sum = 2*mid;
		pl[mid] = peo[pre];
		for(int i=pre+1, j=mid-1; i<=end&&j>=pre; i+=2, j--){
			pl[j] = peo[i];
			pl[sum-j] = peo[i+1];
		}
	}
}

int main()
{
	scanf("%d %d", &n, &k);
	m = n/k;
	nn = n - m*(k-1);
	for(int i = 0; i < n; i++){
		scanf("%s %d", peo[i].name, &peo[i].tall);
	}
	sort(peo, peo+n, comp);
	que(peo, pl, 0, nn-1);
	for(int i=nn; i<n; i+=m){
		que(peo, pl, i, i+m-1);
	}
	for(int i=0; i<nn; i++){
		if(i==nn-1) printf("%s\n",pl[i].name);
		else printf("%s ",pl[i].name);
	}
	int count = 0;
	for(int i=nn; i<n; i++){
		count++;
		if(count==m){
			count=0;
			printf("%s\n",pl[i].name);
		}
		else printf("%s ",pl[i].name);
	}
	return 0;
}
*/
/*1060
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int const maxn = 100010;
int a[maxn];
int n;

bool comp(int a, int b){
	return a > b;
}


int main()
{
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	sort(a+1, a+n+1, comp);
	int flag = 1;
	for(int i = 1; i <= n; i++){
		if(a[i] <= i){
			flag = 0;
			printf("%d\n", i-1);
			break;
		}
		if(i == n) {
			printf("%d\n",n);
			flag = 0;
		}
	}
	if(flag) printf("%d",0);
	return 0;
 } 
*/

/*1065 注意0的情况 
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 100010;
int n, m;
int par[maxn], sig[maxn], q[maxn];
int main()
{
	scanf("%d", &n);
	while(n--){
		int a, b;
		scanf("%d %d", &a, &b);
		if(a==0) a=100000;
		if(b==0) b=100000;
		par[a] = b;
		par[b] = a;
	}
	scanf("%d", &m);
	int count = m;
	for(int i=1; i<=m; i++){
		scanf("%d", &q[i]);
		if(q[i]==0) q[i] = 100000;
		sig[q[i]] = 1;
		if(sig[q[i]]==1 && sig[par[q[i]]]==1) count-=2;
	}
	printf("%d\n", count);
	sort(q+1, q+m+1);
	int flag = 1;
	for(int i=1; i<=m; i++){
		if(sig[q[i]]==1 && sig[par[q[i]]]==1) continue;
		if(flag){
			flag = 0;
			if(q[i] == 100000) q[i] = 0;
			printf("%05d", q[i]);
		}
		else {
			if(q[i] == 100000) q[i] = 0;
			printf(" %05d", q[i]);
		}
	}
	return 0;
}*/
/*
stl F
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
const int maxn = 1e5 + 10;
int n;
int a, b, ans; 
unordered_map<int, int> fa, sz;

int find (int x){
	return x == fa[x] ? x : fa[x] = find(fa[x]);
}

void merge(int a, int b){
	int x = find(a); 
	int y = find(b);
	if(x == y) return;
	else {
		if(sz[x] > sz[y]) swap(x, y);
		fa[x] = y;
		sz[y] += sz[x];
		ans = max(ans, sz[y]);
	}
}

int main() 
{
	int t;
	scanf("%d", &t);
	while(t--){
		fa.clear();
		sz.clear();
		scanf("%d", &n);
	    ans = 1;
		for(int i = 1; i <= n; i++){
			//count++;
			scanf("%d %d", &a, &b);
			if(fa[a] == 0) {
				fa[a] = a;
				sz[a] = 1;
			}
			if(fa[b] == 0) {
				fa[b] = b; 
				sz[b] = 1;
			}
			merge(a, b);
		}
		printf("%d\n", ans);
	}
	
	return 0;
}
  */
 /* 并查集G 
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
const int maxn = 5e4 + 10;
int fa[maxn * 3];

int find(int x) {
	return x == fa[x] ? x : fa[x] = find(fa[x]);
}

void merge(int x, int y){
	x = find(x), y = find(y);
	if(x != y){
		fa[x] = y;
	}
}

int main()
{
	int n, m, count = 0;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n * 3; i++){
		fa[i] = i;
	}
	while(m--){
		int d, x, y;
		scanf("%d %d %d", &d, &x, &y);
		if(d == 1) {
			if(x > n || y > n) count++;
			else if(x == y) continue;
			else {
				if(find(x + n) == find(y) || find(x + 2 * n) == find(y)){
					count++;
				}
				else {
					merge(x, y);
					merge(x + n, y + n);
					merge(x + 2 * n, y + 2 * n);
				}
			}
		}
		else {
			if(x == y) count++;
			else if(x > n || y > n) count++;
			else {
				if(find(x) == find(y) || find(x + 2 * n) == find(y)) {
					count++;
				}
				else {
					merge(x + n, y);
					merge(x, y + 2 * n);
					merge(x + 2 * n, y + n);
				}
			}
		}
	}
	printf("%d\n", count);
	return 0;
}*/

/*1070
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
using namespace std;
const int maxn = 1e4 + 10;
double a[maxn];
int n;
priority_queue <double, vector<double>, greater<double> >q;



int main()
{
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%lf", &a[i]);
		q.push(a[i]);
		
	}
	double x , y;
	while (!q.empty()){
		x = q.top(); q.pop();
		//printf("%d\n", x);
		y = q.top(); q.pop();
		x = x/2.0 + y/2.0;
		//printf("%d %d %lf ", q.size(), q.empty(), x);
		if(q.empty()) break;
		q.push(x);
	}
	printf("%d\n",(int)x);
	return 0;
} */
/*1072
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	int n, m;
	int no[10];
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= m; i++){
		scanf("%d", &no[i]);
	}
	int count1 = 0, count2 = 0, k;
	char name[6];
	for(int i = 1; i <= n; i++){
		scanf("%s %d", name, &k);
		int flag = 1, flag2 = 1;
		while (k--){
			int s;
			scanf("%d", &s);
			for (int j = 1; j <= m; j++){
				if (s == no[j]) {
					if(flag2) {
						count1++;
						flag2 = 0;
					}
					count2++;
					if(flag) {
						flag = 0;
						printf("%s: %04d", name, s);
					}
					else {
						printf(" %04d", s);
					}
				}
				
			}	
		}
		if(flag == 0) printf("\n");
	}
	printf("%d %d", count1, count2);
	return 0;
}*/

/*1073
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

 struct problem {
 	int score,amount,ncorrect;
 };
 double student[1010];
 int bb[110][6], aa[110][6];//aa记入题目的正确答案 bb记入当前同学题目的答案 
 
 void clearb(int x){
 	for(int i = 1; i <= 6; i++){
 		bb[x][i] = 0;
	 }
 }
 
 int main(void)
 {
 	struct problem arr[110];
 	int npeople,nproblem,err[110][10]={0};
 	scanf("%d %d",&npeople,&nproblem);
    for(int i=1;i<=nproblem;i++){
    	scanf("%d %d %d",&arr[i].score,&arr[i].amount,&arr[i].ncorrect);
    	for(int j=1;j<=arr[i].ncorrect;j++){
    		char cc;
    		scanf(" %c",&cc);
    		aa[i][cc+1-'a']++;
		}
	}
	getchar();
	for(int i=1;i<=npeople;i++){
		for(int j=1;j<=nproblem;j++){
			clearb(j);
			int n,flag=1;
			char ch;
			scanf("(");
			scanf("%d",&n);
			for(int k=1;k<=n;k++){
				scanf(" %c",&ch);
				bb[j][ch+1-'a']++;
			}
			for(int k = 1; k <= 6; k++){
				if(bb[j][k] != aa[j][k]){
					err[j][k]++;
					if(aa[j][k]==0 && bb[j][k]==1)
					flag = 0; 
				} 
			}
			if(flag==1){
				if(n == arr[j].ncorrect)
				student[i]+=arr[j].score;
				else if(n < arr[j].ncorrect)
				student[i]+=arr[j].score/2.0;
			}
			scanf(")");
			getchar();
		}
	}
	for(int i=1;i<=npeople;i++){
		printf("%.1f\n",student[i]);
	}
	int maxn=0,f=1;
	for(int i=1;i<=nproblem;i++){
		for(int j = 1; j <= 6; j++){
			if(err[i][j]>0) f=0;
	    	maxn=max(maxn, err[i][j]);
		}
	}
	if(f) {
		printf("Too simple\n");
	    return 0;
	}
	else {
		for(int i=1;i<=nproblem;i++){
			for(int j = 1; j <= 6; j++){
				if(err[i][j]==maxn) printf("%d %d-%c\n", maxn, i, j-1+'a');
			}
		}
	}
	
	return 0;
 }
*/

/*1074
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;
int a[25], b[25], c[25], d[25];
char n[25], m[25], k[25];


int main()
{
	cin >> n >> m >> k;
	int i1=0, i2=0, i3=0;
	int len1 = strlen(n);
	int len2 = strlen(m);
	int len3 = strlen(k);
	for(int l = len1-1; l >= 0; l--){
		a[++i1] = n[l] - '0';
		if(a[i1] == 0) a[i1] = 10;
	}
	for(int l = i1+1; l<=21; l++){
		a[l] =10;
	}
	for(int j = len2-1; j >= 0; j--){
		b[++i2] = m[j] - '0';
	}
    for(int j = len3-1; j >= 0; j--){
		c[++i3] = k[j] - '0';
	}
	int i;
	for(i = 1; i <= 21; i++) {
		d[i] = (b[i] + c[i])%a[i];
		b[i+1] += (b[i] + c[i]) / a[i];
	}
	int flag = 1;
	for (int x = i; x >= 1; x--) {
		if(d[x] == 0 && flag && x!=1){
			continue;
		}
		else{
			printf("%d",d[x]);
			flag = 0;
		}
		
	}
	return 0;
} */
/*1075
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
struct node{
	int pre, num, back;
};
struct node2{
	int p, num, b;
};
struct node pre[100010], after[100010];
struct node2 bb[100000];
int main()
{
	int head, n, k;
	scanf("%d %d %d", &head, &n, &k);
	for(int i = 0; i < n; i++){
		int x, y, z;
		scanf("%d %d %d",&x, &y, &z);
		bb[x].p = x;
		bb[x].num = y;
		bb[x].b = z;
	}
	int nn;
	for(int i = 1; i <= n; i++){
			pre[i].pre = bb[head].p;
			pre[i].num = bb[head].num;
			pre[i].back = bb[head].b;
			head = pre[i].back;
			if(head == -1) {
				nn = i;
				break;
			}
		}
	int pp = 0;
	for(int i = 1; i <= nn; i++){
		if(pre[i].num < 0)
		after[++pp] = pre[i];
	}
	for(int i = 1; i <= nn; i++){
		if(pre[i].num <= k && pre[i].num >= 0)
		after[++pp] = pre[i];
	}
	for(int i = 1; i <= nn; i++){
		if(pre[i].num > k)
		after[++pp] = pre[i];
	}
	for(int i = 1; i <= nn; i++){
		printf("%05d %d",after[i].pre, after[i].num);
		if(i == nn) printf(" %d\n", -1);
		else printf(" %05d\n",after[i + 1].pre);
	}
	return 0;
 } */
 /*1077
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int n, score;
double sum;

int main()
{
	cin >> n >> score; 
	for(int j = 1; j <= n; j++){
		double minn = score, maxn = 0;
		sum = 0;
		double tea, stu;
		int cnt = n-1;
		cin >> tea;
		for(int i = 1; i <= n-1; i++){
			cin >> stu;
			int sttu = (int)stu;
			if(stu>=0 && stu<=score && stu-sttu==0) {
				sum += stu;
				minn = min(minn, stu);
				maxn = max(maxn, stu);
			}
			else cnt--;
		}
		sum = ((sum - minn - maxn)/(cnt - 2) + tea) / 2.0;
		printf("%.0f\n",sum+0.01);//浮点数不准确 
	}
	return 0;
}*/

/*1078
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;
char ch;
string a;

int main()
{
	cin >> ch;
	getchar();
	getline(cin, a);
	if( ch == 'C') {
		int cnt = 1;
		for(int i = 1; i <= a.length(); i++){
			if(a[i] == a[i-1]) cnt++;
			else {
				if(cnt == 1) printf("%c",a[i-1]);
				else printf("%d%c", cnt, a[i-1]);
				cnt = 1;
			} 
		}
	}
	else if(ch == 'D') {
		for(int i = 0; i < a.length(); i++){
			if(isdigit(a[i])) {
				if(i == a.length()-1){
				    cout << a[i];
				    break;
				}
				int ii = a[i] - '0';
				while(isdigit(a[i+1])) {
					ii = ii*10 + a[i+1] - '0';
					i++;
				}
				while(ii--) cout << a[i+1];
				i++;
			}
			else cout << a[i];
		}
	}
	return 0;
 } */

/*1079
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;
string a;

int ishw(string a) {
	for(int i = 0; i < a.length()/2; i++){
		if(a[i] != a[a.length()-1-i]) return 0;
		
	}
	return 1;
}	

string add(string a, string b) {
    string c = a;
    int x = 0;
	for(int i = a.length()-1; i >= 0; i--){
		c[i] = (a[i] -'0' + (b[i] - '0') + x) % 10 + '0';
		x = (a[i] -'0' + (b[i] - '0') + x)/10;
	}
	if(x > 0) c = "1" + c;
	return c ;
}

int main()
{
	cin >> a;
	if(ishw(a)) cout << a << " is a palindromic number.\n";
	else {
		int nn = 10; 
		while(nn--){
		    string b;
			b = a;
			reverse(b.begin(), b.end());
			string cc = add(a, b);
			cout << a << " + " << b << " = " << cc << '\n';
			if(ishw(cc)) {
				cout << cc << " is a palindromic number.\n";
				return 0;
			}
			a = cc;
		}
		cout << "Not found in 10 iterations.\n";
	}
	return 0;
	
}*/

/*1080
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#include <map> 
using namespace std;

map<string, int> mp, mmp;
struct node{
	string id;
	int mooc, mid, end;
	int final;
}stu[30010];
int n, m, k;

bool comp(node a, node b){
	if(a.final == b.final) return a.id < b.id;
	else return a.final > b.final;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m >> k;
	int j = 0;
	for(int i = 1; i <= n; i++){
		j++;
		cin >> stu[j].id >> stu[j].mooc;
		if(stu[j].mooc > 900 || stu[j].mooc < 0) mmp[stu[j].id] = 1;
		mp[stu[j].id] = j;
	} 
	for(int i = 1; i <= m; i++){
		string a;
		int score;
		cin >> a >> score;
		if(score > 100 || score < 0) {
			mmp[a] = 1;
		}
		if(mp[a]) {
			stu[mp[a]].mid = score+1;
		}
		else {
			stu[++j].id = a;
			stu[j].mid = score+1;
			mp[stu[j].id] = j;
		}
	} 
	for(int i = 1; i <= k; i++){
		string b;
		int sco;
		cin >> b >> sco;
		if(sco > 100 || sco < 0) {
			mmp[b] = 1;
		}
		if(mp[b]) {
			stu[mp[b]].end = sco+1;
		}
		else {
			stu[++j].id = b;
			stu[j].end = sco+1;
			mp[stu[j].id] = j;
		} 
	} 
	for(int i = 1; i <= j; i++){
		if(stu[i].mooc < 200) stu[i].final = 0;
		else if(stu[i].mid <= stu[i].end) stu[i].final = stu[i].end-1;
		else stu[i].final = 0.4*(stu[i].mid-1) + 0.6*(stu[i].end-1) + 0.5;
	}
	sort(stu+1, stu+j+1, comp);
	for(int i = 1; i <= j; i++){
		if(stu[i].final < 60) break;
		if(mmp[stu[i].id]) continue;
		else {
			cout << stu[i].id << " " << stu[i].mooc << " ";
			if(stu[i].mid) cout << stu[i].mid-1 << " ";
			else cout << "-1 ";
			if(stu[i].end) cout << stu[i].end-1 << " ";
			else cout << "-1 ";
			//int final = (int)(stu[i].final + 0.5);
			cout << stu[i].final << "\n";
		}
	}
	return 0;
}*/

// fflush(stdout);


//Codeforces Round #770 (Div. 2)
/*B
#include <cstdio>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn = 1e5 + 10;
ll a[maxn];

int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(0);
	ll n, t;
	cin >> t;
	ll  x, k, sum = 0;
	while(t--){
		cin >> n >> x >> k;
		for(int  i = 1; i <= n; i++){
			cin >> a[i];
			sum += a[i];
		}
		if((sum + x + k) % 2 == 0) cout << "Alice\n";
	    else cout << "Bob\n";
	}
	return 0;
}
*/

/*C
#include <cstdio>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t, n, k;
	cin >> t;
	while (t--){
		cin >> n >> k;
		if(k == 1) {
			cout << "YES\n";
			for(int i = 1; i <= n * k; i++){
				cout << i << "\n";
			}
		}
		else{
			if(n % 2 == 1) cout << "NO\n";
			else {
				cout << "YES\n";
				for(int i = 1; i <= n; i++){
					for(int j = 0; j <= k - 1; j++){
						if(j == 0) cout << i + j * n;
						else cout << " " << i + j * n; 
					}
					cout << "\n";
				}
			}
		}
	}
	return 0;
}
*/
/* 二分三分  
#include <cstdio>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
const double eps = 1e-8;
double n, p1, p2, v1, v2;

double maxs(double p, double v, double t){
	double s = v * t;
	if(s < p) return 0;
	else{
		return max(p,max(s - p, p + (s - p)/2));
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		cin >> n >> p1 >> v1 >> p2 >> v2;
		if(p2<p1) {
		    swap(p1,p2);
			swap(v1,v2);	
		}
		double l = 0, r = 1e8;
		while (l + eps <= r) {
			double mid = (l + r)/2;
			double sl = maxs(p1, v1, mid);
			double sr = maxs(n - p2, v2, mid);
			double sl2 = maxs(n - p1, v1, mid);
			double sr2 = maxs(p2, v2, mid);
			if(sl + sr >= n || sl2 + sr2 >= n) {
				r = mid;
			}
			else l = mid;
		}
		double ans = r;
		printf("%.7f\n",ans);
	}
	return 0;
}
*/

/*搜索  D
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#define ll long long
using namespace std;
const int maxn = 2e5 + 10;
int n;
ll dp[2][maxn],a[maxn] ;
int vis[2][maxn];

void dfs(ll pos, ll k){
	if(vis[k][pos]) return;
	vis[k][pos] = 1;
	ll x;
	if(k == 0) x = pos + a[pos];
	else x = pos - a[pos];
	if(x <= 0 || x > n) dp[k][pos] = a[pos];
	else {
		dfs(x, k^1);
		if(dp[k^1][x] == -1) return;
		else {
			dp[k][pos] = a[pos] + dp[k^1][x];
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	memset(dp, -1, sizeof(dp));
	for(int i = 2; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n-1; i++){
		dfs(i + 1, 1);
		if(dp[1][1 + i] != -1) cout << dp[1][1 + i] + i << '\n';
		else cout << "-1\n";
	}
	return 0;
}
*/

/* 搜索 H
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
#include <map>

using namespace std;
int t, a, b;
int p[10010], vis[10010];

void getprime(){
	for(int i = 1000; i <= 9999; i++){
		p[i] = 1;
		for(int j = 2; j * j <= i; j++){ //新学的方法 
		    if(i % j == 0) {
		    	p[i] = 0;
		    	break;
			}
		} 
	}
}

struct node{
	int x, step;
};

int bfs(int a, int b) {
	queue<node> q;
	node now;
	now.x = a;
	now.step = 0;
	q.push(now);
	vis[a] = 1;
	while(!q.empty()){
		now = q.front();
		q.pop();
		if(now.x == b) return now.step;
		node nxt;
		nxt.step = now.step + 1;
		for(int i = 1; i <= 9; i++){
			nxt.x = now.x / 10 * 10 + i;
			if(!vis[nxt.x] && p[nxt.x]) {
				q.push(nxt);
				vis[nxt.x] = 1;
			}
		}
		for(int i = 0; i <= 9; i++){
			nxt.x = now.x / 100 * 100 + i * 10 + now.x % 10;
			if(!vis[nxt.x] && p[nxt.x]) {
				q.push(nxt);
				vis[nxt.x] = 1;
			}
		}
		for(int i = 0; i <= 9; i++){
			nxt.x = now.x / 1000 * 1000 + i * 100 + now.x % 100;
			if(!vis[nxt.x] && p[nxt.x]) {
				q.push(nxt);
				vis[nxt.x] = 1;
			}
		}
		for(int i = 1; i <= 9; i++){
			nxt.x = now.x % 1000 + i * 1000;
			if(!vis[nxt.x] && p[nxt.x]) {
				q.push(nxt);
				vis[nxt.x] = 1;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	getprime();
	cin >> t;
	while(t--){
		memset(vis, 0, sizeof(vis));
		cin >> a >> b;
		int ans = bfs(a, b);
		cout << ans << "\n";
	}
	return 0;
} 
*/

/*
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
#include <map>

using namespace std;
int n, m;
const int maxn = 1e3 + 10;
const int inf = 0x3f3f3f3f;
char s[maxn][maxn];
struct node1{
	int x, y, t;
};
struct node2{
	int x, y, t;
};
int x1, x2, y1, y2;
int time1[maxn][maxn];
int vis1[maxn][maxn], vis2[maxn][maxn];
const int m1[5] = {0, 1, -1, 0, 0};
const int m2[5] = {0, 0, 0, 1, -1};

void clear(){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			vis1[i][j] = 0;
			vis2[i][j] = 0;
			time1[i][j] = inf;
		}
	}
}

bool check1(int x, int y) {
	if(x < 1 || x > n || y < 1 || y > m || vis1[x][y])
	    return false;
	else if(s[x][y] == '#') return false;
	else return true;
} 

bool check2(int x, int y, int t) {
	if(x < 1 || x > n || y < 1 || y > m || vis2[x][y])
	    return false;
	else if(s[x][y] == '#' || time1[x][y] <= t) return false;
	else return true;
}

void bfs1(){
	queue<node1> q;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(s[i][j] == 'F'){
				node1 now;
				now.x = i; now.y = j; now.t = 0;
				q.push(now);
				vis1[i][j] = 1;
				time1[i][j] = 0;
			}
		}
	}
	while(!q.empty()) {
		node1 now = q.front();
		q.pop();
		//if(now.x<1 || now.x>n || now.y<1 || now.y>m) return;
		node1 next;
		for(int i = 1; i <= 4; i++){
			next.x = now.x + m1[i];
			next.y = now.y + m2[i];
			next.t = now.t + 1;
			if(check1(next.x, next.y)) {
				q.push(next);
			    vis1[next.x][next.y] = 1;
			    time1[next.x][next.y] = next.t;
			}
			
		}
	}
	
}

int bfs2(int x, int y, int t) {
	queue<node2> qq;
	node2 now;
	now.x = x; now.y = y; now.t = t;
	qq.push(now);
	vis2[x][y] = 1;
	while(!qq.empty()) {
		now = qq.front();
		qq.pop();
		if(now.x == 1 || now.x == n || now.y == 1 || now.y == m) 
		return now.t;
		node2 next;
		for(int i = 1; i <= 4; i++){
			next.x = now.x + m1[i];
			next.y = now.y + m2[i];
			next.t = now.t + 1;
			if(check2(next.x, next.y, next.t)) {
				qq.push(next);
			    vis2[next.x][next.y] = 1;
			}
		}
	}
	return -1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		clear();
		scanf("%d %d", &n, &m);
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				scanf(" %c", &s[i][j]);
				if(s[i][j] == 'J') {
					x1 = i; y1 = j;
				}
				
			}
		}
		bfs1();
		int ans = bfs2(x1, y1, 0);
		if(ans == -1) printf("IMPOSSIBLE\n");
		else printf("%d\n", ans + 1);
	}
	return 0;
}
*/

/* 贪心I题 
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
#include <queue>
using namespace std;
const int inf = 0x3f3f3f3f;
int n, l, m;
int a[510], b[510], dp[510][510];//dp[i][j] i代表当前到达的路标 j代表去掉的路标数 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> l >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int  i = 1; i <= n; i++){
		cin >> b[i];
	}
	a[n+1] = l;
	memset(dp, inf, sizeof(dp));
	for(int i = 0; i <= m; i++){
		dp[1][i] = 0;
	}
	for(int i= 1; i <= n+1; i++){
		for(int j = 0; j <= m; j++){
			for(int k = i + 1; k <= n+1; k++){
				int j1 = j + k-i-1;
				if(j1 <= m)
				dp[k][j1] = min(dp[k][j1], dp[i][j] + (a[k]-a[i])*b[i]);
			}
		}
	}
	
	int minn = inf;
	for(int i = 0; i <= m; i++){
		minn = min(minn, dp[n+1][i]);
	}
	cout << minn << "\n";
	return 0;
} */

/*
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
#include <queue>
using namespace std;
const int inf = 0x3f3f3f3f;

struct node{
	int l, r, num;
	bool friend operator < (const node &a, const node &b){
		return a.r < b.r;
	}
}arr[25010];

int vis[1000010];

bool comp (node a, node b){
	return a.l < b.l;
}

int main()
{
    //ios::sync_with_stdio(false);
	//cin.tie(0);
	int n, m;
	scanf("%d %d", &n, &m)) 
	memset(vis, 0, sizeof (vis));
	for(int i = 1; i <= n; i++){
		scanf("%d %d", &arr[i].l, &arr[i].r);
		arr[i].num = i;
	}	
	priority_queue<node>q;
	int r = 0, ii = 0; 
	for(int i = 1; i <= n; i++){
		if(arr[i].l = 1){
			if(arr[i].r > r) {
				if(ii) q.push(arr[ii]);
				r = arr[i].r;
				ii = i;
			}
			else q.push(arr[i]);
		}
		else q.push(arr[i]);
	}
	int count = 1, flag = 1;
	if(r == 0) printf("-1\n");
	else {
		while(!q.empty()) {
			node now = q.top();
			q.pop();
			if(vis[now.num] == count) break;
			vis[now.num] = count;
			if(now.l <= r+1){
				count++;
				r = now.r;
				if(r >= m) {
					printf("%d\n", count);
					flag = 0;
					break;
				}
			}
			else q.push(now);//傻啊 这样进去不是还是先出来 
		}
	}
	if(flag) printf("-1\n");
	
	return 0;
} 
*/
/*贪心I 
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
#include <queue>
using namespace std;
const int inf = 0x3f3f3f3f;

struct node{
	int l, r;
}arr[25010];

bool comp (node a, node b){
	if(a.l == b.l) return a.r > b.r;
	else return a.l < b.l;
}

int main()
{
    //ios::sync_with_stdio(false);
	//cin.tie(0);
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++){
		scanf("%d %d", &arr[i].l, &arr[i].r);
	}	
    sort(arr+1, arr+n+1, comp);
    int r = 0, count = 1;
    if(arr[1].l > 1) {
    	printf("-1\n");
    	return 0;
	}
	else r = arr[1].r;
	for(int i = 2; i <= n; i++){
		if(arr[i].r <= r) continue;
		if(arr[i].l <= r + 1) {
			count++;
			int rr = arr[i].r;
			for(int j = i+1; j <= n; j++){
				if(arr[j].l <= r+1){
					if(arr[j].r > rr)
					rr = arr[j].r;
					i++;
				}
				else {
					r = rr;
					break;
				}
			}
			r = rr;
		}
	}
	if(r>=m) printf("%d\n", count);
	else printf("-1\n");
	
	return 0;
} 

*/



