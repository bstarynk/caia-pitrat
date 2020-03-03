#include "dx.h"
void AJUSTFIN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A,BA,XP,XD;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=11789;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1711&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; BA=pile[v[22]+1]; XP=pile[v[22]+2]; XD=pile[v[22]+3]; R=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=A; pile[WZ1]=BA; pile[WZ2]=XP; pile[WZ3]=XD; pile[WZ4]=jvj+2; 
(*f[1498])( );     /*CALCULABLE0(A,BA,XP,XD,jvj+2)*/
if((x[jvj+2]==67)) goto l2;
if((x[jvj+2]!=68)) goto l4;
pile[WZ3]=250; pile[WZ4]=jvj+3; 
(*f[1916])( );if(v[102]) goto l4;     /*AJUSTECAL2(A,BA,XP,250,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ2]=jvj+5; 
(*f[1917])( );     /*CREXPR0(jvj+3,BA,jvj+5)*/
x[jvj+8]=incon;
if((x[jvj+5]!=250)) goto l1;
x[jvj+8]=x[jvj+3] ;z[jvj+8]=z[jvj+3];
l3:x[R]=x[jvj+8] ;z[R]=z[jvj+8];
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l1:pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+5; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+5,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=111; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(jvj+6,111,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+7; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+4,jvj+7,jvj+8)*/
goto l3;
l2:pile[v[22]]=A; pile[WZ1]=BA; pile[WZ2]=XP; pile[WZ3]=XD; pile[WZ4]=R; 
(*f[1499])( );if(v[102]) goto l4;     /*AJUSTEXP0(A,BA,XP,XD,R)*/
goto l5;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
}
