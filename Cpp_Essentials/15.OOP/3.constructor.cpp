#include <iostream>
#include <cstring>
using namespace std;

// Product (Shopping Website)
class Product {
private:
    int id;
    char name[100];
    int mrp;
    int selling_price;
public:
    // constructor
    Product() {
        cout << "Inside constructor" << endl;
    }

    // Parameterized
    Product(int id, char *n, int mrp, int selling_price) {
        this->id = id;
        this->mrp = mrp;
        this->selling_price = selling_price;
        strcpy(name, n);
    }
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

    Product camera(101, "VX", 28000, 26000);
    // camera.mrp = 100;
    // camera.selling_price = 200;
    // camera.setMrp(100);
    // camera.setSellingPrice(190);

    // cout << sizeof(camera) << endl;
    cout << "MRP "<< camera.getMrp() << endl;
    cout << "Selling price " << camera.getSellingPrice() << endl;
}