#include "dx.h"
void ORK1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V6=0,BB=0,V12=0,V14=0,V13=0,V11=0;
int B,A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=10697;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2175&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=incon;
pile[v[22]]=A; pile[WZ1]=B; 
(*f[2017])( );     /*ORKI0(A,B)*/
pile[v[22]]=287; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(287,A,jvj+7)*/
l1:V5=(-999999);
x[jvj+3]=vo[15];z[jvj+3]=vz[15];
pile[v[22]]=297; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(297,jvj+3,jvj+4)*/
pile[v[22]]=312; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(312,jvj+4,jvj+5)*/
l2:if((x[jvj+5]<=0)) goto l4;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=741; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(741,jvj+6,V6)*/
V6=pile[WZ2]; 
if(V6>V5) V5=V6;
l3:x[jvj+5]=t[x[jvj+5]];
goto l2;
l4:if((V5>=10000)) goto l5;
BB=1;
l12:if(x[jvj+7]!=incon) goto l13;
l14:V11=incon;
V12=incon;
if((BB==1)) goto l15;
V12=1;
l16:pile[v[22]]=18; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(18,A,V14)*/
V14=pile[WZ2]; 
V13=V14/V12;
if((V13<=1)) goto l17;
V11=V13;
l18:R=V11;
pile[v[22]]=A; pile[WZ1]=204; pile[WZ2]=R; 
(*f[43])( );     /*CHGC2(A,204,R)*/
l19:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=R; return;
l5:BB=1000;
goto l12;
l7:x[jvj+11]=s[x[jvj+8]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+8];
x[jvj+9]=d[117];z[jvj+9]=0;
l8:if((x[jvj+9]>0)) goto l9;
x[jvj+8]=t[x[jvj+8]];
l6:if((x[jvj+8]>0)) goto l7;
pile[v[22]]=A; 
(*f[2019])( );     /*ORKM0(A)*/
pile[WZ1]=jvj+7; pile[WZ2]=B; pile[WZ3]=BB; 
(*f[2020])( );     /*ORKK0(A,jvj+7,B,BB)*/
goto l14;
l9:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+10,jvj+11,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(jvj+12,A,jvj+13)*/
x[jvj+16]=x[jvj+13] ;z[jvj+16]=z[jvj+13];
l11:if((x[jvj+16]<=0)) goto l10;
x[jvj+14]=s[x[jvj+16]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+16];
pile[v[22]]=jvj+14; pile[WZ1]=A; 
(*f[2018])( );     /*ORKC0(jvj+14,A)*/
x[jvj+16]=t[x[jvj+16]];
goto l11;
l10:x[jvj+9]=t[x[jvj+9]];
goto l8;
l13:pile[v[22]]=287; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(287,A,jvj+15)*/
pile[v[22]]=jvj+15; 
(*f[2018])( );     /*ORKC0(jvj+15,A)*/
x[jvj+8]=d[108];z[jvj+8]=0;
goto l6;
l15:V12=1000;
goto l16;
l17:V11=2;
goto l18;
}
