#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    std::vector <string> arr;
    string temp;
    int i = 1;

    cout << "Pengimputan Buku\nKetik 'Exit' Jika Ingin Keluar Dari Penginputan\n";
    while(temp != "Exit"){
        cout << "Masukkan Nama Buku Ke-" << i << ": "; getline(cin >> std::ws, temp);
        if(temp != "Exit"){
            arr.push_back(temp);
            i++;
        }
    }
    sort (arr.begin(), arr.end());
    cout << "\nResult ascending:\n";
    for(string x : arr){
        cout << x << "\n";
    }
}