#include "dx.h"
void LIREPBJOURNAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,W=0,V2=0,V9=0,V8=0;
int BL,V,C;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; V=pile[v[22]+1]; C=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=incon;
if((V==(-7085))) goto l12;
pile[v[22]]=109; pile[WZ1]=BL; pile[WZ2]=163; pile[WZ3]=V; pile[WZ4]=jvj+5; 
(*f[270])( );     /*QUADRI7(109,BL,163,V,jvj+5)*/
x[jvj+6]=994 ;z[jvj+6]=994;
l7:pile[v[22]]=120; pile[WZ1]=jvj+6; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(120,jvj+6,jvj+3)*/
pile[v[22]]=109; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+3,jvj+7)*/
if((x[jvj+7]!=x[BL])) goto l8;
pile[v[22]]=191; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(191,jvj+3,jvj+4)*/
l8:x[jvj+6]=x[jvj+3] ;z[jvj+6]=z[jvj+3];
goto l7;
l1:V2=incon;
pile[v[22]]=163; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(163,jvj+1,V4)*/
V4=pile[WZ2]; 
W=V4;
V2=W;
l2:if(V2==incon) goto l3;
l14:if(V2!=incon) goto l15;
l13:x[jvj+8]=x[jvj+1] ;z[jvj+8]=z[jvj+1];
l11:pile[v[22]]=120; pile[WZ1]=jvj+8; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(120,jvj+8,jvj+1)*/
pile[v[22]]=109; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(109,jvj+1,jvj+9)*/
if((x[jvj+9]!=x[BL])) goto l13;
pile[v[22]]=191; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(191,jvj+1,jvj+2)*/
goto l13;
l3:V2=((-1278));
goto l14;
l4:if((V==(-1278))) goto l5;
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(163,jvj+3,V8)*/
V8=pile[WZ2]; 
if((V8==V)) goto l5;
goto l8;
l5:if((C!=32)) goto l6;
pile[v[22]]=jvj+3; 
(*f[440])( );     /*LIRELTDEJOURNAL0(jvj+3)*/
l6:if((C!=45)) goto l9;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; 
(*f[442])( );     /*NETTJOURNAL0(jvj+3,jvj+5)*/
l9:pile[v[22]]=jvj+3; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+3,191,68)*/
goto l8;
l10:if((V==(-7085))) goto l12;
l16:if(x[jvj+5]!=incon) goto l17;
l18:v[0]=jvj; v[22]-=3; return;
l12:x[jvj+8]=994 ;z[jvj+8]=994;
goto l11;
l15:pile[v[22]]=BL; pile[WZ1]=V2; pile[WZ2]=C; 
(*f[441])( );     /*LIREPBJOURNAL0(BL,V2,C)*/
if((C!=32)) goto l13;
pile[v[22]]=75; pile[WZ1]=0; pile[WZ2]=36; 
(*f[41])( );     /*SRB0(75,0,36,V9)*/
V9=pile[WZ3]; 
pile[v[22]]=V9; 
(*f[40])( );     /*SLG0(V9)*/
goto l13;
l17:if((C!=45)) goto l18;
if((V==(-7085))) goto l18;
pile[v[22]]=jvj+5; 
(*f[443])( );     /*FINETTJOURNAL0(jvj+5)*/
goto l18;
}
