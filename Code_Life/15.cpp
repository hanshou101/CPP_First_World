//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//
//    //分数段。11个段位，都初始化为0。
//    vector<unsigned int> scores(11, 0);
//
//
//    unsigned int grade;
//
//    while (cin >> grade) {
//
//        if (grade <= 100) {
//
//            scores[grade / 10]++;
//
//        } else {
//
//            scores[10]++;
//
//        };
//
//    };
//
//    for (auto item  :  scores) {
//
//        cout << item << "  ";
//
//    };
//
//    cout << endl;
//
//    return 0;
//}