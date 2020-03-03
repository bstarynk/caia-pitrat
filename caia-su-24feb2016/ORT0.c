#include "dx.h"
void ORT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V=0,V30=0,V27=0,V22=0,V33=0,V5=0,V29=0;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=10680;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2090&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=159; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(159,R,jvj+15)*/
l10:if((x[jvj+15]>0)) goto l11;
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:V30=t[V30];
l1:if((V30<=0)) goto l3;
V=s[V30];
if((V==V11)) goto l2;
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V) goto l2;
l7:x[jvj+23]=t[x[jvj+23]];
l6:if((x[jvj+23]<=0)) goto l12;
x[jvj+4]=s[x[jvj+23]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+23];
pile[v[22]]=110; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(110,jvj+2,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=237; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(237,R,jvj+3)*/
pile[v[22]]=253; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(253,jvj+4,jvj+5)*/
V30=x[jvj+5];
goto l1;
l3:pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+4,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=44)) goto l19;
x[jvj+22]=x[jvj+11] ;z[jvj+22]=z[jvj+11];
l4:if((x[jvj+22]<=0)) goto l19;
x[jvj+8]=s[x[jvj+22]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+22];
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==25)) goto l7;
l5:x[jvj+22]=t[x[jvj+22]];
goto l4;
l9:V33=t[V33];
l8:if((V33<=0)) goto l18;
V22=s[V33];
if((V22==V27)) goto l9;
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==V22) goto l9;
l17:x[jvj+25]=t[x[jvj+25]];
l16:if((x[jvj+25]<=0)) goto l12;
x[jvj+13]=s[x[jvj+25]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+25];
pile[v[22]]=110; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(110,jvj+2,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=237; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(237,R,jvj+12)*/
pile[v[22]]=253; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(253,jvj+13,jvj+14)*/
V33=x[jvj+14];
goto l8;
l11:x[jvj+2]=s[x[jvj+15]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+15];
pile[v[22]]=333; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(333,jvj+2,jvj+16)*/
if((x[jvj+16]!=0)) goto l14;
pile[v[22]]=470; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(470,jvj+2,jvj+17)*/
if((x[jvj+17]==0)) goto l14;
pile[v[22]]=334; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(334,jvj+2,jvj+18)*/
x[jvj+24]=x[jvj+18] ;z[jvj+24]=z[jvj+18];
l13:if((x[jvj+24]<=0)) goto l14;
x[jvj+19]=s[x[jvj+24]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+24];
V5=x[jvj+19];
pile[v[22]]=334; pile[WZ1]=jvj+2; pile[WZ2]=V5; 
(*f[134])( );     /*OTA0(334,jvj+2,V5)*/
pile[v[22]]=jvj+2; pile[WZ1]=333; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+2,333,jvj+19)*/
x[jvj+24]=t[x[jvj+24]];
goto l13;
l14:pile[v[22]]=470; pile[WZ1]=jvj+2; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(470,jvj+2,jvj+20)*/
if((x[jvj+20]!=0)) goto l15;
pile[v[22]]=334; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(334,jvj+2,jvj+11)*/
x[jvj+23]=x[jvj+11] ;z[jvj+23]=z[jvj+11];
goto l6;
l15:pile[v[22]]=334; pile[WZ1]=jvj+2; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(334,jvj+2,jvj+21)*/
x[jvj+25]=x[jvj+21] ;z[jvj+25]=z[jvj+21];
goto l16;
l18:V29=x[jvj+13];
pile[v[22]]=334; pile[WZ1]=jvj+2; pile[WZ2]=V29; 
(*f[134])( );     /*OTA0(334,jvj+2,V29)*/
pile[v[22]]=jvj+2; pile[WZ1]=333; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+2,333,jvj+13)*/
goto l17;
l19:pile[v[22]]=R; pile[WZ1]=jvj+4; pile[WZ2]=jvj+2; 
(*f[2169])( );     /*ORU2(R,jvj+4,jvj+2)*/
l12:x[jvj+15]=t[x[jvj+15]];
goto l10;
}
