#include "dx.h"
void COMPLVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V29=0,V23=0,V9=0,V=0;
int TL,F,YY;
int E;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=10332;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1411&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; F=pile[v[22]+1]; YY=pile[v[22]+2]; E=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=222; pile[WZ1]=TL; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(222,TL,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=E; 
(*f[195])( );     /*CPE0(jvj+3,E)*/
pile[v[22]]=107; pile[WZ1]=F; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,F,jvj+12)*/
x[jvj+23]=x[jvj+12] ;z[jvj+23]=z[jvj+12];
l6:if((x[jvj+23]<=0)) goto l11;
x[jvj+13]=s[x[jvj+23]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+23];
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=25)) goto l7;
x[jvj+16]=d[20];z[jvj+16]=0;
l8:if((x[jvj+16]<=0)) goto l7;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+13; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+17,jvj+13,jvj+18)*/
pile[v[22]]=140; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+18,V9)*/
V9=pile[WZ2]; 
V=V9;
for(a=x[E];a>0;a=t[a]) if(s[a]==V) goto l9;
pile[v[22]]=268; pile[WZ1]=jvj+17; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+17,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+13; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+19,jvj+13,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=E; pile[WZ2]=jvj+21; 
(*f[1415])( );     /*COMPTEST0(jvj+20,E,jvj+21)*/
if((x[jvj+21]==135)) goto l10;
l9:x[jvj+16]=t[x[jvj+16]];
goto l8;
l3:V17=s[V29];
if((V17==(-3629))) goto l4;
for(a=x[E];a>0;a=t[a]) if(s[a]==V17) goto l4;
l12:x[jvj+12]=t[x[jvj+12]];
l11:if((x[jvj+12]<=0)) goto l14;
x[jvj+4]=s[x[jvj+12]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+12];
pile[v[22]]=683; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(683,TL,V23)*/
V23=pile[WZ2]; 
if((V23!=8)) goto l1;
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+4,jvj+8)*/
if((x[jvj+8]!=22)) goto l1;
pile[v[22]]=111; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+4,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+9,jvj+10)*/
x[jvj+6]=x[jvj+10] ;z[jvj+6]=z[jvj+10];
pile[v[22]]=1854; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1854,jvj+6,jvj+7)*/
l1:pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[703])( );     /*USW0(jvj+4,jvj+5)*/
V29=x[jvj+5];
l2:if((V29>0)) goto l3;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+22; 
(*f[703])( );     /*USW0(jvj+4,jvj+22)*/
pile[v[22]]=YY; pile[WZ1]=jvj+4; pile[WZ2]=F; 
(*f[1623])( );     /*AJANT1(YY,jvj+4,F)*/
l13:pile[v[22]]=TL; pile[WZ1]=E; pile[WZ2]=F; pile[WZ3]=YY; 
(*f[1624])( );     /*COMPLVAR2(TL,E,F,YY)*/
l14:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l4:V29=t[V29];
goto l2;
l5:pile[v[22]]=39; pile[WZ1]=jvj+6; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(39,jvj+6,jvj+11)*/
goto l12;
l7:x[jvj+23]=t[x[jvj+23]];
goto l6;
l10:pile[v[22]]=YY; pile[WZ1]=jvj+13; pile[WZ2]=F; 
(*f[1623])( );     /*AJANT1(YY,jvj+13,F)*/
pile[v[22]]=E; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(E,V)*/
goto l13;
}
