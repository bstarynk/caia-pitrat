#include "dx.h"
void FUSEQM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,II=0,V2=0,JJ=0,PP=0,V7=0,V8=0,M=0,N=0,T=0,S=0,V17=0,V16=0,V19=0,V18=0,V15=0,V20=0,V21=0,V28=0,V27=0,V30=0,V29=0,V26=0,W=0,V22=0,V49=0,V50=0,V51=0,V52=0,V53=0,V54=0,V60=0,V61=0,V56=0,V63=0,V64=0,V58=0,V59=0,V4=0,V65=0,V62=0,V71=0,V72=0,V67=0,V74=0,V75=0,V69=0,V70=0,V6=0,V76=0,V73=0,V82=0,V83=0,V78=0,V85=0,V86=0,V80=0,V81=0,V5=0,V87=0,V84=0,V93=0,V94=0,V89=0,V96=0,V97=0,V91=0,V92=0,V11=0,V98=0,V95=0;
int I,P,J,Q,X;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=11543;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1362&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; P=pile[v[22]+1]; J=pile[v[22]+2]; Q=pile[v[22]+3]; X=pile[v[22]+4]; R=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=PP=II=M=N=incon;
if((I<0)) goto l1;
II=I;
l2:if((J<0)) goto l3;
JJ=J;
l4:if((II!=JJ)) goto l5;
if((P!=Q)) goto l5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,20,101,135,R)*/
l5:pile[v[22]]=Q; pile[WZ1]=P; 
(*f[1021])( );if(v[102]) goto l6;     /*PPCM0(Q,P,PP)*/
PP=pile[WZ2]; 
l6:if(x[R]==incon) goto l7;
l13:if(PP!=incon) goto l14;
l24:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; v[102]=0;return;
l1:V1=I+P;
II=V1;
goto l2;
l3:V2=J+Q;
JJ=V2;
goto l4;
l7:if(PP!=incon) goto l8;
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; v[102]=1;return;
l8:if((PP!=P)) goto l10;
if((P<Q)) goto l9;
if((Q>0)) goto l28;
l9:if((P<=Q)) goto l10;
if((Q>0)) goto l35;
l10:if((PP!=Q)) goto l11;
if((Q<=P)) goto l49;
if((P>0)) goto l42;
l49:if((P>0)) goto l50;
l11:if((II!=JJ)) goto l12;
if((PP==P)) goto l12;
if((PP==Q)) goto l12;
pile[v[22]]=X; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(X,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+7)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=II; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(100,41,130,II,jvj+9)*/
pile[WZ3]=PP; pile[WZ4]=jvj+5; 
(*f[192])( );     /*QUADRI4(100,41,130,PP,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=160; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(jvj+5,160,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; pile[WZ2]=111; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+6,jvj+7,111,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=103; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+8,jvj+9,103,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+2; pile[WZ4]=jvj+10; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+2,jvj+10,R)*/
l12:if(II!=incon) goto l14;
l15:if(x[R]==incon) goto l16;
goto l24;
l14:if((II==JJ)) goto l15;
if((PP==P)) goto l15;
if((PP==Q)) goto l15;
V7=PP/P;
V8=PP/Q;
M=V7;
N=V8;
goto l15;
l16:if(II!=incon) goto l17;
goto l23;
l17:if(M!=incon) goto l18;
goto l23;
l18:if(N!=incon) goto l19;
goto l23;
l19:if((N>=M)) goto l21;
pile[v[22]]=M; pile[WZ1]=N; pile[WZ2]=(-1); 
(*f[1592])( );if(v[102]) goto l21;     /*RESEQDV0(M,N,(-1),T,S)*/
T=pile[WZ3]; S=pile[WZ4]; 
V17=T*II;
V16=M*V17;
V19=S*JJ;
V18=N*V19;
V15=V16-V18;
V49=V15%PP;
V50=V49;
if((V50<0)) goto l26;
W=V50;
l20:pile[v[22]]=X; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(X,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+13)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=W; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,W,jvj+15)*/
pile[WZ3]=PP; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,PP,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=160; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,160,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=111; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+12,jvj+13,111,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=103; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+14,jvj+15,103,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+16; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+3,jvj+16,R)*/
goto l24;
l21:if((N<=M)) goto l23;
pile[v[22]]=N; pile[WZ1]=M; pile[WZ2]=(-1); 
(*f[1592])( );if(v[102]) goto l23;     /*RESEQDV0(N,M,(-1),V20,V21)*/
V20=pile[WZ3]; V21=pile[WZ4]; 
V28=V20*JJ;
V27=N*V28;
V30=V21*II;
V29=M*V30;
V26=V27-V29;
V52=V26%PP;
V53=V52;
if((V53<0)) goto l27;
V22=V53;
l22:pile[v[22]]=X; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(X,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+19)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V22; pile[WZ4]=jvj+21; 
(*f[192])( );     /*QUADRI4(100,41,130,V22,jvj+21)*/
pile[WZ3]=PP; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,PP,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=160; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,160,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=111; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+18,jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+20,jvj+21,103,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+22; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+4,jvj+22,R)*/
goto l24;
l25:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,20,101,134,R)*/
goto l13;
l26:V51=V50+PP;
W=V51;
goto l20;
l27:V54=V53+PP;
V22=V54;
goto l22;
l28:V60=II%Q;
V61=V60;
if((V61<0)) goto l34;
V56=V61;
l29:V63=JJ%Q;
V64=V63;
if((V64<0)) goto l33;
V58=V64;
l30:V59=incon;
if((V56==V58)) goto l32;
V59=134;
l31:V4=V59;
if((V4==134)) goto l25;
goto l9;
l32:V59=135;
goto l31;
l33:V65=V64+Q;
V58=V65;
goto l30;
l34:V62=V61+Q;
V56=V62;
goto l29;
l35:V71=II%Q;
V72=V71;
if((V72<0)) goto l41;
V67=V72;
l36:V74=JJ%Q;
V75=V74;
if((V75<0)) goto l40;
V69=V75;
l37:V70=incon;
if((V67==V69)) goto l39;
V70=134;
l38:V6=V70;
if((V6!=135)) goto l10;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1203; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,20,101,1203,R)*/
goto l13;
l39:V70=135;
goto l38;
l40:V76=V75+Q;
V69=V76;
goto l37;
l41:V73=V72+Q;
V67=V73;
goto l36;
l42:V82=II%P;
V83=V82;
if((V83<0)) goto l48;
V78=V83;
l43:V85=JJ%P;
V86=V85;
if((V86<0)) goto l47;
V80=V86;
l44:V81=incon;
if((V78==V80)) goto l46;
V81=134;
l45:V5=V81;
if((V5==134)) goto l25;
goto l49;
l46:V81=135;
goto l45;
l47:V87=V86+P;
V80=V87;
goto l44;
l48:V84=V83+P;
V78=V84;
goto l43;
l50:V93=II%P;
V94=V93;
if((V94<0)) goto l56;
V89=V94;
l51:V96=JJ%P;
V97=V96;
if((V97<0)) goto l55;
V91=V97;
l52:V92=incon;
if((V89==V91)) goto l54;
V92=134;
l53:V11=V92;
if((V11!=135)) goto l11;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,20,101,135,R)*/
goto l13;
l54:V92=135;
goto l53;
l55:V98=V97+P;
V91=V98;
goto l52;
l56:V95=V94+P;
V89=V95;
goto l51;
}
