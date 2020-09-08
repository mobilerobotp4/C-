/* Given an array of 4 digits, return the largest 24 hour time that can be made.

The smallest 24 hour time is 00:00, and the largest is 23:59.  Starting from 00:00, a time is larger if more time has elapsed since midnight.

Return the answer as a string of length 5.  If no valid time can be made, return an empty string.

 

Example 1:

Input: A = [1,2,3,4]
Output: "23:41" */

#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<sstream>
using namespace std;


class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {

        int max_time = -1;
        // prepare for the generation of permutations next.
        sort(A.begin(), A.end());

        do {
            int hour = A[0] * 10 + A[1];
            int minute = A[2] * 10 + A[3];
            cout << A[0] << ' ' << A[1] << ' ' << A[2] <<  ' '<<A[3]<< '\n';

            if (hour < 24 && minute < 60) {
                int new_time = hour * 60 + minute;
                max_time = new_time > max_time ? new_time : max_time;
                cout<< max_time<<endl;
            }
        } while(next_permutation(A.begin(), A.end()));

        if (max_time == -1) {
            return "";
        } else {
            ostringstream strstream;
            strstream << std::setw(2) << std:: setfill('0') << max_time / 60
               << ":" << std:: setw(2) << std:: setfill('0') << max_time % 60;
            return strstream.str();
        }
    }

};

//Driver code
int main(){

    vector <int> t1;
    t1.push_back(1);
    t1.push_back(2);
    t1.push_back(3);
    t1.push_back(4);

    Solution obj1;
    cout<<obj1.largestTimeFromDigits(t1);
    return 0;

}
