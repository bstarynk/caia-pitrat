#include "dx.h"
void ORR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,W=0,V=0,V11=0,V5=0;
int Z,R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=10722;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2092&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Z=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V14=x[Z];
x[jvj+2]=d[10];z[jvj+2]=0;
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=159; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,R,jvj+4)*/
x[jvj+5]=d[121];z[jvj+5]=0;
l3:if((x[jvj+5]>0)) goto l4;
pile[v[22]]=251; pile[WZ1]=Z; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(251,Z,jvj+8)*/
l7:if((x[jvj+8]>0)) goto l8;
pile[v[22]]=436; pile[WZ1]=Z; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(436,Z,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+13,V)*/
V=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V; 
(*f[2171])( );     /*ORF0(R,V)*/
l11:pile[v[22]]=100; pile[WZ1]=Z; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,Z,jvj+14)*/
if((x[jvj+14]!=39)) goto l14;
pile[v[22]]=113; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(113,Z,jvj+15)*/
l12:if((x[jvj+15]<=0)) goto l14;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=102; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+16,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+17,V11)*/
V11=pile[WZ2]; 
V5=V11;
pile[v[22]]=R; pile[WZ1]=V5; 
(*f[2171])( );     /*ORF0(R,V5)*/
l13:x[jvj+15]=t[x[jvj+15]];
goto l12;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=R; pile[WZ2]=V14; 
(*f[134])( );     /*OTA0(jvj+3,R,V14)*/
x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
x[jvj+18]=x[jvj+4] ;z[jvj+18]=z[jvj+4];
l5:if((x[jvj+18]>0)) goto l6;
x[jvj+5]=t[x[jvj+5]];
goto l3;
l6:x[jvj+7]=s[x[jvj+18]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+18];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; pile[WZ2]=V14; 
(*f[134])( );     /*OTA0(jvj+6,jvj+7,V14)*/
x[jvj+18]=t[x[jvj+18]];
goto l5;
l8:W=s[x[jvj+8]];
pile[v[22]]=R; pile[WZ1]=251; pile[WZ2]=W; 
(*f[735])( );     /*PLUSC4(R,251,W)*/
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,R,jvj+9)*/
if((x[jvj+9]!=42)) goto l10;
pile[v[22]]=498; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(498,R,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=251; pile[WZ2]=W; 
(*f[735])( );     /*PLUSC4(jvj+10,251,W)*/
l10:pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,Z,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=54)) goto l9;
pile[v[22]]=R; pile[WZ1]=W; 
(*f[2171])( );     /*ORF0(R,W)*/
l9:x[jvj+8]=t[x[jvj+8]];
goto l7;
l14:pile[v[22]]=R; 
(*f[2090])( );     /*ORT0(R)*/
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
