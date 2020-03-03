#include "dx.h"
void CROISSANT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,ST=0,TT=0,V3=0,V6=0;
int T,Z;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; Z=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=x[jvj+4]=x[R]=TT=incon;
if((T==0)) goto l1;
if((T<=0)) goto l13;
V1=s[T];
V2=t[T];
ST=V1;
pile[v[22]]=ST; pile[WZ1]=117; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(ST,117,jvj+4)*/
TT=V2;
pile[v[22]]=117; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,Z,V6)*/
V6=pile[WZ2]; 
if((ST>=V6)) goto l4;
x[jvj+6]=x[jvj+4] ;z[jvj+6]=z[jvj+4];
pile[v[22]]=jvj+4; pile[WZ1]=120; pile[WZ2]=Z; 
(*f[35])( );     /*CHGC1(jvj+4,120,Z)*/
l12:pile[v[22]]=TT; pile[WZ1]=jvj+6; pile[WZ2]=R; 
(*f[4021])( );if(v[102]) goto l14;     /*CROISSANT1(TT,jvj+6,R)*/
l14:if(x[R]!=incon) goto l15;
l13:v[0]=jvj; v[22]-=3; v[102]=1;return;
l1:x[R]=x[Z] ;z[R]=z[Z];
l15:v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+1,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+4,120,jvj+3)*/
l5:x[jvj+6]=x[Z] ;z[jvj+6]=z[Z];
pile[v[22]]=jvj+1; pile[WZ1]=120; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+1,120,jvj+4)*/
l6:if(x[jvj+6]==incon) goto l7;
l9:if(x[R]==incon) goto l10;
goto l14;
l4:x[jvj+5]=x[Z] ;z[jvj+5]=z[Z];
l3:x[jvj+1]=x[jvj+5] ;z[jvj+1]=z[jvj+5];
pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(120,jvj+1,jvj+2)*/
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+2,V3)*/
V3=pile[WZ2]; 
if((V3<=ST)) goto l2;
pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,jvj+1,jvj+5)*/
goto l3;
l7:if(x[jvj+4]!=incon) goto l8;
goto l9;
l8:x[jvj+6]=x[jvj+4] ;z[jvj+6]=z[jvj+4];
goto l9;
l10:if(TT!=incon) goto l11;
goto l14;
l11:if(x[jvj+6]!=incon) goto l12;
goto l14;
}
