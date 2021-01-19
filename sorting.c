/*点数が高い順に並び替える関数*/

#include <stdio.h>

/*関数プロトタイプ宣言*/
void sorting(int array[], int size);
void sorting(int array[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(array[i] < array[j]){
                int num = array[i];
                array[i] = array[j];
                array[j] = num;
            }
        }
    }
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}

int main(){
    /*定数として配列のサイズを宣言*/
    const int SIZE = 6; 
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};

    printf("scores = ");
    for(int i = 0; i < SIZE; i++){
        printf("%d ", scores[i]);
    }
    printf("\nresults = ");
    /*関数を呼び出す*/
    sorting(scores, SIZE);
    /*出力後に%が付くため、改行して消す*/
    printf("\n");

    return 0;
}