#include "dx.h"
void FNDEXPR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V8=0,V24=0,V19=0,V20=0,V21=0,V22=0,V23=0,V7=0,V12=0,V13=0,V14=0,V15=0,V16=0,V17=0;
int X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[jvj+4]=V=incon;
pile[v[22]]=530; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(530,X,jvj+1)*/
l3:pile[v[22]]=129; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(129,X,jvj+3)*/
l11:if(x[jvj+1]==incon) goto l12;
l25:pile[v[22]]=X; pile[WZ1]=129; pile[WZ2]=jvj+1; 
(*f[35])( );     /*CHGC1(X,129,jvj+1)*/
if(V!=incon) goto l26;
l27:if(x[jvj+4]!=incon) goto l28;
l31:v[0]=jvj; v[22]-=1; return;
l1:pile[v[22]]=1261; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1261,X,jvj+2)*/
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==749) goto l2;
goto l3;
l2:x[jvj+1]=1917 ;z[jvj+1]=1917;
goto l3;
l4:pile[v[22]]=110; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(110,X,V)*/
V=pile[WZ2]; 
pile[v[22]]=1261; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1261,X,jvj+4)*/
goto l11;
l6:for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==749) goto l16;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1680) goto l16;
l17:x[jvj+6]=incon;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==129) goto l18;
l19:for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==129) goto l23;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1881) goto l20;
l21:for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1881) goto l23;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1917) goto l22;
l23:if(x[jvj+6]==incon) goto l28;
if((x[jvj+6]!=(-99999998))) goto l24;
l28:if(V!=incon) goto l29;
goto l31;
l8:if((V7<4)) goto l9;
goto l31;
l9:V24=x[jvj+4];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V19; pile[WZ2]=11710; 
(*f[98])( );     /*SRA3(135,V19,11710,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V20,125,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V21,V,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V24; pile[WZ2]=V22; 
(*f[39])( );     /*SDX0(23,V24,V22,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=V23; 
(*f[40])( );     /*SLG0(V23)*/
if((V7!=2)) goto l31;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l31;
l10:V7=g[645];
if((V7<=0)) goto l31;
V8=vg[645];
if((V8!=0)) goto l7;
if((V7<3)) goto l9;
l7:pile[v[22]]=645; pile[WZ1]=11710; pile[WZ2]=0; pile[WZ3]=(-611); pile[WZ4]=V; pile[WZ5]=(-697); pile[v[22]+6]=jvj+4; pile[v[22]+7]=jvj+5; 
(*f[1705])( );     /*INTERP22(645,11710,0,(-611),V,(-697),jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l8;
goto l31;
l12:if(x[jvj+4]!=incon) goto l13;
goto l31;
l13:for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1680) goto l5;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1430) goto l14;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==749) goto l5;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1339) goto l15;
l5:for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1814) goto l6;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1050) goto l6;
goto l17;
l14:x[jvj+1]=1881 ;z[jvj+1]=1881;
goto l25;
l15:x[jvj+1]=129 ;z[jvj+1]=129;
goto l25;
l16:x[jvj+1]=1917 ;z[jvj+1]=1917;
goto l25;
l18:x[jvj+6]=129 ;z[jvj+6]=129;
goto l19;
l20:x[jvj+6]=1881 ;z[jvj+6]=1881;
goto l21;
l22:x[jvj+6]=1917 ;z[jvj+6]=1917;
l24:x[jvj+1]=x[jvj+6] ;z[jvj+1]=z[jvj+6];
goto l25;
l26:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=129; 
(*f[42])( );     /*SRA1(135,0,129,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=V12; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V12,40,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=V13; 
(*f[64])( );     /*SRA2(V,V13,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V14,41,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V15,61,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V16; pile[WZ2]=jvj+1; 
(*f[42])( );     /*SRA1(135,V16,jvj+1,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=V17; 
(*f[40])( );     /*SLG0(V17)*/
goto l27;
l29:for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1339) goto l30;
goto l31;
l30:for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1430) goto l10;
goto l31;
}
