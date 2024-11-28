#include <stdio.h>
#include <string.h>

typedef struct{
	char name[64];
	int price;
	int number;
}item;

typedef struct{
	item products[64];
	int money;
	int product_n;
}store;

void print_s(store cu){  // item* p, int m, int pn
	printf("-------------store-------------\n");
	for(int i = 0; i < cu.product_n; i++){
		printf("%s ", cu.products[i].name);
		printf("%dwon ", cu.products[i].price);
		printf("%d in stock\n", cu.products[i].number);
	}
	printf("-----------%dwon-----------\n", cu.money);
}

item get_item(){
	item b;
	printf("Type item:name price number\n");
	scanf("%s %d %d", b.name, &b.price, &b.number);
	return b;
}

void get_item_p(item* ptr){
	*ptr = get_item();
}

void stock(store* ptr, item b, int price){
	// ptr = &cu; a=1000; b=a;
	// *ptr -> *&cu -> cu
	int cidx = (*ptr).product_n;
	(*ptr).products[cidx] = b;
	(*ptr).product_n++;
	(*ptr).money -= price*b.number;
}

void sell( store* ptr, char* name){
	for(int i = 0; i < (*ptr).product_n; i++){
		if(strcmp(name, (*ptr).products[i].name) == 0){
			(*ptr).products[i].number -= 1;
			(*ptr).money += (*ptr).products[i].price;
			printf("Sold %s for %dwon\n", name, (*ptr).products[i].price);
			return;
		}
	}
	printf("No %s in the store\n", name);
}

int main(){
	store cu;
	cu.money = 1000000;
	cu.product_n = 0;
	print_s( cu );
	item a;
	a = get_item();
	//get_item_p( &a );
	stock(&cu,a,1000);
	print_s(cu);
	sell(&cu, "soju");
	print_s( cu );
	
	
	
}
