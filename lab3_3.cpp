#include <iostream>

using namespace std; 

int main()
{  
    float i = 1.0 , ans = 0;
while(i > 1.0/20.0 ){
ans = ans+ i ;
i = i/(i+5) ;
}
cout << "ans = " << ans;
    
return 0;
}

