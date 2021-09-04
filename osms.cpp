 #include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;
struct product{
	int product_id;
	string product_name;
	int quantity;
	float price;
	float discount;//by percent
	float discount_price;
	float total_price;
}add_pro;
void clothlist();
void shoelist();
void baglist();
float payment(float);
 	
 //}
void cust_menu(int *opp);


int main(){
	int opp1;
cust_menu(&opp1);
	
	
}
void cust_menu(int *opp){
		int option1;
	cout<<"##############################################################################################\n";
	cout<<"########################Welcom To ONLINE SHOPING###############################################\n";
	cout<<"Press the options below to buy things you want."<<endl;
	cout<<"1)Cloth"<<endl;
	cout<<"2)Shoe"<<endl;
	cout<<"3)Bag"<<endl;
	cout<<"4)To Return to thr menu"<<endl;
	//cout<<"Enter your option   to buy things you want."<<endl;
	cin>>option1;
//	cust_menu(&option1);
//	void cust_menu(int *opp){
//	int opp1;
	switch(option1){
		case 1:
			clothlist();
			break;
		case 2:
			shoelist();
				break;
		case 3:
		     baglist();
		     	break;
		case 4:
		    // registor();    
		
		defult:
			cout<<"INVALID";
		

}
	
}
void clothlist(){
	product pro_list[10];
	int clothnum;
	int quant;
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||| CLOTH LIST ||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	pro_list[0].product_id=1; 	pro_list[0].product_name="sweater"; 	pro_list[0].quantity=4; 	pro_list[0].price=1200.00; 	pro_list[0].discount=0.1;
	pro_list[1].product_id=2;   pro_list[1].product_name="jeans";    pro_list[1].quantity=4;     pro_list[1].price=1000.00;  pro_list[1].discount=0.1;
	pro_list[2].product_id=3;   pro_list[2].product_name="sweat pants";    pro_list[2].quantity=7;     pro_list[2].price=2500.00;  pro_list[2].discount=0.2;
	pro_list[3].product_id=4;   pro_list[3].product_name="jackets";   	pro_list[3].quantity=4;     pro_list[3].price=2000.00;  pro_list[3].discount=0.2;
	pro_list[4].product_id=5;   pro_list[4].product_name="dresses";   	pro_list[4].quantity=4;     pro_list[4].price=3000.00;  pro_list[4].discount=0.5;
	pro_list[5].product_id=6;   pro_list[5].product_name="coats";   	pro_list[5].quantity=4;     pro_list[5].price=3500.00;  pro_list[5].discount=0.5;
 
	
 	
	 
	cout<<"Pruduct ID "<<setw(23)<<"Product Name"<<setw(23)<<"Quantity"<<setw(23)<<"Price"<<setw(23)<<"Discount\n";
 	cout<<pro_list[0].product_id<<setw(28)<<pro_list[0].product_name<<setw(26)<<pro_list[0].quantity<<setw(23)<<pro_list[0].price<<setw(23)<<pro_list[0].discount<<endl;
 	cout<<pro_list[1].product_id<<setw(28)<<pro_list[1].product_name<<setw(26)<<pro_list[1].quantity<<setw(23)<<pro_list[1].price<<setw(23)<<pro_list[1].discount<<endl;
 	cout<<pro_list[2].product_id<<setw(28)<<pro_list[2].product_name<<setw(26)<<pro_list[2].quantity<<setw(23)<<pro_list[2].price<<setw(23)<<pro_list[2].discount<<endl;
 	cout<<pro_list[3].product_id<<setw(28)<<pro_list[3].product_name<<setw(26)<<pro_list[3].quantity<<setw(23)<<pro_list[3].price<<setw(23)<<pro_list[3].discount<<endl;
 	cout<<pro_list[4].product_id<<setw(28)<<pro_list[4].product_name<<setw(26)<<pro_list[4].quantity<<setw(23)<<pro_list[4].price<<setw(23)<<pro_list[4].discount<<endl;
 	cout<<pro_list[5].product_id<<setw(28)<<pro_list[5].product_name<<setw(26)<<pro_list[5].quantity<<setw(23)<<pro_list[5].price<<setw(23)<<pro_list[5].discount<<endl;
   
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"Enter the number of the cloth you want to buy"<<endl;
        cin.ignore();
        cin>>clothnum;
      
      if(clothnum==pro_list[0].product_id){
      	cout<<"How many quantities do you want?";
       cin>>quant;
      	if(quant<=pro_list[0].quantity){
    	pro_list[0].price = quant*pro_list[0].price;
    	cout<<"The price is  "<<	pro_list[0].price;
    	cout<<"\nYour Discount  price is :";
    	pro_list[0].discount_price= quant*pro_list[0].discount;
    	cout<<pro_list[0].discount_price<<endl;
    		cout<<"Your total price is :";
    		pro_list[0].total_price=pro_list[0].discount_price * pro_list[0].price;
    		 cout<<	pro_list[0].total_price;
	}
	  }
    
    else if(clothnum==pro_list[1].product_id){
    	cout<<"How many quantities do you want?";
       cin>>quant;
       if(quant<=pro_list[1].quantity){
    	pro_list[1].price = quant*pro_list[1].price;
    	cout<<"The price is  "<<	pro_list[1].price;
    	cout<<"\nYour Discount  price is :";
    	pro_list[1].discount_price= quant*pro_list[1].discount;
    	cout<<pro_list[1].discount_price<<endl;
    	    	cout<<"Your total price is :";
    		pro_list[1].total_price=pro_list[1].discount_price * pro_list[1].price;
    	cout<<pro_list[1].total_price;
	} 
}
	else if(clothnum==pro_list[2].product_id){
		cout<<"How many quantities do you want?";
       cin>>quant;
		if(quant<=pro_list[2].quantity){
    	pro_list[2].price = quant*pro_list[2].price;
    	cout<<"The price is  "<<	pro_list[2].price;
    	cout<<"\nYour Discount  price is :";
    	pro_list[2].discount_price= quant*pro_list[2].discount;
    	cout<<pro_list[2].discount_price<<endl;
    	cout<<"Your total price is :";
    	pro_list[2].total_price=pro_list[2].discount_price * pro_list[2].price;
    	cout<<	pro_list[2].total_price;
	} 
}
	else if(clothnum==pro_list[3].product_id){
		cout<<"How many quantities do you want?";
       cin>>quant;
		if(quant<=pro_list[3].quantity){
    	pro_list[3].price = quant*pro_list[3].price;
    	cout<<"The price is  "<<	pro_list[3].price;
    	cout<<"\nYour Discount  price is :";
    	pro_list[3].discount_price= quant*pro_list[3].discount;
    	cout<<pro_list[3].discount_price<<endl;
    	 cout<<"Your total price is :";
    		pro_list[3].total_price=pro_list[3].discount_price * pro_list[3].price;
    	cout<<	pro_list[3].total_price;
	} 
}
	else if(clothnum==pro_list[4].product_id){
		cout<<"How many quantities do you want?";
       cin>>quant;
		if(quant<=pro_list[4].quantity){
    	pro_list[4].price = quant*pro_list[4].price;
    	cout<<"The price is  "<<	pro_list[4].price;
    	cout<<"\nYour Discount  price is :";
    	pro_list[4].discount_price= quant*pro_list[4].discount;
    cout<<pro_list[4].discount_price<<endl;
    cout<<"Your total price is :";
    	pro_list[4].total_price=pro_list[4].discount_price * pro_list[4].price;
    	cout<<pro_list[4].total_price;
    }
	} 	
     	else {
     			cout<<"How many quantities do you want?";
       cin>>quant;
		if(quant<=pro_list[5].quantity){
    	pro_list[5].price = quant*pro_list[5].price;
    	cout<<"The price is  "<<	pro_list[5].price;
    	cout<<"\nYour Discount  price is :";
    	pro_list[5].discount_price= quant*pro_list[5].discount;
    	cout<<pro_list[5].discount_price<<endl;
    	cout<<"Your total price is :";
    		pro_list[5].total_price=pro_list[5].discount_price * pro_list[5].price;
    	cout<<	pro_list[5].total_price;
	} 	
	 
 }
     	
     }
     	
	 

