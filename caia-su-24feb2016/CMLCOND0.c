#include "dx.h"
void CMLCOND0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V8=0,V5=0,I=0,V3=0,V4=0,V9=0;
int Q;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=11245;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1540&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Q=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+2,V5)*/
V5=pile[WZ2]; 
I=0;
l4:if((I>V5)) goto l7;
V3=ts[I];
if((V3<=0)) goto l5;
V4=tm[I];
if((V4<=0)) goto l5;
x[jvj+5]=incon;
V7=tu[I];
if((V7==0)) goto l1;
x[jvj+5]=737 ;z[jvj+5]=737;
l2:x[jvj+3]=incon;
V8=V3/256;
if((V8==100)) goto l3;
x[jvj+3]=576 ;z[jvj+3]=576;
l6:V9=V3%256;
x[jvj+4]=x[jvj+5] ;z[jvj+4]=z[jvj+5];
pile[v[22]]=Q; pile[WZ1]=V4; pile[WZ2]=jvj+3; pile[WZ3]=jvj+4; pile[WZ4]=1; pile[WZ5]=V9; 
(*f[527])( );     /*REGROUPE0(Q,V4,jvj+3,jvj+4,1,V9)*/
l5:I++;
goto l4;
l1:x[jvj+5]=846 ;z[jvj+5]=846;
goto l2;
l3:x[jvj+3]=365 ;z[jvj+3]=365;
goto l6;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
