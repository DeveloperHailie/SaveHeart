#ifndef __UTIL_H__
#define __UTIL_H__
#include "util.h"
#endif

using namespace std;


void cafeImageDraw(const char* name, int x,int y){

   //       BBBB BBB \n
   // _ 檜瞪梱雖 и旋濠噶 嫡堅 x++
   // _睡攪 \n 檜瞪梱雖 嫡堅 轎溘, y++
   char Buffer[200];
   for(int i=0;i<200;i++){
      Buffer[i] = '.';
   }
   char Temp[1000];
   char front;
   char frontLine[500];
   FILE *image = NULL;
   char eol;
   char start;
   int tempX = x;
   fopen_s(&image, name, "r");
   bool first = false;
   if(image==NULL)
      return;

   //feof()朝 だ橾曖 部橾陽 0檜 嬴棋 高(=霤)擊 奩��
   
   while(!feof(image)){
      fscanf(image,"%[^\n]s", Buffer);
      fscanf(image,"%c",&eol);
      strcpy(Temp, Buffer);
      for(int i=0;i<200;i++){
         if(Buffer[i]=='.'){
            break;
         }
         if(first==false && Buffer[i] ==' '){
            tempX++;
         }
         else if(first==false && Buffer[i]!=' '){
            first = true;
            gotoxy(tempX++,y);
            putc(' ',stdout);
            gotoxy(tempX++,y);
            putc(' ',stdout);
            gotoxy(tempX++,y);
            putc(Buffer[i],stdout);
         }
         else if(first==true){
            gotoxy(tempX++,y);
            putc(Buffer[i],stdout);
         }
      }
      tempX = x;
      y++;
      first = false;
      for(int i=0;i<200;i++){
      Buffer[i] = '.';
      }
   }
   fclose(image);
}

void draw3(){
gotoxy(0,1,"Ⅴ收收收收 收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收 Ⅴ    ");
gotoxy(0,2,"早旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬早"); 
gotoxy(0,3,"早早                                                                               早早");
gotoxy(0,4,"早早                                                                               早早");
gotoxy(0,5,"早早                                                                               早早");
gotoxy(0,6,"早早                                                                               早早");
gotoxy(0,7,"早早                                                                               早早");	
gotoxy(0,8,"早早                                                                               早早");
gotoxy(0,9,"早早                                                                               早早");
gotoxy(0,10,"早早                                                                               早早");
gotoxy(0,11,"早早                                                                               早早");
gotoxy(0,12,"早早                                                                               早早");
gotoxy(0,13,"早早                                                                               早早");
gotoxy(0,14,"早早                                                                               早早");
gotoxy(0,15,"早早                                                                               早早");
gotoxy(0,16,"早早                                                                               早早");
gotoxy(0,17,"早早                                                                               早早");
gotoxy(0,18,"早早                                                                               早早");
gotoxy(0,19,"早早                                                                               早早");
gotoxy(0,20,"早早                                                                               早早");
gotoxy(0,21,"早早                                                                               早早");
gotoxy(0,22,"早早                                                                               早早");
gotoxy(0,23,"早早                                                                               早早");
gotoxy(0,24,"早早                                                                               早早");
gotoxy(0,25,"早早                                                                               早早");
gotoxy(0,26,"早早                                                                               早早");
gotoxy(0,27,"早早                                                                               早早");
gotoxy(0,28,"早曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭早 ");
gotoxy(0,29,"Ⅴ收收收收 收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收 Ⅴ ");

}


void draw2(){
gotoxy(0,1,"Ⅴ收收收收 收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收 Ⅴ    ");
gotoxy(0,2,"早旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬早"); 
gotoxy(0,3,"早早                                                                    早早");
gotoxy(0,4,"早早                                                                    早早");
gotoxy(0,5,"早早                                                                    早早");
gotoxy(0,6,"早早                                                                    早早");
gotoxy(0,7,"早早                                                                    早早");	
gotoxy(0,8,"早早                                                                    早早");
gotoxy(0,9,"早早                                                                    早早");
gotoxy(0,10,"早早                                                                    早早");
gotoxy(0,11,"早早                                                                    早早");
gotoxy(0,12,"早早                                                                    早早");
gotoxy(0,13,"早早                                                                    早早");
gotoxy(0,14,"早早                                                                    早早");
gotoxy(0,15,"早早                                                                    早早");
gotoxy(0,16,"早早                                                                    早早");
gotoxy(0,17,"早早                                                                    早早");
gotoxy(0,18,"早早                                                                    早早");
gotoxy(0,19,"早早                                                                    早早");
gotoxy(0,20,"早早                                                                    早早");
gotoxy(0,21,"早早                                                                    早早");
gotoxy(0,22,"早早                                                                    早早");
gotoxy(0,23,"早早                                                                    早早");
gotoxy(0,24,"早早                                                                    早早");
gotoxy(0,25,"早早                                                                    早早");
gotoxy(0,26,"早早                                                                    早早");
gotoxy(0,27,"早早                                                                    早早");
gotoxy(0,28,"早曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭早 ");
gotoxy(0,29,"Ⅴ收收收收 收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收 Ⅴ ");

}

