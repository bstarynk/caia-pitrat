#include "dx.h"
void PBCMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=10131;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==310&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
vo[16]=x[N];vz[16]=0;
pile[v[22]]=367; pile[WZ1]=N; 
(*f[71])( );     /*ENLV0(367,N)*/
x[jvj+12]=vo[16];z[jvj+12]=vz[16];
pile[v[22]]=477; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(477,jvj+12,jvj+13)*/
l3:if((x[jvj+13]>0)) goto l4;
pile[v[22]]=455; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(455,jvj+12,jvj+16)*/
l6:if((x[jvj+16]>0)) goto l7;
pile[v[22]]=448; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(448,jvj+12,jvj+17)*/
l9:if((x[jvj+17]>0)) goto l10;
pile[v[22]]=284; pile[WZ1]=jvj+12; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(284,jvj+12,jvj+25)*/
l14:if((x[jvj+25]>0)) goto l15;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:pile[v[22]]=jvj+5; pile[WZ1]=N; 
(*f[693])( );     /*CMPL0(jvj+5,N)*/
l8:x[jvj+16]=t[x[jvj+16]];
goto l6;
l4:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=477)) goto l5;
pile[v[22]]=jvj+14; pile[WZ1]=N; 
(*f[693])( );     /*CMPL0(jvj+14,N)*/
l5:x[jvj+13]=t[x[jvj+13]];
goto l3;
l7:x[jvj+5]=s[x[jvj+16]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+16];
pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+7)*/
if((x[jvj+7]!=0)) goto l2;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[694])( );     /*VARIABLES0(jvj+5,jvj+6)*/
if((x[jvj+6]!=0)) goto l2;
goto l8;
l10:x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=448)) goto l11;
pile[v[22]]=111; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+18,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]==451)) goto l12;
if((x[jvj+21]!=128)) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+18; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+18,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]==61)) goto l11;
l1:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+2,jvj+4)*/
if((x[jvj+4]==128)) goto l11;
l13:pile[v[22]]=jvj+18; pile[WZ1]=N; 
(*f[693])( );     /*CMPL0(jvj+18,N)*/
l11:x[jvj+17]=t[x[jvj+17]];
goto l9;
l12:pile[v[22]]=436; pile[WZ1]=jvj+18; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(436,jvj+18,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=21)) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+18; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+18,jvj+24)*/
pile[v[22]]=jvj+18; pile[WZ1]=N; 
(*f[695])( );     /*CMPM0(jvj+18,N)*/
goto l11;
l15:x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=284)) goto l16;
pile[v[22]]=102; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+26,jvj+10)*/
pile[v[22]]=111; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+26,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=21)) goto l17;
pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]==21)) goto l16;
l17:pile[v[22]]=jvj+26; pile[WZ1]=N; 
(*f[695])( );     /*CMPM0(jvj+26,N)*/
l16:x[jvj+25]=t[x[jvj+25]];
goto l14;
}
