#include<stdio.h>
#define PI acos(-1.0)
int main()
{
    int n,l,a;
    double width,radius,tl_area,rec_area,cr_area;
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        scanf("%d",&l);
        width=l*0.6;
        radius=l*0.2;
        tl_area=l*width;
        cr_area=PI*radius*radius;
        rec_area=tl_area-cr_area;
        printf("%.2lf %.2lf\n",cr_area,rec_area);
    }
return 0;
getch();
}
