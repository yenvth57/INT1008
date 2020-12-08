// Example program
#include <iostream>
#include <string>
using namespace std;

bool is_subset(string a, string b){
    if (a.size() < b.size())
        return false;
    else{
        int check_b=0;
        for (int i=0; i<a.size();i++){
            if(a[i]==b[check_b]){
                check_b++;
                if (check_b == b.size())
                    return true;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    for (int time=0;time<n;time++){
        string a,b;
        cin >> a;
        cin >> b;
        string upper_a = a;
        for (int i=0; i<a.size();i++)
            upper_a[i] = toupper(a[i]);
        string only_upper_a = "";
        for (int i=0; i<a.size();i++)
            if (a[i]==toupper(a[i]))
                only_upper_a += a[i];
        if(is_subset(upper_a,b) == true && is_subset(b, only_upper_a) == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
    
}

