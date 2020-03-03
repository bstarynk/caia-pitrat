#include "dx.h"
void MEVALY1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int P,TL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=10067;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2002&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; TL=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=360; pile[WZ1]=P; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(360,P,jvj+6)*/
if((x[jvj+6]==68)) goto l4;
l3:pile[v[22]]=102; pile[WZ1]=P; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,P,jvj+7)*/
pile[v[22]]=248; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(248,P,jvj+5)*/
l1:if((x[jvj+5]>0)) goto l2;
pile[v[22]]=P; 
(*f[1999])( );     /*MEVALI0(P)*/
pile[v[22]]=TL; pile[WZ1]=P; 
(*f[2000])( );     /*MEVALA0(TL,P)*/
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+3]=s[x[jvj+5]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+5];
pile[v[22]]=360; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(360,jvj+3,jvj+4)*/
if((x[jvj+4]!=68)) goto l4;
x[jvj+5]=t[x[jvj+5]];
goto l1;
}
