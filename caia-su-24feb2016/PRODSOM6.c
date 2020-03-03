#include "dx.h"
void PRODSOM6(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Y=0,Z=0,V5=0,V6=0,V7=0,V2=0,X=0,V8=0;
int E2,E3;
int NNNE;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=26102;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2410&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E2=pile[v[22]]; E3=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=0 ;z[jvj+3]=0;
V8=x[E2];
l7:if((V8>0)) goto l8;
x[NNNE]=x[jvj+3] ;z[NNNE]=z[jvj+3];
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:Z=Y;
l2:if((Z<=X)) goto l5;
Y++;
l1:if((Y<=X)) goto l3;
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+2,V7)*/
V7=pile[WZ2]; 
V2=V7;
if((V2!=1)) goto l9;
pile[v[22]]=jvj+3; pile[WZ1]=X; 
(*f[207])( );     /*PLUE2(jvj+3,X)*/
l9:V8=t[V8];
goto l7;
l5:V5=Y+Z;
if((V5!=X)) goto l4;
V6=Y*Z;
for(a=x[E3];a>0;a=t[a]) if(s[a]==V6) goto l6;
l4:Z++;
goto l2;
l6:pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,117,1)*/
goto l4;
l8:X=s[V8];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
Y=2;
goto l1;
}
