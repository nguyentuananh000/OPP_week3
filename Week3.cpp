//Nguyen Tuan Anh
//ID: 24110074
//this code complete with no help from any LLM
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
    string getEngineType(){return engineType;}
    //hàm trả về tốc độ tối đa của xe
    void accelerate(){
        cout<<"The "<<type<<" is accelerating to "<<maxSpeed<<" km/h"<<endl;
    }
    //hàm hiển thị thông tin của xe
    void displayInfor(){
        cout<<"Vehicle type: " << getType()<<endl;
        cout<<"Vehicle max speed: " << getMaxSpeed() <<endl;
        cout<<"Vehicle engine: " << getEngineType()<<endl;
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
    Lexus->displayInfor();
    Lexus->accelerate();
    Vehicles *Ferarri = new Vehicles("ferarri", 360, "V36");
    Ferarri->displayInfor();
    Ferarri->accelerate();
    Vehicles *Tesla = new Vehicles("Tesla", 100, "Electronic Engine");
    Tesla->displayInfor();
    Tesla->accelerate();
    return 0;

}
