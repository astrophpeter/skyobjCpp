#include <iostream>


class skyobj
{
   public:
      
      skyobj(int initid,double ra,double dec,double pmra,
	     double pmdec,double epoch, double parallax) {
	
	id = initid;
	ra = ra;
	dec = dec;
        pmra = pmra;
	pmdec = pmdec;
        ref_epoch = epoch;
        parallax = parrallax;


      }
      
      int getRaAtTime(double epoch) {
   
         return 
      
      }
	
   private:

	int id;
	double pmra;
	double pmdec;
	double ra;
	double dec;
	double parrallax;
	double epoch;

};


int main()
{

skyobj source = skyobj(12,1.0,2.0,3.0,4.0,5.0,6.0);
std::cout << source.getId() << std::endl;
return 0;

}
