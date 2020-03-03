#include "dx.h"
void COMPLVARTOT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int W=0,V25=0,V48=0,V37=0;
int N,E,YY,F,L,TL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=11030;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1412&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; E=pile[v[22]+1]; YY=pile[v[22]+2]; F=pile[v[22]+3]; L=pile[v[22]+4]; TL=pile[v[22]+5]; v[22]+=6; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l1:pile[v[22]]=107; pile[WZ1]=F; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(107,F,jvj+2)*/
l2:if((x[jvj+2]>0)) goto l3;
pile[v[22]]=TL; pile[WZ1]=E; pile[WZ2]=F; pile[WZ3]=YY; 
(*f[1624])( );     /*COMPLVAR2(TL,E,F,YY)*/
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; return;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=22)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+3,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+5,V25)*/
V25=pile[WZ2]; 
for(a=x[E];a>0;a=t[a]) if(s[a]==V25) goto l7;
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+3,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+6,jvj+7)*/
if(x[jvj+7]!=25&&x[jvj+7]!=44) goto l7;
if((x[jvj+7]==25)) goto l12;
if((x[L]==981)) goto l12;
pile[v[22]]=762; pile[WZ1]=N; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(762,N,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==V25) goto l12;
l7:pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+3,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=278)) goto l4;
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+3,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[1627])( );     /*Z262Z0(jvj+11,jvj+12)*/
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+3,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=E; pile[WZ2]=jvj+14; 
(*f[1415])( );     /*COMPTEST0(jvj+13,E,jvj+14)*/
if((x[jvj+14]==135)) goto l8;
l4:x[jvj+2]=t[x[jvj+2]];
goto l2;
l10:W=V37;
l5:pile[v[22]]=YY; pile[WZ1]=jvj+3; pile[WZ2]=F; 
(*f[1623])( );     /*AJANT1(YY,jvj+3,F)*/
pile[v[22]]=E; pile[WZ1]=W; 
(*f[331])( );     /*PLUE3(E,W)*/
goto l1;
l11:W=V25;
goto l5;
l12:pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+3,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=E; pile[WZ2]=jvj+20; 
(*f[1626])( );     /*PEUTCALCULER0(jvj+19,E,jvj+20)*/
if((x[jvj+20]==135)) goto l11;
goto l7;
l8:if((x[jvj+12]<=0)) goto l4;
x[jvj+15]=s[x[jvj+12]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+12];
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=22)) goto l9;
pile[v[22]]=102; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+15,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+17,V48)*/
V48=pile[WZ2]; 
V37=V48;
for(a=x[E];a>0;a=t[a]) if(s[a]==V37) goto l9;
if((x[L]==981)) goto l10;
pile[v[22]]=762; pile[WZ1]=N; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(762,N,jvj+18)*/
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==V37) goto l10;
l9:x[jvj+12]=t[x[jvj+12]];
goto l8;
}
