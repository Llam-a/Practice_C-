![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/d81bc2a7-9767-47f7-a5de-709c9c1b9202)

Bài này cũng khá dễ,mình sẽ lưu Can và Chi vào mảng.Rồi sau đó chia dư cho 10 để tìm Can và chia dư cho 12 là tìm Chi.

**Note: Tý và Tị và chữ i dài i ngắn trong các tên Can, Chi.

```cpp
#include <iostream>
using namespace std;

int main() {
    string can[10] = {"CANH", "TAN", "NHAM", "QUY", "GIAP", "AT", "BINH", "DINH", "MAU", "KY"};
    string chi[12] = {"THAN", "DAU", "TUAT", "HOI", "TY", "SUU", "DAN", "MAO", "THIN", "TI", "NGO", "MUI"};

    int year;
    cin >> year;

    cout << can[year % 10] << " " << chi[year % 12] << endl;

    return 0;
}
```

Ví dụ năm 2004 sẽ là Giáp Thân.

Thì Can = Giáp, Chi = Thân. 

Như mình nói ở trên, Can thì chia dư cho 10. `2004 % 10 dư 4`, mà can[4]= {GIAP}. Còn Chi là chia dư cho 12, `2004 % 12 dư 0`, mà Chi[0] = {THAN}.

Còn cách khác nữa là dùng switch case.

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/24de919d-950e-4463-a696-94814188f529)


