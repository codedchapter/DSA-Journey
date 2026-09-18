# AI GENERATED .
---

### 🎬 **Transcript: Pair Sum & Majority Element (Moore's Voting Algorithm)**

#### **[00:00] Introduction & Pair Sum (Brute Force)**
"Hi everyone and welcome to the complete DSA series jismein aaj hum padhne wale hain array ke do aur questions ko: **Pair Sum** and **Majority Element**. Ab DSA ke andar agar humein koi aur sawal karna hai ya koi aur concept padhna hai, toh woh isi channel ke upar is playlist ke andar humein available mil jayega.

Toh shuruat karte hain sabse pehle apne first question ke saath which is called **Pair Sum**. Pair Sum wala sawal kehta hai ki hamare paas ek given sorted array hai. Sorted array kehne ka matlab hota hai ki ya toh saare ke saare elements ascending ya descending order mein arranged hain. Yahan par humein pata hai ki hamara jo array hai woh ascending order mein sorted hai. Toh is tarike se hamare paas koi bhi ek given array hai, and uske saath we are also given a **target sum**. Jaise is sawal ke liye let's suppose target is equal to 9. Is poore array mein humein return karna hai ek pair of two numbers jin dono ka sum milkar 9 ke equal hoga. Jaise is array ka agar hum example lein, toh yahan par 2 + 7 ka sum 9 hai, toh humein 2 aur 7 ko return karna, ya phir hum 2 aur 7 ka index bhi return kar sakte hain. Toh this is index 0, 1, 2, and 3. Aur hamare paas sawal mein already given hai ki hamesha koi na koi valid and unique answer exist karega. Toh ye ek easy level ka sawal hai and it is really easy.

Sabse pehle iski **brute force approach** ki baat karte hain. Agar humein koi na koi array diya hai, mujhe pata hai ismein se mujhe pair aisa nikalna hai jinka sum target ke equal ho, toh sabse pehli brute force approach dimaag mein jo aayegi woh yahi aayegi: kyun na main saare ke saare pairs nikal loon? Is array ke saare ke saare pairs nikal loon aur un pairs mein jiska bhi sum mere target ke equal ho raha hai... agar target pair sum ke equal ho jata hai toh phir main un dono numbers ka index jo hai woh return kar doongi. Index kaise return kar sakte hain? Ek vector ke andar dono ke dono index values ko hum store kara sakte hain aur use return kar sakte hain.

Jaise for example is particular array ke andar bahut saare pairs banenge: 2 ka pair 7 ke saath bhi ban sakta hai, 2 ka pair 11 ke saath bhi ban sakta hai... 7 ka pair 11 ke saath bhi ho sakta hai... Toh ye saare ke saare unique pairs hain jo is particular array ke andar ban sakte hain. Toh agar humein saare ke saare pairs nikalne hain, toh mujhe pata hai mujhe pehle 2 ko pair karna hai uske next element ke saath, phir uske next element ke saath... Backwards mujhe jaane ki zaroorat nahi hai kyunki chahe 2 aur 7 ka pair ho chahe 7 aur 2 ka pair ho, ye basically same pair hai jiski hum baat kar rahe hain.

Toh kisi bhi array ke andar pairs ko nikalne ke liye sabse pehle toh hum pair ka first element pick kar lete hain. First element hum `i = 0` se lekar `i < n` tak chale jayenge aur har ek element ko apna first number bana lenge. Toh pair ka first number agar 2 ho gaya, toh uske jo next saare ke saare numbers honge woh saare second element of the pair honge. Toh humein ek aur loop lagana padega: `for (int j = i + 1)`. Agar ye already first element ban chuka hai toh 2 aur 7 ka pair banane ke liye ise `i + 1` se start hona padega, phir `i + 2`, `i + 3` jab tak hamara array chal ta ja raha hai. Toh `i + 1` se start karenge `j < n`, `j++`. Toh is tarike se ek nested loop banakar hum i-th aur j-th element wale pairs ko nikal sakte hain.

