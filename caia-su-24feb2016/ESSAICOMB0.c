#include "dx.h"
void ESSAICOMB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0,V6=0,V8=0,V5=0,V7=0,V9=0,V4=0,V12=0,V14=0,V10=0,V11=0,V13=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=11022;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==150&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=incon;
if((v[76]>0)) goto l1;
V1=20;
l2:v[131]=0;
v[132]=0;
v[76]=V1;
pile[v[22]]=68; 
(*f[88])( );     /*DATE0(68)*/
if((v[240]<=0)) goto l5;
v[70]=1000;
(*f[174])( );     /*COMB0()*/
V6=v[78];
V8=v[77];
pile[v[22]]=41; pile[WZ1]=V6; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V6,0,V5)*/
V5=pile[WZ3]; 
pile[WZ1]=V8; pile[WZ2]=V5; 
(*f[39])( );     /*SDX0(41,V8,V5,V7)*/
V7=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V7; pile[WZ2]=983; 
(*f[42])( );     /*SRA1(135,V7,983,V9)*/
V9=pile[WZ3]; 
pile[v[22]]=V9; 
(*f[40])( );     /*SLG0(V9)*/
l5:if((v[240]!=0)) goto l6;
pile[v[22]]=365; pile[WZ1]=10290; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(365,10290,jvj+2)*/
l3:if((x[jvj+2]<=0)) goto l6;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+3,V3)*/
V3=pile[WZ2]; 
if((V3!=0)) goto l4;
pile[v[22]]=246; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(246,jvj+3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=46; 
(*f[339])( );     /*CMP0(jvj+3,46)*/
pile[v[22]]=V4; pile[WZ1]=246; pile[WZ2]=jvj+5; 
(*f[46])( );     /*TRI0(V4,246,jvj+5)*/
pile[v[22]]=109; pile[WZ1]=10290; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+5; pile[WZ5]=jvj+4; 
(*f[47])( );     /*QUADRI0(109,10290,130,0,jvj+5,jvj+4)*/
pile[v[22]]=jvj+4; 
(*f[340])( );     /*EACB0(jvj+4)*/
pile[v[22]]=68; 
(*f[88])( );     /*DATE0(68)*/
(*f[174])( );     /*COMB0()*/
pile[v[22]]=68; 
(*f[88])( );     /*DATE0(68)*/
l6:V12=v[131];
V14=v[132];
pile[v[22]]=20; pile[WZ1]=11022; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11022,0,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V12; pile[WZ2]=V10; 
(*f[39])( );     /*SDX0(41,V12,V10,V11)*/
V11=pile[WZ3]; 
pile[WZ1]=V14; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(41,V14,V11,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; 
(*f[40])( );     /*SLG0(V13)*/
l7:x[jvj+1]=incon; v[0]=jvj; return;
l1:V1=v[76];
goto l2;
l4:x[jvj+2]=t[x[jvj+2]];
goto l3;
}
