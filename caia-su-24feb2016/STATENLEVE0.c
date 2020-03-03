#include "dx.h"
void STATENLEVE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V7=0,V3=0,V17=0,V19=0,V14=0,IN=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=11637;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1278&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=vo[16];z[jvj+4]=vz[16];
pile[v[22]]=244; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(244,jvj+4,V4)*/
V4=pile[WZ2]; 
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+5,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(509,jvj+4,jvj+6)*/
l1:if((x[jvj+6]<=0)) goto l5;
x[jvj+2]=s[x[jvj+6]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+6];
pile[v[22]]=244; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(244,jvj+2,V3)*/
V3=pile[WZ2]; 
if((V3>V4)) goto l2;
pile[v[22]]=1070; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1070,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l2;
l11:pile[v[22]]=V7; pile[WZ1]=858; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(V7,858,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=1278; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,1278,246,jvj+21)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=11637; pile[WZ4]=jvj+21; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(158,1,218,11637,jvj+21,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+2; 
(*f[966])( );     /*ELIMINE0(jvj+7,jvj+2)*/
l2:x[jvj+6]=t[x[jvj+6]];
goto l1;
l3:pile[v[22]]=jvj+8; 
(*f[824])( );     /*ENLISENV0(jvj+8)*/
l9:x[jvj+22]=t[x[jvj+22]];
l7:if((x[jvj+22]>0)) goto l8;
x[jvj+15]=t[x[jvj+15]];
l6:if((x[jvj+15]<=0)) goto l10;
x[jvj+8]=s[x[jvj+15]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+15];
pile[v[22]]=159; pile[WZ1]=jvj+8; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(159,jvj+8,jvj+16)*/
x[jvj+22]=x[jvj+16] ;z[jvj+22]=z[jvj+16];
goto l7;
l4:pile[v[22]]=jvj+8; 
(*f[824])( );     /*ENLISENV0(jvj+8)*/
if((x[jvj+10]==606)) goto l9;
pile[v[22]]=242; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(242,jvj+10,jvj+11)*/
pile[v[22]]=jvj+8; pile[WZ1]=715; 
(*f[35])( );     /*CHGC1(jvj+8,715,jvj+11)*/
pile[WZ1]=jvj+12; 
(*f[826])( );     /*AJOULISENV0(jvj+8,jvj+12)*/
pile[WZ1]=1046; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(jvj+8,1046,jvj+10)*/
goto l9;
l5:x[jvj+13]=vo[16];z[jvj+13]=vz[16];
pile[v[22]]=1038; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(1038,jvj+13,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=244; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(244,jvj+13,V19)*/
V19=pile[WZ2]; 
x[jvj+12]=vo[13];z[jvj+12]=vz[13];
pile[v[22]]=717; pile[WZ1]=jvj+12; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(717,jvj+12,jvj+14)*/
pile[v[22]]=715; pile[WZ1]=jvj+14; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(715,jvj+14,jvj+10)*/
pile[v[22]]=718; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(718,jvj+14,jvj+15)*/
goto l6;
l8:x[jvj+17]=s[x[jvj+22]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+22];
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+17,jvj+18)*/
pile[v[22]]=244; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(244,jvj+18,V14)*/
V14=pile[WZ2]; 
IN=V14;
if((IN<=V17)) goto l3;
if((IN>V19)) goto l9;
pile[v[22]]=1046; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1046,jvj+8,jvj+9)*/
goto l9;
l10:x[jvj+1]=incon; v[0]=jvj; return;
}
