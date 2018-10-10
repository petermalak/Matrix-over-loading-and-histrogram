// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 2 - Problem 9
// Program: Histrogram for student grades
// Author:  Peter Malak Mikaeal
// ID :     20170079
// Date:    8 October 2018
// Version: 1.0


#include<vector>
#include<iostream>

using namespace std;


void Sorting(vector<int>& Vect);


int main(){

    vector<int> gradesVector;

    cout<<"Enter the grades and enter -1 when done:\n";

    int grade = 0;
    cin>>grade;
    while(grade > -1){
        gradesVector.push_back(grade);
        cin >> grade;
    }

    Sorting(gradesVector);

    vector<int> vect1;
    for(int i = 0; i < gradesVector.size(); i++){ // In this loop we put the grades in a new vector (vect1) but without repetition if occurred
        if(gradesVector[i] == gradesVector[i+1]){
            continue;
        }
        else{
            vect1.push_back(gradesVector[i]);
        }
    }

    cout << endl;

    for(int i = 0; i < vect1.size(); i++){
        int counter = 0;    // The first loop sets counter = 0 to count the presence of the grade in the other vector(gradesVector)
        for(int j = 0; j < gradesVector.size(); j++){
            if(vect1[i] == gradesVector[j]){    // The second loop checks if the grade at index i = the grade at index j, and if true then
                counter++;                      // the counter increases by 1
            }
        }
        cout << "No. of " << vect1[i] << " 's : " << counter << endl;
    }

}




void Sorting(vector<int>& Vect) // This Function sorts the grades that are entered by the user
{
    int size = Vect.size();
    int temp;

    for(int i = 1; i < size; i++){
        for(int j = i; j > 0; j--){

            if(Vect[j] < Vect[j-1]){
                temp = Vect[j];
                Vect[j] = Vect[j-1];
                Vect[j-1] = temp;
            }
            else break;
        }
    }
}
