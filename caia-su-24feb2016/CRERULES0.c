#include "dx.h"
void CRERULES0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V38=0,V36=0,F=0,V=0,V14=0,V12=0,V13=0,V16=0,V4=0,V21=0,V20=0,V5=0,V18=0;
int Q;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=11604;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==569&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Q=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=565; pile[WZ1]=28013; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(565,28013,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=jvj+2; pile[WZ1]=Q; 
(*f[68])( );     /*PLUE0(jvj+2,Q)*/
pile[WZ1]=324; 
(*f[68])( );     /*PLUE0(jvj+2,324)*/
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(1484,854,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=218; pile[WZ1]=Q; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(218,Q,jvj+16)*/
V12=sepfacts+1;
V13=sepfacts+V14;
l6:if((V12>V13)) goto l13;
V16=r[V12];
if((V16!=1)) goto l7;
x[jvj+17]=V12 ;z[jvj+17]=(V12<=sepcte) ? V12 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(905,jvj+17,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=102; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+17,jvj+18)*/
pile[v[22]]=108; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(108,jvj+18,jvj+19)*/
pile[v[22]]=184; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(184,jvj+17,jvj+20)*/
V21=x[jvj+17];
V20=V21-20000;
x[jvj+34]=x[jvj+2] ;z[jvj+34]=z[jvj+2];
l8:if((x[jvj+34]<=0)) goto l7;
x[jvj+21]=s[x[jvj+34]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+34];
pile[v[22]]=163; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+21,V5)*/
V5=pile[WZ2]; 
if((V4!=V5)) goto l9;
x[jvj+35]=x[jvj+19] ;z[jvj+35]=z[jvj+19];
l10:if((x[jvj+35]<=0)) goto l9;
x[jvj+22]=s[x[jvj+35]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+35];
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=576)) goto l11;
pile[v[22]]=103; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+22,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+25,V18)*/
V18=pile[WZ2]; 
x[jvj+36]=x[jvj+20] ;z[jvj+36]=z[jvj+20];
l12:if((x[jvj+36]<=0)) goto l11;
x[jvj+26]=s[x[jvj+36]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+36];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+27)*/
pile[v[22]]=jvj+21; pile[WZ1]=860; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+21,860,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=V18; pile[WZ2]=140; pile[WZ3]=jvj+32; 
(*f[631])( );     /*TRI16(jvj+31,V18,140,jvj+32)*/
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=117; pile[WZ3]=V20; pile[WZ4]=jvj+32; pile[WZ5]=jvj+28; 
(*f[47])( );     /*QUADRI0(102,jvj+27,117,V20,jvj+32,jvj+28)*/
pile[v[22]]=jvj+16; pile[WZ1]=1629; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+16,1629,jvj+28)*/
x[jvj+36]=t[x[jvj+36]];
goto l12;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+4,jvj+5)*/
pile[v[22]]=102; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+4,jvj+6)*/
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+6,V38)*/
V38=pile[WZ2]; 
x[jvj+7]=x[jvj+5] ;z[jvj+7]=z[jvj+5];
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+9)*/
x[jvj+33]=x[jvj+8] ;z[jvj+33]=z[jvj+8];
l4:if((x[jvj+33]<=0)) goto l3;
x[jvj+10]=s[x[jvj+33]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+33];
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=22)) goto l5;
pile[v[22]]=102; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+10,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+12,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+10,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+13,jvj+14)*/
F=x[jvj+14];
if(F!=278&&F!=910) goto l5;
V=V36;
pile[v[22]]=28013; pile[WZ1]=860; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(28013,860,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=V; pile[WZ2]=140; pile[WZ3]=jvj+30; 
(*f[631])( );     /*TRI16(jvj+29,V,140,jvj+30)*/
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=117; pile[WZ3]=V38; pile[WZ4]=jvj+30; pile[WZ5]=jvj+15; 
(*f[47])( );     /*QUADRI0(102,jvj+9,117,V38,jvj+30,jvj+15)*/
pile[v[22]]=1628; pile[WZ1]=1629; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(1628,1629,jvj+15)*/
l5:x[jvj+33]=t[x[jvj+33]];
goto l4;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l7:V12++;
goto l6;
l9:x[jvj+34]=t[x[jvj+34]];
goto l8;
l11:x[jvj+35]=t[x[jvj+35]];
goto l10;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
