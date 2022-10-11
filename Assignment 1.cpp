#include <iostream>
using namespace std;

int main (){
	

int sum;

for(int i = 0; i<101; i++){
if(i % 5 == 0 / i % 7 == 0){
sum = sum +i;

}
}

cout << "The sum of all integers between 0 and 100; divisible by either 2 or 1 is " << sum;

return 0;
}