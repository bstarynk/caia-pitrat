#include "dx.h"
void CALZCOMB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,T=0,V5=0,V8=0,V7=0,V6=0;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=10510;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==606&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ2=v[22]+2; WZ1=v[22]+1; 
L=T=incon;
x[jvj+2]=vo[12];z[jvj+2]=vz[12];
pile[v[22]]=1056; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1056,jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==1060) goto l1;
l2:vv[43]=0;
x[jvj+4]=vo[12];z[jvj+4]=vz[12];
pile[v[22]]=936; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(936,jvj+4,T)*/
T=pile[WZ2]; 
l3:if(L==incon) goto l4;
l10:x[jvj+5]=vo[12];z[jvj+5]=vz[12];
pile[v[22]]=936; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(936,jvj+5,V8)*/
V8=pile[WZ2]; 
V7=100*V8;
V6=V7/L;
V5=incon;
if((V6>3)) goto l9;
V5=3;
l11:depuis=vv[52]+600-(time(tzt)-inccc);ensuite=depuis+V5;alarm((depuis>=0) ? 1 : (ensuite>0) ? ensuite : V5);
vv[44]=V5;
l12:x[jvj+1]=incon; v[0]=jvj; return;
l1:L=1000;
goto l2;
l4:if(T!=incon) goto l5;
goto l12;
l5:if((T<70)) goto l6;
if((T<500)) goto l7;
if((T<1000)) goto l8;
L=500;
goto l10;
l6:L=60;
goto l10;
l7:L=150;
goto l10;
l8:L=300;
goto l10;
l9:V5=V6;
goto l11;
}
