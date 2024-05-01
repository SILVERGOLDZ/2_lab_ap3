#include <iostream>
#include <cmath>
using namespace std;

int fpb(int a, int b){;
    if (a == 0){
        return (b);
    }
    
    return fpb(a%b,a);
}

int main(){
    bool penentu = 1;    
    float m,n;
    int r;

    while(penentu){
        cout << "bil 1 : ";
        cin >> m;
        cout << "bil 2 : ";
        cin >> n;

        float temp_m = m - floor(m);
        float temp_n = n - floor(n);
        float* temp_m_ptr = &temp_m;
        float* temp_n_ptr = &temp_n;

            if ((*temp_m_ptr == 0 && *temp_n_ptr == 0) && (m > 0 && n > 0)){
                penentu = 0;
            }
            else{
                printf("Angka non valid\n\n");
            }
    }

    if (n > m){
        int temp;
        temp = m;
        m = n;
        n = temp;  
    }

    cout << "\n\nHasil FPB dari " << m << " dan " << n << " adalah " << fpb(m,n);
}