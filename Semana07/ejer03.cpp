#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int fila=7;
    int columna=20;
    vector<vector <int>> mat(fila,vector <int>(columna));
    int x,y,z;
    vector<vector <vector <int>>> mat(x,vector <vector <int>>(y, vector<int>(z)));
    int max=10, min=1;
    srand(time(NULL));
    for (int f = 0; f < mat.size(); f++)
        for (int c = 0; c < mat[0].size(); c++)
            mat[f][c]=rand()%(max-min+1)+1;
        
    for (int f = 0; f < mat.size(); f++){
        for (int c = 0; c < mat[0].size(); c++)
            cout<<mat[f][c]<<"\t";
        cout<<endl;
    }
        
    return 0;
}