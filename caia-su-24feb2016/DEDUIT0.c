#include "dx.h"
void DEDUIT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V23=0,N=0,V20=0,V8=0,V10=0;
int E;
int EE;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=11678;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1551&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; EE=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=0 ;z[jvj+3]=0;
x[jvj+24]=x[E] ;z[jvj+24]=z[E];
l1:if((x[jvj+24]>0)) goto l2;
for(i=x[E],V24=0;i>0;i=t[i],V24++)  ;
V23=V24+1;
N=V23;
x[EE]=x[jvj+3] ;z[EE]=z[jvj+3];
x[jvj+19]=vo[16];z[jvj+19]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(509,jvj+19,jvj+20)*/
V20=N+1;
l9:if((x[jvj+20]>0)) goto l10;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+4]=s[x[jvj+24]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+24];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+4)*/
x[jvj+24]=t[x[jvj+24]];
goto l1;
l7:x[jvj+18]=s[x[jvj+25]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+25];
for(a=x[EE];a>0;a=t[a]) if(s[a]==x[jvj+18]) goto l8;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+18)*/
l8:x[jvj+25]=t[x[jvj+25]];
l6:if((x[jvj+25]>0)) goto l7;
for(i=x[jvj+17],V10=0;i>0;i=t[i],V10++)  ;
if((V10!=1)) goto l11;
if((x[jvj+17]<=0)) goto l11;
x[jvj+23]=s[x[jvj+17]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+17];
pile[v[22]]=1358; pile[WZ1]=jvj+5; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1358,jvj+5,jvj+15)*/
if((x[jvj+15]==68)) goto l12;
l3:pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l11;
x[jvj+8]=d[20];z[jvj+8]=0;
l4:if((x[jvj+8]<=0)) goto l11;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=268; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+9,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+5; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+10,jvj+5,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[887])( );     /*VARND0(jvj+11,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==x[jvj+23]) goto l5;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+5; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+9,jvj+5,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[1739])( );     /*ALGEBRIQUE0(jvj+13,jvj+14)*/
if((x[jvj+14]==68)) goto l12;
l5:x[jvj+8]=t[x[jvj+8]];
goto l4;
l10:x[jvj+5]=s[x[jvj+20]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+20];
pile[v[22]]=868; pile[WZ1]=jvj+5; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(868,jvj+5,jvj+21)*/
if((x[jvj+21]!=25)) goto l11;
pile[v[22]]=1070; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1070,jvj+5,jvj+22)*/
if((x[jvj+22]!=68)) goto l11;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(870,jvj+5,V8)*/
V8=pile[WZ2]; 
if((V8>N)) goto l11;
x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+16; 
(*f[887])( );     /*VARND0(jvj+5,jvj+16)*/
x[jvj+25]=x[jvj+16] ;z[jvj+25]=z[jvj+16];
goto l6;
l12:pile[v[22]]=EE; pile[WZ1]=jvj+23; 
(*f[68])( );     /*PLUE0(EE,jvj+23)*/
pile[WZ1]=V20; 
(*f[1740])( );     /*DEDUIT1(EE,V20)*/
l11:x[jvj+20]=t[x[jvj+20]];
goto l9;
}
