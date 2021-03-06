#include "dx.h"
void INTERP20(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int ZZG,ZZBL,ZZN,NS1,N1,NS2,N2,OS1,O1,OS2,O2,OS3,O3;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=19;
if(v[0]>99700) (*f[6])( );

ZZG=pile[v[22]]; ZZBL=pile[v[22]+1]; ZZN=pile[v[22]+2]; NS1=pile[v[22]+3]; N1=pile[v[22]+4]; NS2=pile[v[22]+5]; N2=pile[v[22]+6]; OS1=pile[v[22]+7]; O1=pile[v[22]+8]; OS2=pile[v[22]+9]; O2=pile[v[22]+10]; OS3=pile[v[22]+11]; O3=pile[v[22]+12]; RES=pile[v[22]+13]; v[22]+=14; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(216,158,jvj+1)*/
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(0,416,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+10,20,158,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=O1; pile[WZ2]=140; pile[WZ3]=OS1; pile[WZ4]=jvj+11; pile[WZ5]=jvj+2; 
(*f[599])( );     /*QUADRI12(101,O1,140,OS1,jvj+11,jvj+2)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+2)*/
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(0,416,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+12,20,158,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=O2; pile[WZ2]=140; pile[WZ3]=OS2; pile[WZ4]=jvj+13; pile[WZ5]=jvj+3; 
(*f[599])( );     /*QUADRI12(101,O2,140,OS2,jvj+13,jvj+3)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+3)*/
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(0,416,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+14,20,158,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=O3; pile[WZ2]=140; pile[WZ3]=OS3; pile[WZ4]=jvj+15; pile[WZ5]=jvj+4; 
(*f[599])( );     /*QUADRI12(101,O3,140,OS3,jvj+15,jvj+4)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+4)*/
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0((-200),416,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=41; pile[WZ2]=158; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+16,41,158,jvj+17)*/
pile[v[22]]=130; pile[WZ1]=N1; pile[WZ2]=140; pile[WZ3]=NS1; pile[WZ4]=jvj+17; pile[WZ5]=jvj+5; 
(*f[197])( );     /*QUADRI5(130,N1,140,NS1,jvj+17,jvj+5)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+5)*/
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0((-200),416,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=41; pile[WZ2]=158; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+18,41,158,jvj+19)*/
pile[v[22]]=130; pile[WZ1]=N2; pile[WZ2]=140; pile[WZ3]=NS2; pile[WZ4]=jvj+19; pile[WZ5]=jvj+6; 
(*f[197])( );     /*QUADRI5(130,N2,140,NS2,jvj+19,jvj+6)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+6)*/
V1=vg[ZZG];
if((V1<=0)) goto l1;
x[jvj+7]=V1 ;z[jvj+7]=(V1<=sepcte) ? V1 : 0;
pile[v[22]]=135; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(135,jvj+7,jvj+8)*/
x[jvj+9]=vo[20];z[jvj+9]=vz[20];
pile[v[22]]=jvj+9; pile[WZ1]=558; pile[WZ2]=jvj+1; 
(*f[35])( );     /*CHGC1(jvj+9,558,jvj+1)*/
pile[v[22]]=jvj+8; pile[WZ1]=RES; 
(*f[598])( );     /*EVLQ2(jvj+8,RES)*/
l2:v[0]=jvj; v[22]-=14; return;
l1:x[RES]=135 ;z[RES]=135;
goto l2;
}
