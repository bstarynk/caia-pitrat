#include "dx.h"
void CREPERM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,NA=0,I=0,J=0,K=0,L=0,V3=0,V2=0,NN=0,V4=0,V6=0,V8=0,V10=0,V5=0,V7=0,V9=0,V11=0,V22=0,V24=0,V21=0,V23=0,V25=0,V27=0,V14=0,V16=0,V18=0,V13=0,V15=0,V17=0,V19=0,V28=0,V29=0,V30=0,V31=0,V32=0,V37=0,V38=0,V40=0,V42=0,V44=0,V46=0,V34=0,V35=0,V36=0,V48=0,V50=0,V51=0,V53=0,V54=0,V56=0,V57=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );


WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+1; 
(*f[46])( );     /*TRI0(0,117,jvj+1)*/
I=0;
l1:J=0;
l3:if((J==I)) goto l2;
K=0;
l5:if((K==I)) goto l4;
if((K==J)) goto l4;
L=0;
l7:if((L==I)) goto l6;
if((L==J)) goto l6;
if((L==K)) goto l6;
pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+1,V1)*/
V1=pile[WZ2]; 
NA=V1;
h[NA][0]=I;
h[NA][1]=J;
h[NA][2]=K;
h[NA][3]=L;
l8:pile[v[22]]=jvj+1; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+1,117,1)*/
l6:L++;
if((L<=3)) goto l7;
l4:K++;
if((K<=3)) goto l5;
l2:J++;
if((J<=3)) goto l3;
I++;
if((I<=3)) goto l1;
pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+1,V3)*/
V3=pile[WZ2]; 
V2=V3-1;
NN=V2;
V4=0;
l9:if((V4<=NN)) goto l10;
if((v[193]<=0)) goto l21;
V28=0;
l20:if((V28>NN)) goto l21;
V29=h[V28][3];
V30=h[V28][2];
V31=h[V28][1];
V32=h[V28][0];
pile[v[22]]=0; pile[WZ1]=(-9055); 
(*f[37])( );     /*SRA0(0,(-9055),V37)*/
V37=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V28; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(41,V28,V37,V38)*/
V38=pile[WZ3]; 
pile[WZ1]=V32; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(41,V32,V38,V40)*/
V40=pile[WZ3]; 
pile[WZ1]=V31; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(41,V31,V40,V42)*/
V42=pile[WZ3]; 
pile[WZ1]=V30; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(41,V30,V42,V44)*/
V44=pile[WZ3]; 
pile[WZ1]=V29; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(41,V29,V44,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=V46; 
(*f[40])( );     /*SLG0(V46)*/
V34=qt[V28];
V35=td[V28];
V36=du[V28];
pile[v[22]]=41; pile[WZ1]=V28; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V28,0,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; pile[WZ1]=(-9049); 
(*f[37])( );     /*SRA0(V48,(-9049),V50)*/
V50=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V36; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(41,V36,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; pile[WZ1]=(-9050); 
(*f[37])( );     /*SRA0(V51,(-9050),V53)*/
V53=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V35; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(41,V35,V53,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; pile[WZ1]=(-9051); 
(*f[37])( );     /*SRA0(V54,(-9051),V56)*/
V56=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V34; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(41,V34,V56,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; 
(*f[40])( );     /*SLG0(V57)*/
V28++;
goto l20;
l10:V6=h[V4][2];
V8=h[V4][3];
V10=h[V4][0];
V5=0;
l11:if((V5<=NN)) goto l13;
V22=h[V4][0];
V24=h[V4][1];
V21=0;
l14:if((V21<=NN)) goto l16;
V14=h[V4][0];
V16=h[V4][3];
V18=h[V4][1];
V13=0;
l17:if((V13<=NN)) goto l19;
V4++;
goto l9;
l13:V7=h[V5][2];
if((V6!=V7)) goto l12;
V9=h[V5][3];
if((V8!=V9)) goto l12;
V11=h[V5][1];
if((V10!=V11)) goto l12;
if((V4==V5)) goto l12;
du[V4]=V5;
l12:V5++;
goto l11;
l16:V23=h[V21][0];
if((V22!=V23)) goto l15;
V25=h[V21][1];
if((V24!=V25)) goto l15;
V27=h[V21][3];
if((V6!=V27)) goto l15;
if((V4==V21)) goto l15;
qt[V4]=V21;
l15:V21++;
goto l14;
l19:V15=h[V13][0];
if((V14!=V15)) goto l18;
V17=h[V13][3];
if((V16!=V17)) goto l18;
V19=h[V13][2];
if((V18!=V19)) goto l18;
if((V4==V13)) goto l18;
td[V4]=V13;
l18:V13++;
goto l17;
l21:v[0]=jvj; return;
}
