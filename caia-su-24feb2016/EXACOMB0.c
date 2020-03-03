#include "dx.h"
void EXACOMB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V13=0,V12=0,N=0,V4=0,V5=0,V6=0,V9=0,V10=0,V8=0,G=0,V1=0,V2=0,V29=0,V26=0,V22=0,V21=0,V20=0,V25=0,V24=0;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=10555;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==607&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ2=v[22]+2; WZ1=v[22]+1; 
N=G=incon;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=1009; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(1009,jvj+2,V14)*/
V14=pile[WZ2]; 
V13=(time(tzt)-inccc);
V12=V13-V14;
N=V12;
V5=vv[33];
if((V5<=0)) goto l4;
x[jvj+3]=vo[12];z[jvj+3]=vz[12];
pile[v[22]]=936; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(936,jvj+3,V6)*/
V6=pile[WZ2]; 
if((N<=V6)) goto l3;
V9=1000*v[63];
pile[v[22]]=18; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(18,jvj+2,V10)*/
V10=pile[WZ2]; 
V8=V9/V10;
pile[v[22]]=V8; pile[WZ1]=jvj+4; 
(*f[949])( );     /*POURSUITE0(V8,jvj+4)*/
V4=incon;
if((x[jvj+4]==68)) goto l1;
V4=3;
l2:G=V4;
l5:v[73]=0;
if(G==incon) goto l6;
l10:vv[43]=G;
vv[195]=0;
l11:x[jvj+1]=incon; v[0]=jvj; return;
l1:V4=2;
goto l2;
l3:if(N!=incon) goto l4;
goto l5;
l4:V1=vv[33];
if((V1<=0)) goto l5;
x[jvj+5]=vo[12];z[jvj+5]=vz[12];
pile[v[22]]=936; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(936,jvj+5,V2)*/
V2=pile[WZ2]; 
if((N>V2)) goto l5;
G=2;
goto l5;
l6:if(N!=incon) goto l7;
l9:G=2;
goto l10;
l7:x[jvj+6]=vo[12];z[jvj+6]=vz[12];
pile[v[22]]=936; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(936,jvj+6,V29)*/
V29=pile[WZ2]; 
if((N<=V29)) goto l9;
pile[v[22]]=1056; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1056,jvj+6,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==1060) goto l8;
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==1060) goto l9;
pile[v[22]]=945; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(945,936,V26)*/
V26=pile[WZ2]; 
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=18; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(18,jvj+8,V22)*/
V22=pile[WZ2]; 
V21=N*V22;
V20=10*V21;
V25=v[63]*V26;
V24=14*V25;
if(V20>((V24*11)/10)+2) goto l8;
goto l9;
l8:G=3;
goto l10;
}
