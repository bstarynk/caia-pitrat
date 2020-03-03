#include "dx.h"
void SMA3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,P=0,V11=0,V19=0,V18=0,V14=0,V22=0,J=0,V23=0,T=0,TT=0,V24=0,I=0,HH=0,V3=0,V5=0,V9=0,KK=0,NR=0,V16=0,V17=0,V7=0,V13=0,V12=0,V27=0,V2=0;
int II,K,N;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

II=pile[v[22]]; K=pile[v[22]+1]; N=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
J=T=TT=HH=incon;
V1=bh[v[1]][II];
P=V1;
if((P==96)) goto l10;
if(P!=36&&P!=64&&P!=38&&P!=124&&P!=34&&P!=(-80)&&P!=35) goto l11;
J=II;
T=P;
TT=P;
l11:V24=II-1;
I=V24;
if(J==incon) goto l12;
l16:if(TT!=incon) goto l17;
l23:x[jvj+3]=1392 ;z[jvj+3]=1392;
l24:if((x[N]==66)) goto l25;
x[jvj+4]=x[N] ;z[jvj+4]=z[N];
l26:pile[v[22]]=130; pile[WZ1]=77; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,77,HH)*/
HH=pile[WZ2]; 
l8:V14=incon;
if((P==(-75))) goto l9;
V14=sepfacts;
l1:V11=incon;
if((K!=36)) goto l4;
if((P<48)) goto l38;
if((P>57)) goto l38;
V13=135;
l2:if((V13==135)) goto l3;
l4:if(P!=(-75)&&P!=126) goto l7;
V19=II+1;
V18=bh[v[1]][V19];
if((V18<48)) goto l39;
if((V18>57)) goto l39;
V12=135;
l5:if((V12==135)) goto l6;
l7:if(V11==incon) goto l30;
l29:if((V11==(-99999998))) goto l30;
pile[v[22]]=V11; 
(*f[126])( );     /*LND2(V11,NR,KK)*/
NR=pile[WZ1]; KK=pile[WZ2]; 
V16=NR+V14;
x[jvj+5]=V16 ;z[jvj+5]=(V16<=sepcte) ? V16 : 0;
V17=r[x[jvj+5]];
if((V17!=1)) goto l30;
x[R]=x[jvj+5] ;z[R]=z[jvj+5];
l37:v[0]=jvj; v[22]-=4; v[102]=0;return;
l3:V11=II;
goto l4;
l6:V11=V19;
goto l29;
l9:V14=sephist;
goto l1;
l10:V22=II+1;
J=V22;
V23=bh[v[1]][J];
T=P;
TT=V23;
goto l11;
l12:if(T==incon) goto l13;
goto l16;
l13:if(TT==incon) goto l40;
l17:if((TT==64)) goto l18;
if((TT==36)) goto l19;
if((TT==38)) goto l20;
if((TT==34)) goto l21;
if((TT==(-80))) goto l22;
if((TT!=35)) goto l23;
x[jvj+3]=1691 ;z[jvj+3]=1691;
goto l24;
l15:J=I;
T=K;
TT=K;
goto l17;
l18:x[jvj+3]=1389 ;z[jvj+3]=1389;
goto l24;
l19:x[jvj+3]=1387 ;z[jvj+3]=1387;
goto l24;
l20:x[jvj+3]=1388 ;z[jvj+3]=1388;
goto l24;
l21:x[jvj+3]=1390 ;z[jvj+3]=1390;
goto l24;
l22:x[jvj+3]=1391 ;z[jvj+3]=1391;
goto l24;
l25:x[jvj+4]=67 ;z[jvj+4]=67;
goto l26;
l27:if((x[N]!=66)) goto l34;
pile[v[22]]=J; 
(*f[107])( );     /*CRC0(J,V3)*/
V3=pile[WZ1]; 
V5=bh[v[1]][V3];
if(V5!=32&&V5!=44&&V5!=93&&V5!=41) goto l36;
l34:V7=J+1;
pile[v[22]]=jvj+3; pile[WZ1]=V7; pile[WZ2]=J; pile[WZ3]=T; pile[WZ4]=TT; pile[WZ5]=jvj+4; pile[v[22]+6]=HH; pile[v[22]+7]=jvj+1; 
(*f[252])( );if(v[102]) goto l36;     /*SMB0(jvj+3,V7,J,T,TT,jvj+4,HH,jvj+1)*/
x[jvj+6]=incon;
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+1,jvj+2)*/
x[jvj+6]=x[jvj+2] ;z[jvj+6]=z[jvj+2];
l35:x[R]=x[jvj+6] ;z[R]=z[jvj+6];
pile[v[22]]=163; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(163,jvj+1,V9)*/
V9=pile[WZ2]; 
if((V9!=HH)) goto l37;
pile[v[22]]=77; pile[WZ1]=130; pile[WZ2]=(-1); 
(*f[186])( );     /*BTC0(77,130,(-1))*/
goto l37;
l28:x[jvj+6]=x[jvj+1] ;z[jvj+6]=z[jvj+1];
goto l35;
l30:if(J!=incon) goto l31;
l36:v[0]=jvj; v[22]-=4; v[102]=1;return;
l31:if(T!=incon) goto l32;
goto l36;
l32:if(TT!=incon) goto l33;
goto l36;
l33:if(HH!=incon) goto l27;
goto l36;
l38:V13=134;
goto l2;
l39:V12=134;
goto l5;
l40:V27=P;
if((V27>=97)) goto l43;
if((V27<65)) goto l41;
if((V27<=90)) goto l42;
l41:V2=134;
l14:if((V2==135)) goto l15;
goto l23;
l42:V2=135;
goto l14;
l43:if((V27<=122)) goto l42;
goto l41;
}
