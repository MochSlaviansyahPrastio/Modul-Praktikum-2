#include <iostream>

using namespace std;

int main()
{
   int matA [2][2]={4,3,8,10};
   int matB [2][2]={-5,8,4,-12};
   int J,K;
   cout<<"Matriks A"<<endl;
   for (int i=0;i<2;i++){
       for(int j=0;j<2;j++){
        cout<<matA[i][j]<<" ";
       }
       cout<<endl;
   }
   cout<<"Matriks B"<<endl;
   for(int i=0;i<2;i++){
       for(int j=0;j=0;j++){
    cout<<matB[i][j]<<" ";
       }
       cout<<endl;
   }
   cout<<"Hasil pengurangan Matrik A dan B "<<endl;
   for (int i=0;i<2;i++){
       for (int j=0;j<2;j++){
           //soal Pengurangan kedua Matriks
           cout<<matA[i][j] - matB[i][j]<<" ";
       }
       cout<<endl;
   }
}
