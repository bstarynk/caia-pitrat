#include "dx.h"
void DEPEXP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=10162;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1290&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=498; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(498,A,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=454)) goto l2;
pile[v[22]]=436; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,jvj+5,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+7,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+8; 
(*f[1291])( );if(v[102]) goto l2;     /*CONVEXP0(A,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
x[jvj+12]=incon;
pile[v[22]]=277; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(277,A,jvj+2)*/
if((x[jvj+2]!=480)) goto l4;
pile[v[22]]=A; pile[WZ1]=jvj+3; 
(*f[1291])( );if(v[102]) goto l4;     /*CONVEXP0(A,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V12; pile[WZ4]=jvj+10; 
(*f[270])( );     /*QUADRI7(100,21,140,V12,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+10,111,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+11; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+4,jvj+11,jvj+12)*/
l1:x[R]=x[jvj+12] ;z[R]=z[jvj+12];
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l4:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V12; pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(100,21,140,V12,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=111; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,111,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=1050; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+14; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,1050,102,jvj+9,jvj+14,jvj+12)*/
goto l1;
}
