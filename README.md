# Tên Dự Án

## Giới thiệu


Hệ thống đăng nhập và đăng ký tài khoản và quản lý ví điểm thưởng
## Thành viên tham gia

| Họ và tên | MSSV | Công việc được giao |
|-----------|------|---------------------|
| Le Phuong Nam | K24DTCN215| - Tao github repo, tao project, phan chia cong việc trong team|
| Nguyen Duc Anh | K24DTCN170| - Làm chức năng đăng nhập, đăng ký|
| Trần Thanh Lâm | K24DTCN207 | - View information cua user menu va admin menu|
| Nguyễn Văn Thắng | K24DTCN230 | - View balance and tranfer points|


## Phân tích và đặc tả chức năng

### 1. Tổng quan hệ thống

Hệ thống được thiết kế theo mô hình Monoservice

### 2. Đặc tả chức năng chi tiết

#### 2.1. Quản lý người dùng
- Đăng ký tài khoản: Cho phép người dùng đăng ký tài khoản mới với username và mật khẩu
- Đăng nhập: Xác thực người dùng với thông tin đăng nhập
- Quản lý thông tin cá nhân người dùng

#### 2.2. Phân chia người dùng
- người dùng bình thường chỉ được phép truy xuất thông tin cá nhân, được phép thay đổi mật khẩu
- Người dùng admin được phép theo dõi danh sách user, 

#### 2.3. Quản lý hoạt động ví
- Mỗi người dùng có một bộ dữ liệu về điểm (wallet), có mã số định dnah duy nhất
- Giao dịch: Khi chuyển từ ví A sang ví B sẽ gồm: 1. Mở ví A, 2. Tìm ví B, 3. Chuyển điểm từ ví A sang B

## Cài đặt và sử dụng

### Yêu cầu hệ thống

- Dev-C++ 

### Cài đặt

1. Clone repository:
```bash
git https://github.com/namlephuong95/ptit-btl-c.git
cd account-wallet-management
```

2. Open with Dev-C++
```
Click compile button or F9
```


### Cách chạy chương trình

1. Khởi động server:
```bash
Tại Dev-C++ chạy ứng dụng bằng cách click Run or F10
```




