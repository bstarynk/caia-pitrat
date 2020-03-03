#include "dx.h"
void STRT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V67=0,V3=0,V2=0,N=0,V1=0,V52=0,V50=0,V20=0,V7=0,V16=0,V6=0,V5=0,V8=0,V12=0,X=0,V44=0,I=0,V53=0,II=0,JJ=0,Q=0,NT=0,V62=0,V65=0,V71=0,V56=0,V55=0,V57=0,V60=0,V59=0,V75=0,V76=0,V77=0,V79=0,V80=0,V61=0,V84=0;
int Y,UR,AT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

Y=pile[v[22]]; UR=pile[v[22]+1]; AT=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
X=N=NT=Q=incon;
pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ3]=jvj+1; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(Y,AT,V67,jvj+1)*/
V67=pile[WZ2]; 
V3=V67;
V2=V3;
N=V2;
if((N>sepcte)) goto l2;
V1=s[x[Y]];
if((V1!=66)) goto l2;
(*f[59])( );     /*LECT0(Y)*/
l2:V20=r[N];
if((V20!=1)) goto l5;
V7=t[N];
V16=r[V7];
if((V16==2)) goto l3;
if((V16!=3)) goto l5;
if((N>sepcte)) goto l5;
V44=t[V7];
if((V44<=0)) goto l5;
X=V44;
l6:v[8]=0;
I=0;
l7:cpb[I]=(-1);
I++;
if((I<=32767)) goto l7;
pile[v[22]]=187; pile[WZ1]=240; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(187,240,jvj+5)*/
l25:if((x[jvj+5]>0)) goto l26;
II=0;
JJ=0;
l9:if(X!=incon) goto l10;
l21:if(N!=incon) goto l22;
l24:v[0]=jvj; v[22]-=3; return;
l1:V50=0;
l8:V53=x[jvj+2];
II=V53;
JJ=V50;
goto l9;
l3:if((N>sepcte)) goto l5;
V6=t[V7];
V5=t[V6];
V8=r[V5];
if((V8==4)) goto l4;
if((V5<=0)) goto l5;
if((V8<=4)) goto l5;
if((V6<=0)) goto l5;
X=V5;
goto l6;
l4:if((V5<=0)) goto l5;
if((V6<=0)) goto l5;
V12=t[V5];
if((V12<=0)) goto l5;
X=V12;
goto l6;
l5:X=N;
goto l6;
l10:if((UR==43)) goto l21;
pile[v[22]]=X; 
(*f[677])( );     /*CORVA0(X)*/
pile[v[22]]=2; pile[WZ1]=1; pile[WZ2]=II; pile[WZ3]=JJ; 
(*f[739])( );     /*STRA1(2,1,II,JJ,Q,NT)*/
Q=pile[WZ4]; NT=pile[WZ5]; 
goto l21;
l12:V65=N;
V71=V65;
pile[v[22]]=20; pile[WZ1]=V71; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(20,V71,V56,V55)*/
V55=pile[WZ3]; 
l13:V57=incon;
if((N>sepcte)) goto l14;
V57=V55;
l18:pile[v[22]]=41; pile[WZ1]=Q; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(41,Q,V57,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; pile[WZ1]=(-2322); 
(*f[37])( );     /*SRA0(V77,(-2322),V79)*/
V79=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NT; pile[WZ2]=V79; 
(*f[39])( );     /*SDX0(41,NT,V79,V80)*/
V80=pile[WZ3]; 
pile[v[22]]=V80; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V80,(-4670),V60)*/
V60=pile[WZ2]; 
V59=incon;
if((NT>1)) goto l15;
V59=V60;
l19:pile[v[22]]=V59; 
(*f[40])( );     /*SLG0(V59)*/
if((V61!=2)) goto l24;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l24;
l14:pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(41,N,V55,V57)*/
V57=pile[WZ3]; 
goto l18;
l15:pile[v[22]]=V60; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V60,83,V59)*/
V59=pile[WZ2]; 
goto l19;
l16:if((V61<4)) goto l17;
goto l24;
l17:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V75; pile[WZ2]=10635; 
(*f[98])( );     /*SRA3(135,V75,10635,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=V76; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V76,125,V56)*/
V56=pile[WZ2]; 
V55=incon;
if((N<=sepcte)) goto l12;
V55=V56;
goto l13;
l20:V61=g[27];
if((V61<=0)) goto l24;
V62=vg[27];
if((V62!=0)) goto l11;
if((V61<3)) goto l17;
l11:pile[v[22]]=27; pile[WZ1]=10635; pile[WZ2]=1; pile[WZ3]=jvj+4; 
(*f[291])( );     /*INTERP4(27,10635,1,jvj+4)*/
if((x[jvj+4]==135)) goto l16;
goto l24;
l22:if(NT!=incon) goto l23;
goto l24;
l23:if(Q!=incon) goto l20;
goto l24;
l26:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=331; pile[WZ1]=jvj+6; 
(*f[219])( );if(v[102]) goto l27;     /*FNDC2(331,jvj+6,V84)*/
V84=pile[WZ2]; 
if((V84!=UR)) goto l27;
x[jvj+2]=x[jvj+6] ;z[jvj+2]=z[jvj+6];
V50=incon;
pile[v[22]]=268; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(268,jvj+2,jvj+3)*/
V52=x[jvj+3];
V50=V52;
goto l8;
l27:x[jvj+5]=t[x[jvj+5]];
goto l25;
}
