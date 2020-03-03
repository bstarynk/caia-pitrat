#include "dx.h"
void INIDEB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int P,K;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=10625;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1690&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; K=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[P] ;z[jvj+2]=z[P];
x[jvj+10]=x[K] ;z[jvj+10]=z[K];
l8:x[jvj+6]=incon;
pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+2,jvj+6)*/
l4:x[jvj+7]=vo[16];z[jvj+7]=vz[16];
pile[v[22]]=160; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(160,jvj+2,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+8,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(jvj+9,jvj+7,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=V1; pile[WZ1]=jvj+10; pile[WZ2]=jvj+2; pile[WZ3]=jvj+11; 
(*f[1904])( );if(v[102]) goto l1;     /*CHR0(V1,jvj+10,jvj+2,jvj+11)*/
l6:if(x[jvj+6]==incon) goto l9;
x[jvj+10]=x[jvj+11] ;z[jvj+10]=z[jvj+11];
x[jvj+2]=x[jvj+6] ;z[jvj+2]=z[jvj+6];
goto l8;
l1:pile[v[22]]=160; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(160,jvj+2,jvj+3)*/
x[jvj+11]=x[jvj+10] ;z[jvj+11]=z[jvj+10];
goto l6;
l2:x[jvj+5]=incon;
pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,jvj+2,jvj+4)*/
x[jvj+5]=x[jvj+4] ;z[jvj+5]=z[jvj+4];
l5:pile[v[22]]=jvj+2; pile[WZ1]=jvj+11; 
(*f[378])( );     /*CPI0(jvj+2,jvj+11)*/
pile[v[22]]=120; pile[WZ1]=jvj+2; 
(*f[71])( );     /*ENLV0(120,jvj+2)*/
pile[v[22]]=jvj+10; pile[WZ1]=120; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(jvj+10,120,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=319; pile[WZ2]=250; 
(*f[35])( );     /*CHGC1(jvj+11,319,250)*/
if((x[jvj+5]==250)) goto l6;
pile[v[22]]=jvj+2; pile[WZ1]=120; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(jvj+2,120,jvj+5)*/
goto l6;
l3:x[jvj+5]=250 ;z[jvj+5]=250;
goto l5;
l9:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1201; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,1201,jvj+15)*/
pile[WZ3]=206; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,206,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=103; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,103,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=984; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+14; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,984,102,jvj+15,jvj+14,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=120; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(jvj+11,120,jvj+12)*/
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
