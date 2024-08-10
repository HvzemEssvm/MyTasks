#include <bits/stdc++.h>
using namespace std;

// Task 0
/*
int main()
{
    string name;
    getline(cin, name);
    cout << "Hello, " << name << "!";
    return 0;
}
*/

// Task 1
/*
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
         cout << "*";
        cout << endl;
    }
    
    return 0;
}
*/

// Task 2
/*
int main()
{
    int n,target,found = 0 ;
    cin >> n;
    int Array[n];
    for(int i = 0; i<n ;i++)
     cin >> Array[i]; 
    cin >> target;
    for (int j=0;j<n;j++)
    {
        if(target == Array[j])
        {
            found = 1; 
            cout << j; 
        }
    }
    if(!found) 
     cout << "-1";
    return 0;
}
*/

// Task 3 
/*
int main()
{
    int n,max;
    cin >> n;
    int Array[n];
    for(int i = 0; i<n ;i++)
     cin >> Array[i]; 
    max = Array[0];
    for(int j=1;j<n;j++)
    {
        if(Array[j]>max)
        {
          max=Array[j];
        }
    }
        
    cout << max;
    return 0;
}
*/

// Task 4
/*
int main()
{
    int rows,columns,jLeague_score=0,villains_score=0,i,j;
    cin >> rows >> columns;
    int jLeague[rows][columns],villains[rows][columns];
    for(i = 0; i<rows ;i++)
    {
        for(j = 0; j<columns ;j++)
            cin >> jLeague[i][j];
    }
    for(i = 0; i<rows ;i++)
    {
        for(j = 0; j<columns ;j++)
            cin >> villains[i][j];
    }
    for(i = 0; i<rows ;i++)
    {
        for(j = 0; j<columns ;j++)
            {
                if(jLeague[i][j]>villains[i][j])
                {
                    jLeague_score++;
                }
                else if(jLeague[i][j]< villains[i][j])
                {
                    villains_score++;
                }
                
            }
    }
    if(jLeague_score>villains_score)
    {
        cout << "Justice League";
    } else if(jLeague_score<villains_score)
    {
        cout << "Villains";
    } else cout << "Tie" ;
    return 0;
}
*/