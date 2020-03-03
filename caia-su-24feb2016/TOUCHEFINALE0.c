#include "dx.h"
void TOUCHEFINALE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=11791;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1237&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,A,jvj+3)*/
x[jvj+9]=w[x[jvj+3]][9];
l1:if((x[jvj+9]>0)) goto l2;
x[jvj+10]=w[x[jvj+3]][8];
l4:if((x[jvj+10]<=0)) goto l7;
x[jvj+6]=s[x[jvj+10]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+10];
pile[v[22]]=jvj+6; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(jvj+6,A,jvj+7)*/
x[jvj+11]=x[jvj+7] ;z[jvj+11]=z[jvj+7];
l5:if((x[jvj+11]>0)) goto l6;
x[jvj+10]=t[x[jvj+10]];
goto l4;
l2:x[jvj+4]=s[x[jvj+9]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+9];
pile[v[22]]=jvj+4; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+4,A,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ2]=jvj+4; 
(*f[1507])( );     /*TOUCHEFINALE1(jvj+5,A,jvj+4)*/
l3:x[jvj+9]=t[x[jvj+9]];
goto l1;
l6:x[jvj+8]=s[x[jvj+11]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+11];
pile[v[22]]=jvj+8; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[1507])( );     /*TOUCHEFINALE1(jvj+8,A,jvj+6)*/
x[jvj+11]=t[x[jvj+11]];
goto l5;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
