#include "dx.h"
void TRADWA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int R,RR;
int BA;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=11763;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1236&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; BA=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=R; pile[WZ1]=RR; pile[WZ2]=jvj+2; 
(*f[1505])( );     /*TRADNAM1(R,RR,jvj+2)*/
pile[v[22]]=(-11914); pile[WZ1]=129; 
(*f[1506])( );     /*NATFNS0((-11914),129,jvj+2)*/
pile[v[22]]=(-11915); 
(*f[1506])( );     /*NATFNS0((-11915),129,jvj+2)*/
pile[v[22]]=(-12001); 
(*f[1506])( );     /*NATFNS0((-12001),129,jvj+2)*/
pile[v[22]]=1260; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1260,jvj+2,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
x[BA]=x[jvj+2] ;z[BA]=z[jvj+2];
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; 
(*f[1494])( );     /*FNDEXPR0(jvj+4)*/
x[jvj+3]=t[x[jvj+3]];
goto l1;
}
