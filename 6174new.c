/////////////////////////////////
/*  Credits 
Project by : Swapnil Pandit 
  SGSITS
*/
//////////////////////////////
#include<stdio.h>

int x;

int arr[3];
int D = 0 ;
int A = 0;
int B = 0;
int C;
int N;
char ch;

 //applying void functions to sort the array(bubble sort used)
void bubbleSort(int* arr, int n){
     int temp;
     for (int i = 0; i < n-1; i++)
     {
      for (int j = 0; j < n-1-i ; j++)
      {
          if(arr[j]>arr[j+1]){
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
          }
      }

     }

}

void descendSort(int* arr, int n){
int temp;
     for (int i = 0; i < n-1; i++)
     {
      for (int j = 0; j < n-1-i ; j++)
      {
          if(arr[j]<arr[j+1]){
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
          }
      }

     }

}

void resetArrToZero(int* arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] = 0;
    }
}
int rep(int x){
    int n = 4;
     int a = 10;
     int c = 1;
     int b = 1;
     int d = 1;
     int e = 1;
          for(int i = 0; i <=3; i++){
         b = b*a;
         arr[i] = x%(b) ;

         if(i==1){
          arr[i] = arr[i]/10;
         }
         if(i==2){
          arr[i] = arr[i]/100;
         }
         if(i==3){
          arr[i] = arr[i]/1000;
         }

    }
    for(int i = 0; i <4; i++){
       D = D + (e)*arr[i];
       e = e*a;
    }
    printf("      \n%d\n\n",D);

    // Descending order - larger number
        descendSort(arr,n);
     for(int i = 0; i <4; i++){
         printf( "      %d\n", arr[i]);
    }
    for(int i = 3; i >=0; i--){
       B = B + (d)*arr[i];
       d = d*a;
    }
    printf("      %d\n",B);

    // Ascending order - smaller number
    bubbleSort(arr , n);
    for(int i = 0; i <4; i++){
         printf( "      %d\n", arr[i]);
    }
    for(int i = 3; i >=0; i--){
       A = A + (c)*arr[i];
       c = c*a;
    }
    printf("      %d\n",A);
    C = B - A;
    printf("      %d - %d \n =    %d",A,B,C);
    printf(" Difference of the numbers large and small formed by rearranging the digits of the previous difference.\n");
    return C;
}

int main(){
     int n = 4;
     int a = 10;
     int c = 1;
     int b = 1;
     int d = 1;
     int e = 1;
    printf("                                     *** Kaprekar's Constant 6174 *** \n\n  - 6174 is known as Kaprekar's constant after the Indian mathematician Dattatreya Ramchandra Kaprekar.\n");
    printf("  - The Constant is the result of a mathematical process that involves rearranging the digits of a \n four-digit number that has at least two different digits to form a largest number possible and a smallest \n number possible , then Subtracting the smaller number from the larger number and Repeating until the result is 6174 ");
    printf("\n\n   Enter a 4 Digit number with at-least two different digit:  ");

     //Input of 4 digit numbers and assign each individual array to a digit of the number.
    scanf("%d",&x);
    for(int i = 0; i <=3; i++){
         b = b*a;
         arr[i] = x%(b) ;

         if(i==1){
          arr[i] = arr[i]/10;
         }
         if(i==2){
          arr[i] = arr[i]/100;
         }
         if(i==3){
          arr[i] = arr[i]/1000;
         }

    }
    for(int i = 0; i <4; i++){
       D = D + (e)*arr[i];
       e = e*a;
    }
    printf("      %d\n\n",D);


    // conditions of limiting digits

    //condition for limiting the number equal digits (not more than two digits to be equal)



    //applying void functions to sort the array(bubble sort used)
    // Descending order - larger number
        descendSort(arr,n);
     for(int i = 0; i <4; i++){
         printf( "      %d\n", arr[i]);
    }
    for(int i = 3; i >=0; i--){
       B = B + (d)*arr[i];
       d = d*a;
    }
    printf("      %d\n",B);

    // Ascending order - smaller number
    bubbleSort(arr , n);
    for(int i = 0; i <4; i++){
         printf( "      %d\n", arr[i]);
    }
    for(int i = 3; i >=0; i--){
       A = A + (c)*arr[i];
       c = c*a;
    }
    printf("      %d\n",A);
    C = B - A;
    printf("      %d - %d \n =    %d",A,B,C);
    printf(" Difference of the numbers large and small formed by rearranging the digits of the user input.\n");
    for(;;){
    A = 0;
    B = 0;
    D = 0;
    resetArrToZero(arr , 4);
    rep(C);
    if(C == 6174){
        A = 0;
    B = 0;
    D = 0;
    resetArrToZero(arr , 4);
    rep(C);
    printf("Hence we obtain the constant 6174");
        break;
    }
    }
    printf("\n Press any key to end_");
    scanf("%d",&a);

return 0;
}


