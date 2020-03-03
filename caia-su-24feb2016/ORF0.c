#include "dx.h"
void ORF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,V24=0,V17=0,W=0,V7=0;
int R,V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=10690;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2171&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; V=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=R; pile[WZ1]=237; pile[WZ2]=V; 
(*f[735])( );     /*PLUSC4(R,237,V)*/
pile[WZ1]=251; 
(*f[735])( );     /*PLUSC4(R,251,V)*/
pile[v[22]]=498; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(498,R,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=251; pile[WZ2]=V; 
(*f[735])( );     /*PLUSC4(jvj+5,251,V)*/
l1:pile[v[22]]=159; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(159,R,jvj+6)*/
l2:if((x[jvj+6]>0)) goto l3;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,R,jvj+8)*/
l7:if((x[jvj+8]>0)) goto l8;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l3:x[jvj+4]=s[x[jvj+6]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+6];
pile[v[22]]=110; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(110,jvj+4,V21)*/
V21=pile[WZ2]; 
if((V21!=V)) goto l4;
pile[v[22]]=334; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(334,jvj+4,jvj+7)*/
x[jvj+18]=x[jvj+7] ;z[jvj+18]=z[jvj+7];
l5:if((x[jvj+18]<=0)) goto l4;
x[jvj+2]=s[x[jvj+18]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+18];
V24=x[jvj+2];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=22)) goto l6;
pile[v[22]]=jvj+4; pile[WZ1]=470; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+4,470,jvj+2)*/
l6:pile[v[22]]=334; pile[WZ1]=jvj+4; pile[WZ2]=V24; 
(*f[134])( );     /*OTA0(334,jvj+4,V24)*/
x[jvj+18]=t[x[jvj+18]];
goto l5;
l4:x[jvj+6]=t[x[jvj+6]];
goto l2;
l8:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=179)) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+9,jvj+12)*/
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=734)) goto l9;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+15)*/
pile[v[22]]=436; pile[WZ1]=jvj+9; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(436,jvj+9,jvj+16)*/
pile[v[22]]=140; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+16,V17)*/
V17=pile[WZ2]; 
W=V17;
x[jvj+19]=x[jvj+15] ;z[jvj+19]=z[jvj+15];
l10:if((x[jvj+19]<=0)) goto l9;
x[jvj+17]=s[x[jvj+19]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+19];
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+17,V7)*/
V7=pile[WZ2]; 
if((V!=V7)) goto l11;
pile[v[22]]=R; pile[WZ1]=jvj+9; pile[WZ2]=W; pile[WZ3]=V; pile[WZ4]=jvj+12; 
(*f[2087])( );     /*ORI0(R,jvj+9,W,V,jvj+12)*/
l11:x[jvj+19]=t[x[jvj+19]];
goto l10;
l9:x[jvj+8]=t[x[jvj+8]];
goto l7;
}
