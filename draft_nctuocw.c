#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "limits.h"
#include "string.h"
#include "float.h"
#include <ctype.h>
#include <math.h>

#include "memory.h"
#define size 3

int IsPrime(int n);
int Combination(int n,int k);
int Factorial(int m);
void STDEV(void);
void Swap(int *pa,int *pb);
void convertToUppercase(char *sPtr);
void bubbleSort(int * const ar,size_t s);
void numapart(void);
size_t getSize(float *ptr);
void PrintA (int (*A)[10]);
void binarycode(void);

int main()
{
	//int i=0,n=0,x=0,*p = NULL;
	//size_t n =1024*1024*128*sizeof(char);
	//double rTime;
	//clock_t clk0,clk1;
	//int *pi ;//= (int*)calloc(sizeof(int),n);
	//char *pc;

/*

	while(scanf("%u",&n) != EOF)
	{
	getchar();

	pi = (int*)calloc(sizeof(int),1024*1024*8);
	if(pi != NULL)
	{
		for(i=0;i<n;i++)
		{
			//printf("%d\n",pi[i]);
			pi[i] = i;

		}
	}
	free(pi);


	}



	// The time of malloc and initialization is proportional to n
	clk0 = clock();
	pc = (char*)malloc(n);
	for(i=0; i<n; ++i) pc[i] = 0;
	clk1 = clock();
	rTime = (double)(clk1 - clk0) / (double)CLOCKS_PER_SEC;
	printf("iterative clearing time: %f\n", rTime);
	free(pc);

	// The time of calloc is constant if hardware supports calloc!
	clk0 = clock();
	pc = (char*)calloc(n, sizeof(char));
	clk1 = clock();
	rTime = (double)(clk1 - clk0) / (double)CLOCKS_PER_SEC;
	printf("calloc time: %f\n", rTime);
	free(pc);


	int n =0;
	int *p = NULL;
	int i=0,x=0;


	while(scanf("%d", &x) != EOF){
	++n;
	p = (int *)realloc(p, n * sizeof(int));
	p[n-1] = x;
	for(i=0; i<n; ++i)
	printf("%d, ", p[i]);
	printf("\n");
	}


	free(p);


	size_t n = 0;
	char *p;
	int i =0;
	while(scanf("%Iu",&n)!=EOF)
	{
		p = (char *)malloc(sizeof(char)*n);
		for(i=0;i<n;i++)
		{
			printf("%d, ",p[i]);
		}
		printf("\n");

		memset(p,0,sizeof(char)*n);

		memset(p+2,2,sizeof(char)*2);


		for(i=0;i<n;i++)
		{
			printf("%d, ",p[i]);
		}
		printf("\n");


		free(p);


	}

	char s1[] = "Hello! My friend!"; // Why do we use char[]?
	const char *s2 = "Hi! Guys."; // Why do we use const char*?
	//memcpy(s1+7, s2+4, 6);
	//printf("%s\n", s1);// Hello! Guys.!


	memcpy(s1+5, s1+7, 4);
	printf("%s\n", s1); // Maybe “HelloGuysys.”, maybe not



	char first[] =  "123456956A9411567890";
	char second[] = "12345678901234567895";
	printf("%d\n", memcmp( first, second, 19 ) ); // 0
	printf("%d\n", memcmp( first, second, 20 ) ); // <0
	printf("%d\n", memcmp( first + 2, second, 18 ) ); // >0


*/
/*
	size_t n;
	int *a1;
	int *a2;
	int *a3;
	int i;

	scanf("%d",&n);

	a1 = (int*)malloc(sizeof(int)*n);
	a2 = (int*)malloc(sizeof(int)*n);
	a3 = (int*)calloc(n,sizeof(int));

	for(i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}

	for(i=0;i<n;i++)
	{
		scanf("%d",&a2[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",a1[i]);
	}
	puts("");

	for(i=0;i<n;i++)
	{
		printf("%d ",a2[i]);
	}
	puts("");

	memmove(a3,a2,n*4);

	memmove(a2+(n/2),a1+(n/2),n/2*4);
	memmove(a1+(n/2),a3+(n/2),n/2*4);

	for(i=0;i<n;i++)
	{
		printf("%d ",a1[i]);
	}
	puts("");


	for(i=0;i<n;i++)
	{
		printf("%d ",a2[i]);
	}
	puts("");
*/

/*
	srand(time(NULL));
	double mean = 0;/
	double std = 0.01;//�зǮt
	double u, v;//uniform distribution
	double x, y;//normal distribution
	for(int i=0; i<10; i++){
			u = rand() / (double)RAND_MAX;//RAND_MAX=32767
			v = rand() / (double)RAND_MAX;
			x = sqrt(-2 * log(u)) * cos(2 * 3.1415926 * v) * std + mean;//M_PI=3.14159
			y = sqrt(-2 * log(u)) * sin(2 * 3.1415926 * v) * std + mean;
			printf("%f\n",x);
	}
*/
	//宣告一指標變數，將位址逐步加1且列印第0個位址的內容，即可把整串字元列出來
	char *a;
	a = "hello 321 /*-+ ";
	while(*a){
		printf("%c",a[0]);
		*a++;
	}

	return 0;
}



