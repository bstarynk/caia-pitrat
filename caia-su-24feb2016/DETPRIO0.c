#include "dx.h"
void DETPRIO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0;
int Y,BT,N,NR,Z;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=11149;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==785&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Y=pile[v[22]]; BT=pile[v[22]+1]; N=pile[v[22]+2]; NR=pile[v[22]+3]; Z=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=incon;
pile[v[22]]=BT; pile[WZ1]=Y; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(BT,Y,jvj+2)*/
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
l3:x[jvj+5]=d[42];z[jvj+5]=0;
l1:if((x[jvj+5]>0)) goto l2;
if(x[jvj+4]!=incon) goto l5;
l11:pile[v[22]]=158; pile[WZ1]=Z; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(158,Z,jvj+16)*/
if((x[jvj+16]!=68)) goto l12;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+2,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+17,jvj+18)*/
if(x[jvj+18]!=433&&x[jvj+18]!=918) goto l12;
pile[v[22]]=366; pile[WZ1]=jvj+2; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(366,jvj+2,jvj+15)*/
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l2:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+6; pile[WZ2]=N; pile[WZ3]=NR; pile[WZ4]=Z; 
(*f[785])( );     /*DETPRIO0(jvj+2,jvj+6,N,NR,Z)*/
x[jvj+5]=t[x[jvj+5]];
goto l1;
l4:x[jvj+9]=x[jvj+8] ;z[jvj+9]=z[jvj+8];
l7:x[jvj+14]=x[jvj+11] ;z[jvj+14]=z[jvj+11];
x[jvj+19]=x[jvj+9] ;z[jvj+19]=z[jvj+9];
if((x[jvj+19]!=616)) goto l8;
pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(120,jvj+2,jvj+20)*/
pile[v[22]]=Y; pile[WZ1]=BT; 
(*f[35])( );     /*CHGC1(Y,BT,jvj+20)*/
l8:if((x[jvj+14]==187)) goto l9;
if((x[jvj+19]!=616)) goto l10;
goto l11;
l5:pile[v[22]]=158; pile[WZ1]=Z; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(158,Z,jvj+10)*/
if((x[jvj+10]==67)) goto l6;
if((x[jvj+10]!=68)) goto l11;
pile[v[22]]=jvj+4; pile[WZ1]=NR; pile[WZ2]=N; pile[WZ3]=Z; pile[WZ4]=jvj+11; pile[WZ5]=jvj+8; 
(*f[1140])( );if(v[102]) goto l11;     /*CALPRIO0(jvj+4,NR,N,Z,jvj+11,jvj+8)*/
x[jvj+9]=incon;
pile[v[22]]=1033; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1033,jvj+4,jvj+7)*/
if((x[jvj+7]!=68)) goto l4;
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+8,V3)*/
V3=pile[WZ2]; 
pile[WZ1]=605; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,605,V4)*/
V4=pile[WZ2]; 
if((V3<=V4)) goto l4;
pile[v[22]]=242; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(242,jvj+8,jvj+9)*/
goto l7;
l6:pile[v[22]]=jvj+4; pile[WZ1]=NR; pile[WZ2]=Z; 
(*f[1142])( );     /*CALPRIO1(jvj+4,NR,Z)*/
goto l11;
l9:if((x[jvj+19]==616)) goto l11;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+19; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+19,jvj+12)*/
pile[v[22]]=jvj+2; pile[WZ1]=959; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(jvj+2,959,jvj+12)*/
l10:pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+2,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=101; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(jvj+13,101,jvj+14)*/
goto l11;
l13:pile[v[22]]=BT; pile[WZ1]=Y; 
(*f[71])( );     /*ENLV0(BT,Y)*/
goto l8;
l14:pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(120,jvj+2,jvj+21)*/
pile[v[22]]=Y; pile[WZ1]=BT; 
(*f[35])( );     /*CHGC1(Y,BT,jvj+21)*/
goto l12;
l15:pile[v[22]]=BT; pile[WZ1]=Y; 
(*f[71])( );     /*ENLV0(BT,Y)*/
goto l12;
}
