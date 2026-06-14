#include<iostream>
using namespace std;
void findduplicates(int arr[],int size){
    bool visited[100] = {false};
    bool foundduplicate = false;
    cout << "duplicate element are: ";
    for(int i = 0 ; i < size ; i++){
        if(visited[i])continue;
        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
                cout << arr[i] << " ";
                visited[j] = true;
                foundduplicate = true;
                break;

        }
    }
}
if(!foundduplicate){
    cout << "no duplicate found";
}
cout << endl;
}
int main(){
    int size;
    cout << "Enter size: "<< endl;
    cin >> size;
    int myarray[100];
    cout << "Enter elements:"<< endl;
    for(int i = 0; i<size; i++){
        cin >> myarray[i];
    }
    findduplicates(myarray,size);
    return 0;
}