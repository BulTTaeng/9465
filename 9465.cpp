#include <iostream>
#include <algorithm>

using namespace std;

int main() {

  int t,n;
  cin >> t;
  long long dp[2][100002] = {0, };
  long long op1 , op2, op3;

  for(int ii =0; ii<t; ii++){
    cin >>n;

    int ** card = (int **)malloc(sizeof(int*) * (n+2));
    for(int i =0; i<2; i++){
      card[i] = (int *)malloc(sizeof(int) * (n+2));
    }
    
    card[0][0] = 0;
    card[1][0] = 0;

    for(int i=1; i<= n; i++){
      cin >> card[0][i];
    }

    for(int i=1; i<= n; i++){
      cin >> card[1][i];
    }


    dp[0][0] =  card[0][0];
    dp[1][0] = card[1][0];

    dp[0][1] = card[0][1];
    dp[1][1] = card[1][1]; 


    for(int i=2; i<=n; i++){
    
      dp[0][i] = max(dp[1][i-1]+card[0][i], dp[1][i-2] + card[0][i]);
      
      dp[1][i] = max(dp[0][i-1]+card[1][i] , dp[0][i-2] + card[1][i] );

    } // end of dp

    /*for(int i =1 ; i<=n; i++){
      cout << dp[0][i] << " ";
    }
    cout << endl;

    for(int i =1 ; i<=n; i++){
      cout << dp[1][i] << " ";
    }
    cout << endl;*/

    cout << max(dp[0][n] , dp[1][n]) << endl;

    for(int j = 0; j<2; j++){
      free(card[j]);
    }
    free(card);
  }

  return 0;

} 