void draw1(){
gotoxy(5,5,"十十十十十十十十十十十十十十十十十十十十十十十十十十十十十十"); 
gotoxy(5,6,"十十                                                    十十");
gotoxy(5,7,"十  十                                                十  十");
gotoxy(5,8,"十                                                        十");
gotoxy(5,9,"十                                                        十");
gotoxy(5,10,"十                                                        十");
gotoxy(5,11,"十                                                        十");
gotoxy(5,12,"十                                                        十");
gotoxy(5,13,"十                                                        十");
gotoxy(5,14,"十                                                        十");
gotoxy(5,15,"十                                                        十");
gotoxy(5,16,"十                                                        十");
gotoxy(5,17,"十                                                        十");
gotoxy(5,18,"十                                                        十");
gotoxy(5,19,"十                                                        十");
gotoxy(5,20,"十                                                        十");
gotoxy(5,21,"十  十                                                十  十");
gotoxy(5,22,"十十                                                    十十 ");
gotoxy(5,23,"十十十十十十十十十十十十十十十十十十十十十十十十十十十十十十");
}
 
void keyDraw(){
gotoxy(41,13," 旨收收收收旬");
gotoxy(41,14," 早  W 早");
gotoxy(39,15,"旨收收收收朱收收收收朱收收收收旬");
gotoxy(39,16,"早  A 早  S 早  D 早");
gotoxy(39,17,"曲收收收收朴收收收收朴收收收收旭");

gotoxy(49,15,"旨收收收收收收收收收收收收收旬");
gotoxy(49,16,"早     SPACE   早");
gotoxy(49,17,"曲收收收收收收收收收收收收收旭");

gotoxy(42,19,"寞щ酈");
gotoxy(51,19," 摹鷗酈");
} 

void imageDraw(const char* name, int x,int y){
	char Buffer[1000];
	char Temp[1000];
	FILE *image = NULL;
	char eol;
	fopen_s(&image, name, "r");

	if(image==NULL)
		return;

	//feof()朝 だ橾曖 部橾陽 0檜 嬴棋 高(=霤)擊 奩��
	fscanf(image,"%[^\n]s", Buffer);
	fscanf(image,"%c",&eol);
	while(!feof(image)){
		gotoxy(x,y++);
		strcpy(Temp, Buffer);
		puts(Temp);
		fscanf(image,"%[^\n]s", Buffer);
		fscanf(image,"%c",&eol);
	}

	fclose(image);
}

void charImageDraw(const char* name, int x,int y){

	//       _BBBB BBB \n
	// _ 檜瞪梱雖 и旋濠噶 嫡堅 x++
	// _睡攪 \n 檜瞪梱雖 嫡堅 轎溘, y++
	char Buffer[100];
	for(int i=0;i<100;i++){
		Buffer[i] = '.';
	}
	char Temp[1000];
	char front;
	char frontLine[500];
	FILE *image = NULL;
	char eol;
	char start;
	int tempX = x;
	fopen_s(&image, name, "r");
	bool first = false;
	if(image==NULL)
		return;

	//feof()朝 だ橾曖 部橾陽 0檜 嬴棋 高(=霤)擊 奩��
	
	while(!feof(image)){
		fscanf(image,"%[^\n]s", Buffer);
		fscanf(image,"%c",&eol);
		strcpy(Temp, Buffer);
		for(int i=0;i<100;i++){
			if(Buffer[i]=='.'){
				break;
			}
			if(first==false && Buffer[i] !='B'){
				tempX++;
			}
			else if(first==false && Buffer[i]=='B'){
				first = true;
				gotoxy(tempX++,y);
				putc(' ',stdout);
				gotoxy(tempX++,y);
				putc(' ',stdout);
				gotoxy(tempX++,y);
				putc(Buffer[i],stdout);
			}
			else if(first==true){
				gotoxy(tempX++,y);
				putc(Buffer[i],stdout);
			}
		}
		tempX = x;
		y++;
		first = false;
		for(int i=0;i<100;i++){
		Buffer[i] = '.';
		}
	}
	fclose(image);
}


