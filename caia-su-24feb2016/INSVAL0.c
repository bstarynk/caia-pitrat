#include "dx.h"
void INSVAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V5=0,V12=0,V9=0;
int P,ZZ,X;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

P=pile[v[22]]; ZZ=pile[v[22]+1]; X=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+15]=incon;
pile[v[22]]=120; pile[WZ1]=ZZ; 
(*f[71])( );     /*ENLV0(120,ZZ)*/
pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(120,X,jvj+1)*/
x[jvj+3]=x[X] ;z[jvj+3]=z[X];
l1:pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,jvj+3,jvj+4)*/
pile[v[22]]=218; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+4,jvj+5)*/
if((x[jvj+5]!=x[P])) goto l2;
x[jvj+15]=x[jvj+4] ;z[jvj+15]=z[jvj+4];
l3:if(x[jvj+15]==incon) goto l4;
l7:if(x[jvj+15]==incon) goto l6;
l10:if(x[jvj+15]!=incon) goto l9;
l12:v[0]=jvj; v[22]-=3; return;
l2:x[jvj+3]=x[jvj+4] ;z[jvj+3]=z[jvj+4];
goto l1;
l4:pile[v[22]]=130; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,P,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(120,X,jvj+6)*/
pile[v[22]]=218; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,jvj+6,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+7,V5)*/
V5=pile[WZ2]; 
if((V5>=V7)) goto l7;
pile[v[22]]=120; pile[WZ1]=jvj+6; pile[WZ2]=218; pile[WZ3]=P; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(120,jvj+6,218,P,jvj+8)*/
x[jvj+15]=x[jvj+8] ;z[jvj+15]=z[jvj+8];
pile[v[22]]=X; pile[WZ1]=120; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(X,120,jvj+8)*/
goto l7;
l6:x[jvj+12]=x[X] ;z[jvj+12]=z[X];
l5:pile[v[22]]=120; pile[WZ1]=jvj+12; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(120,jvj+12,jvj+9)*/
pile[v[22]]=130; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,P,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=120; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(120,jvj+9,jvj+10)*/
pile[v[22]]=218; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(218,jvj+10,jvj+11)*/
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+11,V9)*/
V9=pile[WZ2]; 
if((V9<=V12)) goto l14;
x[jvj+12]=x[jvj+9] ;z[jvj+12]=z[jvj+9];
goto l5;
l13:pile[v[22]]=P; pile[WZ1]=218; pile[WZ2]=jvj+2; 
(*f[54])( );     /*TRI1(P,218,jvj+2)*/
x[jvj+15]=x[jvj+2] ;z[jvj+15]=z[jvj+2];
pile[v[22]]=X; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(X,120,jvj+2)*/
l9:pile[v[22]]=287; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(287,jvj+15,jvj+16)*/
pile[v[22]]=ZZ; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(ZZ,120,jvj+16)*/
l11:pile[v[22]]=jvj+15; pile[WZ1]=287; pile[WZ2]=ZZ; 
(*f[35])( );     /*CHGC1(jvj+15,287,ZZ)*/
goto l12;
l14:pile[v[22]]=P; pile[WZ1]=218; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(P,218,jvj+14)*/
pile[v[22]]=120; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(120,jvj+9,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+14,120,jvj+13)*/
l8:x[jvj+15]=x[jvj+14] ;z[jvj+15]=z[jvj+14];
pile[v[22]]=jvj+9; pile[WZ1]=120; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(jvj+9,120,jvj+14)*/
goto l10;
}
