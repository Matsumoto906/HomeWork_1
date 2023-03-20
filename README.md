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
試撰寫一程式，可輸入月份，然後判斷其所屬的季節（ 3~5 月為春季，6~8 月為夏季， 9~11 月為秋季， 12~2 月為冬季）。
### 輸入說明:
輸入月份。
### 輸出說明:
輸出該月份的季節， 3~5 月為春季(Spring)， 6~8 月為夏季(Summer)， 9~11 月為秋季(Autumn)， 12~2 月為冬季(Winter)。
### 範例:
![](https://i.imgur.com/wHcZ49L.png

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
## **ITSA_08**
### 問題描述:
試撰寫一個程式，由輸入一個整數，然後判別此數是否為質數。質數是指除了 1 和它本身之外，沒有其它的數可以整除它的數，例如， 2, 3, 5, 7 與 11 等皆為質數。
### 輸入說明:
輸入一個正整數。
### 輸出說明:
質數顯示 YES ；非質數顯示 NO 。
### 範例:
![](https://i.imgur.com/G8WRjzC.png)

設輸入為n，設i為2，設ans為0，透過while迴圈來讓除數+1。
透過ans來判斷n除i來判斷是否為質數，質數ans=1 不是質數ans=0。
並透過if判斷ans的數值若等於1顯示yes，否則顯示no。
```cpp
int main()
{   
    int n;   
    int i;   
    int ans;   
   
    cin >> n;   
    ans = 1;   
 
    i = 2;   
    while( i < n )   
    {   
        if( n%i == 0 )   
        {   
            ans = 0;   
        }   
        i = i+1;   
    }   
 
    if( ans == 1 )   
    {   
        cout << "YES" << endl;   
    }   
    else   
    {   
        cout << "NO" << endl;   
    }   
     
   
    return 0;   
}  
```
![](https://i.imgur.com/RhImJjU.png)

## **ITSA_09**
### 問題描述:
試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。
### 輸入說明:
輸入一正整數。
### 輸出說明:
輸出總和。
### 範例:
![](https://i.imgur.com/dyKoc7C.png)

設輸入為a 設i等於0(計算可被3整除的數值總和) 設j來記錄1到a之間可被3整除的數字
透過for迴圈來紀錄1到a之間可被3整除的數值，並回傳加到i。
```cpp
int main() {    
    int a,i,j;     
    i=0;                 
    cin >> a;      
    for (j=1 ; j<=a; j++)    
    {  
        if (j%3==0)       
        {  
            i+=j;         
        }  
    }  
    cout << i <<endl;     
  
    return 0;     
}  
```
![](https://i.imgur.com/RivF26o.png)

## **ITSA_10**
### 問題描述:
給定二個正整數，利用輾轉相除法求其最大公因數。
### 輸入說明:
給定二個正整數
### 輸出說明:
輸出最大公因數
### 範例:
假設輸入為 300 與 250, 則輸出為 50

輸入兩數a,b
先透過while來判斷a,b是否為0，不是則進行輾轉相除法透過if比較a,b的大小再讓兩數相除得出商，並將商數回傳較大值，直到某一方數值為0跳出while迴圈，再進行比大小輸出較大的數值。
```cpp 
int main()  
{  
    int a, b;  
    while( cin >> a >> b )  
    {  
        while( a!=0 and b!=0 )  
        {  
            if( a >= b )  
            {  
                a = a%b;  
            }  
            else if( b > a )  
            {  
                b = b%a;  
            }  
        }  
  
        if( a >= b )  
        {  
            cout << a << endl;  
        }  
        else  
        {  
            cout << b << endl;  
        }  
    }  
  
    return 0;  
}  
```
![](https://i.imgur.com/KTtnTAs.png)
## **ITSA_12**
### 問題描述:
給定下列遞迴函式:
![](https://i.imgur.com/4VWP9ky.png)
請計算出 f (k) 。
### 輸入說明:
輸入值為一個大於 1 的整數。
### 輸出說明:
f(k) 的計算結果。
### 範例:
![](https://i.imgur.com/ZUwqRMZ.png)
宣告一個函式名為f，參數為n，依據題目給的遞回函式，當n=0 and 1的時候，回傳n+1，當n>1的時候，回傳f(n-1) + f(n/2)，設一變數值為a，輸出f(a)。

```cpp
#include<iostream>  
using namespace std;  
  
    int f(int n)  
    {  
        if (n == 0 || n == 1)  
        {  
            return n+1;  
        }  
        if ( n > 1 )  
        {  
            return f(n-1) + f(n/2);  
        }  
    }  
  
    int main()  
    {  
        int a;  
        cin >> a;  
        cout << f(a) << endl;  
      
          
      
  
  
    return 0;  
}
```
![](https://i.imgur.com/TXMroBY.png)

## **ITSA_14**
### 問題描述:
迴文是指從前面讀和從後面讀都相同的一個數字或一段文字。例如下列每一五位數的整數都是迴文： 123321 ， 55555 ， 45554 ， 11611 。請撰寫一個程式，判斷它是否迴文。
### 輸入說明:
輸入一個正整數。
### 輸出說明:
迴文印出 ” 是 ” ；非回文印出 ” 否 ” 。
### 範例:
![](https://i.imgur.com/ttgxa7S.png)
設一字串為a，輸入a字串，

```cpp
#include <iostream>    
#include <string>  
using namespace std;    
    
int main()    
{  
    string a;  
    cin >> a;  
    if (a == string(a.rbegin(),a.rend()))  
    {  
        cout << "YES" << endl;  
    }  
    else  
    {  
        cout << "NO" << endl;  
    }  
      
      
      
      
      
      
      
      
      
    return 0;  
}  
```
![](https://i.imgur.com/fmPQ5vA.png)




