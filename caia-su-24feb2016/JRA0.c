#include "dx.h"
void JRA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V16=0,VA=0,V20=0,W=0,V29=0,V25=0,V=0;
int TL,X,Z;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=10003;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1847&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; X=pile[v[22]+1]; Z=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+22]=x[Z] ;z[jvj+22]=z[Z];
l14:W=incon;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,X,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=39)) goto l13;
pile[v[22]]=114; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(114,jvj+5,jvj+7)*/
x[jvj+26]=x[jvj+7] ;z[jvj+26]=z[jvj+7];
l4:if((x[jvj+26]<=0)) goto l13;
x[jvj+8]=s[x[jvj+26]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+26];
pile[v[22]]=103; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+8,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+9,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+8,jvj+10)*/
VA=V16;
x[jvj+25]=x[jvj+7] ;z[jvj+25]=z[jvj+7];
l1:if((x[jvj+25]>0)) goto l2;
V20=x[jvj+8];
W=VA;
x[jvj+23]=x[jvj+10] ;z[jvj+23]=z[jvj+10];
pile[v[22]]=114; pile[WZ1]=jvj+5; pile[WZ2]=V20; 
(*f[134])( );     /*OTA0(114,jvj+5,V20)*/
pile[v[22]]=291; pile[WZ1]=TL; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(291,TL,jvj+11)*/
l6:if((x[jvj+11]>0)) goto l7;
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+16)*/
pile[v[22]]=TL; pile[WZ1]=V; pile[WZ2]=TL; pile[WZ3]=jvj+16; pile[WZ4]=jvj+17; 
(*f[2010])( );     /*JRN0(TL,V,TL,jvj+16,jvj+17)*/
pile[WZ1]=291; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(TL,291,jvj+17)*/
l9:pile[v[22]]=291; pile[WZ1]=TL; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(291,TL,jvj+18)*/
pile[v[22]]=302; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(302,TL,jvj+19)*/
l10:if((x[jvj+19]<=0)) goto l12;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==x[jvj+20]) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+20,jvj+21)*/
pile[v[22]]=W; pile[WZ1]=V; pile[WZ3]=TL; 
(*f[1802])( );     /*SUBST1(W,V,jvj+21,TL)*/
l11:x[jvj+19]=t[x[jvj+19]];
goto l10;
l2:x[jvj+2]=s[x[jvj+25]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+25];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=114)) goto l3;
pile[v[22]]=102; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+2,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+4,V9)*/
V9=pile[WZ2]; 
if((VA==V9)) goto l5;
l3:x[jvj+25]=t[x[jvj+25]];
goto l1;
l5:x[jvj+26]=t[x[jvj+26]];
goto l4;
l7:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+12,jvj+13)*/
pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+13,jvj+14)*/
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+14,V29)*/
V29=pile[WZ2]; 
if((W!=V29)) goto l8;
pile[v[22]]=436; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(436,jvj+13,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+15,V25)*/
V25=pile[WZ2]; 
V=V25;
if(W!=incon) goto l9;
l12:pile[v[22]]=TL; pile[WZ1]=V; pile[WZ2]=jvj+22; pile[WZ3]=jvj+23; pile[WZ4]=jvj+24; 
(*f[2010])( );     /*JRN0(TL,V,jvj+22,jvj+23,jvj+24)*/
x[jvj+22]=x[jvj+24] ;z[jvj+22]=z[jvj+24];
goto l14;
l8:x[jvj+11]=t[x[jvj+11]];
goto l6;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
}
