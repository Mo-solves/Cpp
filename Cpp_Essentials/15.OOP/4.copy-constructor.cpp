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

    // Copy constructor
    // Product(Product &X) {
    //     // Create to the copy
    //     id = X.id;
    //     mrp = X.mrp;
    //     // name = X.name;
    //     selling_price = X.selling_price;
    // }
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

    void showDetails() {
        cout << "Name : " << name <<endl;
        cout << "Id : " << id << endl;
        cout << "Selling Price : " << selling_price << endl;
        cout << "MRP : " << mrp << endl;

        cout<<"==========="<<endl;
    }
};

int main() {

    Product camera(101, "VX", 28000, 26000);
    // camera.showDetails();

    // Copy is made using a special constructor -> Copy constructor.
    Product webcam(camera);

    // second way to copy
    Product handycam = camera;


    camera.showDetails();
    webcam.showDetails();
    handycam.showDetails();
    // camera.mrp = 100;
    // camera.selling_price = 200;
    // camera.setMrp(100);
    // camera.setSellingPrice(190);

    // cout << sizeof(camera) << endl;
    // cout << "MRP "<< camera.getMrp() << endl;
    // cout << "Selling price " << camera.getSellingPrice() << endl;
}