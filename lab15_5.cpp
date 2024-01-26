#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int X[] = {*a,*b,*c,*d};
	for(int i=0;i<4;i++){
		int swap_index = rand()%4;
		int temp = X[i];
		X[i] = X[swap_index];
		X[swap_index] = temp;
	}
	*a=X[0];
	*b=X[1];
	*c=X[2];
	*d=X[3];
}
