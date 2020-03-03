#include "dx.h"
void TRANSFORMA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int S,X,NK;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=10779;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==547&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; X=pile[v[22]+1]; NK=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,X,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==1147)) goto l1;
if((x[jvj+4]!=546)) goto l2;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,X,jvj+8)*/
pile[v[22]]=103; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,X,jvj+9)*/
pile[v[22]]=107; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,X,jvj+10)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=NK; pile[WZ3]=S; pile[WZ4]=jvj+10; 
(*f[909])( );     /*TRANSFORMB0(jvj+8,jvj+9,NK,S,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+8; 
(*f[909])( );     /*TRANSFORMB0(jvj+9,jvj+8,NK,S,jvj+10)*/
l2:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l1:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,X,jvj+5)*/
pile[v[22]]=103; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,X,jvj+6)*/
pile[v[22]]=107; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,X,jvj+7)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=NK; pile[WZ3]=S; pile[WZ4]=jvj+7; 
(*f[909])( );     /*TRANSFORMB0(jvj+5,jvj+6,NK,S,jvj+7)*/
goto l2;
}
