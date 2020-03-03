#include "dx.h"
void COMPLVAR2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V27=0,V21=0,V7=0,V=0;
int TL,E,F,YY;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=10332;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1624&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; E=pile[v[22]+1]; F=pile[v[22]+2]; YY=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
l6:pile[v[22]]=107; pile[WZ1]=F; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,F,jvj+11)*/
x[jvj+22]=x[jvj+11] ;z[jvj+22]=z[jvj+11];
l7:if((x[jvj+22]<=0)) goto l12;
x[jvj+12]=s[x[jvj+22]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+22];
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=25)) goto l8;
x[jvj+15]=d[20];z[jvj+15]=0;
l9:if((x[jvj+15]<=0)) goto l8;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+16,jvj+12,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+17,V7)*/
V7=pile[WZ2]; 
V=V7;
for(a=x[E];a>0;a=t[a]) if(s[a]==V) goto l10;
pile[v[22]]=268; pile[WZ1]=jvj+16; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+16,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+12; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+18,jvj+12,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=E; pile[WZ2]=jvj+20; 
(*f[1415])( );     /*COMPTEST0(jvj+19,E,jvj+20)*/
if((x[jvj+20]==135)) goto l11;
l10:x[jvj+15]=t[x[jvj+15]];
goto l9;
l3:V15=s[V27];
if((V15==(-3629))) goto l4;
for(a=x[E];a>0;a=t[a]) if(s[a]==V15) goto l4;
l14:x[jvj+11]=t[x[jvj+11]];
l12:if((x[jvj+11]>0)) goto l13;
l15:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l4:V27=t[V27];
l2:if((V27>0)) goto l3;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+21; 
(*f[703])( );     /*USW0(jvj+3,jvj+21)*/
pile[v[22]]=YY; pile[WZ1]=jvj+3; pile[WZ2]=F; 
(*f[1623])( );     /*AJANT1(YY,jvj+3,F)*/
goto l6;
l5:pile[v[22]]=39; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(39,jvj+5,jvj+10)*/
goto l14;
l8:x[jvj+22]=t[x[jvj+22]];
goto l7;
l11:pile[v[22]]=YY; pile[WZ1]=jvj+12; pile[WZ2]=F; 
(*f[1623])( );     /*AJANT1(YY,jvj+12,F)*/
pile[v[22]]=E; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(E,V)*/
goto l6;
l13:x[jvj+3]=s[x[jvj+11]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+11];
pile[v[22]]=683; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(683,TL,V21)*/
V21=pile[WZ2]; 
if((V21!=8)) goto l1;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+3,jvj+7)*/
if((x[jvj+7]!=22)) goto l1;
pile[v[22]]=111; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+3,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+8,jvj+9)*/
x[jvj+5]=x[jvj+9] ;z[jvj+5]=z[jvj+9];
pile[v[22]]=1854; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1854,jvj+5,jvj+6)*/
l1:pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[703])( );     /*USW0(jvj+3,jvj+4)*/
V27=x[jvj+4];
goto l2;
}
