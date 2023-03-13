# **HomeWork_1**

## **ITSA_02**
### 問題描述：
試撰寫一程式，可由鍵盤輸入英哩，程式的輸出為公里，其轉換公式如下：
1 英哩= 1.6 公里

### 輸入說明：
輸入欲轉換之英哩數(int)。

### 輸出說明：
輸出公里(double)，取到小數點以下第一位。
[範例]![](https://i.imgur.com/BK4HoIP.png)
n=公里數
使用 fixed 和 setprecision(小數位數) 輸出结果。

```
int main()
{
    int n;
    while(cin>>n){
    double ans=n*1.6; 
    cout<<fixed<<setprecision(1)<<ans<<"\n";
    }
     
    return 0;   
}

```
![](https://i.imgur.com/mC4vojR.png)


## **ITSA_03**
### 問題敘述:
有一圓形，直徑為200，且中心座標為(0,0)。請寫一支程式可以輸入「點」的座標，並判斷「點」是否在圓形的範圍內。如果「點」的位置剛好在邊界的話也算是在圓形範圍內(例：x=100，y=0)。
![題目](https://i.imgur.com/wyAwvAt.png)

### 輸入說明:
輸入一整數座標，依序分別X與Y。
### 輸出說明:
輸出此座標位置在圓內或圓外訊息。
![範例](https://i.imgur.com/xuKxIXR.png)
a=x座標
b=y座標
sqrt()可將括弧內的數值開根號。
透過畢氏定理兩邊長平方開根號透過if...else來判斷斜邊和半徑的大小(如果斜邊<=半徑 輸出 inside 否則 輸出outside)



```
int main (){  
    int a,b;  
    cin >> a >> b ;  
    if (sqrt(a*a+b*b)<100)  
    {  
        cout << "inside" << endl;  
    }  
    else  
    {  
         cout << "outside" << endl;  
    }  
        return 0;  
}  
```
![2](https://i.imgur.com/8BtvlSz.png)

## **ITSA_04**
### 問題描述：
假設某個停車場的費率是停車2小時以內，每半小時30元，超過2小時，但未滿4小時的部份，每半小時40元，超過4小時以上的部份，每半小時60元，未滿半小時部分不計費。如果您從早上10點23分停到下午3點20分，請撰寫程式計算共需繳交的停車費。
### 輸入說明：
輸入兩組時間，分別為開始與離開時間，24小時制。
### 輸出說明：
輸出停車費。
### 範例：
![範例](https://i.imgur.com/ASUwTO6.png)

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

## **ITSA_05**
### 問題描述：
撰寫一個程式，使用者輸入一個整數，印出8位元的二進制表示。
### 輸入說明：
輸入一個整數，介於-128～127之間。
### 輸出說明：
以8位元的二進制顯示。
### 範例：
![範例](https://i.imgur.com/ljyuOxm.png)

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


## **ITSA_06**
### 問題描述:
試撰寫一程式，可輸入月份，然後判斷其所屬的季節（3 ~ 5 月為春季，6 ~ 8 月為夏季， 9 ~ 11 月為秋季， 12 ~ 2 月為冬季）。
### 輸入說明:
輸入月份。
### 輸出說明:
輸出該月份的季節， 3~5 月為春季(Spring)， 6 ~ 8 月為夏季(Summer)， 9 ~ 11 月為秋季(Autumn)， 12 ~ 2 月為冬季(Winter)。
### 範例:
![](https://i.imgur.com/wHcZ49L.png)

設輸入月份為M，使用if判斷輸入值的範圍，將四種季節的月份範圍列出，即輸出該月份對應的季節。
```cpp
#include <iostream>    
using namespace std;    
int main()    
{    
    int M;    
    while( cin >> M )    
    {    
        if (M>=3 and M<=5)    
        {    
            cout << "Spring" << endl;    
        }    
        if (M>=6 and M<=8)    
        {    
            cout << "Summer" << endl;     
        }    
        if (M>=9 and M<=11)    
        {    
            cout << "Autumn" << endl;    
        }    
        if (M<=2 or M==12)    
        {    
            cout << "Winter" << endl;    
        }    
    }    
        
    return 0;    
}  
```
![](https://i.imgur.com/2cUq4Xt.png)


