<<<<<<< HEAD
# git tutorial

Cách sử dụng git cơ bản:  
1. Cài đặt git cho ubuntu gõ lệnh `sudo apt-get install git`  
2. Để kiểm tra việc cài đặt đã thành công gõ lệnh `git --version` nếu hiển thị phiên bản thì có nghĩa là cài đặt thành công  
3. Bây giờ để cấu hình git trên Ubuntu ta làm như sau:  
`git config --global user.name "Tên tài khoản github của bạn"`  
`git config --global user.email "Email bạn dùng để đăng ký github"`  
 Ví dụ: Tên tài khoản github của mình là *thanhduongvs*, email là *thanh.duong.vs@gmail.com* thì mình gõ như sau:  
`git config --global user.name "thanhduongvs"`  
`git config --global user.email "thanh.duong.vs@gmail.com"`  
4. Ta bắt đầu khởi tạo kho chứa ở local (tức là trên máy tính của chúng ta) bằng lệnh `git init <tên kho chứa>`  
Ví dụ: `git init MyGithub`  
5. Clone Repository có sẵn về máy tính bằng lệnh `git clone địa_chỉ`  
Ví dụ: `git clone https://github.com/tagcom/gittut.git`  
6. Để xem mình đang đứng tronh nhánh nào bằng lệnh `git branch`  
7. Để chuyển tới nhánh khác gõ lệnh `git checkout tên_nhánh`  
Ví dụ: `git checkout thanhduong` là chuyển tới nhánh *thanhduong*  
(Lúc này giả sử là nhánh *thanhduong* đã có trước)  
8. Để tạo nhánh mới gõ lệnh `git checkout -b your_branch`  
Ví dụ: `git checkout -b thanhduong`  
Có thêm ký tự -b là vừa tạo nhánh vừa checkout
(Lúc này giả sử là nhánh *thanhduong* chưa có mới tạo thêm mới)  
9. Để đẩy nhánh mới lên git gõ lệnh `git push -u origin your_branch`  
Ví dụ: `git push -u origin thanhduong`  
10. Để người khác trong nhóm có thể dùng nhánh của bạn gõ lệnh:  
`git fetch`  
`git checkout origin/your_branch`  
11. Để thên folder/file gõ lệnh `git add thanhduong/baitapvim`  
(thư mục *thanhduongP và thư mục con của nó bạn phải tạo trước)  
Ví dụ: `git add thanhduong/baitapvim` là thêm thư mục.  
12. Để kéo từ nhánh *thanhduong* về máy tính gõ lệnh `git pull origin thanhduong`  
13. Mô tả hành động trước khi push gõ lệnh `git commit -a -m "mo ta hanh dong vua thuc hien"`  
14. Để push lên github gõ lệnh `git push -u origin thanhduong`. Sau đó nhập user và password. Chú ý lần đầu tiên tạo nhánh thì có thể push lên được nhưng lần thứ hai thì phải push lên trước.  
15. Để xóa tại kho chứa trên máy tính thì dùng lệnh rm. Để xóa tại kho chứa trên github thì dùng lệnh `git rm --cached filename`  

=======
<<<<<<< HEAD
<<<<<<< HEAD
# testgit
Test git for 
=======
<<<<<<< HEAD
# Test1
=======
# test
first push
>>>>>>> nhanhv4/master
>>>>>>> hung/master
=======
# dell
>>>>>>> anhdn7/master
>>>>>>> hungnh9/master
