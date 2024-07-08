#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<double> student_marks;
    int num_students;
    cout << "Number of students: " << endl;
    cin >> num_students;

    student_marks.resize(num_students);
    for(vector<double>::size_type i = 0; i<num_students;i++)
    {
        cout << "Enter marks for student #" << i+1 << ": "<<endl;
        cin >> student_marks[i];
    }

    cout << endl;

    for (vector<double>::iterator it = student_marks.begin();
    it != student_marks.end();it++){
        cout << *it << endl;
    }
    return 0;
}