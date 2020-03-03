#include "dx.h"
void TRADCONSA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int W=0,V3=0;
int EA,EB,V,M;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

EA=pile[v[22]]; EB=pile[v[22]+1]; V=pile[v[22]+2]; M=pile[v[22]+3]; R=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V3=x[EB];
l1:if((V3>0)) goto l2;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=R; 
(*f[270])( );     /*QUADRI7(100,21,140,V,R)*/
l4:v[0]=jvj; v[22]-=5; return;
l2:W=s[V3];
for(a=x[EA];a>0;a=t[a]) if(s[a]==W) goto l3;
pile[v[22]]=EA; pile[WZ1]=W; 
(*f[331])( );     /*PLUE3(EA,W)*/
pile[WZ1]=EB; pile[WZ2]=V; pile[WZ3]=M; pile[WZ4]=jvj+1; 
(*f[1914])( );     /*TRADCONSA1(EA,EB,V,M,jvj+1)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1320; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,20,101,1320,jvj+3)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+5; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+5)*/
pile[v[22]]=jvj+3; pile[WZ1]=111; pile[WZ2]=jvj+4; 
(*f[54])( );     /*TRI1(jvj+3,111,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=103; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+4,jvj+5,103,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+2; pile[WZ4]=jvj+6; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+2,jvj+6,R)*/
goto l4;
l3:V3=t[V3];
goto l1;
}
