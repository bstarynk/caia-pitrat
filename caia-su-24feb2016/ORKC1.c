#include "dx.h"
void ORKC1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V16=0,V1=0,A=0,B=0,V6=0,C=0,V12=0,D=0,V14=0;
int M,BT,XP;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=10713;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2106&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; BT=pile[v[22]+1]; XP=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=D=incon;
pile[v[22]]=BT; pile[WZ1]=M; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(BT,M,jvj+3)*/
pile[v[22]]=238; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(238,jvj+3,V1)*/
V1=pile[WZ2]; 
A=68;
l2:pile[v[22]]=XP; pile[WZ1]=728; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(XP,728,68)*/
if(x[jvj+3]!=incon) goto l4;
l7:B=67;
if(x[jvj+3]!=incon) goto l8;
l13:C=67;
if(x[jvj+3]!=incon) goto l14;
l19:if(x[jvj+3]!=incon) goto l20;
l21:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l1:A=67;
goto l2;
l4:x[jvj+11]=d[108];z[jvj+11]=0;
l3:if((x[jvj+11]<=0)) goto l7;
x[jvj+4]=s[x[jvj+11]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+11];
pile[v[22]]=447; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(447,jvj+4,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(jvj+5,jvj+3,V3)*/
V3=pile[WZ2]; 
l5:x[jvj+11]=t[x[jvj+11]];
goto l3;
l6:pile[v[22]]=jvj+4; pile[WZ1]=jvj+3; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+4,jvj+3,jvj+12)*/
B=68;
if((A!=68)) goto l10;
pile[v[22]]=80; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(80,jvj+3,jvj+13)*/
if((x[jvj+13]==68)) goto l10;
l9:pile[v[22]]=XP; pile[WZ1]=554; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(XP,554,jvj+3)*/
l10:pile[v[22]]=248; pile[WZ1]=jvj+3; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(248,jvj+3,jvj+14)*/
l11:if((x[jvj+14]<=0)) goto l13;
x[jvj+6]=s[x[jvj+14]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+14];
pile[v[22]]=161; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(161,jvj+6,jvj+7)*/
pile[v[22]]=122; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(122,jvj+6,jvj+8)*/
pile[v[22]]=447; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(447,jvj+8,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+9; pile[WZ3]=jvj+10; 
(*f[45])( );if(v[102]) goto l12;     /*FNDZ0(jvj+7,jvj+9,V16,jvj+10)*/
V16=pile[WZ2]; 
x[jvj+14]=t[x[jvj+14]];
goto l11;
l8:if((A!=68)) goto l10;
V6=x[jvj+3];
pile[v[22]]=554; pile[WZ1]=XP; pile[WZ2]=V6; 
(*f[134])( );     /*OTA0(554,XP,V6)*/
goto l10;
l12:C=68;
l15:if((A!=67)) goto l17;
if((B==67)) goto l16;
if((C==67)) goto l16;
pile[v[22]]=437; pile[WZ1]=jvj+3; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(437,jvj+3,jvj+15)*/
if(x[jvj+15]==135||x[jvj+15]==404) goto l16;
l17:if((C!=68)) goto l18;
if((A!=68)) goto l18;
pile[v[22]]=XP; pile[WZ1]=563; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(XP,563,jvj+3)*/
l18:if(D==incon) goto l19;
if((D==67)) goto l20;
if((D!=68)) goto l21;
pile[v[22]]=XP; pile[WZ1]=673; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(XP,673,jvj+3)*/
goto l21;
l14:if((A!=68)) goto l15;
V12=x[jvj+3];
pile[v[22]]=563; pile[WZ1]=XP; pile[WZ2]=V12; 
(*f[134])( );     /*OTA0(563,XP,V12)*/
goto l19;
l16:D=68;
goto l17;
l20:V14=x[jvj+3];
pile[v[22]]=673; pile[WZ1]=XP; pile[WZ2]=V14; 
(*f[134])( );     /*OTA0(673,XP,V14)*/
goto l21;
}
