#include "dx.h"
void TRADCONSA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,W=0,V7=0;
int V,EE,M;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

V=pile[v[22]]; EE=pile[v[22]+1]; M=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+3]=x[jvj+10] ;z[jvj+3]=z[jvj+10];
x[jvj+11]=x[EE] ;z[jvj+11]=z[EE];
l1:if((x[jvj+11]<=0)) goto l6;
x[jvj+1]=s[x[jvj+11]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+11];
pile[v[22]]=110; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(110,jvj+1,V2)*/
V2=pile[WZ2]; 
if((V2!=V)) goto l2;
pile[v[22]]=214; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(214,jvj+1,jvj+2)*/
V7=x[jvj+2];
l3:if((V7<=0)) goto l6;
W=s[V7];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==W) goto l4;
pile[v[22]]=jvj+3; pile[WZ1]=W; 
(*f[331])( );     /*PLUE3(jvj+3,W)*/
pile[WZ1]=jvj+2; pile[WZ2]=V; pile[WZ3]=M; pile[WZ4]=jvj+4; 
(*f[1914])( );     /*TRADCONSA1(jvj+3,jvj+2,V,M,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1320; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,1320,jvj+6)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+8; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+8)*/
pile[v[22]]=jvj+6; pile[WZ1]=111; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(jvj+6,111,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=103; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+7,jvj+8,103,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+9; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+5,jvj+9,R)*/
l5:v[0]=jvj; v[22]-=4; return;
l2:x[jvj+11]=t[x[jvj+11]];
goto l1;
l4:V7=t[V7];
goto l3;
l6:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=R; 
(*f[270])( );     /*QUADRI7(100,21,140,V,R)*/
goto l5;
}
