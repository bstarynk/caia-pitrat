#include "dx.h"
void FTYPE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V44=0,V48=0,V39=0,V60=0,V62=0,V54=0,V55=0,V56=0,V57=0,V58=0,V59=0,V61=0,V38=0,V36=0;
int V,EA,A;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
if(v[0]>99700) (*f[6])( );

V=pile[v[22]]; EA=pile[v[22]+1]; A=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,A,jvj+2)*/
if((x[jvj+2]==61)) goto l3;
if((x[jvj+2]==41)) goto l3;
if((x[jvj+2]==89)) goto l4;
if((x[jvj+2]==20)) goto l5;
if((x[jvj+2]==96)) goto l6;
if((x[jvj+2]==128)) goto l7;
if((x[jvj+2]==22)) goto l12;
if((x[jvj+2]!=484)) goto l13;
pile[v[22]]=111; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,A,jvj+11)*/
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+11,V48)*/
V48=pile[WZ2]; 
if((V!=V48)) goto l13;
x[jvj+22]=x[EA] ;z[jvj+22]=z[EA];
l1:if((x[jvj+22]<=0)) goto l13;
x[jvj+1]=s[x[jvj+22]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+22];
pile[v[22]]=140; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+1,V44)*/
V44=pile[WZ2]; 
if((V44!=V)) goto l2;
pile[v[22]]=158; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(158,jvj+1,jvj+10)*/
l19:x[jvj+24]=x[EA] ;z[jvj+24]=z[EA];
l17:if((x[jvj+24]>0)) goto l18;
pile[v[22]]=140; pile[WZ1]=V; pile[WZ2]=158; pile[WZ3]=jvj+10; pile[WZ4]=jvj+21; 
(*f[692])( );     /*QUADRI13(140,V,158,jvj+10,jvj+21)*/
pile[v[22]]=EA; pile[WZ1]=jvj+21; 
(*f[522])( );     /*PLUB2(EA,jvj+21)*/
l21:v[0]=jvj; v[22]-=3; return;
l2:x[jvj+22]=t[x[jvj+22]];
goto l1;
l3:x[jvj+10]=41 ;z[jvj+10]=41;
goto l19;
l4:x[jvj+10]=89 ;z[jvj+10]=89;
goto l19;
l5:x[jvj+10]=20 ;z[jvj+10]=20;
goto l19;
l6:x[jvj+10]=96 ;z[jvj+10]=96;
goto l19;
l7:pile[v[22]]=128; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(128,A,jvj+3)*/
x[jvj+23]=x[jvj+3] ;z[jvj+23]=z[jvj+3];
l8:if((x[jvj+23]<=0)) goto l10;
x[jvj+4]=s[x[jvj+23]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+23];
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]==41)) goto l3;
l9:x[jvj+23]=t[x[jvj+23]];
goto l8;
l12:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,A,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]==267)) goto l13;
pile[v[22]]=146; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(146,jvj+9,jvj+10)*/
goto l19;
l13:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,A,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=267)) goto l21;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,A,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]==453)) goto l4;
if((x[jvj+15]!=22)) goto l21;
pile[v[22]]=111; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+14,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+16,jvj+17)*/
pile[v[22]]=146; pile[WZ1]=jvj+17; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(146,jvj+17,jvj+10)*/
goto l19;
l15:if((V38<4)) goto l16;
goto l21;
l16:V60=x[jvj+20];
V62=x[jvj+10];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V54; pile[WZ2]=11242; 
(*f[98])( );     /*SRA3(135,V54,11242,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V55,125,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=V56; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(10,V56,126,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V57,V,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V60; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(20,V60,V58,V59)*/
V59=pile[WZ3]; 
pile[WZ1]=V62; pile[WZ2]=V59; 
(*f[39])( );     /*SDX0(20,V62,V59,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=V61; 
(*f[40])( );     /*SLG0(V61)*/
if((V38!=2)) goto l21;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l21;
l18:x[jvj+18]=s[x[jvj+24]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+24];
pile[v[22]]=140; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+18,V36)*/
V36=pile[WZ2]; 
if((V36!=V)) goto l20;
pile[v[22]]=158; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(158,jvj+18,jvj+20)*/
if((x[jvj+20]==x[jvj+10])) goto l21;
V38=g[545];
if((V38<=0)) goto l21;
V39=vg[545];
if((V39!=0)) goto l14;
if((V38<3)) goto l16;
l14:pile[v[22]]=545; pile[WZ1]=11242; pile[WZ2]=0; pile[WZ3]=(-664); pile[WZ4]=jvj+18; pile[WZ5]=(-601); pile[v[22]+6]=jvj+10; pile[v[22]+7]=(-611); pile[v[22]+8]=V; pile[v[22]+9]=jvj+19; 
(*f[318])( );     /*INTERP6(545,11242,0,(-664),jvj+18,(-601),jvj+10,(-611),V,jvj+19)*/
if((x[jvj+19]==135)) goto l15;
goto l21;
l20:x[jvj+24]=t[x[jvj+24]];
goto l17;
l10:if((x[jvj+3]<=0)) goto l13;
x[jvj+6]=s[x[jvj+3]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+3];
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]==89)) goto l4;
l11:x[jvj+3]=t[x[jvj+3]];
goto l10;
}
