#include "dx.h"
void EVBOUCLE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V2=0,V18=0,V16=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=22;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,A,jvj+20)*/
if((x[jvj+20]==455)) goto l9;
if((x[jvj+20]!=448)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,A,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=128)) goto l7;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(1,117,jvj+19)*/
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,A,jvj+9)*/
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=267)) goto l6;
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+12)*/
l4:if((x[jvj+12]<=0)) goto l6;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=44)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+13,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=21)) goto l5;
pile[v[22]]=103; pile[WZ1]=jvj+13; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+13,jvj+18)*/
pile[v[22]]=jvj+18; 
(*f[457])( );if(v[102]) goto l5;     /*CARDENS0(jvj+18,V18)*/
V18=pile[WZ1]; 
pile[v[22]]=jvj+19; pile[WZ1]=117; pile[WZ2]=V18; 
(*f[818])( );     /*MTC0(jvj+19,117,V18)*/
l5:x[jvj+12]=t[x[jvj+12]];
goto l4;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=44)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+2,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=21)) goto l3;
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+2,jvj+7)*/
pile[v[22]]=jvj+7; 
(*f[457])( );if(v[102]) goto l3;     /*CARDENS0(jvj+7,V4)*/
V4=pile[WZ1]; 
pile[v[22]]=jvj+8; pile[WZ1]=117; pile[WZ2]=V4; 
(*f[818])( );     /*MTC0(jvj+8,117,V4)*/
l3:x[jvj+1]=t[x[jvj+1]];
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+8,V2)*/
V2=pile[WZ2]; 
R=V2;
l8:v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l6:pile[v[22]]=117; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+19,V16)*/
V16=pile[WZ2]; 
R=V16;
goto l8;
l7:v[0]=jvj; v[22]-=2; v[102]=1;return;
l9:pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0(1,117,jvj+8)*/
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(107,A,jvj+1)*/
goto l1;
}
