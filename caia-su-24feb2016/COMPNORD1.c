#include "dx.h"
void COMPNORD1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RES=0;
int P,A,B,Y,T;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=11132;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1173&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; Y=pile[v[22]+3]; T=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=226; pile[WZ1]=P; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(226,P,jvj+7)*/
l3:if((x[jvj+7]>0)) goto l4;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; return;
l2:x[jvj+3]=s[x[jvj+14]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+14];
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(0,416,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+10,20,158,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=A; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+11; pile[WZ5]=jvj+8; 
(*f[599])( );     /*QUADRI12(101,A,140,(-598),jvj+11,jvj+8)*/
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(0,416,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+12,20,158,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=B; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+13; pile[WZ5]=jvj+9; 
(*f[599])( );     /*QUADRI12(101,B,140,(-591),jvj+13,jvj+9)*/
pile[v[22]]=11132; pile[WZ1]=158; pile[WZ2]=jvj+4; 
(*f[54])( );     /*TRI1(11132,158,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=128; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+4,128,jvj+8)*/
pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+4,128,jvj+9)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[30])( );if(v[102]) goto l5;     /*EVL0(jvj+3,jvj+4,RES)*/
RES=pile[WZ2]; 
if((RES!=135)) goto l5;
x[jvj+14]=t[x[jvj+14]];
l1:if((x[jvj+14]>0)) goto l2;
pile[v[22]]=jvj+5; pile[WZ1]=A; pile[WZ2]=B; pile[WZ3]=T; pile[WZ4]=Y; 
(*f[845])( );     /*COMPNORDA0(jvj+5,A,B,T,Y)*/
l5:x[jvj+7]=t[x[jvj+7]];
goto l3;
l4:x[jvj+5]=s[x[jvj+7]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+7];
pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+6)*/
x[jvj+14]=x[jvj+6] ;z[jvj+14]=z[jvj+6];
goto l1;
}
