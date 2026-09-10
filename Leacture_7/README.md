# AI GENERATED
---

### 🎬 **Transcript: Bitwise Operators & Modifiers (DSA Series by Shradha Khapra)**

#### **00:00 – 00:39 | Introduction**
"Hi everyone aur welcome to the complete DSA series. Aaj hum karne wale hain apna next lecture. Is lecture ke andar hum bahut saare important concepts cover karenge jaise hamare **Bitwise Operators**, **Scope of a Variable**, aur **Data Type Modifiers**. Ye saare concepts aage chal kar Bit Manipulation aur Memory management mein bahut kaam aayenge."

#### **00:39 – 12:07 | Bitwise Operators (AND, OR, XOR, Shift)**
"Binary number system ko humne last lecture mein cover kar liya. Bitwise operators basically numbers ki binary form ke upar operations perform karte hain.

**1. Bitwise AND (`&`)**
Ye Logical AND (`&&`) ke kafi similar hota hai.
Rules: `0 & 0 = 0`, `0 & 1 = 0`, `1 & 0 = 0`. Sirf `1 & 1 = 1` hota hai.
*Example:* `a = 4` aur `b = 8`.
4 ki binary = `0100`
8 ki binary = `1000`
Dono ka AND:
```
  0100
& 1000
-------
  0000  -> Decimal 0
```
Toh `cout << (4 & 8);` ka answer **0** aayega.

**2. Bitwise OR (`|`)**
Rules: `0 | 0 = 0`. Baaki sab cases mein `1` aata hai (`0|1=1`, `1|0=1`, `1|1=1`).
*Example:* `4 | 8`
```
  0100
| 1000
-------
  1100  -> Decimal 12 (8 + 4)
```
Toh `cout << (4 | 8);` ka answer **12** aayega.

**3. Bitwise XOR (`^`)**
XOR ka matlab hai Exclusive OR. Rule: Agar bits **same** hain toh answer **0**, agar **different** hain toh answer **1**.
*Example:* `3 ^ 7`
3 ki binary = `011`
7 ki binary = `111`
```
  011
^ 111
-------
  100  -> Decimal 4
```
Toh `3 ^ 7` ka answer **4** aayega.

**4. Left Shift (`<<`) aur Right Shift (`>>`)**
Ye operators bits ko left ya right shift karte hain.
**Left Shift (`<<`):** Agar hum likhte hain `a << b`, iska matlab hai `a` ki bits ko left ki taraf `b` places shift karo. Empty rightmost places ko `0` se fill karo.
*Golden Trick:* `a << b` mathematically **`a * (2^b)`** ke barabar hota hai.
*Example:* `4 << 1` -> `4 * 2^1 = 8`.
*Example:* `10 << 2` -> `10 * 2^2 = 10 * 4 = 40`. (Binary `1010` shift hoke `101000` ban jayega jo 32+8 = 40 hai).

**Right Shift (`>>`):** `a >> b` ka matlab hai bits ko right ki taraf shift karo. Rightmost bits bahar gir jayengi (lose ho jayengi).
*Golden Trick:* `a >> b` mathematically **`a / (2^b)`** (integer division) ke barabar hota hai.
*Example:* `10 >> 1` -> `10 / 2^1 = 5`.
*Example:* `8 >> 2` -> `8 / 2^2 = 8 / 4 = 2`."

#### **12:07 – 18:03 | Operator Precedence**
"Jab ek expression mein multiple operators hon (jaise `+`, `-`, `*`, `/`, `&`, `|`), toh kaunsa pehle evaluate hoga, ye **Operator Precedence** decide karta hai. Jaise Maths mein BODMAS hota hai, waise hi C++ mein precedence table hota hai.
Highest priority **Parentheses `()`** ki hoti hai. Uske baad Unary operators, phir Multiplicative (`*`, `/`), phir Additive (`+`, `-`), aur sabse low priority Assignment (`=`) ki hoti hai. Bitwise operators ki priority logical operators se alag hoti hai, isliye jab bhi doubt ho, expressions ko `()` mein wrap kar lena chahiye."

