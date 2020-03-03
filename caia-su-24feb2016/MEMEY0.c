#include "dx.h"
void MEMEY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V13=0,V35=0,V21=0,V37=0,V24=0;
int X2,X1;
int RES;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=31;
if(v[0]>99700) (*f[6])( );

X2=pile[v[22]]; X1=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[X1]==x[X2])) goto l4;
pile[v[22]]=100; pile[WZ1]=X1; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,X1,jvj+12)*/
pile[WZ1]=X2; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,X2,jvj+13)*/
if((x[jvj+12]!=x[jvj+13])) goto l5;
l6:x[jvj+29]=w[x[jvj+12]][8];
x[jvj+28]=x[jvj+29] ;z[jvj+28]=z[jvj+29];
l7:if((x[jvj+28]<=0)) goto l8;
x[jvj+14]=s[x[jvj+28]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+28];
pile[v[22]]=jvj+14; pile[WZ1]=X1; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(jvj+14,X1,jvj+15)*/
for(i=x[jvj+15],V11=0;i>0;i=t[i],V11++)  ;
pile[WZ1]=X2; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(jvj+14,X2,jvj+16)*/
for(i=x[jvj+16],V13=0;i>0;i=t[i],V13++)  ;
if((V11!=V13)) goto l5;
x[jvj+28]=t[x[jvj+28]];
goto l7;
l4:x[RES]=135 ;z[RES]=135;
l19:v[0]=jvj; v[22]-=3; return;
l5:x[RES]=134 ;z[RES]=134;
goto l19;
l9:x[jvj+1]=s[x[jvj+29]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+29];
if((x[jvj+1]==113)) goto l10;
pile[v[22]]=jvj+1; pile[WZ1]=X1; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(jvj+1,X1,jvj+17)*/
x[jvj+30]=x[jvj+17] ;z[jvj+30]=z[jvj+17];
l11:if((x[jvj+30]<=0)) goto l10;
x[jvj+3]=s[x[jvj+30]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+30];
pile[v[22]]=jvj+1; pile[WZ1]=X2; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(jvj+1,X2,jvj+2)*/
x[jvj+26]=x[jvj+2] ;z[jvj+26]=z[jvj+2];
l1:if((x[jvj+26]<=0)) goto l5;
x[jvj+4]=s[x[jvj+26]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+26];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[1991])( );     /*MEMEY0(jvj+4,jvj+3,jvj+5)*/
if((x[jvj+5]==135)) goto l12;
x[jvj+26]=t[x[jvj+26]];
goto l1;
l10:x[jvj+29]=t[x[jvj+29]];
l8:if((x[jvj+29]>0)) goto l9;
if((x[jvj+18]=w[x[jvj+12]][3])==incon) goto l13;
pile[v[22]]=X1; pile[WZ1]=jvj+18; pile[WZ3]=jvj+19; 
(*f[45])( );if(v[102]) goto l13;     /*FNDZ0(X1,jvj+18,V35,jvj+19)*/
V35=pile[WZ2]; 
V21=V35;
pile[v[22]]=X2; pile[WZ3]=jvj+20; 
(*f[45])( );if(v[102]) goto l13;     /*FNDZ0(X2,jvj+18,V37,jvj+20)*/
V37=pile[WZ2]; 
V24=V37;
if((V21!=V24)) goto l5;
l13:x[jvj+31]=w[x[jvj+12]][9];
l14:if((x[jvj+31]>0)) goto l15;
if((x[jvj+12]!=39)) goto l4;
pile[v[22]]=113; pile[WZ1]=X1; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(113,X1,jvj+25)*/
l17:if((x[jvj+25]<=0)) goto l4;
x[jvj+7]=s[x[jvj+25]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+25];
pile[v[22]]=113; pile[WZ1]=X2; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(113,X2,jvj+6)*/
pile[v[22]]=103; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+7,jvj+8)*/
x[jvj+27]=x[jvj+6] ;z[jvj+27]=z[jvj+6];
l2:if((x[jvj+27]<=0)) goto l5;
x[jvj+9]=s[x[jvj+27]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+27];
pile[v[22]]=103; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+9,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[1991])( );     /*MEMEY0(jvj+10,jvj+8,jvj+11)*/
if((x[jvj+11]==135)) goto l18;
l3:x[jvj+27]=t[x[jvj+27]];
goto l2;
l12:x[jvj+30]=t[x[jvj+30]];
goto l11;
l15:x[jvj+21]=s[x[jvj+31]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+31];
if((x[jvj+21]==436)) goto l16;
pile[v[22]]=jvj+21; pile[WZ1]=X1; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+21,X1,jvj+22)*/
pile[WZ1]=X2; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+21,X2,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+22; pile[WZ2]=jvj+24; 
(*f[1991])( );     /*MEMEY0(jvj+23,jvj+22,jvj+24)*/
if((x[jvj+24]==134)) goto l5;
l16:x[jvj+31]=t[x[jvj+31]];
goto l14;
l18:x[jvj+25]=t[x[jvj+25]];
goto l17;
}
