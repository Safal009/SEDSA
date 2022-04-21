#include<iostream>
using namespace std;
int graph[10][10];
char city[10];

void addcities(int a){
    for(int i=0;i<a;i++){
        cin>>city[i];
    }
}



int main(){
    int n;
    cout<<"Enter the no. of cities"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            graph[i][j] = 0;
        }
    }

    addcities(n);

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){

            if(i==j){
                graph[i][j] = 0;
            }

            if(i !=j){
                char temp;
                cout<<"Do you want to enter a path ?"<<i<<" "<<j<<endl;
                cin>>temp;

                if(temp=='y'||temp=='Y'){
                    int dist;
                    cout<<"Enter the distance"<<endl;
                    cin>>dist;
                    graph[i][j] = dist;
                    graph[j][i] = dist;
                }
                else if(temp=='n'||temp=='N'){
                    graph[i][j] = -1;
                }
            }

            
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

}
