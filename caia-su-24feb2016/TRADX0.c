#include "dx.h"
void TRADX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X,EA;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=11055;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1610&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; EA=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,X,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=228)) goto l1;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,X,jvj+4)*/
pile[v[22]]=X; pile[WZ1]=102; pile[WZ3]=EA; 
(*f[1391])( );     /*TRADA0(X,102,jvj+4,EA)*/
l1:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,X,jvj+5)*/
x[jvj+11]=w[x[jvj+5]][9];
l2:if((x[jvj+11]>0)) goto l3;
x[jvj+12]=w[x[jvj+5]][8];
l5:if((x[jvj+12]<=0)) goto l8;
x[jvj+8]=s[x[jvj+12]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+12];
pile[v[22]]=jvj+8; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(jvj+8,X,jvj+9)*/
x[jvj+13]=x[jvj+9] ;z[jvj+13]=z[jvj+9];
l6:if((x[jvj+13]>0)) goto l7;
x[jvj+12]=t[x[jvj+12]];
goto l5;
l3:x[jvj+6]=s[x[jvj+11]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+11];
pile[v[22]]=jvj+6; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+6,X,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=EA; 
(*f[1610])( );     /*TRADX0(jvj+7,EA)*/
l4:x[jvj+11]=t[x[jvj+11]];
goto l2;
l7:x[jvj+10]=s[x[jvj+13]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+13];
pile[v[22]]=jvj+10; pile[WZ1]=EA; 
(*f[1610])( );     /*TRADX0(jvj+10,EA)*/
x[jvj+13]=t[x[jvj+13]];
goto l6;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
