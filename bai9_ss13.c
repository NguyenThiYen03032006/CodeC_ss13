#include<stdio.h>
void addAllItem(int row, int col, int arr[100][100]){ // nhap gia tri phan tu vao mang
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("moi ban nhap phan tu arr[%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void showItem(int row, int col, int arr[100][100]){// in ra theo ma tran
    for(int i=0; i<row; i++){
        for( int j=0; j<col; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
void showItemCorner(int row, int col, int arr[100][100]){// in phan tu o goc
    for(int i=0; i<row; i++){
        for( int j=0; j<col; j++){
            if(i==0 || i== row-1){
                if(j==0 || j== col-1){
                    printf("%d\t",arr[i][j]);
                }else{
                    printf("\t");
                }
            }else{
                printf("\t");
            }
        }
        printf("\n");
    }
}
void showItemBorder( int row, int col, int arr[100][100]){// in phan tu o bien
    for(int i=0; i<row; i++){
        for( int j=0; j<col; j++){
            if(i==0 || i== row-1){
                printf("%d\t", arr[i][j]);
            }else{
                if(j==0 || j==col-1){
                    printf("%d\t", arr[i][j]);
                }else{
                    printf("\t");
                }
            }
        }
        printf("\n");
    }
}
void showMainDiagonal(int row, int col, int arr[100][100]){// duong cheo chinh
    for(int i=0; i<row; i++){
        for( int j=0; j<col; j++){
            if(i==j){
                printf("%d\t",arr[i][j]);
            }else{
                printf("\t");
            }
        }
        printf("\n");
    }
}
void showMinorDiagonal(int row, int col, int arr[100][100]){// duong cheo phu
    for(int i=0; i<row; i++){
        for( int j=0; j<col; j++){
            if(j == col -i-1){
                printf("%d\t",arr[i][j]);
            }else{
                printf("\t");
            }
        }
        printf("\n");
    }
}
void itemPrime(int row, int col, int arr[100][100]){
    for(int i=0; i<row; i++){
        for( int j=0; j<col; j++){
            int count =0;
            for(int k=1; k<=arr[i][j]; k++){
                if(arr[i][j]% k==0){
                    count++;
                }
            }
            if(count == 2){
                printf("%d\t", arr[i][j]);
            }
            
        }
    }
    printf("\n");
}
int main(void){
    int choose=0, flag=0, row=0, col=0;
    int arr[100][100];
    do{
        printf("MENU \n 1. Nhap gia tri cac phan tu cua mang \n 2. In gia tri cac phan tu cua mang theo ma tran \n 3. In ra cac phan tu o goc theo ma tran \n 4. In ra cac phan tu nam tren duong bien theo ma tran \n 5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran \n 6. In ra cac phan tu la so nguyen to theo ma tran \n 7. Thoat \n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choose);
        switch(choose){
            case 1:
                flag=1;
                printf("Moi ban nhap so hang: ");
                scanf("%d", &row);
                printf("Moi ban nhap vao so cot: ");
                scanf("%d", &col);
                addAllItem(row, col, arr);
                break;
            case 2:
                if(flag!=1){
                    printf("Ban chua khoi tao mang \n");
                }else{
                    showItem(row, col, arr);
                }
                break;
            case 3:
                if(flag!=1){
                    printf("Ban chua khoi tao mang \n");
                }else{
                    showItemCorner(row, col, arr);
                }
                break;
            case 4:
                if(flag!=1){
                    printf("Ban chua khoi tao mang \n");
                }else{
                    showItemBorder(row, col, arr);
                }
                break;
            case 5:
                if(flag!=1){
                    printf("Ban chua khoi tao mang \n");
                }else{
                    if(row == col){
                        printf("Phan tu tren duong cheo chinh: \n");
                        showMainDiagonal(row, col, arr);
                        printf("Phan tu tren duong cheo phu: \n");
                        showMinorDiagonal(row, col, arr);
                    }else{
                        printf("Mang khong co duong cheo chinh va cheo phu \n");
                    }
                }
                break;
            case 6:
                if(flag!=1){
                    printf("Ban chua khoi tao mang \n");
                }else{
                    printf("Phan tu la so nguyen to co trong mang la: \n");
                    itemPrime(row, col, arr);
                }
                break;
            case 7:
                break;
            default:
                printf("Lua chon khong co trong MENU \n");
        }
    }while(choose!=7);
    return 0;
}
