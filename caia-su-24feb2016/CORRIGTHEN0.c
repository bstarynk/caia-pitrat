#include "dx.h"
void CORRIGTHEN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A;
int RG;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=11850;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2047&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; RG=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,A,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=1725)) goto l1;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,A,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=43)) goto l1;
pile[v[22]]=102; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+4,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+6,jvj+7)*/
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,A,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,jvj+4,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+7; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+7,jvj+16)*/
pile[WZ3]=36; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,36,jvj+13)*/
pile[v[22]]=jvj+9; pile[WZ1]=160; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+9,160,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=111; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+12,jvj+13,111,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+11; pile[WZ2]=103; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+14,jvj+11,103,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; pile[WZ5]=RG; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+16,jvj+15,RG)*/
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:x[RG]=x[A] ;z[RG]=z[A];
goto l2;
}
