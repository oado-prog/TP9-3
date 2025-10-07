#include <iostream>
#include"../include/Climatisation.h"
int main()
{
Climatisation * laClimatisationOA = new Climatisation(2);
cout<<"La climatisation est branchée sur la sortie: "<<laClimatisationOA->getOutput_ID()<<endl;
laClimatisationOA->activer();
laClimatisationOA->stopper();

return 0;
}
