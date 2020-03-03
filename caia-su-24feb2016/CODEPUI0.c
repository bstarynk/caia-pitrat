#include "dx.h"
void CODEPUI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int PP=0;
int R;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=17;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,R,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=625)) goto l3;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(160,R,jvj+3)*/
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+3,PP)*/
PP=pile[WZ2]; 
x[jvj+4]=d[20];z[jvj+4]=0;
l1:if((x[jvj+4]<=0)) goto l3;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+5,R,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=PP; pile[WZ2]=jvj+7; 
(*f[1662])( );     /*CODEPUI1(jvj+6,PP,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=268; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+5,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+9,R,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=PP; pile[WZ2]=jvj+11; 
(*f[1662])( );     /*CODEPUI1(jvj+10,PP,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=PP; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,PP,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=160; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,160,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=111; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+14,jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+16,jvj+12,103,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+17; pile[WZ5]=RR; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+17,RR)*/
l4:v[0]=jvj; v[22]-=2; return;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l3:x[RR]=x[R] ;z[RR]=z[R];
goto l4;
}
