#include "dx.h"
void VENS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int HIST,A,B,C;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=11349;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3502&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; C=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=incon;
pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,B,jvj+4)*/
pile[v[22]]=B; pile[WZ1]=jvj+2; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(B,jvj+2)*/
l1:pile[v[22]]=A; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(A,jvj+2,jvj+3)*/
if((x[jvj+3]==x[C])) goto l4;
x[jvj+5]=x[jvj+2] ;z[jvj+5]=z[jvj+2];
if((v[111]!=0)) goto l3;
pile[WZ1]=HIST; pile[WZ2]=jvj+5; pile[WZ3]=C; 
(*f[1768])( );     /*ARCHIVE4(A,HIST,jvj+5,C)*/
l3:z[jvj+5]=(-1);
pile[v[22]]=A; pile[WZ1]=jvj+5; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(A,jvj+5,HIST)*/
pile[v[22]]=jvj+5; pile[WZ1]=A; pile[WZ2]=C; 
(*f[34])( );     /*CHGC0(jvj+5,A,C)*/
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l2:x[jvj+2]=x[B] ;z[jvj+2]=z[B];
goto l1;
}
