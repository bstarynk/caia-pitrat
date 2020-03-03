#include "dx.h"
void DIVISION0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,BB=0,K=0,V3=0,V12=0,V4=0,V9=0,V16=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,B,L)*/
L=pile[WZ2]; 
BB=L;
pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,A,K)*/
K=pile[WZ2]; 
V3=K/BB;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,R)*/
l5:v[0]=jvj; v[22]-=3; v[102]=0;return;
l1:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,A,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=486)) goto l4;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,A,jvj+3)*/
x[jvj+13]=x[jvj+3] ;z[jvj+13]=z[jvj+3];
l2:if((x[jvj+13]<=0)) goto l4;
x[jvj+4]=s[x[jvj+13]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+13];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+4,V12)*/
V12=pile[WZ2]; 
V4=V12;
V9=V4%BB;
if((V9!=0)) goto l3;
x[jvj+14]=x[jvj+3] ;z[jvj+14]=z[jvj+3];
l6:if((x[jvj+14]>0)) goto l7;
l3:x[jvj+13]=t[x[jvj+13]];
goto l2;
l4:v[0]=jvj; v[22]-=3; v[102]=1;return;
l7:x[jvj+9]=s[x[jvj+14]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+14];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[760])( );     /*MEMEX0(jvj+9,jvj+4,jvj+10)*/
if((x[jvj+10]==135)) goto l8;
x[jvj+14]=t[x[jvj+14]];
goto l6;
l8:x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+15]=x[jvj+3] ;z[jvj+15]=z[jvj+3];
l9:if((x[jvj+15]>0)) goto l10;
x[jvj+5]=x[jvj+11] ;z[jvj+5]=z[jvj+11];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[299])( );     /*COPEL0(jvj+5,jvj+6)*/
V16=V4/BB;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+7)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V16; pile[WZ4]=jvj+8; 
(*f[192])( );     /*QUADRI4(100,41,130,V16,jvj+8)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+7; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+7,R)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(R,107,jvj+8)*/
pile[v[22]]=jvj+6; pile[WZ1]=R; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+6,R,107)*/
goto l5;
l10:x[jvj+12]=s[x[jvj+15]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+15];
if((x[jvj+12]==x[jvj+9])) goto l11;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+12)*/
l11:x[jvj+15]=t[x[jvj+15]];
goto l9;
}
