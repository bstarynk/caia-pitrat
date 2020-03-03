#include "dx.h"
void CMFFLISR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X=0,V5=0,Y=0,V16=0,V6=0,YY=0,V17=0,V7=0,V2=0,V18=0,V15=0,Z=0,V19=0,V9=0,V20=0,V13=0,V10=0,V21=0,V12=0,V22=0;
int EA;
int EY;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=11645;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2058&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
EA=pile[v[22]]; EY=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V22=x[EA];
l25:x[EY]=incon;
X=999;
for(a=V22;a>0;a=t[a]) if(s[a]==X) goto l1;
l2:x[jvj+2]=0 ;z[jvj+2]=0;
V18=V22;
l8:if((V18>0)) goto l9;
x[jvj+4]=x[jvj+2] ;z[jvj+4]=z[jvj+2];
if(x[EY]==incon) goto l15;
l24:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:pile[v[22]]=41; pile[WZ1]=999; pile[WZ2]=EY; 
(*f[445])( );     /*TRI15(41,999,EY)*/
goto l2;
l3:V5=abs(V2);
V16=V22;
l4:if((V16<=0)) goto l11;
Y=s[V16];
if((Y>=0)) goto l5;
V6=abs(Y);
if((V5>V6)) goto l10;
l5:V16=t[V16];
goto l4;
l9:V2=s[V18];
if((V2<0)) goto l3;
if((V2<=0)) goto l11;
V17=V22;
l6:if((V17<=0)) goto l11;
YY=s[V17];
if((YY>=0)) goto l7;
V7=abs(YY);
if((V2>=V7)) goto l10;
l7:V17=t[V17];
goto l6;
l11:pile[v[22]]=jvj+2; pile[WZ1]=V2; 
(*f[207])( );     /*PLUE2(jvj+2,V2)*/
l10:V18=t[V18];
goto l8;
l13:Z=s[V19];
if((Z==V9)) goto l14;
if((Z==V10)) goto l14;
pile[v[22]]=jvj+3; pile[WZ1]=Z; 
(*f[207])( );     /*PLUE2(jvj+3,Z)*/
l14:V19=t[V19];
l12:if((V19>0)) goto l13;
V22=x[jvj+3];
goto l25;
l15:for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==0) goto l16;
l20:V20=x[jvj+4];
l18:if((V20>0)) goto l19;
x[EY]=x[jvj+4] ;z[EY]=z[jvj+4];
goto l24;
l16:for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==(-1)) goto l17;
goto l20;
l17:pile[v[22]]=41; pile[WZ1]=999; pile[WZ2]=EY; 
(*f[445])( );     /*TRI15(41,999,EY)*/
goto l24;
l19:V9=s[V20];
if((V9<=0)) goto l21;
V13=V9+1;
V21=x[jvj+4];
l22:if((V21<=0)) goto l21;
V10=s[V21];
V12=abs(V10);
if((V12!=V13)) goto l23;
if((V10>=0)) goto l23;
x[jvj+3]=0 ;z[jvj+3]=0;
V15=(-V9);
pile[v[22]]=jvj+3; pile[WZ1]=V15; 
(*f[207])( );     /*PLUE2(jvj+3,V15)*/
V19=x[jvj+4];
goto l12;
l21:V20=t[V20];
goto l18;
l23:V21=t[V21];
goto l22;
}