void binarycode(void){
	unsigned int n = 0;
	int m;
	int c = 0;
	int i;
	int r;
	int h=1;

	while(scanf("%u",&n) != EOF){
		r = n;

		while(r > 0){
			m = r%2;
			r = r>>1;
			c++;
		}

		h = h << (c-1);

		//for(i=0;i<c ;i++)
		while(h > 0){
			if((n & h) > 0){
				printf("1");
			}else{
				printf("0");
			}

			h=h>>1;
		}
		//printf("%d",h);

		puts("");
	}
}


void PrintA (int (*A)[10]){
	int i;
	for(i=0; i<10; ++i){
		printf("%d, ", (*A)[i]);
	}
	printf("\n");
}


int SizeofA1(int* A){
	return sizeof(A);
}


int SizeofA4(int (*A)[size]){
	return sizeof(*A);
}


size_t getSize(float *ptr){
	return sizeof(ptr);
}


void numapart(void){
	int n;
	int m;
	int a=0;
	int b=1;

	int x;

	scanf("%d",&n);

	m=n;
	while(m>10){
		m = m/10;
		a++;
	}

	while(a>=1){
		b=b*10;
		a--;
	}


	while(b>=1){
		x = n/b;
		n=n%b;

		printf("%d  ",x);

		b=b/10;

	}

}


void bubbleSort(int * const ar,size_t s){
	unsigned int pass;
	size_t j;
	for(pass=0;pass < s-1;++pass){
		for(j=0;j<s-1;++j){
			if(ar[j]>ar[j+1]){
				Swap(&ar[j],&ar[j+1]);
			}
		}
	}

}


void convertToUppercase(char *sPtr){
	while(*sPtr != '\0'){
		*sPtr = toupper(*sPtr);
		++sPtr;
	}

}


void Swap(int *pa,int *pb){
	int t = *pa;
	*pa = *pb;
	*pb = t;
}

void STDEV(void){
	int i;
	double a;
	double o;
	double sum=0;
	double s=0;
	double x;

	int A[size] = {0};

	for(i=0;i<size;i++){
		scanf("%d",&A[i]);
	}

	for(i=0;i<size;i++){
		sum += A[i];
	}
	a = sum/size;

	for(i=0;i<size;i++){
		s += pow((A[i]-a),2);
	}

	x = s/(size-1);
	o = sqrt(x);

	printf("%f\n",o);

}

int Factorial(int m){
	int f = m;

	while(m>1){
		f = f*(m-1);
		m--;
	}

	return f;
}


int IsPrime(int n){
	int u=2;

	if(n <2){
		return 1;
	}

	while(u*u<=n){
		if(n%u == 0) return 0;
		u++;
	}

	return 1;
}


int Combination(int n,int k){
	return Factorial(n) / (Factorial(k) * Factorial(n-k) );
}