void BasicOutlineDraw(){
	system("cls");
	changeInit();
	imageDraw("陛煎100.txt",0,0);
	imageDraw("撮煎.txt",0,2);
	imageDraw("撮煎.txt",697,2);
	imageDraw("陛煎100.txt",0,277); 
	imageDraw("wasd100.txt",800,100);
	imageDraw("space100.txt",950,100);
	imageDraw("寞щ酈9.txt",825,150);
	imageDraw("摹鷗酈9.txt",975,150);
	imageDraw("紫遺蜓9.txt",1105, 265);
	imageDraw("help30.txt", 1117, 240);
}
void selectClothesOutlineDraw(){
	BasicOutlineDraw();
	imageDraw("陛煎100.txt",0,25);
	imageDraw("褡濰10.txt",300,7);
	imageDraw("陛煎100.txt",0,200);
}

void selectItemsOutlineDraw(){
	BasicOutlineDraw();
	imageDraw("陛煎100.txt",0,25);
	imageDraw("模雖ヶ50.txt",300,7);
	imageDraw("陛煎100.txt",0,200);
}


void selectLivingOutLineDraw(){
	imageDraw("陛煎100.txt",0,25);
	imageDraw("剪褒10.txt",300,7);
	imageDraw("陛煎100.txt",0,200);
}



void selectCafeOutLineDraw(){
	// BasicOutlineDraw();
	imageDraw("陛煎100.txt",0,25);
	imageDraw("蘋む10.txt",300,7);
	imageDraw("陛煎100.txt",0,200);
}


void selectItemsMainMenuDraw(){
	imageDraw("譆謙摹鷗30.txt",7,205);

	imageDraw("豭薹�香嚂�9.txt",50,150);
//	imageDraw("豭薹�香嚂�9.txt",270,150);
//	imageDraw("豭薹�香嚂�9.txt",500,150);

	imageDraw("weather100.txt",70,80);
	imageDraw("陳噢9.txt",100,150);
	imageDraw("sense100.txt",290,80);
	imageDraw("撫蝶9.txt",320,150);
	imageDraw("mood100.txt",510,80);
	imageDraw("碟嬪晦9.txt",535,150);
}

void selectClothesMainMenuDraw(){
	imageDraw("ぬ暮嬴檜蠱9.txt",7,205);
    imageDraw("蘋纔9.txt",7,217);
    imageDraw("譆謙摹鷗1009.txt",7,229);

	imageDraw("豭薹�香嚂�9.txt",50,150);
//	imageDraw("豭薹�香嚂�9.txt",270,150);
//	imageDraw("豭薹�香嚂�9.txt",500,150);

	imageDraw("top100.txt",70,80);
	imageDraw("鼻曖9.txt",100,150);
	imageDraw("pants100.txt",290,80);
	imageDraw("ж曖9.txt",320,150);
	imageDraw("shoes100.txt",510,80);
	imageDraw("褐嫦9.txt",550,150);
}

