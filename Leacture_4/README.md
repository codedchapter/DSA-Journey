
---
## AI GENERATED TRANSCRIPT.

### 🎬 **Transcript: Lecture 4 - Patterns (DSA Series by Shradha Khapra)**

"Hi everyone aur welcome to the complete DSA series. Aaj hum karne wale hain apna next chapter, jo ki hai **Patterns**. Ab patterns kya hote hain? Patterns mein basically hum loops aur nested loops ko use karke apni screen ke upar kuch interesting patterns ko print karwate hain.

Ab patterns ko study karne ke peeche logic ye rehta hai ki baad wale chapters mein hum loops ko bahut zyada use karenge. Example ke liye, aage jaake Dynamic Programming naam ka hamara ek chapter aayega, jiske andar hum kai saari algorithms karenge, jismein nested loops bahut baar use honge. Ab baad mein loops hum aasani se aur jaldi likh paayein, uske liye aaj humein baithkar dedicatedly is chapter ke andar loops ko likhna, loops ka logic banana, practice karna hai. Toh uske liye is poore chapter ka jo objective rahega, wo hai nested loops ko achhe se study karna, achhe se samajhna, aur achhe se khud se bana paana.

Also, ye jo trick hai, ye almost har pattern ke question ke upar apply karti hai. Aur isko ek baar humne samajh liya, toh saare ke saare pattern questions karna hamare liye bahut aasaan ho jayega. Also, jitne bhi pattern ke questions aaj hum discuss karenge, un sab ko hum solve karenge with the help of a **'for' loop**. Waise toh chahe toh hum while loop bhi use kar sakte hain, hum do-while loop bhi use kar sakte hain, lekin main in saare pattern ke questions ko aapko for loop se karwaungi. Kyunki aage jaake majority of the jo algorithms hoti hain, usmein hum for loop ko use karne wale hain.

Aur there is also one more disclaimer before the start of the chapter: patterns ke jo sawal hote hain, ye interview questions ki form mein directly nahi pooche jaate. Majority companies aapse pattern ke na toh coding test mein poochegi, na interviews mein poochegi. Toh isliye kai baar aapne dekha hoga ki patterns ke kahin-kahin jagah 25 sawal karaye jaate hain, 30 sawal karaye jaate hain. Jitne more than necessary hain, usse sirf hamara time waste hoga. Toh aaj ke chapter ke andar hum sirf utne sawalon ke upar focus karenge jo humein itna capable bana de, jo humein itna confident bana de ki hum patterns ka koi bhi sawal solve kar paaye.

Toh shuru karte hain apne first pattern ke saath. First jo hamara pattern hai, isko maine **Square Pattern** bol diya hai. Waise patterns ke naam fix nahi hote, ye naam maine khud hi diye inko. This is the square pattern. Basically, it's an easy level pattern. Bilkul shuruat mein hum pace dheere-dheere rakhenge.

Toh ye square pattern hai, jisko humein draw karna hai for `n = 4`. 'n' ka matlab hai basically the total number of lines. Ab pattern ka logic hum aise nahi likhte jaise 'cout' kar do 1 2 3 4, aur wo chaar baar 'cout' kar do. Pattern ka logic hum **generic tarike se** likhte hain. Generic tarike se logic likhne ka matlab hota hai ki 'n' ki value aaj toh 4 hai, par kal ko agar 3 hui, toh ek different pattern print hona chahiye.

Ab jab bhi hamare paas koi bhi pattern ka sawal aata hai na, what is the trick? **The trick is the logical way to do things.**
1. **Outer Loop:** Hamesha **rows (lines)** ko control karta hai. Jitni lines hain, outer loop utni baar run karega.
2. **Inner Loop:** Ye decide karta hai ki us specific line (row) ke andar **columns** mein kya print hoga.

Toh jab bhi pattern ke andar jitni number of lines hamari hoti hain, hamara outer loop utni baar run karna chahiye. Outer loop basically 'n' times run karega. Kisi bhi loop ko agar hum 'n' times run karwana chahte hain, toh humein us loop ko `1` se lekar `n` tak run karwana padega.

