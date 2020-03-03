#include "dx.h"
void SMA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,II=0,V2=0,P=0,V12=0,V20=0,V19=0,V15=0,V23=0,J=0,V24=0,T=0,TT=0,KK=0,NR=0,V17=0,V18=0,HH=0,V4=0,V6=0,V10=0,V8=0,V14=0,V13=0,V27=0,V3=0;
int I,K,N;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; K=pile[v[22]+1]; N=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
J=T=TT=x[R]=HH=incon;
V1=I+1;
II=V1;
V2=bh[v[1]][II];
P=V2;
if((P==96)) goto l10;
if(P!=36&&P!=64&&P!=38&&P!=124&&P!=34&&P!=(-80)&&P!=35) goto l8;
J=II;
T=P;
TT=P;
l8:V15=incon;
if((P==(-75))) goto l9;
V15=sepfacts;
l1:V12=incon;
if((K!=36)) goto l4;
if((P<48)) goto l39;
if((P>57)) goto l39;
V14=135;
l2:if((V14==135)) goto l3;
l4:if(P!=(-75)&&P!=126) goto l7;
V20=II+1;
V19=bh[v[1]][V20];
if((V19<48)) goto l40;
if((V19>57)) goto l40;
V13=135;
l5:if((V13==135)) goto l6;
l7:if(V12==incon) goto l12;
l11:if((V12==(-99999998))) goto l12;
pile[v[22]]=V12; 
(*f[126])( );     /*LND2(V12,NR,KK)*/
NR=pile[WZ1]; KK=pile[WZ2]; 
V17=NR+V15;
x[jvj+5]=V17 ;z[jvj+5]=(V17<=sepcte) ? V17 : 0;
V18=r[x[jvj+5]];
if((V18!=1)) goto l12;
x[R]=x[jvj+5] ;z[R]=z[jvj+5];
l12:if(J==incon) goto l13;
l17:if(TT!=incon) goto l18;
l24:x[jvj+3]=1392 ;z[jvj+3]=1392;
l25:if((x[N]==66)) goto l26;
x[jvj+4]=x[N] ;z[jvj+4]=z[N];
l27:pile[v[22]]=130; pile[WZ1]=77; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(130,77,HH)*/
HH=pile[WZ2]; 
l30:if(x[R]==incon) goto l31;
l38:v[0]=jvj; v[22]-=4; v[102]=0;return;
l3:V12=II;
goto l4;
l6:V12=V20;
goto l11;
l9:V15=sephist;
goto l1;
l10:V23=II+1;
J=V23;
V24=bh[v[1]][J];
T=P;
TT=V24;
goto l8;
l13:if(T==incon) goto l14;
goto l17;
l14:if(TT==incon) goto l41;
l18:if((TT==64)) goto l19;
if((TT==36)) goto l20;
if((TT==38)) goto l21;
if((TT==34)) goto l22;
if((TT==(-80))) goto l23;
if((TT!=35)) goto l24;
x[jvj+3]=1691 ;z[jvj+3]=1691;
goto l25;
l16:J=I;
T=K;
TT=K;
goto l18;
l19:x[jvj+3]=1389 ;z[jvj+3]=1389;
goto l25;
l20:x[jvj+3]=1387 ;z[jvj+3]=1387;
goto l25;
l21:x[jvj+3]=1388 ;z[jvj+3]=1388;
goto l25;
l22:x[jvj+3]=1390 ;z[jvj+3]=1390;
goto l25;
l23:x[jvj+3]=1391 ;z[jvj+3]=1391;
goto l25;
l26:x[jvj+4]=67 ;z[jvj+4]=67;
goto l27;
l28:if((x[N]!=66)) goto l35;
pile[v[22]]=J; 
(*f[107])( );     /*CRC0(J,V4)*/
V4=pile[WZ1]; 
V6=bh[v[1]][V4];
if(V6!=32&&V6!=44&&V6!=93&&V6!=41) goto l37;
l35:V8=J+1;
pile[v[22]]=jvj+3; pile[WZ1]=V8; pile[WZ2]=J; pile[WZ3]=T; pile[WZ4]=TT; pile[WZ5]=jvj+4; pile[v[22]+6]=HH; pile[v[22]+7]=jvj+1; 
(*f[252])( );if(v[102]) goto l37;     /*SMB0(jvj+3,V8,J,T,TT,jvj+4,HH,jvj+1)*/
x[jvj+6]=incon;
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+1,jvj+2)*/
x[jvj+6]=x[jvj+2] ;z[jvj+6]=z[jvj+2];
l36:x[R]=x[jvj+6] ;z[R]=z[jvj+6];
pile[v[22]]=163; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(163,jvj+1,V10)*/
V10=pile[WZ2]; 
if((V10!=HH)) goto l38;
pile[v[22]]=77; pile[WZ1]=130; pile[WZ2]=(-1); 
(*f[186])( );     /*BTC0(77,130,(-1))*/
goto l38;
l29:x[jvj+6]=x[jvj+1] ;z[jvj+6]=z[jvj+1];
goto l36;
l31:if(J!=incon) goto l32;
l37:v[0]=jvj; v[22]-=4; v[102]=1;return;
l32:if(T!=incon) goto l33;
goto l37;
l33:if(TT!=incon) goto l34;
goto l37;
l34:if(HH!=incon) goto l28;
goto l37;
l39:V14=134;
goto l2;
l40:V13=134;
goto l5;
l41:V27=P;
if((V27>=97)) goto l44;
if((V27<65)) goto l42;
if((V27<=90)) goto l43;
l42:V3=134;
l15:if((V3==135)) goto l16;
goto l24;
l43:V3=135;
goto l15;
l44:if((V27<=122)) goto l43;
goto l42;
}
