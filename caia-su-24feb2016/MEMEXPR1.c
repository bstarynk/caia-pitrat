#include "dx.h"
void MEMEXPR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int XA,XB;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

XA=pile[v[22]]; XB=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=XB; pile[WZ1]=1752; pile[WZ2]=XA; 
(*f[36])( );     /*PLUSC0(XB,1752,XA)*/
pile[v[22]]=XA; pile[WZ2]=XB; 
(*f[36])( );     /*PLUSC0(XA,1752,XB)*/
pile[v[22]]=1752; pile[WZ1]=XB; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1752,XB,jvj+5)*/
pile[v[22]]=1261; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1261,XB,jvj+6)*/
l1:if((x[jvj+6]>0)) goto l2;
pile[v[22]]=1752; pile[WZ1]=XA; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1752,XA,jvj+10)*/
pile[v[22]]=1261; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1261,XA,jvj+11)*/
l7:if((x[jvj+11]>0)) goto l8;
v[0]=jvj; v[22]-=2; return;
l2:x[jvj+9]=s[x[jvj+6]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+6];
pile[v[22]]=350; pile[WZ1]=100; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(350,100,jvj+1)*/
for(a=x[jvj+1];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l5;
pile[v[22]]=159; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(159,100,jvj+2)*/
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l5;
l3:x[jvj+6]=t[x[jvj+6]];
goto l1;
l5:x[jvj+15]=x[jvj+5] ;z[jvj+15]=z[jvj+5];
l4:if((x[jvj+15]<=0)) goto l3;
x[jvj+7]=s[x[jvj+15]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+15];
pile[v[22]]=1261; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1261,jvj+7,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l6;
pile[v[22]]=jvj+7; pile[WZ1]=1261; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+7,1261,jvj+9)*/
l6:x[jvj+15]=t[x[jvj+15]];
goto l4;
l8:x[jvj+14]=s[x[jvj+11]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+11];
pile[v[22]]=350; pile[WZ1]=100; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(350,100,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l11;
pile[v[22]]=159; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,100,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l11;
l9:x[jvj+11]=t[x[jvj+11]];
goto l7;
l11:x[jvj+16]=x[jvj+10] ;z[jvj+16]=z[jvj+10];
l10:if((x[jvj+16]<=0)) goto l9;
x[jvj+12]=s[x[jvj+16]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+16];
pile[v[22]]=1261; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1261,jvj+12,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l12;
pile[v[22]]=jvj+12; pile[WZ1]=1261; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+12,1261,jvj+14)*/
l12:x[jvj+16]=t[x[jvj+16]];
goto l10;
}
