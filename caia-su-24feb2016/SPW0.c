#include "dx.h"
void SPW0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V15=0,V22=0;
int I;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=10440;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1810&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V22=I;
l1:x[jvj+2]=vo[15];z[jvj+2]=vz[15];
pile[v[22]]=135; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(135,jvj+2,jvj+3)*/
pile[v[22]]=191; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(191,jvj+3,jvj+4)*/
if((x[jvj+4]!=67)) goto l5;
x[jvj+16]=x[jvj+3] ;z[jvj+16]=z[jvj+3];
l12:pile[v[22]]=V22; pile[WZ1]=jvj+16; 
(*f[1983])( );     /*SPY0(V22,jvj+16)*/
V22=0;
goto l1;
l3:x[jvj+5]=s[x[jvj+17]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+17];
pile[v[22]]=191; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(191,jvj+5,jvj+6)*/
if((x[jvj+6]!=67)) goto l4;
pile[v[22]]=120; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+5,jvj+7)*/
if((x[jvj+10]==x[jvj+7])) goto l8;
l4:x[jvj+17]=t[x[jvj+17]];
l2:if((x[jvj+17]>0)) goto l3;
x[jvj+16]=x[jvj+10] ;z[jvj+16]=z[jvj+10];
goto l12;
l5:x[jvj+8]=vo[15];z[jvj+8]=vz[15];
pile[v[22]]=302; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(302,jvj+8,jvj+9)*/
x[jvj+18]=x[jvj+9] ;z[jvj+18]=z[jvj+9];
l6:if((x[jvj+18]>0)) goto l7;
x[jvj+12]=vo[15];z[jvj+12]=vz[15];
pile[v[22]]=302; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(302,jvj+12,jvj+13)*/
l9:if((x[jvj+13]>0)) goto l10;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l7:x[jvj+10]=s[x[jvj+18]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+18];
pile[v[22]]=191; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(191,jvj+10,jvj+11)*/
if((x[jvj+11]!=67)) goto l8;
pile[v[22]]=193; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(193,jvj+10,V6)*/
V6=pile[WZ2]; 
x[jvj+17]=x[jvj+9] ;z[jvj+17]=z[jvj+9];
goto l2;
l8:x[jvj+18]=t[x[jvj+18]];
goto l6;
l10:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=191; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(191,jvj+14,jvj+15)*/
if((x[jvj+15]!=67)) goto l11;
pile[v[22]]=193; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(193,jvj+14,V15)*/
V15=pile[WZ2]; 
x[jvj+16]=x[jvj+14] ;z[jvj+16]=z[jvj+14];
goto l12;
l11:x[jvj+13]=t[x[jvj+13]];
goto l9;
}