Ab hum kaise check kar sakte hain? Hum basically aise check kar sakte hain ki agar hamara `arr[i] + arr[j]` (which is basically the pair sum), agar iski value hamari target ke equal ho jati hai, toh phir is case mein vector ke andar hum simply apna `i` push_back kar denge aur `j` push_back kar denge. Aur finally yahin se hi hum return kar sakte hain apna vector. Vector kuch nahi hai, hamara ek answer array-like structure hai. Agar ye cheez satisfy nahi hoti hai toh uske baad hum apne i aur j ke next pair ke liye check karenge. Toh ye jo approach hai, ye hamari brute force approach hai jiski time complexity **O(N^2)** hai kyunki humne ek loop ke andar doosra nested loop use kiya hai."

#### **[06:40] Pair Sum (Optimal / Two Pointers)**
"Ye hamari brute force approach hai. Isi ke upar hamari ek aur optimization hai jo exist karti hai. Aur ye optimization humein kaise pata chalegi? Basically hamare paas already sawal mein given hai ki mera jo array hai woh ek sorted array hai. Brute force approach mein mujhe pata hai mujhe O(N^2) time complexity lagi. Toh hum isse koi better approach use karenge. Ab sawal ke andar sorted array wali jo cheez hai, ye maine toh use hi nahi ki jab maine all pairs nikale brute force approach mein. Toh mera array already sorted hai, is cheez ka toh maine faayda hi nahi uthaya! Aur coding ke sawalon mein generally koi bhi information aapko di jati hai na, toh koi bhi information irrelevant nahi hoti.

Toh yahan par ye jo sorted array mujhe de diya gaya hai na, ye meri time complexity ko kam karne mein help karega. Basically agar mere paas already ek ascending order mein sorted array hai, toh mujhe pata hai mere chhote elements shuruat mein exist karenge aur mere bade elements baad mein exist karenge. Toh agar main shuruat wale elements ka sum loongi toh value chhoti niklegi. Aur main baad wali values ka sum loongi toh overall value thodi si badi aayegi. Toh kyun na yahan par hum use karein apni **Two Pointer Approach** ka?

Two pointer approach kaise use karenge? Hum basically ek pointer le lenge jo start mein hai (is pointer ko hum apna `i` pointer keh sakte hain), aur ek pointer le lenge jisko hum apna `j` pointer keh denge (end se start karenge). Toh hamare paas array ke sabse chhote aur sabse bade element ka sum aa jayega. Ab is sum ko mujhe compare karna hai apne target se. Aur jab is sum ko hum apne target se compare karenge, 3 cases ho sakte hain:
1. Ya toh pair sum target se bada ho sakta hai.
2. Ya phir pair sum target se chhota ho sakta hai.
3. Ya phir pair sum target ke equal ho sakta hai.

Jaise for example agar yahan par target value 9 hai aur abhi pair sum ki value kya hai? 2 + 15 = 17. Toh ye pehla case ho gaya jismein pair sum target se bada hai. Agar first case aa jata hai toh kya main keh sakti hoon mere paas ek bada number aa gaya? Mujhe pair sum itna bada nahi chahiye, mujhe toh target ke paas mein jaana hai. Toh pair sum ko bada kisne banaya? Is baad wale number ne banaya. Matlab ye jo last wala number humne add kiya, humein itna bada number target sum ke andar add nahi karna tha. Humein toh pair sum ke andar isse koi chhota number add karne ki koshish karni thi. Toh hum kya karenge? Agar hamara pair sum target sum se bada aa jata hai, toh hum `j` ko minus minus karenge (`j--`).

