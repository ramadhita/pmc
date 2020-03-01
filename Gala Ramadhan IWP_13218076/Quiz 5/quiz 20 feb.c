#include <stdio.h>
#include <string.h>



int main(){
	//=========================
	struct file{
		int no;
		int nim;
//		char* nama[10];
		char nama[10];
		int nilai;
	};
	
	struct file data[10];
	
	//=========================
	// input no
	int i;
	for(i=0 ; i<10 ; i++)
		data[i].no=i;
	
	//=======================
	// input data nim
	int j;
	for(i=0 ; i<10 ; i++)
		data[i].nim=13218001+i;
	
	//==========================
	// input data nama 
	
//	for(i=0 ; i<10 ; i++){
//		strcpy((data[i].nama), ("agus%d",i));
//	}

	strcpy(data[0].nama, "agus1");
	strcpy(data[1].nama, "agus2");
	strcpy(data[2].nama, "agus3");
	strcpy(data[3].nama, "agus4");
	strcpy(data[4].nama, "agus5");
	strcpy(data[5].nama, "agus6");
	strcpy(data[6].nama, "agus7");
	strcpy(data[7].nama, "agus8");
	strcpy(data[8].nama, "agus9");
	strcpy(data[9].nama, "agus10");

	
	//===========================
	// input data nilai secara random dengan rentang 50-100
	for(i=0 ; i<10 ; i++){
		data[i].nilai = (rand()%50) +50;
	}
	
	// test print
//	for(i=0 ; i<10 ; i++)
//		printf("%s\n", data[i].nilai);
	
//	printf(data[0].nama);
	
	FILE * fp;
	fp = fopen ("quiz.txt","w+");
	
	fprintf(fp,"_________________________________________________________________________\n");
	fprintf(fp, "No	|	NIM		\t|	Nama	|	Nilai \t| \n");
	fprintf(fp,"_________________________________________________________________________\n");
	
	for(i=0 ; i<10 ; i++){
		fprintf(fp, "%d	|	%d	\t|	%s \t|   %d	\t|	\n", data[i].no+1 , data[i].nim, data[i].nama , data[i].nilai  );
	}
	
	
	
	
	float rata2, sum;
	for(i=0;i<10;i++){
		sum+= data[i].nilai;
	}
	rata2=sum/i;
		
	fprintf(fp, "\nRata-rata = %f \n \n\n", rata2);
	
	
//	
//	int temp=0, temp2=0;
//	for(i=0;i<10 ; i++){
//		if (data[i].nilai<data[i+1].nilai)
//			temp = data[i].nilai;
//			data[i].nilai=data[i+1].nilai;
//			data[i+1].nilai=temp;
//			
//			temp2 = data[i].nim;
//			data[i].nim=data[i+1].nim;
//			data[i+1].nim=temp;
//	}
	
////////////////////////////////////////////////////	
	int c,d , swap;
	char swap1[10];	
	for (c = 0 ; c < 10; c++)
  {
    for (d = 0 ; d < 9; d++)
    {
      if (data[d].nilai < data[d+1].nilai) 
      {
		swap       = data[d].nilai;
		data[d].nilai   = data[d+1].nilai;
		data[d+1].nilai = swap;
		
		swap       = data[d].nim;
		data[d].nim   = data[d+1].nim;
		data[d+1].nim = swap;
		
		strcpy(swap1,data[d].nama);
		strcpy(data[d].nama , data[d+1].nama);
		strcpy(data[d+1].nama,swap1);
        
      }
    }
	}
  
	//////////////////////////////////////////////////////////////
	
	
	
	
	fprintf(fp,"_________________________________________________________________________\n");
	fprintf(fp, "No	|	NIM		\t|	Nama	|	Nilai \t| \n");
	fprintf(fp,"_________________________________________________________________________\n");
	
	for(i=0 ; i<10 ; i++){
		fprintf(fp, "%d	|	%d	\t|	%s \t|   %d	\t|	\n", data[i].no+1 , data[i].nim, data[i].nama , data[i].nilai  );
	}
	
	
	
	
	
	fclose (fp);
	return 0;
	
	
}

