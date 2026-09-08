
---
# AI GENERATED TRANSCRIPT .

### 🎬 **Transcript: Lecture 5 - Functions (DSA Series by Shradha Khapra)**

#### **00:00 – 02:56 | Introduction: What are Functions?**
"Hi everyone aur welcome to the complete DSA series. Aaj hum karne wale hain apna next lecture, jo ki hone wala hai **Functions** ke baare mein. Jab bhi hum functions ki baat karte hain, functions are a really simple concept. Functions basically give life to programming, aur coding world ki majority cheezein functions use karke hi hoti hain. Toh functions ka hamara ye chapter ek bahut hi simple chapter hone wala hai.

Sabse pehle shuruat hi kar dete hain define karne se ki ek function exactly hota kya hai. So basically, agar hamare program mein humein koi kaam baar-baar (again and again) karna hai, toh hum us kaam ko **function** ke form mein likh dete hain.

Function ko hum ek aise black box ki tarah samajh sakte hain jo kuch input leta hai, kuch kaam karta hai, aur kuch output return karta hai. Ab jis tarah ka output ye return karta hai, humein us output ka type batana padta hai. For example, agar ek function integer value return karta hai, toh uske type mein hum `int` likhenge. Jaise `int main()` hum ek function likhte hain jo return karta hai value zero ko. Toh is tarah se jo hamara `main` function hai, jo execution ka starting point hai, wo actually ek plain and simple function hai."

#### **02:56 – 12:40 | Function Definition, Return Type & Calling**
"Phir hum likhte hain apne function ka naam. Jaise is function ka naam maine `printHello` diya hai. Uske baad hum lagate hain apne parentheses `()`, aur phir curly braces `{}`. Ye curly braces hamara block of code hota hai jo hum function ka poora ka poora kaam batane ke liye use karte hain.

For example, humein bahut baar apne code ke andar 'Hello' print karna hota hai. In lines ko baar-baar likhne ki bajaye, what do we do? We convert that statement into a function. `int main` ke bahar humein apna doosra function likhna padega:
```cpp
void printHello() {
    cout << "Hello" << endl;
}
```
Har function ke saath humein uska return type batana hota hai. Jo functions koi value return nahi karte, unka return type hum likhte hain **`void`**. Void ka matlab hota hai: 'This function does not return anything'. Kyunki ye function sirf print karwa raha hai, kuch return nahi kar raha, toh iska return type `void` ho jayega.

Lekin agar main simply is tarah se apne code ko save karoon aur run karoon, toh mera code koi bhi output produce nahi karega. Kyun? Kyunki function tab tak kaam nahi karta jab tak function ko **call** nahi kiya jata. Function ko hum aise samajh sakte hain ki humare paas ek cook (rasoiya) hai, jiska kaam hai khana banana. Khana tab banega jab hum apne cook ko call karenge aur unse kuch banane ko kahenge. Tabhi khana banne wala hai. Is cheez ko programming ke andar hum **Function Call** ya **Function Invoke** karna kehte hain.

Function ko kaise call karte hain? We basically write the name of the function: `printHello();` aur phir lagate hain semicolon. Ab ise run karenge, toh is baar hamara function call hoga, control yahan aa jayega, aur hamare paas 'Hello' screen par print hokar aa jayega. Aur hum chahen toh is function ko kitni bhi baar call kar sakte hain."

#### **12:40 – 17:04 | Parameters, Arguments & Redundancy**
"Functions ke andar ek aur important concept hota hai: **Parameters**. Jo bhi function ka input hota hai, unhe hum kehte hain Parameters. Inhe hum parentheses ke andar likhte hain. Har ek parameter ka pehle hum type batate hain aur phir usse ek naam de dete hain.

For example, agar aapko ek aisa function create karna hai jo do numbers ka sum calculate kare, toh hum function ko naam de sakte hain `sum`. Iske andar hum do parameters le sakte hain: `int a` aur `int b`.
```cpp
int sum(int a, int b) {
    int s = a + b;
    return s;
}
```
Iska return type `int` hoga kyunki ye integer value return kar raha hai. Ab is function ko call kaise karenge? `sum(10, 5);` Yahan `10` aur `5` ko hum **Arguments** kehte hain.

