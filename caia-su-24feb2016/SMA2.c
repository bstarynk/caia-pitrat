#include "dx.h"
void SMA2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,II=0,V2=0,P=0,V10=0,J=0,V11=0,T=0,TT=0,V3=0,V5=0,V9=0,V7=0,V15=0,V=0,V14=0,V16=0,V17=0,V19=0,V18=0;
int I,HH,N;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; HH=pile[v[22]+1]; N=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
J=T=TT=incon;
V1=I+1;
II=V1;
V2=bh[v[1]][II];
P=V2;
if((P==96)) goto l1;
if(P!=36&&P!=64&&P!=38&&P!=124&&P!=34&&P!=(-80)&&P!=35) goto l8;
J=II;
T=P;
TT=P;
l2:if((TT==64)) goto l3;
if((TT==36)) goto l4;
if((TT==38)) goto l5;
if((TT==34)) goto l6;
if((TT==(-80))) goto l7;
if((TT!=35)) goto l8;
x[jvj+3]=1691 ;z[jvj+3]=1691;
l9:if((x[N]==66)) goto l10;
x[jvj+4]=x[N] ;z[jvj+4]=z[N];
l13:if(J!=incon) goto l14;
l19:v[0]=jvj; v[22]-=4; v[102]=1;return;
l1:V10=II+1;
J=V10;
V11=bh[v[1]][J];
T=P;
TT=V11;
goto l2;
l3:x[jvj+3]=1389 ;z[jvj+3]=1389;
goto l9;
l4:x[jvj+3]=1387 ;z[jvj+3]=1387;
goto l9;
l5:x[jvj+3]=1388 ;z[jvj+3]=1388;
goto l9;
l6:x[jvj+3]=1390 ;z[jvj+3]=1390;
goto l9;
l7:x[jvj+3]=1391 ;z[jvj+3]=1391;
goto l9;
l8:x[jvj+3]=1392 ;z[jvj+3]=1392;
goto l9;
l10:x[jvj+4]=67 ;z[jvj+4]=67;
goto l13;
l11:if((x[N]!=66)) goto l16;
pile[v[22]]=J; 
(*f[107])( );     /*CRC0(J,V3)*/
V3=pile[WZ1]; 
V5=bh[v[1]][V3];
if(V5!=32&&V5!=44&&V5!=93&&V5!=41) goto l19;
l16:V7=J+1;
pile[v[22]]=jvj+3; pile[WZ1]=V7; pile[WZ2]=J; pile[WZ3]=T; pile[WZ4]=TT; pile[WZ5]=jvj+4; pile[v[22]+6]=HH; pile[v[22]+7]=jvj+1; 
(*f[252])( );if(v[102]) goto l19;     /*SMB0(jvj+3,V7,J,T,TT,jvj+4,HH,jvj+1)*/
x[jvj+7]=incon;
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+1,jvj+2)*/
x[jvj+7]=x[jvj+2] ;z[jvj+7]=z[jvj+2];
l17:x[R]=x[jvj+7] ;z[R]=z[jvj+7];
pile[v[22]]=163; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(163,jvj+1,V9)*/
V9=pile[WZ2]; 
if((V9!=HH)) goto l18;
pile[v[22]]=77; pile[WZ1]=130; pile[WZ2]=(-1); 
(*f[186])( );     /*BTC0(77,130,(-1))*/
l18:if((x[jvj+4]!=397)) goto l20;
if((P!=38)) goto l20;
x[jvj+5]=vo[20];z[jvj+5]=vz[20];
V14=x[R];
pile[v[22]]=jvj+5; pile[WZ1]=667; pile[WZ2]=V14; 
(*f[43])( );     /*CHGC2(jvj+5,667,V14)*/
pile[v[22]]=II; pile[WZ1]=(-80); pile[WZ2]=397; pile[WZ3]=jvj+6; 
(*f[78])( );if(v[102]) goto l20;     /*SMA0(II,(-80),397,jvj+6)*/
pile[v[22]]=0; pile[WZ1]=(-8396); 
(*f[37])( );     /*SRA0(0,(-8396),V15)*/
V15=pile[WZ2]; 
V16=V15-1;
V17=0;
l21:if((V17<=V16)) goto l22;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
pile[v[22]]=0; 
(*f[258])( );     /*SMV1(0,V)*/
V=pile[WZ1]; 
pile[v[22]]=R; pile[WZ1]=905; pile[WZ2]=V; 
(*f[177])( );     /*CHGC4(R,905,V)*/
l20:v[0]=jvj; v[22]-=4; v[102]=0;return;
l12:x[jvj+7]=x[jvj+1] ;z[jvj+7]=z[jvj+1];
goto l17;
l14:if(T!=incon) goto l15;
goto l19;
l15:if(TT!=incon) goto l11;
goto l19;
l22:V19=c[0][V17];
V18=V19;
putchar(V18);
V17++;
goto l21;
}
