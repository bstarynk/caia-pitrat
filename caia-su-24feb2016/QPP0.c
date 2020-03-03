#include "dx.h"
void QPP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int J=0,V7=0;
int R,N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=11454;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2186&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,R,jvj+2)*/
if((x[jvj+2]!=22)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+3,jvj+4)*/
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,R,jvj+5)*/
pile[v[22]]=103; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,R,jvj+6)*/
x[jvj+10]=x[jvj+4] ;z[jvj+10]=z[jvj+4];
x[jvj+8]=x[jvj+5] ;z[jvj+8]=z[jvj+5];
if(x[jvj+10]!=25&&x[jvj+10]!=29&&x[jvj+10]!=30) goto l4;
x[jvj+7]=incon;
if((x[jvj+10]==25)) goto l1;
x[jvj+7]=x[jvj+10] ;z[jvj+7]=z[jvj+10];
l3:pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=jvj+6; pile[WZ3]=N; pile[WZ4]=R; 
(*f[2218])( );if(v[102]) goto l4;     /*QPQ0(jvj+7,jvj+8,jvj+6,N,R,J)*/
J=pile[WZ5]; 
l4:if(x[jvj+10]!=25&&x[jvj+10]!=28&&x[jvj+10]!=27) goto l6;
x[jvj+9]=incon;
if((x[jvj+10]==25)) goto l2;
x[jvj+9]=x[jvj+10] ;z[jvj+9]=z[jvj+10];
l5:pile[v[22]]=jvj+9; pile[WZ1]=jvj+8; pile[WZ2]=jvj+6; pile[WZ3]=N; pile[WZ4]=R; 
(*f[2218])( );if(v[102]) goto l6;     /*QPQ0(jvj+9,jvj+8,jvj+6,N,R,V7)*/
V7=pile[WZ5]; 
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:x[jvj+7]=30 ;z[jvj+7]=30;
goto l3;
l2:x[jvj+9]=28 ;z[jvj+9]=28;
goto l5;
}
