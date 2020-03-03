#include "dx.h"
void FIGURENS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A,B,P,C;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=18;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; P=pile[v[22]+2]; C=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=101; pile[WZ1]=P; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,P,jvj+1)*/
for(a=x[A];a>0;a=t[a]) if(s[a]==x[jvj+1]) goto l1;
l4:pile[v[22]]=100; pile[WZ1]=P; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,P,jvj+6)*/
if((x[jvj+6]!=22)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,P,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+7,jvj+8)*/
if(x[jvj+8]==485||x[jvj+8]==486||x[jvj+8]==52||x[jvj+8]==25) goto l8;
if((x[jvj+8]!=596)) goto l5;
pile[v[22]]=103; pile[WZ1]=P; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,P,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]==41)) goto l8;
l5:pile[v[22]]=1358; pile[WZ1]=B; 
(*f[71])( );     /*ENLV0(1358,B)*/
l8:x[jvj+9]=d[51];z[jvj+9]=0;
l6:if((x[jvj+9]>0)) goto l7;
pile[v[22]]=107; pile[WZ1]=P; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,P,jvj+12)*/
l10:if((x[jvj+12]>0)) goto l11;
pile[v[22]]=184; pile[WZ1]=P; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(184,P,jvj+14)*/
l12:if((x[jvj+14]>0)) goto l13;
v[0]=jvj; v[22]-=4; return;
l1:x[jvj+5]=incon;
if((x[C]!=1216)) goto l2;
pile[v[22]]=145; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(145,jvj+1,jvj+2)*/
x[jvj+5]=x[jvj+2] ;z[jvj+5]=z[jvj+2];
l3:pile[v[22]]=B; pile[WZ1]=C; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(B,C,jvj+5)*/
goto l4;
l2:x[jvj+5]=x[jvj+1] ;z[jvj+5]=z[jvj+1];
goto l3;
l7:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=P; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+10,P,jvj+11)*/
pile[v[22]]=A; pile[WZ1]=B; pile[WZ3]=C; 
(*f[690])( );     /*FIGURENS0(A,B,jvj+11,C)*/
l9:x[jvj+9]=t[x[jvj+9]];
goto l6;
l11:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=jvj+13; pile[WZ3]=C; 
(*f[690])( );     /*FIGURENS0(A,B,jvj+13,C)*/
x[jvj+12]=t[x[jvj+12]];
goto l10;
l13:x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+16)*/
x[jvj+18]=x[jvj+16] ;z[jvj+18]=z[jvj+16];
l14:if((x[jvj+18]>0)) goto l15;
x[jvj+14]=t[x[jvj+14]];
goto l12;
l15:x[jvj+17]=s[x[jvj+18]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+18];
pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=jvj+17; pile[WZ3]=C; 
(*f[690])( );     /*FIGURENS0(A,B,jvj+17,C)*/
x[jvj+18]=t[x[jvj+18]];
goto l14;
}