Uske baad humein decide karna hota hai: 'Theek hai, hamari pehli line pe aake kuch print karwa denge, doosri pe, teesri pe. Par har line mein kya print hona chahiye?' Basically isko hum row kehte hain. Aur ye jo upar se neeche ki taraf aate hain, ye hamare columns hain. Toh ek single row ke andar jo print karwana hai, uska logic hamara **inner loop** batata hai.

Jaise for example, yahan par mujhe pata hai ki mere paas chaar lines hain: 1, 2, 3, 4. Toh mera outer loop hoga:
`for (int i = 1; i <= n; i++)`
Ye 'n' times run karega. Jab ye first time run karega (i=1), hum first line pe honge. Second time (i=2), second line pe honge.
Ab inner loop ki baat karte hain. Kya main keh sakti hoon ki meri ek line ke andar 1 se lekar 'n' tak numbers printed hain? Haan. Har ek single line mein, yahan pe bhi, yahan par bhi, 1 se lekar 'n' tak numbers print ho rahe hain.
Toh inner loop hoga:
`for (int j = 1; j <= n; j++) { cout << j << " "; }`
Aur jaise hi inner loop khatam ho, humein next line par jaana hai, toh: `cout << endl;`

Dekho, kitna simple hai. Isko run karte hain, n = 4 dete hain. Output aata hai:
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
Perfect! Ye hamara first pattern, Square Pattern, ho gaya.

Ab aate hain **Problem 2: Half Pyramid using Stars (*)**.
n = 4 ke liye:
*
* *
* * *
* * * *

