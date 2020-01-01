#include <iostream>

using namespace std; 

int main()
{  
    float i = 1.0 , ans = 0;
while(i > 1.0/70.0 ){
ans = ans+ i ;
i = i/(i+1) ;
}
cout << "ans = " << ans;
    
return 0;
}

