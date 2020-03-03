#include "dx.h"
void NORM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V11=0,V12=0,V13=0,V14=0,V16=0,V8=0,V18=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=11697;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==965&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=A; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(A,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=548; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,548,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=111; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,111,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+14; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+3,jvj+14,jvj+4)*/
if((v[144]!=1)) goto l1;
V15=x[jvj+4];
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=11728; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(20,11728,V11,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V12; pile[WZ2]=1771; 
(*f[42])( );     /*SRA1(135,V12,1771,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V15; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(20,V15,V13,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=V14; 
(*f[40])( );     /*SLG0(V14)*/
l1:pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+4,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=102; pile[WZ2]=jvj+4; 
(*f[1319])( );     /*BALAITER0(jvj+5,102,jvj+4)*/
l6:pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+4,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=R; 
(*f[255])( );     /*COPEXP0(jvj+12,R)*/
pile[v[22]]=1375; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1375,A,jvj+6)*/
if((x[jvj+6]!=68)) goto l4;
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(R,jvj+7)*/
x[jvj+8]=vo[16];z[jvj+8]=vz[16];
pile[v[22]]=jvj+8; pile[WZ1]=1374; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+8,1374,jvj+7)*/
l4:x[jvj+9]=d[235];z[jvj+9]=0;
l2:if((x[jvj+9]>0)) goto l3;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l3:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=A; pile[WZ1]=jvj+10; pile[WZ3]=jvj+11; 
(*f[45])( );if(v[102]) goto l5;     /*FNDZ0(A,jvj+10,V16,jvj+11)*/
V16=pile[WZ2]; 
V8=V16;
V18=V8;
pile[v[22]]=R; pile[WZ2]=V18; 
(*f[43])( );     /*CHGC2(R,jvj+10,V18)*/
l5:x[jvj+9]=t[x[jvj+9]];
goto l2;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
}
