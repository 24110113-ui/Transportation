#include<bits/stdc++.h>

using namespace std;

//vehicle class
class Vehicle{
	private:
		string type_;
	    int maxSpeed_;
	    
	public:
		Vehicle(string type, int maxSpeed){
			type_ = type;
			maxSpeed_ = maxSpeed;
		}
		
		void display_Vehicle_info(){
			cout<<"Type: "<<type_<<endl<<"Max speed: "<<maxSpeed_<<"Km/h"<<endl;
		}
};

//functions for actions (check below main() for functions)
void Accelerate();

void Slow_Down();

void Travelling(string x);

void Parking(string x);

void Shipping();

int main(){
	Vehicle Bike("Bike", 24);
	Vehicle Motorbike("Motorbike", 120);
	Vehicle Car("Car", 175);
	Vehicle Train("Train", 95);
	Vehicle Plane("Plane", 965);

	string Type_of_Vehicle;
	cout<<"These are available vehicle, please choose the type of vehicle you want to use:"<<endl;
	Bike.display_Vehicle_info();
	Motorbike.display_Vehicle_info();
	Car.display_Vehicle_info();
	Train.display_Vehicle_info();
    Plane.display_Vehicle_info();
	cin>>Type_of_Vehicle;
	
	string Action;
	cout<<"Please choose one of these actions: accelerate, slow down, travelling, parking(only for bike, motorbike and car), shipping"<<endl;
	cin>>Action;
    if(Action == "accelerate"){
		cout<<Type_of_Vehicle;
		Accelerate();
	} else if(Action == "slow down"){
		Slow_Down();
	} else if(Action == "travelling"){
		Travelling(Type_of_Vehicle);
		cout<<" by "<<Type_of_Vehicle;
	} else if(Action == "parking" && (Type_of_Vehicle != "Train" || Type_of_Vehicle != "Plane")){
		cout<<"This action is unavailable for this vehicle!";
	} else if(Action == "parking" && (Type_of_Vehicle == "Train" || Type_of_Vehicle == "Plane")){
		Parking(Type_of_Vehicle);
	} else if(Action == "shipping"){
		Shipping();
	}
}

//functions start from here
void Accelerate(){
	cout<<" is accelerating to its maximum speed"<<endl;
}

void Slow_Down(){
	cout<<" is slowing down"<<endl;
}

void Travelling(string x){
	string location;
	cout<<"Please enter the location you want to go"<<endl;
	cin>>location;
	cout<<"you has traveled to "<<location<<" by "<<x;
}

void Parking(string x){
	cout<<"You hired a parking slot and park your "<<x<<endl;
}

void Shipping(){
	string item;
	string address;
	cout<<"What do you want to deliver?"<<endl;
	cin>>item;
	cout<<"Where do you want to deliver "<<item<<"?"<<endl;
	cin>>address;
	cout<<item<<"is delivering to "<<address<<endl;
}
