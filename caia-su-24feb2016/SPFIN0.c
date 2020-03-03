#include "dx.h"
void SPFIN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V5=0,V6=0,V8=0,V9=0,V7=0,V3=0,V4=0,V2=0,V10=0,W=0,V15=0,Q=0,V33=0,V23=0,V24=0,V26=0,V27=0,V25=0,V21=0,V22=0,V20=0,V28=0,V42=0,V38=0,V39=0,V40=0,V36=0,V37=0,V35=0,V41=0,P=0,V44=0,V54=0,V60=0,V50=0,V51=0,V52=0,V48=0,V49=0,V47=0,V53=0,V45=0,S=0,NN=0,V64=0,V65=0,T=0,V69=0,V82=0,V80=0,V74=0,V75=0,V76=0,V72=0,V73=0,V71=0,V77=0;
int I,X;
int J;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=10239;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2149&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[15];z[jvj+2]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(583,jvj+2,jvj+3)*/
pile[v[22]]=708; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(708,jvj+3,jvj+4)*/
if(x[jvj+4]!=68&&x[jvj+4]!=729) goto l2;
pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(241,51,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=(-1719); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-1719),I,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V5,91,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=(-2521); pile[WZ1]=V6; 
(*f[64])( );     /*SRA2((-2521),V6,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=V8; 
(*f[64])( );     /*SRA2(V14,V8,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V9; 
(*f[99])( );     /*SPM0(1,V9,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V7,93,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V3,61,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=(-1936); pile[WZ1]=V4; 
(*f[64])( );     /*SRA2((-1936),V4,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V2,59,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V10,32,W)*/
W=pile[WZ2]; 
pile[v[22]]=297; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(297,jvj+2,jvj+5)*/
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(365,jvj+5,jvj+6)*/
for(i=x[jvj+6],V15=0;i>0;i=t[i],V15++)  ;
if((V15==1)) goto l1;
if((V15<=1)) goto l2;
pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(241,51,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=(-1719); pile[WZ1]=W; 
(*f[64])( );     /*SRA2((-1719),W,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V23,91,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=(-2521); pile[WZ1]=V24; 
(*f[64])( );     /*SRA2((-2521),V24,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=V26; 
(*f[64])( );     /*SRA2(V33,V26,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=2; pile[WZ1]=V27; 
(*f[99])( );     /*SPM0(2,V27,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V25,93,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V21,61,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=(-1936); pile[WZ1]=V22; 
(*f[64])( );     /*SRA2((-1936),V22,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V20,59,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V28,32,Q)*/
Q=pile[WZ2]; 
l3:x[jvj+7]=vo[15];z[jvj+7]=vz[15];
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+7,V42)*/
V42=pile[WZ2]; 
if((V42<=0)) goto l4;
pile[v[22]]=(-2491); pile[WZ1]=Q; 
(*f[64])( );     /*SRA2((-2491),Q,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V38,91,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V39; 
(*f[99])( );     /*SPM0(0,V39,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V40,93,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V36,61,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=(-2521); pile[WZ1]=V37; 
(*f[64])( );     /*SRA2((-2521),V37,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V35,59,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V41,32,P)*/
P=pile[WZ2]; 
l5:V44=incon;
x[jvj+8]=vo[15];z[jvj+8]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(583,jvj+8,jvj+9)*/
pile[v[22]]=133; pile[WZ1]=324; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(133,324,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l6;
l7:pile[v[22]]=213; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(213,jvj+8,jvj+11)*/
for(i=x[jvj+11],V54=0;i>0;i=t[i],V54++)  ;
V44=V54;
l8:V45=incon;
if((V44<=0)) goto l9;
pile[v[22]]=241; pile[WZ1]=458; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(241,458,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=P; 
(*f[64])( );     /*SRA2((-2491),P,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V50,91,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=22; pile[WZ1]=V51; 
(*f[99])( );     /*SPM0(22,V51,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V52; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V52,93,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V60; pile[WZ1]=V48; 
(*f[64])( );     /*SRA2(V60,V48,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=V49; 
(*f[99])( );     /*SPM0(V44,V49,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V47,59,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V53,32,V45)*/
V45=pile[WZ2]; 
l10:S=V45;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,X,jvj+12)*/
if((x[jvj+12]!=85)) goto l11;
x[jvj+13]=vo[15];z[jvj+13]=vz[15];
pile[v[22]]=246; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(246,jvj+13,NN)*/
NN=pile[WZ2]; 
V64=knd[NN];
V65=knr[NN];
pile[v[22]]=NN; pile[WZ1]=V64; pile[WZ2]=S; pile[WZ3]=V65; 
(*f[2199])( );     /*SPFINS0(NN,V64,S,V65,T)*/
T=pile[WZ4]; 
l12:x[jvj+14]=vo[15];z[jvj+14]=vz[15];
pile[v[22]]=371; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(371,jvj+14,jvj+15)*/
if((x[jvj+15]==68)) goto l13;
if((x[jvj+15]!=67)) goto l14;
pile[v[22]]=241; pile[WZ1]=80; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(241,80,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,X,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+16,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=T; 
(*f[64])( );     /*SRA2((-2491),T,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=V74; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V74,91,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=V75; 
(*f[99])( );     /*SPM0(102,V75,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=V76; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V76,93,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=V72; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V72,61,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=V80; pile[WZ1]=V73; 
(*f[99])( );     /*SPM0(V80,V73,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V71,59,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=V82; pile[WZ1]=V77; 
(*f[64])( );     /*SRA2(V82,V77,J)*/
J=pile[WZ2]; 
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:Q=W;
goto l3;
l2:Q=I;
goto l3;
l4:P=Q;
goto l5;
l6:V44=100;
goto l8;
l9:V45=P;
goto l10;
l11:T=S;
goto l12;
l13:pile[v[22]]=241; pile[WZ1]=80; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(241,80,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=V69; pile[WZ1]=T; 
(*f[64])( );     /*SRA2(V69,T,J)*/
J=pile[WZ2]; 
goto l15;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
