#include<stdio.h>
void main()
{

    int a[]= {8,4,6,7,4,1},i,l=0,s=0,count=1,flag=0,largest,smallest,ps,pl;

    for(i=0; i<6; i++) {

            if(a[l]<a[i]) {

                    if(flag) {

                            if(a[pl]>a[i])

                                l=i;
            }
            else {

                        l=i;
            }
        }

            if(a[s]>a[i]) {

                    if(flag) {

                            if(a[ps]<a[i])

                                s=i;
            }
            else {

                    s=i;

                       
            }

               
        }

            if(i==5) {

                    count--;

                    if(flag==0) {

                            smallest=s;

                            largest=l;

                            

                      
            }

                    if(count==0) {

                            break;

                       
            }

                    else {

                            flag=1;

                            pl=l;

                            ps=s;

                            l=smallest;

                            s=largest;

                            i=-1;
            }
        }

    }

    printf("small=%d big=%d",a[s],a[l]);

}


