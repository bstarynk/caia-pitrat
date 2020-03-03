#include "dx.h"
void MONTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,M=0,V2=0,NT=0,V29=0,NN=0,V3=0,V7=0,V4=0,V8=0,V12=0,V9=0,V13=0,V17=0,V14=0,V18=0,V22=0,V19=0,V23=0,V27=0,V24=0,V37=0,V47=0,V56=0,V53=0,V55=0,V45=0,V34=0,V35=0;
int K,N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=10506;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1472&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
K=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=NN=incon;
V1=tm[K];
M=V1;
if((M>0)) goto l1;
if((M!=0)) goto l10;
V29=tt[K];
x[jvj+27]=V29 ;z[jvj+27]=(V29<=sepcte) ? V29 : 0;
x[jvj+2]=x[jvj+27] ;z[jvj+2]=z[jvj+27];
pile[v[22]]=855; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(855,jvj+2,NN)*/
NN=pile[WZ2]; 
l10:tu[K]=N;
V56=tn[K];
if((V56<=0)) goto l11;
tu[V56]=K;
l11:if(x[jvj+2]!=incon) goto l12;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:V2=knd[M];
NT=V2;
V3=tnd[M][0];
if((V3!=20)) goto l2;
if((NT<=0)) goto l2;
V7=ta1[K];
x[jvj+3]=V7 ;z[jvj+3]=(V7<=sepcte) ? V7 : 0;
pile[v[22]]=746; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(746,jvj+3,jvj+4)*/
pile[v[22]]=858; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(858,jvj+4,V4)*/
V4=pile[WZ2]; 
tu[V4]=K;
l2:V8=tnd[M][1];
if((V8!=20)) goto l3;
if((NT<=1)) goto l3;
V12=ta2[K];
x[jvj+5]=V12 ;z[jvj+5]=(V12<=sepcte) ? V12 : 0;
pile[v[22]]=746; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(746,jvj+5,jvj+6)*/
pile[v[22]]=858; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(858,jvj+6,V9)*/
V9=pile[WZ2]; 
tu[V9]=K;
l3:V13=tnd[M][2];
if((V13!=20)) goto l4;
if((NT<=2)) goto l4;
V17=ta3[K];
x[jvj+7]=V17 ;z[jvj+7]=(V17<=sepcte) ? V17 : 0;
pile[v[22]]=746; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(746,jvj+7,jvj+8)*/
pile[v[22]]=858; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(858,jvj+8,V14)*/
V14=pile[WZ2]; 
tu[V14]=K;
l4:V18=tnd[M][3];
if((V18!=20)) goto l5;
if((NT<=3)) goto l5;
V22=ta4[K];
x[jvj+9]=V22 ;z[jvj+9]=(V22<=sepcte) ? V22 : 0;
pile[v[22]]=746; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(746,jvj+9,jvj+10)*/
pile[v[22]]=858; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(858,jvj+10,V19)*/
V19=pile[WZ2]; 
tu[V19]=K;
l5:V23=tnd[M][4];
if((V23!=20)) goto l10;
if((NT<=4)) goto l10;
V27=ta5[K];
x[jvj+11]=V27 ;z[jvj+11]=(V27<=sepcte) ? V27 : 0;
pile[v[22]]=746; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(746,jvj+11,jvj+12)*/
pile[v[22]]=858; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(858,jvj+12,V24)*/
V24=pile[WZ2]; 
tu[V24]=K;
goto l10;
l12:if(NN!=incon) goto l13;
goto l19;
l13:if((NN>1)) goto l14;
if((NN>0)) goto l18;
goto l19;
l14:V53=ta2[K];
x[jvj+22]=V53 ;z[jvj+22]=(V53<=sepcte) ? V53 : 0;
pile[v[22]]=852; pile[WZ1]=jvj+2; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(852,jvj+2,jvj+21)*/
if((x[jvj+21]!=20)) goto l18;
pile[v[22]]=1081; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1081,jvj+22,jvj+23)*/
l15:if((x[jvj+23]>0)) goto l16;
pile[v[22]]=746; pile[WZ1]=jvj+22; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(746,jvj+22,jvj+17)*/
pile[v[22]]=858; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(858,jvj+17,V45)*/
V45=pile[WZ2]; 
tu[V45]=K;
pile[v[22]]=159; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(159,jvj+17,jvj+18)*/
l8:if((x[jvj+18]<=0)) goto l18;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+19,jvj+20)*/
pile[v[22]]=642; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+20,V47)*/
V47=pile[WZ2]; 
tu[V47]=K;
l9:x[jvj+18]=t[x[jvj+18]];
goto l8;
l16:x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=642; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(642,jvj+24,V55)*/
V55=pile[WZ2]; 
tu[V55]=K;
l17:x[jvj+23]=t[x[jvj+23]];
goto l15;
l18:pile[v[22]]=849; pile[WZ1]=jvj+2; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(849,jvj+2,jvj+25)*/
if((x[jvj+25]!=20)) goto l19;
V34=ta1[K];
x[jvj+26]=V34 ;z[jvj+26]=(V34<=sepcte) ? V34 : 0;
pile[v[22]]=746; pile[WZ1]=jvj+26; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(746,jvj+26,jvj+13)*/
pile[v[22]]=858; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(858,jvj+13,V35)*/
V35=pile[WZ2]; 
tu[V35]=K;
pile[v[22]]=159; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(159,jvj+13,jvj+14)*/
l6:if((x[jvj+14]<=0)) goto l19;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+15,jvj+16)*/
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+16,V37)*/
V37=pile[WZ2]; 
tu[V37]=K;
l7:x[jvj+14]=t[x[jvj+14]];
goto l6;
}
