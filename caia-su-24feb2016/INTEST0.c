#include "dx.h"
void INTEST0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,TY=0,V4=0,II=0,I=0,H=0,V21=0,V20=0,V22=0,V12=0,V13=0,V14=0,V15=0,V16=0,V17=0,V18=0,V19=0;
int Y,S;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=10813;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==779&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Y=pile[v[22]]; S=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[jvj+9]=x[jvj+6]=I=II=x[jvj+7]=x[jvj+8]=incon;
pile[v[22]]=145; pile[WZ1]=Y; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(145,Y,jvj+2)*/
l1:pile[v[22]]=158; pile[WZ1]=Y; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(158,Y,jvj+3)*/
if((V3=w[x[jvj+3]][1])==incon) goto l10;
TY=V3;
if((TY==41)) goto l3;
if((TY==20)) goto l4;
if((TY!=23)) goto l10;
pile[v[22]]=972; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(972,Y,jvj+7)*/
pile[v[22]]=jvj+3; pile[WZ1]=S; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+3,S,jvj+8)*/
l10:if(x[jvj+2]!=incon) goto l11;
l31:x[RES]=134 ;z[RES]=134;
l32:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+4]=x[S] ;z[jvj+4]=z[S];
l5:pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+3,jvj+4,jvj+6)*/
x[jvj+9]=x[jvj+5] ;z[jvj+9]=z[jvj+5];
goto l10;
l3:pile[v[22]]=117; pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,Y,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=S; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(jvj+3,S,II)*/
II=pile[WZ2]; 
I=V4;
goto l10;
l4:pile[v[22]]=218; pile[WZ1]=Y; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(218,Y,jvj+5)*/
x[jvj+4]=incon;
if((x[jvj+3]==935)) goto l2;
pile[v[22]]=1078; pile[WZ1]=S; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1078,S,jvj+4)*/
goto l5;
l7:V21=x[jvj+8];
l6:if((V21<=0)) goto l15;
H=s[V21];
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==H) goto l8;
goto l31;
l8:V21=t[V21];
goto l6;
l11:if(x[jvj+9]!=incon) goto l12;
l20:if(I!=incon) goto l21;
l28:if(x[jvj+7]!=incon) goto l29;
goto l31;
l12:if(x[jvj+6]!=incon) goto l13;
goto l20;
l13:if((x[jvj+2]==25)) goto l14;
if((x[jvj+2]==26)) goto l16;
if((x[jvj+2]==27)) goto l17;
if((x[jvj+2]==28)) goto l18;
if((x[jvj+2]==29)) goto l19;
if((x[jvj+2]!=30)) goto l20;
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+6,V18)*/
V18=pile[WZ2]; 
pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+9,V19)*/
V19=pile[WZ2]; 
if((V18<=V19)) goto l15;
goto l20;
l14:if((x[jvj+9]==x[jvj+6])) goto l15;
goto l20;
l15:x[RES]=135 ;z[RES]=135;
goto l32;
l16:if((x[jvj+9]!=x[jvj+6])) goto l15;
goto l20;
l17:pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+6,V12)*/
V12=pile[WZ2]; 
pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+9,V13)*/
V13=pile[WZ2]; 
if((V12>V13)) goto l15;
goto l20;
l18:pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+6,V14)*/
V14=pile[WZ2]; 
pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+9,V15)*/
V15=pile[WZ2]; 
if((V14>=V15)) goto l15;
goto l20;
l19:pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+6,V16)*/
V16=pile[WZ2]; 
pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+9,V17)*/
V17=pile[WZ2]; 
if((V16<V17)) goto l15;
goto l20;
l21:if(II!=incon) goto l22;
goto l28;
l22:if((x[jvj+2]==25)) goto l23;
if((x[jvj+2]==26)) goto l24;
if((x[jvj+2]==27)) goto l25;
if((x[jvj+2]==28)) goto l26;
if((x[jvj+2]==29)) goto l27;
if((x[jvj+2]!=30)) goto l28;
if((II<=I)) goto l15;
goto l28;
l23:if((II==I)) goto l15;
goto l28;
l24:if((II!=I)) goto l15;
goto l28;
l25:if((II>I)) goto l15;
goto l28;
l26:if((II>=I)) goto l15;
goto l28;
l27:if((II<I)) goto l15;
goto l28;
l29:if(x[jvj+8]!=incon) goto l30;
goto l31;
l30:if((x[jvj+2]==44)) goto l7;
if((x[jvj+2]!=45)) goto l31;
V22=x[jvj+8];
l9:if((V22<=0)) goto l15;
V20=s[V22];
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==V20) goto l31;
V22=t[V22];
goto l9;
}
