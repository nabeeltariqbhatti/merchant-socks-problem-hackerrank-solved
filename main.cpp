#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
  
  





    return 0;
}

int main()
{
   

    int n;
    cin >> n;

        int f[101]={0},i;
        int c=0;

//filling up the frequency array

        for(i=0;i<n;i++)
        {
            int num;
            cin>>num;
            f[num]++;
        }
            

//counting the total number of pairs

        for(i=1;i<=100;i++)
            c+=f[i]/2;

     cout<<c;
    
return 0;
 
}
