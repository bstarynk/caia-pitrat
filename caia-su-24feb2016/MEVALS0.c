#include "dx.h"
void MEVALS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int TL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=10638;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1841&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
l4:pile[v[22]]=363; pile[WZ1]=TL; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(363,TL,jvj+7)*/
if((x[jvj+7]>0)) goto l5;
pile[v[22]]=302; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(302,TL,jvj+8)*/
l6:if((x[jvj+8]>0)) goto l7;
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(302,TL,jvj+13)*/
l10:if((x[jvj+13]>0)) goto l11;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+4]=s[x[jvj+16]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+16];
pile[v[22]]=360; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(360,jvj+4,jvj+5)*/
if((x[jvj+5]!=68)) goto l8;
x[jvj+16]=t[x[jvj+16]];
l2:if((x[jvj+16]>0)) goto l3;
x[jvj+15]=x[jvj+2] ;z[jvj+15]=z[jvj+2];
l15:if((x[jvj+15]==250)) goto l4;
pile[v[22]]=jvj+15; pile[WZ1]=TL; 
(*f[2002])( );     /*MEVALY1(jvj+15,TL)*/
goto l4;
l5:x[jvj+17]=s[x[jvj+7]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+7];
V2=x[jvj+17];
x[jvj+15]=x[jvj+17] ;z[jvj+15]=z[jvj+17];
pile[v[22]]=363; pile[WZ1]=TL; pile[WZ2]=V2; 
(*f[134])( );     /*OTA0(363,TL,V2)*/
goto l15;
l7:x[jvj+2]=s[x[jvj+8]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+8];
pile[v[22]]=360; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(360,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l8;
l1:pile[v[22]]=248; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(248,jvj+2,jvj+6)*/
x[jvj+16]=x[jvj+6] ;z[jvj+16]=z[jvj+6];
goto l2;
l8:x[jvj+8]=t[x[jvj+8]];
goto l6;
l11:x[jvj+9]=s[x[jvj+13]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+13];
pile[v[22]]=360; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(360,jvj+9,jvj+10)*/
if((x[jvj+10]==68)) goto l12;
l13:pile[v[22]]=TL; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[2001])( );     /*ISN0(TL,jvj+9,jvj+14)*/
if((x[jvj+14]==135)) goto l14;
l12:x[jvj+13]=t[x[jvj+13]];
goto l10;
l14:pile[v[22]]=jvj+9; pile[WZ1]=TL; 
(*f[1383])( );     /*ISV0(jvj+9,TL)*/
pile[v[22]]=135; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(135,jvj+9,jvj+11)*/
pile[v[22]]=jvj+11; 
(*f[1997])( );     /*MEVALV0(jvj+11)*/
l9:pile[v[22]]=134; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(134,jvj+9,jvj+12)*/
pile[v[22]]=jvj+12; 
(*f[1997])( );     /*MEVALV0(jvj+12)*/
goto l4;
}
