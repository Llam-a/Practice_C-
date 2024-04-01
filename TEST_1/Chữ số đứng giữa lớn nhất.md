
![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/8a394a01-8978-444f-a4b0-4c37e11bf378)

Bài này cũng có hint luôn rồi, nên cũng dễ.Xử lý từng vấn đề thôi.

Đầu tiên là có tổng chữ số là lẻ.

```cpp
int tmp = n; // ở đây mình có tạo biến tmp để dùng cho vế tìm số giữa ở sau
int count = 0;
while(n){
  ++count;
  n /= 10;
}
if(count % 2 == 0) return false;
```

Tiếp theo là tìm chữ số đứng giữa, và ko có số nào lớn hơn nó.Ta sẽ dùng kết quả count để tìm số ở giữa, bằng cách chạy vòng for.Nếu mà số ở giữa bằng biến count chia 2 thì là nó.Và trong lúc tìm số ở giữa ta cũng đồng thời đi tìm số lớn nhất để so sánh với số giữa.

```cpp
int max = -1;
int mid = -1;
tmp = n;
  for (int i = 0; i < count; i++) {
        int digit = temp % 10;// mình tạo biến digit đế có thể xác định được giá trị của số mid.
        if (i == count / 2)
            mid = digit;
        if (digit > max)// đồng thời so sánh.
            max = digit;
        temp /= 10;
}
tmp = n;
while (temp > 0) {
        int digit = temp % 10;
        if (digit > mid)
            return false;
        temp /= 10;
    }

    return true;
}
```