#### **18:03 – 24:12 | Scope (Local vs Global)**
"Scope ka matlab hai ki ek variable kahan-kahan tak valid aur accessible hai.
1. **Global Variable:** Jo variable kisi bhi function ke bahar declare hota hai. Ye poori file mein kahin bhi use ho sakta hai.
2. **Local Variable:** Jo variable kisi function ya block `{}` ke andar declare hota hai. Ye sirf usi block ke andar valid hota hai.

*Important Rule:* Agar Global aur Local variable ka naam **same** hai, toh C++ **Local variable ko priority** deta hai. (Local overrides Global). Agar aapko global variable ko hi access karna hai, toh aap **Scope Resolution Operator (`::`)** ka use kar sakte ho: `cout << ::x;`."

#### **24:12 – 35:45 | Data Type Modifiers (long, short, signed, unsigned)**
"Modifiers data types ki capacity (size) aur range ko modify karte hain. Inhe mostly `int` ke saath use kiya jata hai.

**1. `long` aur `short`:**
- `long int`: Size badha deta hai (usually 4 bytes se 8 bytes). Range badh jati hai.
- `short int`: Size ghata deta hai (usually 2 bytes). Agar aapko `age` jaisi chhoti value store karni hai jiske liye 4 bytes waste hain, toh `short int` use karo.

**2. `signed` aur `unsigned`:**
By default, `int` **signed** hota hai. Iska matlab ye positive aur negative dono numbers store kar sakta hai (Range: `-2^31` to `2^31 - 1`). Isme MSB (Most Significant Bit) ek **Sign Bit** hoti hai (0 = positive, 1 = negative).

Agar hum **`unsigned int`** banate hain, toh iska matlab hai ki humein sirf **positive numbers** chahiye (jaise Customer ID, Bank Account Number).
Jab hum `unsigned` likhte hain, toh MSB ab sign bit nahi rehti, wo bhi data bit ban jati hai. Isse hamari range **double** ho jati hai (`0` to `2^32 - 1`).

*Tricky Example:* `unsigned int x = -10;`
Kya compiler error dega? Nahi.
`-10` memory mein **Two's Complement** form mein store hoga (`1111...10110`).
Kyunki variable `unsigned` hai, compiler MSB ko sign bit nahi maanega. Wo isko ek pure binary number samjhega aur jab aap `cout << x;` karoge, toh ye ek **bahut bada positive number** (approx 4294967286) print karega! Ye signed aur unsigned ka sabse bada difference hai."

#### **35:45 – End | Summary & Homework**
"Toh coders, aaj humne cover kiya:
1. **Bitwise Operators:** AND, OR, XOR, Left/Right Shift aur unki math tricks (`*2^b`, `/2^b`).
2. **Operator Precedence:** Kaunsa operator pehle evaluate hoga.
3. **Scope:** Local vs Global variables aur `::` operator.
4. **Modifiers:** `long`, `short`, `signed`, `unsigned` aur memory ke andar unka behavior.

**Homework Problems:**
1. **Power of 2:** Ek function likho jo check kare ki koi number `n` power of 2 hai ya nahi, **bina kisi loop ya division ke**. (Hint: Bitwise operators ka use karo. Socho `n & (n-1)` ka kya hota hai).
2. **Reverse Integer:** Ek number diya hai (e.g., `n = 125`). Usko reverse karke ek **naya integer** return karo (`521`). Sirf digits print nahi karne hain, balki unhe mathematically reverse karke store karna hai aur return karna hai.

Aage ki classes mein hum Bit Manipulation ke advanced questions karenge jahan aaj ka logic bahut kaam aayega. Apni progress ko comment section mein date ke saath zaroor update karna. Milte hain next lecture mein, Happy Coding!"

---
