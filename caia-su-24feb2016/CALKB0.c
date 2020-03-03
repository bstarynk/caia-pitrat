#include "dx.h"
void CALKB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VV=0,V=0,V14=0;
int B,EZ,EV,NA;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; EZ=pile[v[22]+1]; EV=pile[v[22]+2]; NA=pile[v[22]+3]; RES=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,B,jvj+6)*/
if((x[jvj+6]!=22)) goto l1;
pile[v[22]]=111; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,B,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+7,jvj+8)*/
pile[v[22]]=1901; pile[WZ1]=1714; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1901,1714,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l9;
l1:pile[v[22]]=273; pile[WZ1]=NA; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(273,NA,jvj+1)*/
pile[v[22]]=292; pile[WZ1]=21; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(292,21,jvj+2)*/
pile[v[22]]=B; pile[WZ1]=jvj+3; 
(*f[938])( );     /*USE0(B,jvj+3)*/
l2:if((x[jvj+3]>0)) goto l3;
x[jvj+13]=x[EZ] ;z[jvj+13]=z[EZ];
l5:if((x[jvj+13]>0)) goto l6;
x[RES]=68 ;z[RES]=68;
V14=x[EV];
l8:if((V14<=0)) goto l11;
V=s[V14];
pile[v[22]]=NA; pile[WZ1]=273; pile[WZ2]=V; 
(*f[735])( );     /*PLUSC4(NA,273,V)*/
V14=t[V14];
goto l8;
l3:VV=s[x[jvj+3]];
for(a=x[jvj+1];a>0;a=t[a]) if(s[a]==VV) goto l4;
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==VV) goto l4;
l10:x[RES]=67 ;z[RES]=67;
l11:v[0]=jvj; v[22]-=5; return;
l4:x[jvj+3]=t[x[jvj+3]];
goto l2;
l6:x[jvj+4]=s[x[jvj+13]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+13];
pile[v[22]]=jvj+4; pile[WZ1]=NA; pile[WZ2]=jvj+5; 
(*f[1511])( );if(v[102]) goto l10;     /*CALKA0(jvj+4,NA,jvj+5)*/
if((x[jvj+5]==68)) goto l7;
goto l10;
l7:x[jvj+13]=t[x[jvj+13]];
goto l5;
l9:x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=107; pile[WZ1]=B; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,B,jvj+10)*/
pile[v[22]]=B; pile[WZ1]=NA; pile[WZ3]=jvj+11; pile[WZ4]=250; pile[WZ5]=jvj+12; 
(*f[1922])( );     /*CALK3(B,NA,jvj+10,jvj+11,250,jvj+12)*/
if((x[jvj+12]!=0)) goto l1;
x[RES]=68 ;z[RES]=68;
goto l11;
}
