#include "dx.h"
void SUBST1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V=0;
int VB,VA,R,TL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

VB=pile[v[22]]; VA=pile[v[22]+1]; R=pile[v[22]+2]; TL=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=R; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,R,V12)*/
V12=pile[WZ2]; 
V=VB;
if((V!=V12)) goto l2;
pile[v[22]]=R; pile[WZ1]=140; pile[WZ2]=VA; 
(*f[177])( );     /*CHGC4(R,140,VA)*/
l2:if((VA==VB)) goto l10;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,R,jvj+3)*/
x[jvj+12]=w[x[jvj+3]][9];
l3:if((x[jvj+12]>0)) goto l4;
x[jvj+13]=w[x[jvj+3]][8];
l6:if((x[jvj+13]<=0)) goto l10;
x[jvj+6]=s[x[jvj+13]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+13];
if((x[jvj+6]==113)) goto l7;
pile[v[22]]=jvj+6; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(jvj+6,R,jvj+7)*/
x[jvj+14]=x[jvj+7] ;z[jvj+14]=z[jvj+7];
l8:if((x[jvj+14]<=0)) goto l7;
x[jvj+1]=s[x[jvj+14]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+14];
x[jvj+8]=incon;
if((x[jvj+3]!=39)) goto l1;
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+1,jvj+2)*/
x[jvj+8]=x[jvj+2] ;z[jvj+8]=z[jvj+2];
l9:pile[v[22]]=jvj+8; pile[WZ1]=VB; pile[WZ2]=VA; 
(*f[771])( );     /*SUBST0(jvj+8,VB,VA)*/
x[jvj+14]=t[x[jvj+14]];
goto l8;
l1:x[jvj+8]=x[jvj+1] ;z[jvj+8]=z[jvj+1];
goto l9;
l4:x[jvj+4]=s[x[jvj+12]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+12];
if((x[jvj+4]==436)) goto l5;
pile[v[22]]=jvj+4; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+4,R,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=VB; pile[WZ2]=VA; 
(*f[771])( );     /*SUBST0(jvj+5,VB,VA)*/
l5:x[jvj+12]=t[x[jvj+12]];
goto l3;
l7:x[jvj+13]=t[x[jvj+13]];
goto l6;
l10:pile[v[22]]=724; pile[WZ1]=TL; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(724,TL,jvj+9)*/
l11:if((x[jvj+9]>0)) goto l12;
v[0]=jvj; v[22]-=4; return;
l12:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=132; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(132,jvj+10,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=VB; pile[WZ2]=VA; 
(*f[771])( );     /*SUBST0(jvj+11,VB,VA)*/
l13:x[jvj+9]=t[x[jvj+9]];
goto l11;
}
