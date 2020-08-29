
#include <iostream>


using namespace std;



int main()
{
    int nums[] = {1,3,5,7,9};
    int value = 7;

    int first =0, last = sizeof(nums)-1;
    while(first <= last){
        int middle = (first + last)/2;
        if(nums[middle] == value){
            cout << "found it";
            break;
        } else if (value > nums[middle]) {
            first = middle + 1;
        } else {
            last = middle - 1;
        }
    }


    return 0;
}
