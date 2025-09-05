#include <iostream>
#include <string>
using namespace std;
//class này biểu diễn các thông tin và thuộc tính của xe
class Vehicles{
    private:    //khai báo các biến đảm bảo tính đóng gói
    string type;
    int maxSpeed;
    string engineType;
    public:
    //hàm khởi tạo
    Vehicles(){

    }
    //hàm khởi tạo để truyền các giá trị của object
    Vehicles(string tp, int max, string engine){
        type = tp;
        maxSpeed = max;
        engineType = engine;
    }
    //hàm nhập các thông tin của xe
    void input(){
        cout << "Enter vehicle type: ";
        getline(cin, type);
        cout << "Enter max speed (km/h): ";
        cin >> maxSpeed;
        cin.ignore();
        cout << "Enter engine type: ";
        getline(cin, engineType);
    }
    //các hàm get để truy xuất được các thông tin của xe
    string getType(){return type;}
    int getMaxSpeed(){return maxSpeed;}
    string getEngineTpye(){return engineType;}
    //hàm trả về tốc độ tối đa của xe
    void accelerate(){
        cout<<"The "<<type<<" is accelerating to "<<maxSpeed<<" km/h"<<endl;
    }
    //hàm hiển thị thông tin của xe
    void displayInfor(){
        cout<<"Vehicle type: "<<type<<endl;
        cout<<"Vehicle max speed: "<<maxSpeed<<endl;
        cout<<"Vehicle engine: "<<engineType<<endl;
    }
};
int main(){
    Vehicles *mazda = new Vehicles;     //tạo 1 object mới
    mazda->input();     //nhập giá trị
    mazda->accelerate();    //hiện thị tốc độ cao nhất
    mazda->displayInfor();      //hiển thị thông tin xe
    Vehicles *toyota = new Vehicles("Camry", 80, "V8");     //tạo object mới và gán giá trị
    toyota->displayInfor();
    toyota->accelerate();
    //các ví dụ tương tự
    Vehicles *Lexus = new Vehicles("Lexus", 120, "V4");
    toyota->displayInfor();
    toyota->accelerate();
    Vehicles *Ferarri = new Vehicles("ferarri", 360, "V36");
    toyota->displayInfor();
    toyota->accelerate();
    Vehicles *Tesla = new Vehicles("Tesla", 100, "Electronic Engine");
    toyota->displayInfor();
    toyota->accelerate();
    return 0;
}