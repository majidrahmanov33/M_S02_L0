#include <stdio.h>
#define SIZE 10

float find_maximum(float[], int);
float find_minimum(float[], int);
void table_sort(float[], int);
float find_median(float[], int);
void divide_array(float[], int, float[], float[], float);

int main(){
    float data[SIZE] = {25.0, 29.0, 28.0, 29.0, 34.0, 37.0, 35.0, 30.0, 35.0, 38.0};
    float arr1[SIZE/2], arr2[SIZE/2];
    float min_value, q2, median, q4, max_value;

    max_value = find_maximum(data, SIZE);
    printf("Value of the maximum element is %.1f \n", max_value);
    min_value = find_minimum(data, SIZE);
    printf("Value of the minimum element is %.1f \n", min_value);
    for( int i = 0; i < SIZE ; i++) {
    printf("%.1f \t", data[i]); 
    printf("\n");
}
    table_sort(data, SIZE);
    for( int  i = 0 ; i < SIZE ; i++) {
    printf("%.3f \t", data[i]); 
    printf("\n");
}
    median = find_median(data,SIZE);
    divide_array(data,SIZE,arr1,arr2,median);
printf("*****TABLE 1*****\n");
for(int i=0;i<SIZE/2;i++) {
printf("%f  ",arr1[i]);
}
printf("\n\n\n");
printf("*****TABLE 2*****\n");
for(int i = 0; i < SIZE/2 ; i++) {
printf("%f  ",arr2[i]);
}
printf("\n");
q2 = find_median(arr1, SIZE/2);
q4 = find_median(arr2, SIZE/2);
    
        
    printf(" Q1 || Q2 || Q3 || Q4 || Q5 \n");
    printf("25.0||29.0||32.0||35.0||38.0  =>(WHAT RESULTS SHOULD BE)\n");
    printf("****||****||****||****||****\n");
    printf("%.1f||%.1f||%.1f||%.1f||%.1f  =>(YOUR FUNCTIONS RESULSTS)\n",min_value,q2,median,q4,max_value);

    return 0;
}

float find_minimum(float array[], int s){
float min = array[0];
for (int i = 1; i < s ; i++) {
if ( array[i] < min) 
min = array[i];
}
return min;
}

float find_maximum(float array[], int s){   
float max = array[0];
for (int i = 1 ; i < s ; i++) {
if( array[i] > max){
max=array[i];
}
}
return max;
} //endfunction

/* Function to sort an array JUST TO BE USED*/
void table_sort(float arr[], int s){
int i, j;
float key;
for (i = 1; i < s; i++){
	key = arr[i];
	j = i-1;
	/* Move elements of arr[0..i-1], that are
	greater than key, to one position ahead
	of their current position */
	while (j >= 0 && arr[j] > key){
		arr[j+1] = arr[j];
		j = j-1;
		}
	arr[j+1] = key;
	}
} //endfunction

float find_median(float sortedArray[], int s){
float median;
if ( s % 2 == 0) {
median=(sortedArray[s/2]+sortedArray[s/2-1])/2;
}
else
median=sortedArray[s/2];
return median;
} //endfunction

void divide_array(float in[], int s, float arr1[], float arr2[], float median){
for (int i = 0 ; in[i] <= median ; i++) {
arr1[i] = in[i];
}
for (int i = 0 ; in[i+SIZE/2] >= median;i++) {
arr2[i] = in[i+SIZE/2];
}
} //endfunction