Ab ek aur example lete hain. Let's suppose hamara `j` last index par hai, hamara `i` yahan par hai. Is baar apne target ko lenge as 26. Agar target 26 ke equal hai aur yahan par humne pair sum nikala which is 2 + 15 = 17. Ab humein pata hai pair sum agar 17 aa gaya, toh ye target se chhota hai. Toh humein is pair sum ko kisi na kisi tarike se badhane ki zaroorat hai. Aur numbers ascending order sorted array mein kab badhte hain? Numbers jaise-jaise hum aage jaate hain waise-waise badhte hain. Toh apne pair ke sum ko badhane ke liye mujhe is 2 ki jagah koi aur bada number lena padega. Toh second case woh ho jayega jismein pair sum ki value target se chhoti hai, toh hum `i` ko plus plus karenge (`i++`).

Aur third case woh hoga jab pair sum exactly target ke equal aa jaye. Toh us case mein hum dono indices `i` aur `j` ko return kar denge. Ye approach **O(N)** time complexity leti hai kyunki hum array ko ek hi baar traverse kar rahe hain."

#### **[14:42] Majority Element (Brute Force)**
"Ab aate hain apne next question par which is **Majority Element**. Majority element kehta hai ki aapko ek aisa element find out karna hai jiski frequency array ke andar `N / 2` se strictly greater ho (`> N/2`). Aur hamesha ek valid answer exist karega.

Brute force approach kya hogi? Hum ek-ek element ko pick karenge, aur uski frequency count karne ke liye poore array ko dobara traverse karenge. Ek nested loop lagega. Outer loop element pick karega, inner loop uski frequency count karega. Agar frequency `> N/2` mil gayi, toh us element ko return kar denge. Iski time complexity **O(N^2)** hogi."

#### **[21:48] Majority Element (Better Approach using Sorting)**
"Iska better approach kya ho sakta hai? Agar hum array ko sort kar dein. Agar array sort ho gaya, toh jo element `N/2` se zyada baar aata hai, woh hamesha array ke beech mein hi aayega! Kyunki agar ek element array ke aadhe se zyada hisse ko occupy karta hai, toh chahe woh shuruat mein ho ya beech mein, uska ek instance exactly `N/2` index par zaroor hoga.
Toh hum simply array ko sort kar denge, aur `arr[n/2]` ko return kar denge.
Sorting lene wala time: **O(N log N)**. Toh ye O(N^2) se better hai, O(N log N) ho gaya."

#### **[29:03] Majority Element (Moore's Voting Algorithm)**
"Par isse bhi ek aur optimized solution exist karta hai which is **Moore's Voting Algorithm**, and it is an important concept jo aapko aana chahiye. Is algorithm ki time complexity **O(N)** hai aur space complexity **O(1)** hai.

Moore's Voting Algorithm ke liye sabse pehle intuition ki baat karte hain. Ye kehta hai ki agar aisa ek majority element jiski frequency greater than N/2 hai woh is array ke andar exist karta hai, toh Moore's voting algorithm kehti hai ki agar hum saare ke saare elements ki shuruat se frequency track karna start karein, toh hamesha majority element ki hi frequency sabse zyada hogi. Basically agar hum frequency ko ek tarike se 'power' ya 'votes' ki tarah imagine karein...

Moore's algorithm kehti hai ki aapko sort karne ki bhi zaroorat nahi hai. Shuruat karo apne first element ke saath, first element ki frequency le lo 1 ke equal, answer bana lo usko. Jaise hi koi different element aata hai... agar humein same element milta hai, tab toh humein frequency ko `++` karna hai. Par different element jaise hi aata hai, Moore's voting algorithm kehti hai ki is baar aapko frequency ko reset nahi karna hai. Reset isliye nahi karna kyunki sorted array nahi hai, woh element aage bhi aa sakta hai. Toh reset karne ki bajay is baar hum frequency ko `--` (minus minus) kar denge.

Aur kyunki frequency is equivalent to the power, toh frequency majority element ki itni zyada hogi ki aap usko minus minus bhi karoge tab bhi eventually sabse zyada frequency majority element ki hi nikal kar aa rahi hogi. Kyunki majority element ki ye frequency `> N/2` hai. Aadhe se zyada array ke andar wahi exist karta hai. Toh ye values jab minus minus bhi karne ki koshish karengi tab bhi woh jo majority element wali frequency hai, woh at the end of the loop kabhi zero ho hi nahi sakti.

