/*************************************************************
	Практическое занятие №3. Встроенные массивы.
							Динамическое выделение памяти.
							Простейшие алгоритмы сортировки и поиска.
							Сложные указатели.
							Ссылки.
*************************************************************/
#include <iostream>

#define	  stop  ; 
using namespace std;

int main()
{

{
	srand( time( 0 ));
	int M, N;
	
	N = 30;
	M = 300000;
	/*
	cout << "Input dimensions of Array" <<endl<< "Number of rows: ";
	cin >> M;
	cout << "Number of columns: ";
	cin >> N;
	*/
	int* dArr = new int [ M * N];
	
	
	//заполнили массив ранд. числами
	for ( int i = 0; i < M*N; i++){
		*(dArr + i) = rand()%10;
	}
//summ of Arr elements:
int Sum = 0;
	for ( int i = 0; i < M*N; i++){
	Sum +=*(dArr + i);
	}



	//Задание2а. В сформированном массиве отсортируйте каждую строку по
	//убыванию значений. Используйте сортировку "выбором"

//обходим все строки массива
for (int m = 0; m < M; m++){
	

// sort:

for (int i = 0; i < N-1; i++){
	int* base = dArr + N * m;
	int* pMax = base + i;
	int Temp;
	
	for (int k = i + 1; k < N ; k++){
		if ( *(base + k) > *( pMax) ) {
			pMax = base + k;
		}	
	}
	Temp = *pMax ;
	*pMax = *(base + i);
	*(base + i ) = Temp;	
	
} // end of sort
	
}


	// print Arr:
	
	for (int i =0;  i < M; i++){
		for (int j=0; j < N; j++){
			
			if ( (*(dArr + N*i +  j ) ==4) || (*(dArr + N*i +  j ) == 5)){
			cout << *(dArr + N*i +  j ) <<" ";
			}
			else{
				cout << " " << " ";
			}
		}
		cout << endl;
	}
		


//end of task
	}



	return 0;
}