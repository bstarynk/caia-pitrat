#include "dx.h"
void COMBINV0(void )
{int S;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=11288;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])();
if(v[90]==2881&&v[97]==0) {
(*f[4])();x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]];v[22]+=1;
WZ2=v[22]+2;WZ1=v[22]+1;
x[jvj+2]=x[S];z[jvj+2]=z[S];
l1:pile[v[22]]=459;pile[WZ1]=jvj+2;pile[WZ2]=jvj+4;
(*f[33])();if(v[102]) goto l3;     /*FNDO0(459,jvj+2,jvj+4)*/
pile[v[22]]=120;pile[WZ1]=jvj+4;pile[WZ2]=jvj+5;
(*f[33])();if(v[102]) goto l3;     /*FNDO0(120,jvj+4,jvj+5)*/
pile[WZ1]=jvj+2;pile[WZ2]=jvj+3;
(*f[33])();if(v[102]) goto l2;     /*FNDO0(120,jvj+2,jvj+3)*/
pile[v[22]]=jvj+3;
(*f[2877])();     /*COMBI0(jvj+3)*/
l2:pile[v[22]]=jvj+2;pile[WZ1]=459;pile[WZ2]=jvj+5;
(*f[35])();     /*CHGC1(jvj+2,459,jvj+5)*/
l4:x[jvj+1]=incon;v[0]=jvj;v[22]-=1;return;
l3:pile[v[22]]=459;pile[WZ1]=jvj+2;
(*f[66])();     /*ENLV0(459,jvj+2)*/
pile[v[22]]=498;pile[WZ2]=jvj+6;
(*f[33])();if(v[102]) goto l4;     /*FNDO0(498,jvj+2,jvj+6)*/
x[jvj+2]=x[jvj+6];z[jvj+2]=z[jvj+6];
goto l1;
}
