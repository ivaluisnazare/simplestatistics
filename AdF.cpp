		#include<iostream>
                using namespace std;
                #include<cmath>
                #include<fstream>
                #include<iomanip>
		#include<vector>
		#include<algorithm>
		#include <list>
		#include <complex>
		#include <utility> 
		#include <string>
		ifstream infile0,infile,infile1,infile2,infile3,infile4,infile5,infile6;
		ofstream outfile0,outfile,outfile1,outfile2,outfile3,outfile4,outfile5,outfile6;
		using std::setw;
                class AdF{
                public:
		void numedter(int num) {
		num=0;
                std::string pegasos;
                while (std::getline(infile0, pegasos))
                ++num;
                outfile0 << num << endl;
			}
	void select (int h,int n,int i, float tmp, float ig, int k, double clasamp, double clasarr){
	vector<float>x;
			while (infile1 >> h){
				n=h;
			}
		while( infile >> tmp){				 
        	x.push_back(tmp);
			}
		sort(x.begin(),x.end());
		for(i=0;i<n;i++){
		outfile << x[i] << endl;
					}		
		for (i=0;i<n;i++){		
		ig=count(x.begin(),x.end(),x[i]);
		outfile2 << setw(5) << x[i] << setw(20) << ig << endl;	
					}
		k=1+(3.3*log10(n));
 		clasamp=(x[n-1]-x[0]);
         	clasarr=clasamp/k;
            	outfile3 << k << endl;
          	cout << setw(5) << clasamp << setw(12) << clasarr << endl;
		}
		void organa (float vec){
			list<float>y;
			list<float>::iterator y_Iter;
			while (infile2 >> vec){
			y.push_back(vec);							}
                        y.unique();
			for (y_Iter=y.begin();y_Iter!=y.end();y_Iter++)
			outfile4  << *y_Iter << endl;				
				}	
				void contdate (int numl,int q){
				numl=0;
				std::string unicornio;				
				while (std::getline(infile3, unicornio))
   				++numl;
				outfile5 << numl << endl;
				}
				void numcom (double a, double b, double c, double d){
				using point = std::pair<double,double>;
           			list<point>my_points;
                                while ( infile4 >> a >> b){
               			std::complex<double>first({a,b}); 
                                c=real(first);
                                d=imag(first);
                                my_points.push_back({c,d});
                                }                                                                                               	std::unique(my_points.begin(),my_points.end());
                        	for(point p : my_points){
                        	outfile6 << setw(5) << p.second << endl;
                     		}
                                }
		};					
		int main () {
		int m,nt,n,i,k,numl,q,K,j,h,num;
		float tmp,ig,vec;
		double a,b,c,d;
		double clasamp,clasarr;			
		AdF tr;	
		std::string filename;
		cout << "Enter with name file.dat\n\n";
                cin >> filename;
               	infile0.open(filename.c_str());
		outfile0.open("termnumber.dat");
		tr.numedter(num);
		infile0.close();
		outfile0.close();
		infile.open(filename.c_str());
		infile1.open("termnumber.dat");
		outfile.open("orgalista.dat");
		outfile2.open("freqpelemend.dat");
		outfile3.open("sturgs.dat");		
		tr.select(h,n,i,tmp,ig,k,clasamp,clasarr);
		infile.close();
		infile1.close();		
		outfile.close();
		outfile2.close();
		outfile3.close();
		infile2.open("orgalista.dat");	
		outfile4.open("organiza.dat");
		tr.organa(vec);
		infile2.close();
		outfile4.close();
		infile3.open("organiza.dat");
		outfile5.open("numbtermuni.dat");
		tr.contdate(numl,q);
		infile3.close();
		outfile5.close();
		infile4.open("freqpelemend.dat");
		outfile6.open("tsimple.dat");		
		tr.numcom(a,b,c,d);
		infile4.close();
		outfile6.close();
			}	
					
