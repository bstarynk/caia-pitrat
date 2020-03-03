#include "dx.h"
void Z64Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V71=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=15565;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1873&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(543,NNNY,jvj+5)*/
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==48)) goto l3;
if((x[jvj+7]==55)) goto l6;
if((x[jvj+7]==50)) goto l9;
if((x[jvj+7]!=1029)) goto l21;
pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+18)*/
x[jvj+36]=x[jvj+18] ;z[jvj+36]=z[jvj+18];
l12:if((x[jvj+36]>0)) goto l13;
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+38]=x[jvj+18] ;z[jvj+38]=z[jvj+18];
l23:if((x[jvj+38]>0)) goto l24;
l17:pile[v[22]]=jvj+4; pile[WZ1]=jvj+24; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+24)*/
l18:if((x[jvj+18]<=0)) goto l21;
x[jvj+25]=s[x[jvj+18]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+18];
if((x[NNNY]!=x[jvj+25])) goto l19;
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]!=135)) goto l19;
NNNT=92;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+24; pile[WZ2]=107; pile[WZ3]=jvj+30; 
(*f[301])( );     /*TRI11(jvj+29,jvj+24,107,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+30,22,100,jvj+27)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+27; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+5,jvj+27,NNNX)*/
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l3:pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+8)*/
l4:if((x[jvj+8]<=0)) goto l21;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
if((x[NNNY]!=x[jvj+9])) goto l5;
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=135)) goto l5;
x[NNNX]=x[jvj+5] ;z[NNNX]=z[jvj+5];
NNNT=13;
l29:V71=x[NNNY];
pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=V71; 
(*f[134])( );     /*OTA0(107,jvj+5,V71)*/
pile[v[22]]=191; 
(*f[71])( );     /*ENLV0(191,jvj+5)*/
goto l22;
l5:x[jvj+8]=t[x[jvj+8]];
goto l4;
l6:pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+11)*/
l7:if((x[jvj+11]<=0)) goto l21;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=135)) goto l8;
NNNT=30;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+14)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+14; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+5,jvj+14,NNNX)*/
goto l22;
l8:x[jvj+11]=t[x[jvj+11]];
goto l7;
l9:pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+15)*/
l10:if((x[jvj+15]<=0)) goto l21;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
if((x[NNNY]!=x[jvj+16])) goto l11;
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=135)) goto l11;
x[NNNX]=x[jvj+5] ;z[NNNX]=z[jvj+5];
NNNT=68;
goto l29;
l11:x[jvj+15]=t[x[jvj+15]];
goto l10;
l13:x[jvj+19]=s[x[jvj+36]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+36];
if((x[NNNY]!=x[jvj+19])) goto l14;
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=135)) goto l14;
x[jvj+37]=x[jvj+18] ;z[jvj+37]=z[jvj+18];
l15:if((x[jvj+37]<=0)) goto l14;
x[jvj+21]=s[x[jvj+37]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+37];
if((x[jvj+19]==x[jvj+21])) goto l16;
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=135)) goto l16;
NNNT=81;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+23)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+23; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+5,jvj+23,NNNX)*/
goto l22;
l14:x[jvj+36]=t[x[jvj+36]];
goto l12;
l16:x[jvj+37]=t[x[jvj+37]];
goto l15;
l19:x[jvj+18]=t[x[jvj+18]];
goto l18;
l21:x[NNNX]=NNNT=incon;
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l24:x[jvj+31]=s[x[jvj+38]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+38];
pile[v[22]]=jvj+31; pile[WZ1]=NNNY; pile[WZ2]=jvj+32; 
(*f[760])( );     /*MEMEX0(jvj+31,NNNY,jvj+32)*/
if((x[jvj+32]==135)) goto l25;
x[jvj+38]=t[x[jvj+38]];
goto l23;
l25:x[jvj+33]=0 ;z[jvj+33]=0;
x[jvj+39]=x[jvj+18] ;z[jvj+39]=z[jvj+18];
l26:if((x[jvj+39]>0)) goto l27;
x[jvj+35]=x[jvj+33] ;z[jvj+35]=z[jvj+33];
l1:if((x[jvj+35]<=0)) goto l17;
x[jvj+2]=s[x[jvj+35]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+35];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[987])( );if(v[102]) goto l2;     /*NEGEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+3)*/
l2:x[jvj+35]=t[x[jvj+35]];
goto l1;
l27:x[jvj+34]=s[x[jvj+39]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+39];
if((x[jvj+34]==x[jvj+31])) goto l28;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+33,jvj+34)*/
l28:x[jvj+39]=t[x[jvj+39]];
goto l26;
}
