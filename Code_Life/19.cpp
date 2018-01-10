//#include <iostream>
//#include <vector>
//#include <stdlib.h>
//
//using namespace std;
//
//int main() {
//
//    vector<int> int_array;
//
//    for (int i = 0; i < 20; ++i) {
//
//        int_array.push_back(i * i);
//
//    }
//
//
//    int sought;
//
//    cout << "输入要查找的整数" << endl;
//    cin >> sought;
//
//    auto start = int_array.begin();
//    auto end = int_array.end();
//    auto mid = int_array.begin() + int_array.size() / 2;
//
//
//    while (mid != end && *mid != sought) {
//
//        if (sought < *mid) {
//
//            end = mid;
//
//        } else {
//
//            start = mid + 1;
//
//        };
//
//        mid = start + (end - start) / 2;
//
//    };
//
//    if (*mid == sought) {
//
//        //此时，mid就是要寻找的那个值。
//
//        cout << "索引值为" << (mid - int_array.begin()) << "的数，就是你要找的那个数，该数的实际值，为" << *mid;
//
//    } else {
//
//        cout << "并没有你要找的那个数。";
//
//    };
//
//    int a;
//    int b;
//    int c;
//
//
//
//    cout << "请输入exit，结束程序" << endl;
//    string exit_str;
//    cin >> exit_str;
//
//    return 0;
//}