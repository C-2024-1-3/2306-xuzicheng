#include <iostream>
#include <string>
#include <sstream>
using namespace std;// 包含istringstream头文件
/*
int main() {
    std::string str = "apple,banana,cherry";
    std::string fruit;
    char delim;
    std::cout << "Enter a delimiter: ";
    std::cin >> delim;
    std::cin.ignore(); // 忽略之前读取的换行符

    // 使用istringstream来从字符串中读取
    std::istringstream iss(str);
    while (std::getline(iss, fruit, delim)) {
        std::cout << "Fruit: " << fruit << std::endl;
    }

    return 0;
}*/
//编写如下函数，合并两个排列好的数组，形成一个新的排列好的数组。
//void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
//使用size1 + size2次比较实现函数。编写测试程序，提示用户输入两个排列好的数组，并显示合并以后的数组。
//下面是一个运行样例。
//注意，输入数据的第一个数字是数组的元素数，而不是数组的一部分。假定数组大小不超过80。
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k] = list1[i];
            i++;
            k++;
        }
        else {
            list3[k] = list2[j];
            j++;
            k++;
        }
    }
    while (i < size1) {
        list3[k] = list1[i];
        i++;
        k++;
    }
    while (j < size2) {
        list3[k] = list2[j];
        j++;
        k++;
    }
}
int main() {
    /*string s = "a b c d e f g";
    string alphb;*/
    string s1;
    string s2;
    cout << "Enter list1 :";
    cin >> s1;
    string num;
    char delim = ',';
    istringstream iss(s1);
    int k1 = 0;
    int k2 = 0;
    int size1 = 0;
    int size2 = 0;
    int list1[10] = { 0 };
    int list2[10] = { 0 };
    while (getline(iss, num, delim)) {
        //cout << num << endl;
        if (k1 == 0) {
            size1 = stoi(num);
        }
        else {
            list1[k1-1] = stoi(num);
            //cout << stoi(num) << endl;
        }
        k1++;
    }
    cout << "Enter list2:";
    cin >> s2;
    istringstream iss1(s2);
    while (getline(iss1, num, delim)) {
        //cout << num << endl;
        if (k2 == 0) {
            size2 = stoi(num);
        }
        else {
            list2[k2 - 1] = stoi(num);
            //cout << stoi(num) << endl;
        }
        k2++;
    }
    const int size = 20;
    int result[size] = { 0 };
    merge(list1, size1, list2, size2, result);
    cout << "The merged list is ";
    for (int i = 0; i < (size1 + size2); i++) {
        cout << result[i] << "   ";
    }

}
/*Enter list1 : 5 1 5 16 61 111
        Enter list1 : 4 2 4 5 6
        The merged list is 1 2 4 5 5 6 16 61 111*/