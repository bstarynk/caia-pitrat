#include "dx.h"
void ENLISENVNOM1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,DD=0,V15=0;
int L,M,D,N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

L=pile[v[22]]; M=pile[v[22]+1]; D=pile[v[22]+2]; N=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V15=x[D];
x[jvj+11]=x[M] ;z[jvj+11]=z[M];
x[jvj+8]=x[L] ;z[jvj+8]=z[L];
l6:pile[v[22]]=718; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(718,jvj+8,jvj+9)*/
l7:if((x[jvj+9]>0)) goto l8;
pile[v[22]]=120; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(120,jvj+8,jvj+10)*/
x[jvj+12]=x[jvj+10] ;z[jvj+12]=z[jvj+10];
l15:pile[v[22]]=718; pile[WZ1]=jvj+8; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(718,jvj+8,jvj+13)*/
if((x[jvj+13]==0)) goto l11;
x[jvj+16]=x[jvj+8] ;z[jvj+16]=z[jvj+8];
DD=67;
l17:if((x[jvj+12]!=250)) goto l18;
v[0]=jvj; v[22]-=4; return;
l2:x[jvj+14]=t[x[jvj+14]];
l1:if((x[jvj+14]<=0)) goto l9;
x[jvj+3]=s[x[jvj+14]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+14];
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=x[N])) goto l2;
V7=x[jvj+1];
pile[v[22]]=159; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(159,jvj+1,jvj+5)*/
x[jvj+15]=x[jvj+5] ;z[jvj+15]=z[jvj+5];
l3:if((x[jvj+15]>0)) goto l4;
pile[v[22]]=718; pile[WZ1]=jvj+8; pile[WZ2]=V7; 
(*f[134])( );     /*OTA0(718,jvj+8,V7)*/
l9:x[jvj+9]=t[x[jvj+9]];
goto l7;
l4:x[jvj+6]=s[x[jvj+15]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+15];
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+6,jvj+7)*/
pile[v[22]]=578; pile[WZ1]=jvj+7; pile[WZ2]=V7; 
(*f[134])( );     /*OTA0(578,jvj+7,V7)*/
l5:x[jvj+15]=t[x[jvj+15]];
goto l3;
l8:x[jvj+1]=s[x[jvj+9]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+9];
pile[v[22]]=159; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(159,jvj+1,jvj+2)*/
x[jvj+14]=x[jvj+2] ;z[jvj+14]=z[jvj+2];
goto l1;
l10:x[jvj+12]=250 ;z[jvj+12]=250;
goto l15;
l11:if((x[jvj+12]==250)) goto l12;
if((V15!=68)) goto l14;
pile[v[22]]=jvj+11; pile[WZ1]=717; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(jvj+11,717,jvj+12)*/
l16:DD=V15;
x[jvj+16]=x[jvj+11] ;z[jvj+16]=z[jvj+11];
goto l17;
l12:if((V15==68)) goto l13;
if((V15!=67)) goto l14;
pile[v[22]]=120; pile[WZ1]=jvj+11; 
(*f[71])( );     /*ENLV0(120,jvj+11)*/
goto l16;
l13:pile[v[22]]=717; pile[WZ1]=jvj+11; 
(*f[71])( );     /*ENLV0(717,jvj+11)*/
goto l16;
l14:if((V15!=67)) goto l16;
if((x[jvj+12]==250)) goto l16;
pile[v[22]]=jvj+11; pile[WZ1]=120; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(jvj+11,120,jvj+12)*/
goto l16;
l18:x[jvj+8]=x[jvj+12] ;z[jvj+8]=z[jvj+12];
x[jvj+11]=x[jvj+16] ;z[jvj+11]=z[jvj+16];
V15=DD;
goto l6;
}
