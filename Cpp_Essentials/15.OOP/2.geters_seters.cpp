#include <iostream>
using namespace std;

// Product (Shopping Website)
class Product {
private:
    int id;
    char name[100];
    int mrp;
    int selling_price;
public:
    // Setters
    void setMrp(int price) {
        if(price > 0) {
            mrp = price;
        }
    }

    void setSellingPrice(int price) {
        // additional checks
        if(price > mrp) {
            selling_price = mrp;
        }
        else {
            selling_price = price;
        }
    }
    // Getters
    int getMrp() {
        return mrp;
    }
    
    int getSellingPrice() {
        return selling_price;
    }
};

int main() {

    Product camera;
    // camera.mrp = 100;
    // camera.selling_price = 200;
    camera.setMrp(100);
    camera.setSellingPrice(99);

    cout << sizeof(camera) << endl;
    cout << "MRP "<< camera.getMrp() << endl;
    cout << "Selling price " << camera.getSellingPrice() << endl;
}