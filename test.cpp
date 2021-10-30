			#include <iostream>    
			using namespace std;
			#include<cmath>
			#include<vector>
			#include<iomanip>
			#include<algorithm>
			#include<complex>     
			#include<fstream>
			#include<utility> 
			#include<forward_list>
			#include<list>
			using std::setw;
			ifstream infile,infile2,infile3,infile4,infile5,infile6,infile7,infile8,infile9;
			ofstream outfile, outfile2,outfile3,outfile4,outfile5;
		class dadfreq{
		public:		
		vector<float>x;
		vector<int>y;
		vector<int>z;	
		vector<float>q;	
		void numdate (int numd, int k,int S, int fq, int i, float date){
		while (infile >> numd){
		S=numd;
		}
		while (infile2 >> date){
		x.push_back(date);
		}
		while (infile3 >> fq){
		y.push_back(fq);
		}
		for (i=0;i<S;i++){
		outfile << setw(5) << y[i] << endl;
		}
		for (k=0;k<S;k++){
		outfile3<<setw(5) <<x[k]<<endl;
		}
		}
		void somafreq (int adc, int somfre){
			somfre=0;
		while (infile4 >> adc){
		somfre+=adc;
		}
		outfile2 << setw(10) << somfre << endl;
		}
		void ratefreq(int somaf,int so, int fa, float p, int fr,int zum, int num, int j, float relfreq,float r, float c,float fabs,float farel, float v,float l,float sv,float medpond){		
		while (infile5 >> somaf){
		so=somaf;
		}						
		while (infile6 >> fr){
		z.push_back(fr);
		}
		while (infile7 >> num){
         	zum=num;
         	while (infile8 >> c){
		q.push_back(c);
		}
		}
		fa=0;
		for (j=0;j<zum;++j){	
		p=z[j];	
		l=q[j];
		v=p*l;
		sv+=v;		
		relfreq=100*(p/so);
		fa+=z[j];
		fabs=fa;
		farel=100*(fabs/so);
	outfile4<<q[j]<<setw(7)<<p<<setw(12)<<relfreq<<setw(15)<<fa<<setw(18)<<farel<<setw(22)<<v<<endl;
		}		
			medpond=sv/so;	
			outfile5 << so << setw(10) << sv << setw(20) << medpond << endl;
		}
		};
	  	int main(){	
		int numd,S,fq,i,j,adc,somfre;
		int somaf,so,fr,zum,num,k,fa;	
		float date,relfreq,r,p,c,fabs,farel,v,l,sv,medpond;
		dadfreq tr;
		infile.open("numbtermuni.dat");
		infile2.open("organiza.dat");
		infile3.open("tsimple.dat");
		outfile.open("freqsimple.dat");		
		outfile3.open("dadosfi.dat");
		tr.numdate(numd,S,k,fq,i,date);
		infile.close();
		infile2.close();
		infile3.close();
		outfile.close();
		outfile3.close();
		infile4.open("freqsimple.dat");
		outfile2.open("somafreq.dat");
		tr.somafreq(adc,somfre);
		infile4.close();
		outfile2.close();
		infile5.open("somafreq.dat");
		infile6.open("freqsimple.dat");
		infile7.open("numbtermuni.dat");
		infile8.open("dadosfi.dat");
		outfile4.open("freqsim&abs.dat");
		outfile5.open("mediaponderada.dat");
		tr.ratefreq(somaf,so,fa,p,fr,zum,num,j,relfreq,r,c,fabs,farel,v,l,sv,medpond);
		infile5.close();
		infile6.close();
		infile7.close();
		infile8.close();
		outfile4.close();
		outfile5.close();
		}