int topDraw(){
	
//	Draw();
	selectClothesOutlineDraw();


	imageDraw("豭薹�香嚂�9.txt",70,150);

	imageDraw("sleeve100.txt",65,80);
	imageDraw("釭衛9.txt",100,150);
	imageDraw("top100.txt",215,80);
	imageDraw("奩つ9.txt",250,150);
	imageDraw("shirt100.txt",365,80);
	imageDraw("薑濰9.txt",400,150);
	imageDraw("padding100.txt",515,80);
	imageDraw("ぬ註9.txt",550,150);

//  '>'曖 x,y 謝ル
//	imageDraw("豭薹�香嚂�9.txt",70,150);
//	imageDraw("豭薹�香嚂�9.txt",220,150);
//	imageDraw("豭薹�香嚂�9.txt",370,150);
//	imageDraw("豭薹�香嚂�9.txt",520,150);

	int x=70;
	int y=150;
	//釭衛
	imageDraw("雄雄9.txt",7,205);
	imageDraw("釭衛9.txt",25,205);
	
	imageDraw("爾熱瞳檣9.txt",7,220);
	imageDraw("餌塋擎9.txt",80,220);
	imageDraw("摹��ж雖彊擠9.txt",145,220);

	imageDraw("啖選縑9.txt",7,230);
	imageDraw("橫選葬雖彊擠9.txt",70,230);



	while(true){
		//餌辨濠陛 殮溘и 高擊 n戲煎(wasd, space)
		int n= keyControl();
		switch(n){
			case LEFT : {
				//晦襄 '>' 雖錶輿晦
				//'>' 轎溘(520->370,370->220,220->70)
				if(x==520){
					imageDraw("TSmallBlank.txt",520,150);
					imageDraw("豭薹�香嚂�9.txt",370,150);
					x=370; //薑濰

					imageDraw("clothesBlank.txt",7,205);

					//boxClear(7,205);

					imageDraw("雄雄9.txt",7,205);
					imageDraw("薑濰9.txt",25,205);
	
					imageDraw("濠嶸煎遴9.txt",7,220);
					imageDraw("餌塋擎9.txt",80,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);



				}
				else if(x==370){
					imageDraw("TSmallBlank.txt",370,150);
					imageDraw("豭薹�香嚂�9.txt",220,150);
					x=220; //奩つ

					imageDraw("clothesBlank.txt",7,205);
					// boxClear(7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("奩つ9.txt",25,205);
	
					imageDraw("氅匯и9.txt",7,220);
					imageDraw("餌塋擎9.txt",70,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);



				}
				else if(x==220){
					imageDraw("TSmallBlank.txt",220,150);
					imageDraw("豭薹�香嚂�9.txt",70,150);
					x=70; //釭衛
					imageDraw("clothesBlank.txt",7,205);
					// boxClear(7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("釭衛9.txt",25,205);
	
					imageDraw("爾熱瞳檣9.txt",7,220);
					imageDraw("餌塋擎9.txt",80,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);

					imageDraw("啖選縑9.txt",7,230);
					imageDraw("橫選葬雖彊擠9.txt",70,230);

				}
				break;
			}
			case RIGHT : {
				//晦襄 '>' 雖錶輿晦
				//'>' 轎溘(70->220,220->370,370->520)
				if(x==70){
					imageDraw("TSmallBlank.txt",70,150);
					imageDraw("豭薹�香嚂�9.txt",220,150);
					x=220; //奩つ
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("奩つ9.txt",25,205);
	
					imageDraw("氅匯и9.txt",7,220);
					imageDraw("餌塋擎9.txt",70,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);


				}
				else if(x==220){
					imageDraw("TSmallBlank.txt",220,150);
					imageDraw("豭薹�香嚂�9.txt",370,150);
					x=370; //薑濰
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("薑濰9.txt",25,205);
	
					imageDraw("濠嶸煎遴9.txt",7,220);
					imageDraw("餌塋擎9.txt",80,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);

				}
				else if(x==370){
					imageDraw("TSmallBlank.txt",370,150);
					imageDraw("豭薹�香嚂�9.txt",520,150);
					x=520; //ぬ註
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("ぬ註9.txt",25,205);

					imageDraw("罹葷縑9.txt",7,220);
					imageDraw("橫選葬雖彊擠9.txt",70,220);

				}
				break;
			}
			case SUBMIT : {
				if(x==70) return 0;
				else if(x==220) return 1;
				else if(x==370) return 2;
				else if(x==520) return 3;
			}
		}

	}

}
int pantsDraw(){
	
//	Draw();
	selectClothesOutlineDraw();

	imageDraw("豭薹�香嚂�9.txt",70,150);

	imageDraw("蹺葬棚100.txt",70,80);
	imageDraw("蹺葬棚9.txt",100,150);
	imageDraw("奩夥雖100.txt",220,80);
	imageDraw("奩夥雖9.txt",250,150);
	imageDraw("曹夥雖100.txt",370,80);
	imageDraw("曹夥雖9.txt",400,150);
	imageDraw("蝸楷蝶100.txt",520,80);
	imageDraw("蝸楷蝶9.txt",550,150);

//  '>'曖 x,y 謝ル
//	imageDraw("豭薹�香嚂�9.txt",70,150);
//	imageDraw("豭薹�香嚂�9.txt",220,150);
//	imageDraw("豭薹�香嚂�9.txt",370,150);
//	imageDraw("豭薹�香嚂�9.txt",520,150);

	int x=70;
	int y=150;
	//蹺葬棚
	imageDraw("雄雄9.txt",7,205);
	imageDraw("蹺葬棚9.txt",25,205);
	
	imageDraw("離碟и9.txt",7,220);
	imageDraw("餌塋擎9.txt",70,220);
	imageDraw("摹��ж雖彊擠9.txt",145,220);


	while(true){
		//餌辨濠陛 殮溘и 高擊 n戲煎(wasd, space)
		int n= keyControl();
		switch(n){
			case LEFT : {
				//晦襄 '>' 雖錶輿晦
				//'>' 轎溘(520->370,370->220,220->70)
				if(x==520){
					imageDraw("TSmallBlank.txt",520,150);
					imageDraw("豭薹�香嚂�9.txt",370,150);
					x=370; //曹夥雖
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("曹夥雖9.txt",25,205);
	
					imageDraw("氅匯и9.txt",7,220);
					imageDraw("餌塋擎9.txt",70,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);


				}
				else if(x==370){
					imageDraw("TSmallBlank.txt",370,150);
					imageDraw("豭薹�香嚂�9.txt",220,150);
					x=220; //奩夥雖
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("奩夥雖9.txt",25,205);
	
					imageDraw("爾熱瞳檣9.txt",7,220);
					imageDraw("餌塋擎9.txt",80,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);

					imageDraw("啖選縑9.txt",7,230);
					imageDraw("橫選葬雖彊擠9.txt",70,230);

				}
				else if(x==220){
					imageDraw("TSmallBlank.txt",220,150);
					imageDraw("豭薹�香嚂�9.txt",70,150);
					x=70; //蹺葬棚
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("蹺葬棚9.txt",25,205);
	
					imageDraw("離碟и9.txt",7,220);
					imageDraw("餌塋擎9.txt",70,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);


				}
				break;
			}
			case RIGHT : {
				//晦襄 '>' 雖錶輿晦
				//'>' 轎溘(70->220,220->370,370->520)
				if(x==70){
					imageDraw("TSmallBlank.txt",70,150);
					imageDraw("豭薹�香嚂�9.txt",220,150);
					x=220; //奩夥雖
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("奩夥雖9.txt",25,205);
	
					imageDraw("爾熱瞳檣9.txt",7,220);
					imageDraw("餌塋擎9.txt",80,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);

					imageDraw("啖選縑9.txt",7,230);
					imageDraw("橫選葬雖彊擠9.txt",70,230);

				}
				else if(x==220){
					imageDraw("TSmallBlank.txt",220,150);
					imageDraw("豭薹�香嚂�9.txt",370,150);
					x=370; //曹夥雖
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("曹夥雖9.txt",25,205);
	
					imageDraw("氅匯и9.txt",7,220);
					imageDraw("餌塋擎9.txt",70,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);

				}
				else if(x==370){
					imageDraw("TSmallBlank.txt",370,150);
					imageDraw("豭薹�香嚂�9.txt",520,150);
					x=520; //蝸楷蝶
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("蝸楷蝶9.txt",25,205);
	
					imageDraw("濠嶸煎遴9.txt",7,220);
					imageDraw("餌塋擎9.txt",80,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);


				}
				break;
			}
			case SUBMIT : {
				if(x==70) return 0;
				else if(x==220) return 1;
				else if(x==370) return 2;
				else if(x==520) return 3;
			}
		}

	}

}
int shoesDraw(){
	
//	Draw();
	selectClothesOutlineDraw();


	imageDraw("豭薹�香嚂�9.txt",70,150);

	imageDraw("蝸葬ぷ100.txt",75,80);
	imageDraw("蝸葬ぷ9.txt",100,150);
	imageDraw("僻菟100.txt",218,80);
	imageDraw("僻菟9.txt",250,150);
	imageDraw("遴翕��100.txt",375,80);
	imageDraw("遴翕��9.txt",400,150);
	imageDraw("掘舒100.txt",518,80);
	imageDraw("掘舒9.txt",550,150);

//  '>'曖 x,y 謝ル
//	imageDraw("豭薹�香嚂�9.txt",70,150);
//	imageDraw("豭薹�香嚂�9.txt",218,150);
//	imageDraw("豭薹�香嚂�9.txt",375,150);
//	imageDraw("豭薹�香嚂�9.txt",518,150);

	int x=70;
	int y=150;
	//蝸葬ぷ
	imageDraw("雄雄9.txt",7,205);
	imageDraw("蝸葬ぷ9.txt",25,205);
	
	imageDraw("離碟и9.txt",7,220);
	imageDraw("餌塋擎9.txt",70,220);
	imageDraw("摹��ж雖彊擠9.txt",145,220);

	imageDraw("啖選縑9.txt",7,230);
	imageDraw("橫選葬雖彊擠9.txt",70,230);



	while(true){
		//餌辨濠陛 殮溘и 高擊 n戲煎(wasd, space)
		int n= keyControl();
		switch(n){
			case LEFT : {
				//晦襄 '>' 雖錶輿晦
				//'>' 轎溘(518->375,375->218,218->70)
				if(x==518){
					imageDraw("TSmallBlank.txt",518,150);
					imageDraw("豭薹�香嚂�9.txt",375,150);
					x=375; //遴翕��
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("遴翕��9.txt",25,205);
	
					imageDraw("氅匯и9.txt",7,220);
					imageDraw("餌塋擎9.txt",70,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);


				}
				else if(x==375){
					imageDraw("TSmallBlank.txt",375,150);
					imageDraw("豭薹�香嚂�9.txt",218,150);
					x=218; //僻菟
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("僻菟9.txt",25,205);
	
					imageDraw("爾熱瞳檣9.txt",7,220);
					imageDraw("餌塋擎9.txt",80,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);

					imageDraw("啖選縑9.txt",7,230);
					imageDraw("橫選葬雖彊擠9.txt",70,230);

				}
				else if(x==218){
					imageDraw("TSmallBlank.txt",218,150);
					imageDraw("豭薹�香嚂�9.txt",70,150);
					x=70; //蝸葬ぷ
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("蝸葬ぷ9.txt",25,205);
	
					imageDraw("離碟и9.txt",7,220);
					imageDraw("餌塋擎9.txt",70,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);

					imageDraw("啖選縑9.txt",7,230);
					imageDraw("橫選葬雖彊擠9.txt",70,230);

				}
				break;
			}
			case RIGHT : {
				//晦襄 '>' 雖錶輿晦
				//'>' 轎溘(70->218,218->375,375->518)
				if(x==70){
					imageDraw("TSmallBlank.txt",70,150);
					imageDraw("豭薹�香嚂�9.txt",218,150);
					x=218; //僻菟
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("僻菟9.txt",25,205);
	
					imageDraw("爾熱瞳檣9.txt",7,220);
					imageDraw("餌塋擎9.txt",80,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);

					imageDraw("啖選縑9.txt",7,230);
					imageDraw("橫選葬雖彊擠9.txt",70,230);

				}
				else if(x==218){
					imageDraw("TSmallBlank.txt",218,150);
					imageDraw("豭薹�香嚂�9.txt",375,150);
					x=375; //遴翕��
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("遴翕��9.txt",25,205);
	
					imageDraw("氅匯и9.txt",7,220);
					imageDraw("餌塋擎9.txt",70,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);


				}
				else if(x==375){
					imageDraw("TSmallBlank.txt",375,150);
					imageDraw("豭薹�香嚂�9.txt",518,150);
					x=518; //掘舒
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("掘舒9.txt",25,205);
	
					imageDraw("濠嶸煎遴9.txt",7,220);
					imageDraw("餌塋擎9.txt",80,220);
					imageDraw("摹��ж雖彊擠9.txt",145,220);


				}
				break;
			}
			case SUBMIT : {
				if(x==70) return 0;
				else if(x==218) return 1;
				else if(x==375) return 2;
				else if(x==518) return 3;
			}
		}

	}

}

