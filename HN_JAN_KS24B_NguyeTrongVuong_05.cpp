#include<stdio.h>

int main(){
	int arr[100];
	int x;
	int batDau;
	int them,xoa,vitri;
	int tg;
	int trunggian;
	
while(1){

 	printf("\n__________________MENU__________________\n");
	printf("1.Nhap so phan tu va gia tri mang\n");
	printf("2.In ra gia tri cac phan tu trong mang theo dang\n");
	printf("3.Dem so luong cac so hoan hao trong mang biet so hoan hao la so tong cac uoc bang chinh no \n");
	printf("4.Tim gia tri nho thu 2 trong mang khong duoc sap sep \n");
	printf("5.Them phan tu vao vi tri ngau nhien trong mang phan tu moi va vi tri them vao mang phai do nguoi dung nhap vao .chi them phan tu do chua ton tai trong mang\n");
	printf("6.xoa phan tu tai mot vi tri cu the \n");
	printf("7.Sap xep mang theo thu tu giam dan \n");
	printf("8.Tim kiem phan tu trong mang phan tu tim kiem do nguoi nhap vao su dung thuat toan binay search\n");
	printf("9.Sap xep lai mang va hien thi ra toan bo phann tu co trong mang sao cho toan bo so le dung truoc so chan duong sau\n");
	printf("10.Dao nguoc thu tu cua ca phan tu co trong mang va hien thi toan bo phan tu co trong mang theo dang\n");
	printf("11.Thoat\n");
	printf("\n______________________________________________\n");
	scanf("%d",&batDau);
switch(batDau){
	case 1:// nhap so ptu va gia tri
	printf("Moi ban nhap so phan tu trong mang:");
	scanf("%d",&x);
		if(x>0&&x<100){
			for(int i=0;i<x;i++){
			printf("array[%d]=\n",i);
				scanf("%d",&arr[i]);
					}
					}else{
						printf("moi ban nhap lai ");
							}
							break;
	case 2:// in phan tu 
	if(x>0&&x<100){
		for(int i=0;i<x;i++){
				printf("arr[%d]=%d\n",i,arr[i]);
					}
					}else{
						printf("phan tu nay khong ton tai");
						}
						break;
	case 3://
	break;
	case 4:
	break;
	case 5:// them phan tu vao vi tri ngau nhien nguoi dung nhap
		printf(" moi ban nhap phan tu moi : \n");
			scanf("%d",&them);
				arr[x]=them;
				x++;
					printf("phan tu da them la %d\n",them);
						break;
	case 6:// xoa phan tu 
		printf("moi ban nhap vi tri xoa (1-%d)\n",x);
			scanf("%d",&xoa);
				if(xoa<1||xoa>x){
					printf("phan tu khong ton tai\n");
					}else{
					for(int i = xoa -1;i<x-1;i++){
						arr[i]=arr[i+1];
						}
						x--;
					printf("xoa phan tu o vi tri %d\n",xoa);
						}
						break;
	case 7://sap xep mang theo thu tu giam dan
    for(int i = 0; i < x - 1; i++){
        for(int j = i + 1; j < x; j++){
            if(arr[i] < arr[j]){
               tg = arr[i];
              arr[i] = arr[j];
              arr[j] = tg;        
            }
        }
    }
    printf("nMang da sap xep la: ");
    for(int i = 0; i < x; i++){
        printf("%5d", arr[i]);
    }
	break;
	case 8:// tim kiem phan tu
		printf("moi ban nhap vi tri : ");
			scanf("%d",&vitri);
				for(int i=0;i<x;i++){
				arr[i]=vitri;
				printf("vi tri %d ban tim la arr[%d]\n" ,vitri,arr[i]);
			}
				break;
	case 9://sap xep lai le truoc chan sau
		printf("mang ban dau \n");
		    for(int i = 0; i < x; i++){
		        printf("%d \n", arr[i]);
		  		  }
				    for(int i = 0; i < x - 1; i++){
				        for(int j = i + 1; j < x; j ++){
				            if(arr[i] > arr[j]){
				                trunggian = arr[i];
				                arr[i] = arr[j];
				                arr[j] = trunggian;
		            }
		        }
		    }
		    printf("\nmang sau khi sap xep\n");
		    for(int i = 0; i < x; i++){
		        printf("%d \n",arr[i]);
		    }
	break;
	case 10:
	break;
	case 11:
		return 0;
	break;
		}
	}

return 0;
} 
