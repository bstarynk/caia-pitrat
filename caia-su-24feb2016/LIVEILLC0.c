#include "dx.h"
void LIVEILLC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V15=0,ZA=0,V16=0,V3=0,V21=0,V22=0,V23=0,V24=0,V20=0,V18=0,TY=0,V28=0,V29=0,V30=0,V31=0,V32=0,V33=0,V34=0,V35=0,V36=0,V37=0,V45=0,V46=0;
int A,MU,TX,QL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=11528;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==914&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; MU=pile[v[22]+1]; TX=pile[v[22]+2]; QL=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=159; pile[WZ1]=MU; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(159,MU,jvj+18)*/
l12:if((x[jvj+18]>0)) goto l13;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l2:x[jvj+4]=s[x[jvj+21]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+21];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(jvj+4,jvj+5,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=117; pile[WZ1]=V8; pile[WZ2]=218; pile[WZ3]=jvj+4; pile[WZ4]=jvj+6; 
(*f[567])( );     /*QUADRI11(117,V8,218,jvj+4,jvj+6)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[196])( );     /*PLUF0(jvj+3,jvj+6,jvj+7)*/
l3:x[jvj+21]=t[x[jvj+21]];
l1:if((x[jvj+21]>0)) goto l2;
V18=1;
pile[v[22]]=V18; pile[WZ1]=1488; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(V18,1488,jvj+17)*/
TY=x[jvj+19];
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V28; pile[WZ2]=21; 
(*f[42])( );     /*SRA1(135,V28,21,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=jvj+17; pile[WZ1]=110; pile[WZ2]=V20; 
(*f[177])( );     /*CHGC4(jvj+17,110,V20)*/
pile[v[22]]=V29; pile[WZ1]=V20; 
(*f[37])( );     /*SRA0(V29,V20,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=288; pile[WZ2]=jvj+19; 
(*f[35])( );     /*CHGC1(jvj+17,288,jvj+19)*/
pile[v[22]]=135; pile[WZ1]=V30; 
(*f[42])( );     /*SRA1(135,V30,jvj+19,V31)*/
V31=pile[WZ3]; 
V32=0;
V45=V31;
if((V45<0)) goto l15;
pile[v[22]]=V45; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V45,3)*/
l15:pile[v[22]]=135; pile[WZ1]=V32; pile[WZ2]=1531; 
(*f[42])( );     /*SRA1(135,V32,1531,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=jvj+17; pile[WZ1]=1531; pile[WZ2]=jvj+14; 
(*f[34])( );     /*CHGC0(jvj+17,1531,jvj+14)*/
pile[v[22]]=V33; pile[WZ1]=jvj+14; pile[WZ2]=44; 
(*f[566])( );     /*XQ0(V33,jvj+14,44,V34)*/
V34=pile[WZ3]; 
V35=0;
V46=V34;
if((V46<0)) goto l16;
pile[v[22]]=V46; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V46,3)*/
l16:pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=1526; 
(*f[42])( );     /*SRA1(135,V35,1526,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=jvj+17; pile[WZ1]=1526; pile[WZ2]=jvj+7; 
(*f[34])( );     /*CHGC0(jvj+17,1526,jvj+7)*/
pile[v[22]]=V36; pile[WZ1]=jvj+7; pile[WZ2]=44; 
(*f[566])( );     /*XQ0(V36,jvj+7,44,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; 
(*f[40])( );     /*SLG0(V37)*/
pile[v[22]]=256; pile[WZ1]=jvj+5; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(256,jvj+5,jvj+15)*/
if((TY==187)) goto l9;
pile[v[22]]=1459; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(1459,jvj+5,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=1527; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(1527,jvj+5,V24)*/
V24=pile[WZ2]; 
if((V23>=V24)) goto l17;
l11:x[jvj+23]=x[jvj+15] ;z[jvj+23]=z[jvj+15];
l10:if((x[jvj+23]<=0)) goto l17;
x[jvj+16]=s[x[jvj+23]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+23];
pile[v[22]]=jvj+16; pile[WZ1]=TX; pile[WZ2]=jvj+17; pile[WZ3]=jvj+5; pile[WZ4]=MU; 
(*f[1221])( );     /*LIVEILLA0(jvj+16,TX,jvj+17,jvj+5,MU)*/
x[jvj+23]=t[x[jvj+23]];
goto l10;
l6:x[jvj+10]=s[x[jvj+22]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+22];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(jvj+10,jvj+5,V15)*/
V15=pile[WZ2]; 
ZA=V15;
pile[v[22]]=288; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(288,jvj+10,jvj+11)*/
if((x[jvj+19]==187)) goto l4;
if((x[jvj+11]!=187)) goto l8;
l4:if((x[jvj+19]==x[jvj+11])) goto l8;
l7:x[jvj+22]=t[x[jvj+22]];
l5:if((x[jvj+22]>0)) goto l6;
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=1526; pile[WZ1]=1447; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1526,1447,jvj+2)*/
x[jvj+3]=d[126];z[jvj+3]=0;
x[jvj+21]=x[jvj+2] ;z[jvj+21]=z[jvj+2];
goto l1;
l8:pile[v[22]]=218; pile[WZ1]=jvj+10; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,jvj+10,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(jvj+12,jvj+5,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=ZA; 
(*f[913])( );if(v[102]) goto l7;     /*PMILLE0(V16,ZA,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=405; pile[WZ2]=jvj+20; 
(*f[46])( );     /*TRI0(V3,405,jvj+20)*/
pile[v[22]]=117; pile[WZ1]=ZA; pile[WZ2]=218; pile[WZ3]=jvj+10; pile[WZ4]=jvj+20; pile[WZ5]=jvj+13; 
(*f[725])( );     /*QUADRI14(117,ZA,218,jvj+10,jvj+20,jvj+13)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[196])( );     /*PLUF0(jvj+9,jvj+13,jvj+14)*/
goto l7;
l9:pile[v[22]]=1530; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(1530,jvj+5,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=1529; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(1529,jvj+5,V22)*/
V22=pile[WZ2]; 
if((V21>=V22)) goto l17;
goto l11;
l13:x[jvj+5]=s[x[jvj+18]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+18];
pile[v[22]]=110; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(110,jvj+5,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=288; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(288,jvj+5,jvj+19)*/
x[jvj+14]=0 ;z[jvj+14]=0;
pile[v[22]]=1531; pile[WZ1]=1447; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1531,1447,jvj+8)*/
x[jvj+9]=d[172];z[jvj+9]=0;
x[jvj+22]=x[jvj+8] ;z[jvj+22]=z[jvj+8];
goto l5;
l17:pile[v[22]]=QL; pile[WZ1]=159; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(QL,159,jvj+17)*/
l14:x[jvj+18]=t[x[jvj+18]];
goto l12;
}
