#include<iostream>
#include<string>
using namespace std;
int main(){
    string question[3] = {
        "which is the closest planet to the sun?",
        "which country has the largest population in the world?",
        "What is the hardest natural substance on the earth?"
    };
    string options[3] = {
        "A. Earth  B. Mercury  C. Jupiter",
        "A. Russia  B. India  C. China",
        "A. Gold  B. Diamond  C. Iron"
    };
    char correctans[3] = {'B','B','B'};
    int score = 0;
    char ans;
    cout << "##  STARTING QUIZ ##" <<endl;
    for(int i = 0; i< 3; i++){
        cout << "\nQ" << (i + 1) << question[i] << endl;
        cout << options[i] << endl;
        cout << "Answer(A/B/C) : ";
        cin >> ans;
        if(ans >= 'a' && ans <= 'z'){
            ans = ans - 32;
        }
        if ( ans == correctans[i]){
            cout << "correct answer" << endl;
            score++;
        }else{
            cout << " wrong answer, the correct answer is : " << correctans[i] << endl;
        }
    }
    cout << "RESULT" << endl;
    cout << "Total Marks: "<< score << endl;
    float per = (score * 100.0)/3;
    cout << "percentage: " << per << "%" <<endl;
    if(per >= 50.0){
        cout << "PASS"<< endl;
    }else {
        cout << "FAIL"<<endl;
    }
    return 0;
}