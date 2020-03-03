#include "dx.h"
void ISK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int TL,E;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=10302;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1428&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; E=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=TL; 
(*f[1654])( );     /*MEVALM0(TL)*/
pile[v[22]]=222; pile[WZ1]=TL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(222,TL,jvj+2)*/
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==(-3168)) goto l1;
pile[v[22]]=TL; 
(*f[1655])( );     /*ISA0(TL)*/
(*f[1656])( );     /*ISF0(TL)*/
(*f[1657])( );     /*ISU0(TL)*/
l1:pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(583,TL,jvj+3)*/
pile[v[22]]=TL; 
(*f[1658])( );     /*ISL0(TL)*/
(*f[1659])( );     /*ISJ0(TL)*/
pile[v[22]]=jvj+3; pile[WZ1]=TL; pile[WZ2]=E; 
(*f[1660])( );     /*CANN0(jvj+3,TL,E)*/
x[jvj+4]=vo[15];z[jvj+4]=vz[15];
pile[v[22]]=302; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(302,jvj+4,jvj+5)*/
l3:if((x[jvj+5]>0)) goto l4;
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l4:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=134; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(134,jvj+6,jvj+7)*/
pile[v[22]]=248; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(248,jvj+7,jvj+8)*/
x[jvj+20]=x[jvj+8] ;z[jvj+20]=z[jvj+8];
l5:if((x[jvj+20]>0)) goto l12;
pile[v[22]]=jvj+6; pile[WZ1]=120; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(jvj+6,120,jvj+7)*/
l6:pile[v[22]]=134; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(134,jvj+6,jvj+9)*/
l7:x[jvj+5]=t[x[jvj+5]];
goto l3;
l9:x[jvj+11]=s[x[jvj+19]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+19];
pile[v[22]]=161; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(161,jvj+11,jvj+12)*/
if((x[jvj+12]!=x[jvj+6])) goto l10;
pile[v[22]]=122; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(122,jvj+11,jvj+13)*/
if((x[jvj+13]!=135)) goto l10;
pile[v[22]]=jvj+11; pile[WZ1]=122; pile[WZ2]=120; 
(*f[35])( );     /*CHGC1(jvj+11,122,120)*/
l10:x[jvj+19]=t[x[jvj+19]];
l8:if((x[jvj+19]>0)) goto l9;
pile[v[22]]=135; pile[WZ1]=jvj+6; 
(*f[71])( );     /*ENLV0(135,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=120; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(jvj+6,120,jvj+10)*/
goto l7;
l11:pile[v[22]]=135; pile[WZ1]=jvj+6; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(135,jvj+6,jvj+15)*/
x[jvj+10]=x[jvj+15] ;z[jvj+10]=z[jvj+15];
pile[v[22]]=248; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(248,jvj+10,jvj+14)*/
x[jvj+19]=x[jvj+14] ;z[jvj+19]=z[jvj+14];
goto l8;
l12:x[jvj+16]=s[x[jvj+20]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+20];
pile[v[22]]=161; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(161,jvj+16,jvj+17)*/
if((x[jvj+17]!=x[jvj+6])) goto l13;
pile[v[22]]=122; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(122,jvj+16,jvj+18)*/
if((x[jvj+18]!=134)) goto l13;
pile[v[22]]=jvj+16; pile[WZ1]=122; pile[WZ2]=120; 
(*f[35])( );     /*CHGC1(jvj+16,122,120)*/
l13:x[jvj+20]=t[x[jvj+20]];
goto l5;
}
