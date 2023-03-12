# **HomeWork_1**

## **ITSA_02**

## **ITSA_03**

## **ITSA_04**

a=進場時間(時 * 60+分)
b=離場時間(時 * 60+分)
ans = 總金額

若b <= a，代表有隔夜
故將b + 1440

n = b - a = 停車時間

使用if判斷即可得知需支付金額

```cpp
if (n>240){
        n -= 240;
        ans += (n/30) * 60 + 280;
    }
    
    else if (n>120){
        n -= 120;
        ans += (n/30) * 40 +120;
    }
    
    else if (n>0 && n<=120){
        ans += (n/30) * 30;
    }
```
![AC](https://i.imgur.com/ap64u5d.png)
@VgC5XlHATA6tsRvb5GT47g 
## **ITSA_05**

使用**std::bitset**解十進制轉二進制在C++中為標準解法，bitset< x >更改x即可建立一個位值為x的容器
```cpp
string f(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}
```
![AC](https://i.imgur.com/d5B4ycd.png)

@VgC5XlHATA6tsRvb5GT47g 
## **ITSA_06**