void ThreeBasicOutlineDraw(){
   system("cls");
   changeInit();
   imageDraw("陛煎100.txt",0,0);
   imageDraw("撮煎.txt",0,2);
   imageDraw("撮煎.txt",697,2);
   imageDraw("陛煎100.txt",0,277); 
   imageDraw("12345.txt",875,100);
   imageDraw("摹鷗酈9.txt",925,150);
}
int itemDraw1(){
	
//	Draw();
	selectItemsOutlineDraw();


	imageDraw("豭薹�香嚂�9.txt",70,150);

	imageDraw("scarf100.txt",70,80);
	imageDraw("跡紫葬9.txt",100,150);
	imageDraw("umbrella100.txt",220,80);
	imageDraw("辦骯9.txt",255,150);
	imageDraw("handhot100.txt",370,80);
	imageDraw("槳陪煎9.txt",400,150);
	imageDraw("handfan100.txt",520,80);
	imageDraw("�瑒趧掏陰�9.txt",545,150);

//  '>'曖 x,y 謝ル
//	imageDraw("豭薹�香嚂�9.txt",70,150);
//	imageDraw("豭薹�香嚂�9.txt",220,150);
//	imageDraw("豭薹�香嚂�9.txt",370,150);
//	imageDraw("豭薹�香嚂�9.txt",520,150);

	int x=70;
	int y=150;
	 
	imageDraw("雄雄9.txt",7,205);
	imageDraw("跡紫葬9.txt",25,205);
	
	imageDraw("跡紫葬撲貲9.txt",7,220);
	 

	while(true){
		//餌辨濠陛 殮溘и 高擊 n戲煎(wasd, space)
		int n= keyControl();
		switch(n){
			case LEFT : {
				//晦襄 '>' 雖錶輿晦
				//'>' 轎溘(520->370,370->220,220->70)
				if(x==520){
					imageDraw("TSmallBlank.txt",520,150);
					imageDraw("豭薹�香嚂�9.txt",370,150);
					 x=370;  
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("槳陪煎9.txt",25,205);
	
					imageDraw("槳陪煎撲貲9.txt",7,220);
					

				}
				else if(x==370){
					imageDraw("TSmallBlank.txt",370,150);
					imageDraw("豭薹�香嚂�9.txt",220,150);
					 x=220; 
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("辦骯9.txt",25,205);
	
					imageDraw("辦骯撲貲9.txt",7,220);
					
				}
				else if(x==220){
					imageDraw("TSmallBlank.txt",220,150);
					imageDraw("豭薹�香嚂�9.txt",70,150);
					 x=70; 
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("跡紫葬9.txt",25,205);
	
					imageDraw("跡紫葬撲貲9.txt",7,220);
					
				}
				break;
			}
			case RIGHT : {
				//晦襄 '>' 雖錶輿晦
				//'>' 轎溘(70->220,220->370,370->520)
				if(x==70){
					imageDraw("TSmallBlank.txt",70,150);
					imageDraw("豭薹�香嚂�9.txt",220,150);
					 x=220; 
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("辦骯9.txt",25,205);
	
					imageDraw("辦骯撲貲9.txt",7,220);
					
				}
				else if(x==220){
					imageDraw("TSmallBlank.txt",220,150);
					imageDraw("豭薹�香嚂�9.txt",370,150);
					x=370; //曹夥雖
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("槳陪煎9.txt",25,205);
	
					imageDraw("槳陪煎撲貲9.txt",7,220);
					
				}
				else if(x==370){
					imageDraw("TSmallBlank.txt",370,150);
					imageDraw("豭薹�香嚂�9.txt",520,150);
					 x=520; 
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("�瑒趧掏陰�9.txt",25,205);
	
					imageDraw("�瑒趧掏陰熉雩�9.txt",7,220);
					
				}
				break;
			}
			case SUBMIT : {
				if(x==70) return 0;
				else if(x==220) return 1;
				else if(x==370) return 2;
				else if(x==520) return 3;
			}
		}

	}

}
int itemDraw2(){
	
//	Draw();
	selectItemsOutlineDraw();


	imageDraw("豭薹�香嚂�9.txt",70,150);

	imageDraw("handkerchief100.txt",70,80);
	imageDraw("槳熱勒9.txt",100,150);
	imageDraw("perfume100.txt",220,80);
	imageDraw("щ熱9.txt",250,150);
	imageDraw("powerbank100.txt",370,80);
	imageDraw("爾褻寡攪葬9.txt",395,150);
	imageDraw("mirror100.txt",520,80);
	imageDraw("剪選9.txt",550,150);

//  '>'曖 x,y 謝ル
//	imageDraw("豭薹�香嚂�9.txt",70,150);
//	imageDraw("豭薹�香嚂�9.txt",220,150);
//	imageDraw("豭薹�香嚂�9.txt",370,150);
//	imageDraw("豭薹�香嚂�9.txt",520,150);

	int x=70;
	int y=150;
	
	imageDraw("雄雄9.txt",7,205);
	imageDraw("槳熱勒9.txt",25,205);
	
	imageDraw("槳熱勒撲貲9.txt",7,220);
	

	while(true){
		//餌辨濠陛 殮溘и 高擊 n戲煎(wasd, space)
		int n= keyControl();
		switch(n){
			case LEFT : {
				//晦襄 '>' 雖錶輿晦
				//'>' 轎溘(520->370,370->220,220->70)
				if(x==520){
					imageDraw("TSmallBlank.txt",520,150);
					imageDraw("豭薹�香嚂�9.txt",370,150);
					x=370; //曹夥雖
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("爾褻寡攪葬9.txt",25,205);
	
					imageDraw("爾褻寡攪葬撲貲9.txt",7,220);
					

				}
				else if(x==370){
					imageDraw("TSmallBlank.txt",370,150);
					imageDraw("豭薹�香嚂�9.txt",220,150);
					 x=220; 
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("щ熱9.txt",25,205);
	
					imageDraw("щ熱撲貲9.txt",7,220);
					
				}
				else if(x==220){
					imageDraw("TSmallBlank.txt",220,150);
					imageDraw("豭薹�香嚂�9.txt",70,150);
					 x=70; 
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("槳熱勒9.txt",25,205);
	
					imageDraw("槳熱勒撲貲9.txt",7,220);
					
				}
				break;
			}
			case RIGHT : {
				//晦襄 '>' 雖錶輿晦
				//'>' 轎溘(70->220,220->370,370->520)
				if(x==70){
					imageDraw("TSmallBlank.txt",70,150);
					imageDraw("豭薹�香嚂�9.txt",220,150);
					 x=220; 
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("щ熱9.txt",25,205);
	
					imageDraw("щ熱撲貲9.txt",7,220);
					
				}
				else if(x==220){
					imageDraw("TSmallBlank.txt",220,150);
					imageDraw("豭薹�香嚂�9.txt",370,150);
					x=370; //曹夥雖
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("爾褻寡攪葬9.txt",25,205);
	
					imageDraw("爾褻寡攪葬撲貲9.txt",7,220);
					
				}
				else if(x==370){
					imageDraw("TSmallBlank.txt",370,150);
					imageDraw("豭薹�香嚂�9.txt",520,150);
					 x=520; 
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("剪選9.txt",25,205);
	
					imageDraw("剪選撲貲9.txt",7,220);
					
				}
				break;
			}
			case SUBMIT : {
				if(x==70) return 0;
				else if(x==220) return 1;
				else if(x==370) return 2;
				else if(x==520) return 3;
			}
		}

	}

}
int itemDraw3(){
		

	selectItemsOutlineDraw();


	imageDraw("豭薹�香嚂�9.txt",70,150);

	imageDraw("flower100.txt",70,80);
	imageDraw("粒棻嫦9.txt",100,150);
	imageDraw("mic100.txt",220,80);
	imageDraw("葆檜觼9.txt",250,150);
	imageDraw("newspaper100.txt",370,80);
	imageDraw("褐僥9.txt",400,150);
	imageDraw("humorbook100.txt",520,80);
	imageDraw("嶸該疇9.txt",550,150);

//  '>'曖 x,y 謝ル
//	imageDraw("豭薹�香嚂�9.txt",70,150);
//	imageDraw("豭薹�香嚂�9.txt",220,150);
//	imageDraw("豭薹�香嚂�9.txt",370,150);
//	imageDraw("豭薹�香嚂�9.txt",520,150);

	int x=70;
	int y=150;
	
	imageDraw("雄雄9.txt",7,205);
	imageDraw("粒棻嫦9.txt",25,205);
	
	imageDraw("粒棻嫦撲貲9.txt",7,220);
	

	while(true){
		//餌辨濠陛 殮溘и 高擊 n戲煎(wasd, space)
		int n= keyControl();
		switch(n){
			case LEFT : {
				//晦襄 '>' 雖錶輿晦
				//'>' 轎溘(520->370,370->220,220->70)
				if(x==520){
					imageDraw("TSmallBlank.txt",520,150);
					imageDraw("豭薹�香嚂�9.txt",370,150);
					 x=370;
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("褐僥9.txt",25,205);
	
					imageDraw("褐僥撲貲9.txt",7,220);
					

				}
				else if(x==370){
					imageDraw("TSmallBlank.txt",370,150);
					imageDraw("豭薹�香嚂�9.txt",220,150);
					 x=220; 
					imageDraw("blank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("葆檜觼9.txt",25,205);
	
					imageDraw("葆檜觼撲貲9.txt",7,220);
					
				}
				else if(x==220){
					imageDraw("TSmallBlank.txt",220,150);
					imageDraw("豭薹�香嚂�9.txt",70,150);
					 x=70; 
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("粒棻嫦9.txt",25,205);
	
					imageDraw("粒棻嫦撲貲9.txt",7,220);
					
				}
				break;
			}
			case RIGHT : {
				//晦襄 '>' 雖錶輿晦
				//'>' 轎溘(70->220,220->370,370->520)
				if(x==70){
					imageDraw("TSmallBlank.txt",70,150);
					imageDraw("豭薹�香嚂�9.txt",220,150);
					 x=220; 
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("葆檜觼9.txt",25,205);
	
					imageDraw("葆檜觼撲貲9.txt",7,220);
					
				}
				else if(x==220){
					imageDraw("TSmallBlank.txt",220,150);
					imageDraw("豭薹�香嚂�9.txt",370,150);
					 x=370; 
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("褐僥9.txt",25,205);
	
					imageDraw("褐僥撲貲9.txt",7,220);
					
				}
				else if(x==370){
					imageDraw("TSmallBlank.txt",370,150);
					imageDraw("豭薹�香嚂�9.txt",520,150);
					 x=520; 
					imageDraw("clothesBlank.txt",7,205);
					imageDraw("雄雄9.txt",7,205);
					imageDraw("嶸該疇9.txt",25,205);
	
					imageDraw("嶸該疇撲貲9.txt",7,220);
					
				}
				break;
			}
			case SUBMIT : {
				if(x==70) return 0;
				else if(x==220) return 1;
				else if(x==370) return 2;
				else if(x==520) return 3;
			}
		}

	}

}