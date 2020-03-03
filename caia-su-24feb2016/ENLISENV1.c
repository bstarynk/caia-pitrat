#include "dx.h"
void ENLISENV1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V8=0,V10=0;
int L,S,M,D;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=10454;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1166&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; S=pile[v[22]+1]; M=pile[v[22]+2]; D=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=715; pile[WZ1]=L; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(715,L,jvj+7)*/
pile[WZ1]=S; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(715,S,jvj+8)*/
if((x[jvj+7]!=x[jvj+8])) goto l4;
V7=x[S];
pile[v[22]]=159; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(159,S,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l3;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=1070; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1070,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+4,jvj+6)*/
z[jvj+6]=(-1);
pile[v[22]]=578; pile[WZ1]=jvj+6; pile[WZ2]=V7; 
(*f[134])( );     /*OTA0(578,jvj+6,V7)*/
l3:pile[v[22]]=718; pile[WZ1]=L; pile[WZ2]=V7; 
(*f[134])( );     /*OTA0(718,L,V7)*/
l4:pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+8,V8)*/
V8=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+7,V10)*/
V10=pile[WZ2]; 
if((V8>=V10)) goto l10;
pile[v[22]]=120; pile[WZ1]=L; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(120,L,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=S; pile[WZ2]=L; pile[WZ3]=67; 
(*f[1166])( );     /*ENLISENV1(jvj+9,S,L,67)*/
l10:pile[v[22]]=715; pile[WZ1]=L; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(715,L,jvj+12)*/
pile[WZ1]=S; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(715,S,jvj+13)*/
if((x[jvj+12]!=x[jvj+13])) goto l11;
pile[v[22]]=718; pile[WZ1]=L; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(718,L,jvj+14)*/
if((x[jvj+14]!=0)) goto l11;
x[jvj+11]=incon;
pile[v[22]]=120; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,L,jvj+10)*/
x[jvj+11]=x[jvj+10] ;z[jvj+11]=z[jvj+10];
l6:if((x[jvj+11]==250)) goto l7;
if((x[D]!=68)) goto l9;
pile[v[22]]=M; pile[WZ1]=717; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(M,717,jvj+11)*/
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+11]=250 ;z[jvj+11]=250;
goto l6;
l7:if((x[D]==68)) goto l8;
if((x[D]!=67)) goto l9;
pile[v[22]]=120; pile[WZ1]=M; 
(*f[71])( );     /*ENLV0(120,M)*/
goto l11;
l8:pile[v[22]]=717; pile[WZ1]=M; 
(*f[71])( );     /*ENLV0(717,M)*/
goto l11;
l9:if((x[D]!=67)) goto l11;
if((x[jvj+11]==250)) goto l11;
pile[v[22]]=M; pile[WZ1]=120; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(M,120,jvj+11)*/
goto l11;
}
