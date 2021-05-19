#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm," ");
    int c = 0;
    printf("\n choose 1- Translation \n 2-Scaling \n 3-Rotation \nExit(4)");
    printf("\nEnter your Choice: ");
    scanf("%d", &c);
    if(c == 1)
    {int tx, ty ;
    printf("Enter translation coordinates: ");
    scanf("%d %d",&tx,&ty);

    setfillstyle(SOLID_FILL,BLACK);

    bar3d(492,267,692,467,20,5);
    bar3d(492+tx,267-ty,692+tx,467-ty,20,5);

    }
    else if(c == 2)
        {
            float x,y,z;
            printf("\n Enter the Scaling Factor: ");
  scanf("%f%f%f",&x,&y,&z);
   setfillstyle(SOLID_FILL,BLACK);
  bar3d(492,267,692,467,90,1);
  bar3d(492*x,267*y,692*x,467*y,90*z,1);
        }
        else if (c == 3)
        {
            int ang;
            int x1,x2,y1,y2;
             printf("\n Enter the Rotation angle: ");
  scanf("%d",&ang);
  x1=100*cos(ang*3.14/180)-20*sin(ang*3.14/180);
  y1=100*sin(ang*3.14/180)+20*sin(ang*3.14/180);
  x2=60*cos(ang*3.14/180)-90*sin(ang*3.14/180);
  y2=60*sin(ang*3.14/180)+90*sin(ang*3.14/180);

  printf("\n After rotating about z-axis\n");
  setfillstyle(SOLID_FILL,BLACK);
  bar3d(742,347,702+60,277,20,5);
  bar3d(642+x1,367-y1,642+x2,367-y2,20,5);

  printf("\n After rotating about x-axis\n");
  setfillstyle(SOLID_FILL,BLACK);
  bar3d(742,347,702+60,277,20,5);
  bar3d(642+100,367-x1,642+60,367-x2,20,5);

  printf("\n After rotating about y-axis\n");
  setfillstyle(SOLID_FILL,BLACK);
  bar3d(742,347,702+60,277,20,5);
  bar3d(642+x1,367-20,642+x2,367-90,20,5);
        }
        else
             printf("INVALID CHOICE");
    getch();
    closegraph();
    return 0;
}
