#include "dx.h"
void ORK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0,BB=0,V11=0,V13=0,V12=0,V10=0;
int A,B,C;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=10697;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1853&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; C=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=A; pile[WZ1]=B; 
(*f[2017])( );     /*ORKI0(A,B)*/
V4=(-999999);
x[jvj+2]=vo[15];z[jvj+2]=vz[15];
pile[v[22]]=297; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(297,jvj+2,jvj+3)*/
pile[v[22]]=312; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(312,jvj+3,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l3;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=741; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(741,jvj+5,V5)*/
V5=pile[WZ2]; 
if(V5>V4) V4=V5;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l3:if((V4>=10000)) goto l4;
BB=1;
l11:pile[v[22]]=287; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(287,A,jvj+13)*/
pile[v[22]]=jvj+13; 
(*f[2018])( );     /*ORKC0(jvj+13,A)*/
x[jvj+6]=d[108];z[jvj+6]=0;
l5:if((x[jvj+6]>0)) goto l6;
pile[v[22]]=A; 
(*f[2019])( );     /*ORKM0(A)*/
pile[WZ1]=C; pile[WZ2]=B; pile[WZ3]=BB; 
(*f[2020])( );     /*ORKK0(A,C,B,BB)*/
l12:V10=incon;
V11=incon;
if((BB==1)) goto l13;
V11=1;
l14:pile[v[22]]=18; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(18,A,V13)*/
V13=pile[WZ2]; 
V12=V13/V11;
if((V12<=1)) goto l15;
V10=V12;
l16:R=V10;
pile[v[22]]=A; pile[WZ1]=204; pile[WZ2]=R; 
(*f[43])( );     /*CHGC2(A,204,R)*/
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=R; return;
l4:BB=1000;
goto l11;
l6:x[jvj+9]=s[x[jvj+6]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+6];
x[jvj+7]=d[117];z[jvj+7]=0;
l7:if((x[jvj+7]>0)) goto l8;
x[jvj+6]=t[x[jvj+6]];
goto l5;
l8:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+8,jvj+9,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(jvj+10,A,jvj+11)*/
x[jvj+14]=x[jvj+11] ;z[jvj+14]=z[jvj+11];
l10:if((x[jvj+14]<=0)) goto l9;
x[jvj+12]=s[x[jvj+14]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+14];
pile[v[22]]=jvj+12; pile[WZ1]=A; 
(*f[2018])( );     /*ORKC0(jvj+12,A)*/
x[jvj+14]=t[x[jvj+14]];
goto l10;
l9:x[jvj+7]=t[x[jvj+7]];
goto l7;
l13:V11=1000;
goto l14;
l15:V10=2;
goto l16;
}
