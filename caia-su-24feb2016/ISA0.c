#include "dx.h"
void ISA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V23=0,V17=0,V=0,F=0,V35=0,V48=0,W=0,K=0,V20=0;
int TL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=33;
x[jvj+1]=10296;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1655&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=223; pile[WZ1]=TL; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(223,TL,jvj+8)*/
pile[v[22]]=302; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(302,TL,jvj+9)*/
l3:if((x[jvj+9]>0)) goto l4;
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(302,TL,jvj+20)*/
l7:if((x[jvj+20]>0)) goto l8;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+33]=t[x[jvj+33]];
l1:if((x[jvj+33]<=0)) goto l9;
x[jvj+7]=s[x[jvj+33]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+33];
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+7,V23)*/
V23=pile[WZ2]; 
if((V23!=W)) goto l2;
pile[v[22]]=158; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(158,jvj+7,jvj+32)*/
if((K!=x[jvj+32])) goto l9;
V20=V48;
pile[v[22]]=V20; pile[WZ1]=W; pile[WZ2]=jvj+21; pile[WZ3]=TL; 
(*f[1843])( );     /*ISW1(V20,W,jvj+21,TL)*/
l9:x[jvj+20]=t[x[jvj+20]];
goto l7;
l4:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+10,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=435)) goto l5;
pile[v[22]]=436; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(436,jvj+11,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+13,V17)*/
V17=pile[WZ2]; 
V=V17;
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==V) goto l5;
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+11,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+14,jvj+15)*/
F=x[jvj+15];
if(F!=82&&F!=179) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+11,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+2,jvj+16)*/
if(x[jvj+16]!=22&&x[jvj+16]!=21&&x[jvj+16]!=20&&x[jvj+16]!=96&&x[jvj+16]!=89&&x[jvj+16]!=41&&x[jvj+16]!=1317) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+3,jvj+4)*/
pile[v[22]]=304; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(304,jvj+4,jvj+5)*/
if((x[jvj+5]==68)) goto l5;
l6:pile[v[22]]=135; pile[WZ1]=jvj+10; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(135,jvj+10,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=V; pile[WZ2]=jvj+18; 
(*f[1842])( );     /*ISC0(jvj+17,V,jvj+18)*/
pile[v[22]]=128; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(128,jvj+18,jvj+19)*/
if((x[jvj+19]!=0)) goto l5;
pile[v[22]]=jvj+10; pile[WZ1]=TL; 
(*f[1383])( );     /*ISV0(jvj+10,TL)*/
l5:x[jvj+9]=t[x[jvj+9]];
goto l3;
l8:x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+21,jvj+22)*/
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=179)) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+22,jvj+25)*/
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+25,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=172)) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+25,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+28,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=436; pile[WZ1]=jvj+22; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(436,jvj+22,jvj+29)*/
pile[v[22]]=140; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+29,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+25; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+25,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+30,jvj+31)*/
W=V35;
K=x[jvj+31];
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(283,TL,jvj+6)*/
x[jvj+33]=x[jvj+6] ;z[jvj+33]=z[jvj+6];
goto l1;
}
