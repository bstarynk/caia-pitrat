#include "dx.h"
void STRT3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,N=0,V2=0,V19=0,V6=0,V15=0,V5=0,V4=0,V7=0,V11=0,X=0,V43=0,UR=0,V51=0,V49=0,I=0,V52=0,II=0,JJ=0,Q=0,V61=0,V64=0,V68=0,V55=0,V54=0,V56=0,V59=0,V58=0,V72=0,V73=0,V74=0,V76=0,V77=0,V60=0,V81=0;
int Y;
int NT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

Y=pile[v[22]]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[Y];
N=V1;
if((N>sepcte)) goto l1;
V2=s[x[Y]];
if((V2!=66)) goto l1;
pile[v[22]]=Y; 
(*f[59])( );     /*LECT0(Y)*/
l1:V19=r[N];
if((V19!=1)) goto l4;
V6=t[N];
V15=r[V6];
if((V15==2)) goto l2;
if((V15!=3)) goto l4;
if((N>sepcte)) goto l4;
V43=t[V6];
if((V43<=0)) goto l4;
X=V43;
l5:UR=32;
v[8]=0;
I=0;
l7:cpb[I]=(-1);
I++;
if((I<=32767)) goto l7;
pile[v[22]]=187; pile[WZ1]=240; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(187,240,jvj+4)*/
l20:if((x[jvj+4]>0)) goto l21;
II=0;
JJ=0;
l9:pile[v[22]]=X; 
(*f[677])( );     /*CORVA0(X)*/
pile[v[22]]=2; pile[WZ1]=1; pile[WZ2]=II; pile[WZ3]=JJ; 
(*f[739])( );     /*STRA1(2,1,II,JJ,Q,NT)*/
Q=pile[WZ4]; NT=pile[WZ5]; 
V60=g[27];
if((V60<=0)) goto l19;
V61=vg[27];
if((V61!=0)) goto l10;
if((V60<3)) goto l16;
l10:pile[v[22]]=27; pile[WZ1]=10635; pile[WZ2]=3; pile[WZ3]=jvj+3; 
(*f[291])( );     /*INTERP4(27,10635,3,jvj+3)*/
if((x[jvj+3]==135)) goto l15;
l19:v[0]=jvj; v[22]-=2; pile[v[22]+1]=NT; return;
l2:if((N>sepcte)) goto l4;
V5=t[V6];
V4=t[V5];
V7=r[V4];
if((V7==4)) goto l3;
if((V4<=0)) goto l4;
if((V7<=4)) goto l4;
if((V5<=0)) goto l4;
X=V4;
goto l5;
l3:if((V4<=0)) goto l4;
if((V5<=0)) goto l4;
V11=t[V4];
if((V11<=0)) goto l4;
X=V11;
goto l5;
l4:X=N;
goto l5;
l6:V49=0;
l8:V52=x[jvj+1];
II=V52;
JJ=V49;
goto l9;
l11:V64=N;
V68=V64;
pile[v[22]]=20; pile[WZ1]=V68; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(20,V68,V55,V54)*/
V54=pile[WZ3]; 
l12:V56=incon;
if((N>sepcte)) goto l13;
V56=V54;
l17:pile[v[22]]=41; pile[WZ1]=Q; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(41,Q,V56,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; pile[WZ1]=(-2322); 
(*f[37])( );     /*SRA0(V74,(-2322),V76)*/
V76=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NT; pile[WZ2]=V76; 
(*f[39])( );     /*SDX0(41,NT,V76,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V77,(-4670),V59)*/
V59=pile[WZ2]; 
V58=incon;
if((NT>1)) goto l14;
V58=V59;
l18:pile[v[22]]=V58; 
(*f[40])( );     /*SLG0(V58)*/
if((V60!=2)) goto l19;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l19;
l13:pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(41,N,V54,V56)*/
V56=pile[WZ3]; 
goto l17;
l14:pile[v[22]]=V59; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V59,83,V58)*/
V58=pile[WZ2]; 
goto l18;
l15:if((V60<4)) goto l16;
goto l19;
l16:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V72; pile[WZ2]=10635; 
(*f[98])( );     /*SRA3(135,V72,10635,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V73,125,V55)*/
V55=pile[WZ2]; 
V54=incon;
if((N<=sepcte)) goto l11;
V54=V55;
goto l12;
l21:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=331; pile[WZ1]=jvj+5; 
(*f[219])( );if(v[102]) goto l22;     /*FNDC2(331,jvj+5,V81)*/
V81=pile[WZ2]; 
if((V81!=UR)) goto l22;
x[jvj+1]=x[jvj+5] ;z[jvj+1]=z[jvj+5];
V49=incon;
pile[v[22]]=268; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+1,jvj+2)*/
V51=x[jvj+2];
V49=V51;
goto l8;
l22:x[jvj+4]=t[x[jvj+4]];
goto l20;
}
