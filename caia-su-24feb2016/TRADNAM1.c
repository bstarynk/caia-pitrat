#include "dx.h"
void TRADNAM1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int HH=0,V12=0,V2=0,V9=0,V10=0,V1=0,V7=0,V14=0,V13=0;
int R,RR;
int BA;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=11834;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1505&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; BA=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=218; pile[WZ1]=R; pile[WZ2]=459; pile[WZ3]=68; pile[WZ4]=BA; 
(*f[181])( );     /*QUADRI2(218,R,459,68,BA)*/
pile[v[22]]=RR; pile[WZ1]=BA; 
(*f[1519])( );     /*NATFN0(RR,BA)*/
pile[v[22]]=1260; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1260,BA,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=1260; pile[WZ1]=BA; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1260,BA,jvj+7)*/
l4:if((x[jvj+7]>0)) goto l5;
pile[v[22]]=1260; pile[WZ1]=BA; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1260,BA,jvj+9)*/
pile[v[22]]=R; pile[WZ1]=1260; 
(*f[34])( );     /*CHGC0(R,1260,jvj+9)*/
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; 
(*f[1494])( );     /*FNDEXPR0(jvj+4)*/
x[jvj+3]=t[x[jvj+3]];
goto l1;
l3:V1=V2;
l7:pile[v[22]]=V1; 
(*f[40])( );     /*SLG0(V1)*/
l6:x[jvj+7]=t[x[jvj+7]];
goto l4;
l5:x[jvj+5]=s[x[jvj+7]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+7];
pile[v[22]]=110; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(110,jvj+5,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=1261; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1261,jvj+5,jvj+8)*/
V14=x[jvj+8];
pile[v[22]]=0; pile[WZ1]=V7; 
(*f[37])( );     /*SRA0(0,V7,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V14; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(23,V14,V13,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=129; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(129,jvj+5,jvj+6)*/
HH=x[jvj+6];
V12=HH;
pile[v[22]]=135; pile[WZ1]=V2; pile[WZ2]=129; 
(*f[42])( );     /*SRA1(135,V2,129,V9)*/
V9=pile[WZ3]; 
pile[v[22]]=V9; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V9,61,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V12; pile[WZ2]=V10; 
(*f[39])( );     /*SDX0(20,V12,V10,V1)*/
V1=pile[WZ3]; 
goto l7;
}
