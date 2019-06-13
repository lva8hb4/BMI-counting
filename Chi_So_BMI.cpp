#include<stdio.h>
#include<conio.h>
#include<math.h>

char ten[40];	/* Tên */
float cannang;	/* Chiêu Cao */
float chieucao;	/* Cân Nang */	
float chiso;	/* Chi So BMI */	

		/* Ham Nhâp Thong Tin Cua Nguoi */
void Nhap_TT(){	
	
				printf("Xin Moi Nhap Ten Cua Ban : ");
				gets(ten);
				printf("Xin Moi Nhap Can Nang Cua Ban(Kg) : ");
				scanf("%f",&cannang);
				while(cannang <=0){
						printf("Xin Moi Nhap Lai Can Nang Cua Ban(Can Nang > 0(Kg) ) : ");
						scanf("%f",&cannang);
						}
				printf("Xin Moi Nhap Chieu Cao Cua Ban(m) : ");
				scanf("%f",&chieucao);
					while(chieucao <=0){
						printf("Xin Moi Nhap Lai Chieu Cao Cua Ban(Chieu Cao > 0(m) ) : ");
						scanf("%f",&chieucao);
						}
			}
		/* Ham Tinh Chi So BMI */
void Chi_So_BMI(){
				Nhap_TT();
				chiso = cannang/pow(chieucao,2);
				  }
		/* Ham Nhan Xet */
void Nhan_Xet(){
				Chi_So_BMI();
				printf("\n\t\t\t\t----- Ket Qua -----");
				if(chiso < 18.5){
					printf("\n\tTen : %s",ten);
					printf("\n\tCan Nang : %.2f(Kg)",cannang);
					printf("\n\tChieu Cao : %.2f(m)",chieucao);
					printf("\n\tChi So BMI : %.2f",chiso);
					printf("\n\tBan Dang Bi Gay! ");
					printf("\n\tNguy Co Phat Trien Benh: Thap");
					printf("\n\tBan Nen Chon Lai Che Do Dinh Duong De Tang Them %.2f(Kg) - %.2f(Kg)",(18.5 - chiso)*pow(chieucao,2),(24.9 - chiso)*pow(chieucao,2));
					printf("\n\tXin Cam On!");
								}
				else if(chiso >=18.5 && chiso <=24.9){
					printf("Ten : %s",ten);
					printf("\nCan Nang : %.2f(Kg)",cannang);
					printf("\nChieu Cao : %.2f(m)",chieucao);
					printf("\nChi So BMI : %.2f",chiso);
					printf("\nBan Co Than Hinh Binh Thuong!");
					printf("\nNguy Co Phat Trien Benh: Trung Binh");
					printf("\nBan Nen Giu Che Do Dinh Duong Hien Tai");
					printf("\nXin Cam On!");
														}
				else if(chiso >=25 && chiso <=29.9){
					printf("Ten : %s",ten);
					printf("\nCan Nang : %.2f(Kg)",cannang);
					printf("\nChieu Cao : %.2f(m)",chieucao);
					printf("\nChi So BMI : %.2f",chiso);
					printf("\nBan Co Than Hinh Hoi Beo!");
					printf("\nNguy Co Phat Trien Benh: Cao");
					printf("\nBan Nen Chon Lai Che Do Dinh Duong De Giam %.2f(Kg) - %.2f(Kg) ",(chiso - 24.9)*pow(chieucao,2),(chiso - 18.5)*pow(chieucao,2));
					printf("\nXin Cam On!");
													}
				else if(chiso >=30 && chiso <=34.9){
					printf("Ten : %s",ten);
					printf("\nCan Nang : %.2f(Kg)",cannang);
					printf("\nChieu Cao : %.2f(m)",chieucao);
					printf("\nChi So BMI : %.2f",chiso);
					printf("\nBan Bi Beo Phi Cap Do 1!");
					printf("\nNguy Co Phat Trien Benh: Cao");
					printf("\nBan Nen Chon Lai Che Do Dinh Duong De Giam %.2f(Kg) - %.2f(Kg) ",(chiso - 24.9)*pow(chieucao,2),(chiso - 18.5)*pow(chieucao,2));
					printf("\nXin Cam On!");
													}
				else if(chiso >=35 && chiso <=39.9){
					printf("Ten : %s",ten);
					printf("\nCan Nang : %.2f(Kg)",cannang);
					printf("\nChieu Cao : %.2f(m)",chieucao);
					printf("\nChi So BMI : %.2f",chiso);
					printf("\nBan Bi Beo Phi Cap Do 2!");
					printf("\nNguy Co Phat Trien Benh: Rat Cao");
					printf("\nBan Nen Chon Lai Che Do Dinh Duong De Giam %.2f(Kg) - %.2f(Kg)",(chiso - 24.9)*pow(chieucao,2),(chiso - 18.5)*pow(chieucao,2));
					printf("\nXin Cam On!");
													}
				else	{
					printf("Ten : %s",ten);
					printf("\nCan Nang : %.2f(Kg)",cannang);
					printf("\nChieu Cao : %.2f(m)",chieucao);
					printf("\nChi So BMI : %.2f",chiso);
					printf("\nBan Bi Beo Phi Cap Do 3!");
					printf("\nNguy Co Phat Trien Benh: Nguy Hiem");
					printf("\nBan Nen Chon Lai Che Do Dinh Duong De Giam %.2f(Kg) - %.2f(Kg)",(chiso - 24.9)*pow(chieucao,2),(chiso - 18.5)*pow(chieucao,2));
					printf("\nXin Cam On!");
						}
				}
        /* Bang Chi So BMI Cua Nguoi */
void Bang_BMI(){
				printf("\n\n\t\t\t\t----- Bang Chi So BMI Cua Nguoi -----\n\n");
				printf("\n\tChi So Khoi Co The\t\tPhan Loai\t\tNguy Co Phat Trien Benh");
				printf("\n\t    < 18.5	   \t\tGay                    \t\tThap");
				printf("\n\t-------------------------------------------------------------------------------");
				printf("\n\t    18.5 - 24.9\t\t\tBinh Thuong          \t\tTrung Binh");
				printf("\n\t-------------------------------------------------------------------------------");
				printf("\n\t    25.0 - 29.9\t\t\tHoi Beo              \t\tCao");
				printf("\n\t-------------------------------------------------------------------------------");
				printf("\n\t    30.0 - 34.9\t\t\tBeo Phi Cap Do 1     \t\tCao");
				printf("\n\t-------------------------------------------------------------------------------");
				printf("\n\t    35.0 - 39.9\t\t\tBeo Phi Cap Do 2     \t\tRat Cao");
				printf("\n\t-------------------------------------------------------------------------------");
				printf("\n\t    > 40.0     \t\t\tBeo Phi Cap Do 3     \t\tNguy Hiem");
				}
				
int main(){
		printf("\t\t\t\t----- Chuong Trinh Tinh Chi So BMI Cua Nguoi Va Nhan Xet -----\n\n");
		Nhan_Xet();
		Bang_BMI();
		return 0;
		
	}
	
