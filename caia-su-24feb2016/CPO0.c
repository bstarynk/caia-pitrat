#include "dx.h"
void CPO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0;
int R,A;
int VL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,A,V)*/
V=pile[WZ2]; 
VL=V;
l2:v[0]=jvj; v[22]-=3; pile[v[22]+2]=VL; return;
l1:pile[v[22]]=A; pile[WZ1]=jvj+1; 
(*f[255])( );     /*COPEXP0(A,jvj+1)*/
(*f[1817])( );     /*NOUV2(VL)*/
VL=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+5)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VL; pile[WZ4]=jvj+3; 
(*f[270])( );     /*QUADRI7(100,21,140,VL,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=436; pile[WZ2]=jvj+4; 
(*f[54])( );     /*TRI1(jvj+3,436,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=111; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+4,jvj+5,111,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+1; pile[WZ4]=jvj+6; pile[WZ5]=jvj+2; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+1,jvj+6,jvj+2)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(R,107,jvj+2)*/
goto l2;
}
