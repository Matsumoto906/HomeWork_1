# **HomeWork_1**

## **ITSA_02**

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

```cpp
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
![image](https://user-images.githubusercontent.com/125545260/224548970-49b49f20-f7bc-4e77-8e20-eda29eb9b76c.png)


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