Toh basically agar hum frequency ki shuruat karein 0 ke saath, aur answer mein abhi kuch nahi hai... toh hum ek poora ka poora loop chala sakte hain is array par. Shuru mein agar frequency ki value 0 hai, toh hum isi number ko apna answer bana lenge (`ans = nums[i]`). Phir hum check kar sakte hain: agar hum same element par hain, tab toh hum frequency ko `++` kar denge. Aur agar hum different element par hain, tab hum frequency ko `--` kar denge. Jaise hi ye loop khatam hoga, last mein answer ke andar jo value hogi woh hamesha majority element ki hi value hone wali hai."

#### **[34:44] Dry Run of Moore's Voting Algorithm**
"Ise ek baar dry run bhi kar lete hain is particular array par... `[2, 2, 1, 1, 1, 2, 2]`
- Shuruat `freq = 0`, `ans = 0`.
- Index 0 (val 2): `freq = 0` hai, toh `ans = 2` ho gaya. `ans == nums[i]` hai, toh `freq++` -> `freq = 1`.
- Index 1 (val 2): `ans == nums[i]` hai. Toh `freq++` -> `freq = 2`.
- Index 2 (val 1): `ans != nums[i]`. Toh `freq--` -> `freq = 1`.
- Index 3 (val 1): `ans != nums[i]`. Toh `freq--` -> `freq = 0`.
Ab `freq` 0 ho gayi! Next element 1 hai.
- Index 4 (val 1): `freq == 0` hai, toh `ans` update hokar 1 ho jayega. `freq = 1`.
- Index 5 (val 2): `ans != nums[i]`. Toh `freq--` -> `freq = 0`.
- Index 6 (val 2): `freq == 0` hai, toh `ans` update hokar 2 ho jayega. `freq = 1`.
Loop khatam. Answer ke andar 2 store hai. Return 2.

Chhote parts mein agar dekhein toh zaroori nahi hai har baar answer ke andar majority element hi stored ho (jaise beech mein `ans = 1` ho gaya tha), lekin kyunki majority element ki overall itni frequency hai poore array ke andar ki woh hamesha jeetega hi jeetega. And that is the logic that Moore's algorithm takes into account."

#### **[37:11] Majority Element Variation**
"Majority element wale sawal ki ek aur variation hoti hai jismein kai baar given hota hai ki answer agar exist karta hai toh woh return kar do, agar koi majority element exist nahi karta toh us case mein `-1` return kar do. Jaise for example if we have an array `[1, 2, 3, 4]`. Agar is array mein majority element nikalna ho, toh koi majority element exist nahi karta. Toh yahan par Moore's algorithm humein last mein answer 4 return kar degi. Par 4 majority element nahi hai.

Toh jis sawal mein humein given nahi hota ki answer hamesha exist hi karega, wahan par humein ek aur extra step karna hota hai apni algorithm mein. Jaise hi Moore's algorithm ne apna answer return kar diya, ye toh first step ho gaya. Second step mein jo bhi answer return hua hai, hum uski frequency count kar lete hain ek extra loop laga kar. Aur phir check karte hain: is this frequency jo humne count ki hai, kya woh `> N/2` hai? Agar hai, toh answer return kar do. Agar nahi hai, toh `-1` return kar do.

```cpp
int count = 0;
for(int val : nums) {
    if(val == ans) count++;
}
if(count > nums.size()/2) return ans;
else return -1;
```
Ye simple sa ek additional step hai jisko humein karna hota hai. So this is how the Majority Element and the Moore's Algorithm is going to work. I hope that we are all having a lot of fun solving these DSA questions. Toh aaj ka agar aapne lecture successfully complete kar liya hai, you can let me know in the comments, you can also let me know on Twitter. Till then, keep learning and keep exploring!"
