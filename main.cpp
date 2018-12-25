#include <bits/stdc++.h>
#include "graphtype.cpp"

using namespace std;

int main()
{
    GraphType<char> jisan(10);
    for(char a= 'A'; a<='H'; a++){

        jisan.AddVertex(a) ;
    }
    jisan.AddEdge('A','B',1);
    jisan.AddEdge('B','A',1);
    jisan.AddEdge('A','C',1);
    jisan.AddEdge('A','D',1);
    jisan.AddEdge('D','A',1);
    jisan.AddEdge('D','G',1);
    jisan.AddEdge('D','E',1);
    jisan.AddEdge('H','E',1);
    jisan.AddEdge('F','H',1);
    jisan.AddEdge('G','F',1);
    if(jisan.FoundEdge('A','D'))
    {
        cout<<"There is an edge:"<<endl;
    }
    jisan.DepthFirstSearch('B','E');
    jisan.DepthFirstSearch('E','B');
    jisan.BreadthFirstSearch('B','E');


}
