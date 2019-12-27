#include <iostream>

using namespace std; 

int main()
{  
    float i = 0.1, ans = 0;
while(i <= 0.69 ){
ans = ans+ i ;
i = i+0.01 ;
}
cout << "ans = " << ans;
    
return 0;
}