Ab students ke dimaag mein sawal aana chahiye: Sum calculate karna toh bahut easy hota hai, hum seedha `cout << 10 + 5;` kar dete. Toh humne itna complicated cheez kyun ki? Reason ye hai ki abhi hum simple examples se samajh rahe hain. Kal ko hamare paas 10 lines ya 5 lines ka aisa code hoga jise baar-baar repeat karna padega. Agar hum wahi code baar-baar likhenge, toh program ki readability kharab hoti hai aur ek problem aati hai jise kehte hain **Redundancy**. Redundancy ka matlab hai unnecessary repetition in the code. Ek achhe programmer ki nishani ye hai ki wo kabhi bhi same line of code ko baar-baar repeat nahi karta, balki uska function bana leta hai."

#### **17:04 – 26:37 | Functions in Memory & Pass by Value**
"Jab bhi hum kisi function ko call karte hain, toh memory mein kya hota hai? Jab `main` function chalta hai, toh memory mein ek block banta hai. Jab hum kisi doosre function (jaise `sum`) ko call karte hain, toh memory mein us function ka ek naya block banta hai, jahan uske local variables (`a`, `b`, `s`) store hote hain. Jab function ka kaam khatam hota hai (return hota hai), toh wo block destroy ho jata hai aur control wapas `main` function mein aa jata hai.

Isi ko **Pass by Value** kehte hain. Jab hum arguments pass karte hain, toh unki **copy** ban kar function mein jati hai. Original variable ke andar koi change nahi hota. For example, agar main `main` mein `x = 5` aur `y = 10` rakhoon, aur `swap(x, y)` call karoon, toh function ke andar `a` aur `b` swap ho jayenge, lekin `main` ke andar `x` aur `y` ke values wahi `5` aur `10` rahengi. Kyunki copy pass hui thi, original nahi. (Aage chal kar hum 'Pass by Reference' bhi dekhenge)."

#### **33:13 – 39:55 | Practice Qs 3: Binomial Coefficient (nCr)**
"Ab ek aur question solve karte hain: Calculate Binomial Coefficient for given `n` and `r` values.
Mathematical formula: nCr = n! / (r! * (n-r)!)
For example, 8C2: 8! / (2! * 6!) = (8 * 7 * 6!) / (2 * 1 * 6!) = 56 / 2 = 28.

Isko solve karne ke liye hum apne purane `factorial` function ko **reuse** karenge! Yehi functions ki asli power hai.
```cpp
int nCr(int n, int r) {
    int num = factorial(n);
    int den = factorial(r) * factorial(n - r);
    return num / den;
}
```
Dekha? Main function kisi doosre function ko call kar sakta hai. Aage jaake hum **Recursion** padhenge, jahan ek function khud ko hi baar-baar call karta hai. Programming ki aadhi se zyada cheezein recursion par based hoti hain."

#### **44:59 – End | Summary & Homework**
"Toh coders, aaj humne seekha:
1. Functions kya hote hain aur unhe kaise define/call karte hain.
2. Return types aur `void` ka matlab.
3. Parameters aur Arguments mein antar.
4. Memory mein functions kaise kaam karte hain aur Pass by Value kya hoti hai.

Ab main aapko kuch **Homework Problems** dene wali hoon:
1. Ek function likho jo check kare ki koi number **Prime** hai ya nahi.
2. Ek function likho jo `1` se lekar `N` tak saare **Prime Numbers** print kare. (Yaad rahe, 1 na toh prime hota hai na composite, toh 2 se start karna).
3. Ek function likho jo **Nth Fibonacci Number** print kare. Fibonacci series hoti hai: 0, 1, 1, 2, 3, 5, 8, 13... jahan har number apne pichle do numbers ka sum hota hai. Iske baare mein aap online search kar sakte hain, ye ek achhi self-learning process hogi.
4. **Switch Statement**: Ye conditional statements ka hi ek part hota hai. Jaise ghar mein switch hote hain (ON/OFF), waise hi code mein bhi multiple cases handle karne ke liye `switch` use hota hai. Ye DSA mein directly use nahi hota, lekin college exams mein aa sakta hai, toh ise aap homework ki tarah khud se explore kar sakte hain.

Agar aapne ye homework complete kar liya, toh comment section mein date likh kar zaroor batana. Next lecture mein hum in concepts ko aur aage badhayenge. Happy Coding!"

---