Dekho, yahan par lines toh wahi 'n' hain. Toh outer loop wahi rahega: `for (int i = 1; i <= n; i++)`.
Ab inner loop mein kya change hua? Pehle inner loop 1 se 'n' tak chalta tha. Lekin ab dhyan se dekho:
Pehli line (i=1) mein 1 star hai.
Doosri line (i=2) mein 2 stars hain.
Teesri line (i=3) mein 3 stars hain.
Matlab, 'i'-th line mein 'i' stars hain!
Toh inner loop ki condition kya hogi? `for (int j = 1; j <= i; j++)`.
Bas! Ye hi golden rule hai. Outer loop rows control karta hai, inner loop columns control karta hai.
Code banega:
```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

Ab **Problem 3: Half Pyramid using Numbers**.
Output:
1
1 2
1 2 3
1 2 3 4

Yahan par bhi lines 'n' hain. Outer loop wahi: `i = 1` se `n` tak. Inner loop wahi `j = 1` se `i` tak chalega.
Farq sirf itna hai ki hum star ki jagah kya print kar rahe hain? Hum 'j' print kar rahe hain! Kyunki 'j' ki value 1 se shuru hoke 'i' tak ja rahi hai, jo ki exactly wahi output de raha hai.
```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << j << " ";
    }
    cout << endl;
}
```

Ab thoda level up karte hain. **Problem 4: Inverted Half Pyramid using Stars**.
n = 4 ke liye:
* * * *
* * *
* *
*

Dekho, lines abhi bhi 'n' hain. Outer loop wahi rahega: `i = 1` se `n` tak.
Ab inner loop mein kya pattern hai?
i=1 (pehli line) mein 4 stars hain.
i=2 (doosri line) mein 3 stars hain.
Notice karo: stars ki count `n - i + 1` hai.
Jaise i=1 ke liye: 4 - 1 + 1 = 4. i=2 ke liye: 4 - 2 + 1 = 3.
Toh inner loop ki condition hogi: `for (int j = 1; j <= n - i + 1; j++)`.
Alternative tareeka: Hum outer loop ko ulta bhi chala sakte hain! `for (int i = n; i >= 1; i--)` aur inner loop simple: `for (int j = 1; j <= i; j++)`. Dono tareeke 100% correct hain. Main aapko dono sikha rahi hoon taaki aapka logic flexible ban sake.

Ab aate hain ek naye twist par: **Character Patterns (Problem 6)**.
n = 4 ke liye:
A
A B
A B C
A B C D

Yahan par numbers ki jagah characters hain. Hum kaise karenge?
Ek variable lete hain: `char ch = 'A';`
Lekin dhyan do, agar hum `ch++` inner loop mein karenge, toh next line 'B' se shuru hogi, jo ki galat hai. Hamein har line 'A' se shuru karni hai.
Toh solution ye hai ki `char ch = 'A';` ko outer loop ke ANDAR declare karo.
```cpp
for (int i = 1; i <= n; i++) {
    char ch = 'A';
    for (int j = 1; j <= i; j++) {
        cout << ch << " ";
        ch++;
    }
    cout << endl;
}
```
Dry run: i=1, ch='A', j=1, 'A' print, ch='B', endl. i=2, ch wapas 'A' set hoga (kyunki declaration loop ke andar hai), j=1 'A', ch='B', j=2 'B', ch='C', endl. Bilkul sahi!

Ab **Problem 10: Reverse Number Pattern**.
4 3 2 1
3 2 1
2 1
1

Iske liye kya karenge?
Outer loop `i = n` se `1` tak.
Inner loop `j = i` se `1` tak (ulta!).
```cpp
for (int i = n; i >= 1; i--) {
    for (int j = i; j >= 1; j--) {
        cout << j << " ";
    }
    cout << endl;
}
```
Dry run: i=4, j=4 se 1 tak (4 3 2 1). i=3, j=3 se 1 tak (3 2 1). Perfect! Ye ek bahut common interview warm-up question hai.

Ab dhyan se sunna, kyunki ab se patterns thode complex honge jahan **spaces** ka role aayega.
Jab bhi pattern mein spaces aur stars/numbers dono hote hain, toh inner loop ko hum parts mein tod dete hain.
**Rule:** Pehle spaces print karo, phir stars/numbers print karo. Kabhi bhi ek hi loop mein dono mix mat karna, warna logic bahut complicated ho jayega.

**Problem 13: Inverted Triangle Pattern with Spaces and Stars.**
n = 4:
* * * *
 * * *
  * *
   *

Yahan har line mein spaces badh rahe hain aur stars kam ho rahe hain. Main 0-based indexing use kar rahi hoon (`i = 0` se `n-1` tak) kyunki spaces calculate karna 0-based mein bahut aasaan hota hai.
Table banate hain:
i = 0: 0 spaces, 4 stars
i = 1: 1 space, 3 stars
i = 2: 2 spaces, 2 stars
i = 3: 3 spaces, 1 star

Spaces ka formula: `i`
Stars ka formula: `n - i`

Code:
```cpp
for (int i = 0; i < n; i++) {
    // 1. Spaces print karo
    for (int j = 0; j < i; j++) {
        cout << " ";
    }
    // 2. Stars print karo
    for (int j = 0; j < n - i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```
Dry run: i=0, space loop 0 baar, star loop 4 baar. i=1, space loop 1 baar, star loop 3 baar. Bilkul perfect!

Ab aate hain sabse classic pattern par: **Problem 14 - Pyramid Pattern (Triangle)**.
n = 4:
   *
  * * *
 * * * * *
* * * * * * *

Yahan par spaces aur stars dono hain, aur dono ka pattern observe karna padega.
Let's make a table for n = 4 (i = 0 to 3):
i = 0: 3 spaces, 1 star
i = 1: 2 spaces, 3 stars
i = 2: 1 space, 5 stars
i = 3: 0 spaces, 7 stars

Spaces ka formula: `n - i - 1`
Stars ka formula: `2 * i + 1` (Kyunki 1, 3, 5, 7 odd numbers hain, aur odd numbers ka general formula `2*i + 1` hota hai jab i=0 se shuru ho).

Toh code banega:
```cpp
for (int i = 0; i < n; i++) {
    // Spaces
    for (int j = 0; j < n - i - 1; j++) {
        cout << " ";
    }
    // Stars
    for (int j = 0; j < 2 * i + 1; j++) {
        cout << "*"; // Yahan star ke baad space nahi dena, warna shape bigad jayegi
    }
    cout << endl;
}
```
Dry run: i=0, spaces = 3, stars = 1. i=1, spaces = 2, stars = 3. Bilkul sahi! Ye pyramid pattern ka universal logic hai. Isko yaad mat karo, observe karo. `n-i-1` aur `2*i+1`.

Ab isko thoda modify karte hain: **Problem 15: Hollow Pyramid Pattern**.
n = 4:
   *
  * *
 *   *
* * * *

Dekho, ye same pyramid hai, lekin andar se khaali (hollow) hai. Sirf boundaries par stars hain.
Table banate hain:
i = 0: 3 spaces, 1 star
i = 1: 2 spaces, 1 star, 1 space, 1 star
i = 2: 1 space, 1 star, 3 spaces, 1 star
i = 3: 0 spaces, 7 stars (poori line bhari hui hai)

Logic:
Outer loop `i = 0` se `n-1`.
1. Pehle spaces: `n - i - 1` times. (Same as solid pyramid)
2. Ab stars aur inner spaces. Yahan par humein condition lagani padegi.
   Agar `i == 0` (first line) ya `i == n - 1` (last line), toh poora row stars se bhara hoga.
   Lekin beech ki lines (jaise i=1, i=2) mein sirf pehla aur aakhri star hoga, aur beech mein spaces hongi. Inner spaces ka formula `2 * i - 1` hai.

Corrected Logic for Hollow Pyramid:
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) cout << " ";
    if (i == 0 || i == n - 1) {
        // Pehli aur aakhri line mein poore stars
        for (int j = 0; j < 2 * i + 1; j++) cout << "*";
    } else {
        // Beech ki lines mein sirf do stars aur beech mein spaces
        cout << "*";
        for (int j = 0; j < 2 * i - 1; j++) cout << " ";
        cout << "*";
    }
    cout << endl;
}
```
Ye logic 100% robust hai. i=0: 1 star. i=3: 7 stars. i=1: 1 star, 1 space, 1 star. Perfect!

Ab inko combine karke banate hain: **Hollow Diamond Pattern**.
Ye basically Hollow Pyramid (top) + Inverted Hollow Pyramid (bottom) hai.
Lekin dhyan rahe, middle wali line (jo sabse lambi hai) dono mein count nahi honi chahiye, warna wo do baar print ho jayegi.
Toh Top Half: `i = 0` se `n-1`.
Bottom Half: `i = 1` se `n-1`. (Kyunki `i=0` wali full star line already top half ne print kar di hai).

Bottom Half Code (adjusted):
```cpp
for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) cout << " ";
    cout << "*";
    for (int j = 0; j < 2 * (n - i) - 3; j++) cout << " ";
    if (i != n - 1) { // Last line mein sirf ek star hota hai, doosra star nahi
        cout << "*";
    }
    cout << endl;
}
```

Ab aate hain is lecture ke final, aur thoda tricky, Homework Pattern par: **Problem 16 - Butterfly Pattern**.
n = 4:
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

Dekho, ismein 4 parts hain har line ke: Left stars, Middle spaces, Right stars, aur Newline.
Aur ye pattern symmetric hai. Top half aur bottom half.

Formulas for Top Half (i = 1 to n):
- Left stars: `i` times
- Middle spaces: `2 * (n - i)` times. (Check: i=1 -> 2(3)=6. i=4 -> 2(0)=0. Sahi!)
- Right stars: `i` times.

Code for Top Half:
```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) cout << "*";
    for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
}
```

Bottom Half (i = n down to 1):
Ye bilkul top half ka ulta hai. Toh hum loop ko `i = n` se `1` tak ulta chala sakte hain, aur same inner loops use kar sakte hain!
```cpp
for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) cout << "*";
    for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
}
```

Dekha kitna simple ho gaya jab humne pattern ko parts mein tod diya?
Yahi meri poori teaching ka mantra hai: **Break the problem into smaller, manageable pieces.**
Pehle rows dekho (outer loop). Phir us row ke columns dekho (inner loops). Agar spaces hain, toh unko alag loop mein daalo. Agar stars hain, toh unko alag loop mein daalo. Kabhi bhi ek hi loop mein space aur star ka complex if-else mat lagao, jab tak ki bilkul zaroori na ho.

Toh coders, ye the hamare patterns. Main chahti hoon ki tum in sabhi codes ko khud likho, dry run karo, aur phir homework wale butterfly pattern ko bina dekhe khud se likhne ki koshish karo. Agar tumne ye kar liya, toh main guarantee deti hoon ki nested loops ka darr hamesha ke liye khatam ho jayega.

Agle lecture mein hum dekhenge Functions ke baare mein, jahan hum inhi patterns ko functions ke andar daal kar dekhenge ki code kitna clean aur reusable ban jata hai. Toh practice karte raho, dry run karte raho, aur milte hain next lecture mein. Happy Coding!"

---

#### **21:42 – 35:01 | Practice Problem 4 & 5 (Right-Aligned Triangles)**
"Ab aate hain Practice Problem 4 aur 5 par. Yahan par hum thoda aur variation dekhenge.
Problem 4 mein humein ek **Right-Aligned Triangle** banana hai. `n = 4` ke liye output kuch aisa hoga:
   *
  **
 ***
****

Dekho, yahan par har line mein spaces aur stars dono hain. Jab bhi pattern mein spaces aur characters/stars dono hon, toh humesha ek table banao.
Table banate hain:
i = 1: 3 spaces, 1 star
i = 2: 2 spaces, 2 stars
i = 3: 1 space, 3 stars
i = 4: 0 spaces, 4 stars

Ab formulas nikalte hain:
**Spaces ka formula:** `n - i` (Jaise i=1 ke liye 4-1 = 3)
**Stars ka formula:** `i` (Jaise i=1 ke liye 1)

Toh code banega:
```cpp
for (int i = 1; i <= n; i++) {
    // Pehle spaces print karo
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    // Phir stars print karo
    for (int j = 1; j <= i; j++) {
        cout << "*";
    }
    cout << endl;
}
```
Dekha? Kitna simple hai. Bas pehle spaces ka loop lagaya, phir stars ka. Inner loop mein kabhi bhi space aur star ko mix mat karna, warna logic bahut complex ho jayega."

#### **42:18 – 49:48 | Problem 7, 8 & 9 (Character Pyramids)**
"Problem 7 aur 8 mein hum character pyramids banayenge. Jaise:
   A
  ABA
 ABCBA
ABCDCBA

Yahan par spaces same hain jo humne pyramid mein padhe the: `n - i - 1`.
Lekin stars ki jagah characters hain. Pehle characters badhte hain (A se C tak), phir ghat-te hain (B se A tak).
Iske liye hum ek variable `char ch = 'A';` lete hain.
Pehle increasing part ke liye loop chalao: `j` loop `0` se `i` tak. `cout << ch; ch++;`
Phir decreasing part ke liye loop chalao. Lekin dhyan do, `ch` ko do baar decrement karna padega (`ch = ch - 2;`), kyunki last increment ke baad wo ek step aage nikal gaya hota hai.
Phir `j` loop `i-1` se `0` tak. `cout << ch; ch--;`
Ye thoda tricky hai, isliye iska dry run zaroor karna. Ek baar dry run kar liya toh logic clear ho jayega."

#### **53:18 – 56:23 | Problem 11 & 12: Floyd's Triangle Pattern**
"Ab aate hain Problem 11 aur 12 par, jo hai **Floyd's Triangle**.
`n = 5` ke liye output:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

Dekho, yahan par numbers continuous chal rahe hain. 1 se shuru hoke 15 tak.
Iske liye hum kya karenge? Hum ek variable `int num = 1;` loops ke bahar declare karenge.
Outer loop `i = 1` se `n` tak.
Inner loop `j = 1` se `i` tak.
Inner loop ke andar hum `cout << num << " ";` karenge aur turant `num++;` kar denge.

Code:
```cpp
int num = 1;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << num << " ";
        num++;
    }
    cout << endl;
}
```
Dekha? Kitna simple hai. Bas ek extra variable use kiya jo har iteration mein increment ho raha hai. Ye pattern interviews mein bahut common hai, toh iska logic achhe se samajh lena."

---

#### **1:13:28 – 1:29:14 | Problem 15: Hollow Diamond Pattern (Detailed Dry Run)**
"Ab aate hain is lecture ke sabse bade aur important pattern par: **Hollow Diamond Pattern**.
Isko hum do parts mein divide karenge: **Top Half** (Hollow Pyramid) aur **Bottom Half** (Inverted Hollow Pyramid). Main aapko exact table bana kar dikhati hoon.

**Top Half Logic:**
`n = 4` ke liye top half:
   *
  * *
 *   *
*     *

Table banate hain (i = 0 to 3):
i = 0: 3 spaces, 1 star
i = 1: 2 spaces, 1 star, 1 space, 1 star
i = 2: 1 space, 1 star, 3 spaces, 1 star
i = 3: 0 spaces, 1 star, 5 spaces, 1 star

Ab formulas nikalte hain:
1. **Pehle spaces:** `n - i - 1` (Same as solid pyramid)
2. **Pehla star:** Hamesha print hoga. `cout << "*";`
3. **Inner spaces:** Ye sirf tab print honge jab `i != 0` (kyunki pehli line mein beech mein koi space nahi hoti). Inner spaces ka formula hai: `2 * i - 1`.
4. **Doosra star:** Ye bhi sirf tab print hoga jab `i != 0`.

Code for Top Half:
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) cout << " ";
    cout << "*";
    if (i != 0) {
        for (int j = 0; j < 2 * i - 1; j++) cout << " ";
        cout << "*";
    }
    cout << endl;
}
```

**Bottom Half Logic:**
Ab bottom half ke liye outer loop `n - 1` times chalega (kyunki middle wali line top half mein already print ho chuki hai). Toh `i = 0` se `n - 2` tak.
Table banate hain (n = 4, i = 0 to 2):
i = 0: 1 space, 1 star, 3 spaces, 1 star
i = 1: 2 spaces, 1 star, 1 space, 1 star
i = 2: 3 spaces, 1 star (Last line mein doosra star nahi hota)

Formulas:
1. **Pehle spaces:** `i + 1`
2. **Pehla star:** Hamesha print hoga.
3. **Inner spaces:** Ye sirf tab print honge jab `i != n - 2` (last line). Formula: `2 * (n - i) - 5`. (Check: i=0 ke liye 2(4)-5 = 3. i=1 ke liye 2(3)-5 = 1. Perfect!)
4. **Doosra star:** Sirf agar `i != n - 2`.

Code for Bottom Half:
```cpp
for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < i + 1; j++) cout << " ";
    cout << "*";
    if (i != n - 2) {
        for (int j = 0; j < 2 * (n - i) - 5; j++) cout << " ";
        cout << "*";
    }
    cout << endl;
}
```
In dono parts ko combine kar dijiye, aur aapka Hollow Diamond Pattern print ho jayega! Ye thoda lamba code hai, lekin agar aapne table banakar logic nikala hai, toh ye kabhi galat nahi hoga."

---

#### **1:29:14 – End | Final Homework & Sign-off**
"Ab aate hain is lecture ke final, aur thoda tricky, Homework Pattern par: **Problem 16 - Butterfly Pattern**.
Iska logic maine aapko samjha diya hai. Isme har line ke 4 parts hote hain: Left stars, Middle spaces, Right stars, aur Newline.
Top half ke liye `i = 1` se `n` tak. Left stars `i` times, middle spaces `2 * (n - i)` times, aur right stars `i` times.
Bottom half ke liye `i = n` se `1` tak (ulta loop), aur same inner loops.

Toh coders, ye the hamare patterns. Maine aapko ek-ek karke saare patterns ka logic samjhaya. Ab aapka kaam hai ki aap in codes ko ratne nahi, balki inke peeche ke logic ko samjhein. Outer loop rows control karta hai, inner loop columns. Spaces aur stars ko alag-alag loops mein print karo.

Homework ke liye maine aapko Butterfly Pattern diya hai. Jo sabse pehle iska code khud se likh kar comment section mein dega, usko main Twitter par repost karungi.
Agle lecture mein hum **Functions** padhenge, jahan hum dekhenge ki inhi patterns ko functions ke through kaise call karte hain aur code ko kitna clean banate hain.

Agar aapko ye video achhi lagi, toh like zaroor karna, aur Apna College ke channel ko subscribe karna mat bhoolna. Practice karte raho, dry run karte raho, aur milte hain next lecture mein. Happy Coding!"

---
