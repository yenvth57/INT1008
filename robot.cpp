#include<iostream>
using namespace std;
int main(){
    int n;
    double xacsuat[100]; 
    int vitri[100];
    cin >> n;
    if (n<0)
        cout << "invalid";
    else{
        for(int i=0;i<n;i++){
            cin >> xacsuat[i];
            vitri[i] = i;
            if (xacsuat[i] < 0 || xacsuat[i]>1){
                cout << "invalid";
                return -1;
            }
        }
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++){
                if(xacsuat[i]<xacsuat[j]){
                    double t;
                    int t_vitri;
                    t = xacsuat[i];
                    xacsuat[i] = xacsuat[j];
                    xacsuat[j] = t;
                    t_vitri = vitri[i];
                    vitri[i] = vitri[j];
                    vitri[j] = t_vitri;
                }
            }
        if (xacsuat[0]<0.05)
            cout << "No one is alive.";
        else{
            int cuu=0;
            while(xacsuat[cuu]>0.05){
                cout << vitri[cuu] << " ";
                for (int i=cuu+1;i<n;i++){
                    xacsuat[i] = xacsuat[i]/2;
                }
                cuu++;
            }
        }
        
    }
    return 0;
}