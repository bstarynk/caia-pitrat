#include "dx.h"
void ENLISENVNOM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0;
int N;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=19;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[jvj+15]=incon;
x[jvj+1]=vo[13];z[jvj+1]=vz[13];
x[jvj+2]=x[jvj+1] ;z[jvj+2]=z[jvj+1];
pile[v[22]]=717; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(717,jvj+2,jvj+3)*/
pile[v[22]]=718; pile[WZ1]=jvj+3; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(718,jvj+3,jvj+11)*/
l6:if((x[jvj+11]<=0)) goto l8;
x[jvj+4]=s[x[jvj+11]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+11];
pile[v[22]]=159; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(159,jvj+4,jvj+5)*/
x[jvj+17]=x[jvj+5] ;z[jvj+17]=z[jvj+5];
l1:if((x[jvj+17]<=0)) goto l7;
x[jvj+6]=s[x[jvj+17]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+17];
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=x[N])) goto l2;
V8=x[jvj+4];
pile[v[22]]=159; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(159,jvj+4,jvj+8)*/
x[jvj+18]=x[jvj+8] ;z[jvj+18]=z[jvj+8];
l3:if((x[jvj+18]>0)) goto l4;
pile[v[22]]=718; pile[WZ1]=jvj+3; pile[WZ2]=V8; 
(*f[134])( );     /*OTA0(718,jvj+3,V8)*/
l7:x[jvj+11]=t[x[jvj+11]];
goto l6;
l2:x[jvj+17]=t[x[jvj+17]];
goto l1;
l4:x[jvj+9]=s[x[jvj+18]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+18];
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+9,jvj+10)*/
pile[v[22]]=578; pile[WZ1]=jvj+10; pile[WZ2]=V8; 
(*f[134])( );     /*OTA0(578,jvj+10,V8)*/
l5:x[jvj+18]=t[x[jvj+18]];
goto l3;
l8:x[jvj+19]=68 ;z[jvj+19]=68;
if(x[jvj+3]!=incon) goto l9;
l10:x[jvj+13]=250 ;z[jvj+13]=250;
if(x[jvj+3]!=incon) goto l13;
l15:x[jvj+16]=67 ;z[jvj+16]=67;
if(x[jvj+15]!=incon) goto l16;
l17:v[0]=jvj; v[22]-=1; return;
l9:pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(120,jvj+3,jvj+12)*/
x[jvj+13]=x[jvj+12] ;z[jvj+13]=z[jvj+12];
l13:pile[v[22]]=718; pile[WZ1]=jvj+3; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(718,jvj+3,jvj+14)*/
if((x[jvj+14]==0)) goto l11;
x[jvj+15]=x[jvj+3] ;z[jvj+15]=z[jvj+3];
goto l15;
l11:if((x[jvj+13]==250)) goto l12;
pile[v[22]]=jvj+2; pile[WZ1]=717; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(jvj+2,717,jvj+13)*/
l14:x[jvj+16]=x[jvj+19] ;z[jvj+16]=z[jvj+19];
x[jvj+15]=x[jvj+2] ;z[jvj+15]=z[jvj+2];
l16:if((x[jvj+13]==250)) goto l17;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; pile[WZ3]=N; 
(*f[1573])( );     /*ENLISENVNOM1(jvj+13,jvj+15,jvj+16,N)*/
goto l17;
l12:pile[v[22]]=717; pile[WZ1]=jvj+2; 
(*f[71])( );     /*ENLV0(717,jvj+2)*/
goto l14;
}
