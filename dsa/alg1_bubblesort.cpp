/**
 * @Author: Amit Chanchal <amit>
 * @Date:   21-Jun-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: alg1_bubblesort.cpp
 * @Last modified by:   amit
 * @Last modified time: 21-Jun-2017
 */
 #include <iostream>
 using namespace std;

 static int count = 0;
 const int INPUT_SIZE = 10;

 void print(int *input)
 {
     for ( int i = 0; i < INPUT_SIZE; i++ )
         cout << input[i] << " ";
     cout << endl;
 }

 void bubblesort(int* input)
 {
     count++;
     int exchanges = 0;
     for ( int i = 0; i < INPUT_SIZE; i++ )
     {
         if ( input[i] > input[i+1] )
         {
             int tmp = input[i];
             input[i] = input[i+1];
             input[i+1] = tmp;
             exchanges++;
         }
     }

     if ( exchanges == 0 ) return;
     cout << "Parse " << count << ":";
     print(input);
     bubblesort(input);
 }

 int main()
 {
     int input[INPUT_SIZE] = {45,67,12,34,25,39};
     cout << "Input: ";
     print(input);
     bubblesort(input);
     cout << "Output: ";
     print(input);
     return 0;
 }
