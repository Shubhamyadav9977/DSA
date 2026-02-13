#include <iostream>
using namespace std;


int digitSum(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    long long n;
    cin >> n;

    long long temp = n;

    
    int sum1 = digitSum(n);

    
    int sum2 = 0;

    
    while (temp % 2 == 0) {
        sum2 += digitSum(2);
        temp /= 2;
    }

    
    for (long long i = 3; i * i <= temp; i += 2) {
        while (temp % i == 0) {
            sum2 += digitSum(i);
            temp /= i;
        }
    }

    
    if (temp > 1) {
        sum2 += digitSum(temp);
    }

    
    if (sum1 == sum2)
        cout << 1;
    else
        cout << 0;

    return 0;
}
