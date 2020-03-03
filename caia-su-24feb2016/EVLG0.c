#include "dx.h"
void EVLG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,NV=0,Q=0,V2=0,B=0,V7=0,V6=0,I=0,V5=0,V4=0,V13=0,V14=0,V16=0,V23=0,V25=0,V24=0,V22=0,V21=0,V32=0,V33=0,V34=0,V29=0,V19=0,V11=0,V=0,TZZ=0,R=0,V46=0,V68=0,V70=0,V69=0,V67=0,V66=0,V85=0,V88=0,V87=0,V89=0,V92=0,V91=0,V93=0,V78=0,V82=0,V60=0,V72=0,V74=0,V73=0,V61=0,V54=0,V53=0,V37=0,V40=0,V51=0,V57=0,V56=0,V55=0,W=0;
int Z,X,TL;
int RES;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=34;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; X=pile[v[22]+1]; TL=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=499; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(499,X,N)*/
N=pile[WZ2]; 
NV=N;
l2:pile[v[22]]=246; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(246,TL,Q)*/
Q=pile[WZ2]; 
V2=com+NV;
B=V2;
pile[v[22]]=Q; 
(*f[27])( );     /*CRETND0(Q,TL)*/
pile[v[22]]=113; pile[WZ1]=Z; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(113,Z,jvj+2)*/
l7:if((x[jvj+2]>0)) goto l8;
pile[v[22]]=114; pile[WZ1]=Z; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(114,Z,jvj+6)*/
l10:if((x[jvj+6]>0)) goto l11;
pile[v[22]]=Q; pile[WZ1]=NV; pile[WZ2]=RES; 
(*f[905])( );     /*EVLGG0(Q,NV,RES)*/
if((x[RES]!=134)) goto l33;
pile[v[22]]=113; pile[WZ1]=Z; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(113,Z,jvj+22)*/
l24:if((x[jvj+22]>0)) goto l25;
pile[v[22]]=771; pile[WZ1]=TL; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(771,TL,jvj+27)*/
V54=knd[Q];
V53=V54-1;
V37=0;
l30:if((V37>V53)) goto l33;
V40=vnd[Q][V37];
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==V40) goto l14;
l31:V37++;
goto l30;
l1:NV=0;
goto l2;
l6:V32=tnd[Q][V23];
if(V32!=20&&V32!=23) goto l9;
V33=V23+NV;
V34=B+V23;
prov[V33]=V34;
l9:x[jvj+2]=t[x[jvj+2]];
goto l7;
l8:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=113)) goto l9;
pile[v[22]]=103; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+3,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+5,V29)*/
V29=pile[WZ2]; 
V19=V29;
V23=knd[Q];
V25=knr[Q];
V24=V25-1;
l5:if((V23>V24)) goto l9;
V22=vnd[Q][V23];
V21=V22;
if((V19==V21)) goto l6;
V23++;
goto l5;
l11:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=114)) goto l12;
pile[v[22]]=103; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,jvj+7,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+9,V11)*/
V11=pile[WZ2]; 
V=V11;
V7=knd[Q];
V6=V7-1;
I=0;
l3:if((I>V6)) goto l12;
V5=vnd[Q][I];
V4=V5;
if((V==V4)) goto l13;
I++;
goto l3;
l13:pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+7,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=X; pile[WZ3]=jvj+11; 
(*f[80])( );if(v[102]) goto l12;     /*EVL1(jvj+10,X,R,jvj+11,TZZ)*/
R=pile[WZ2]; TZZ=pile[WZ4]; 
if(x[jvj+11]!=20&&x[jvj+11]!=23) goto l4;
V13=B+I;
V14=I+NV;
x[jvj+1]=R ;z[jvj+1]=(x[jvj+11]==20&&R<=sepcte) ? R : (x[jvj+11]==41) ? (-1000) : 0;
prov[V14]=V13;
x[V13]=x[jvj+1];z[V13]=TZZ;
l4:if(x[jvj+11]!=89&&x[jvj+11]!=41&&x[jvj+11]!=96&&x[jvj+11]!=1317) goto l12;
V16=I+NV;
prov[V16]=R;
l12:x[jvj+6]=t[x[jvj+6]];
goto l10;
l14:pile[v[22]]=114; pile[WZ1]=Z; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(114,Z,jvj+12)*/
x[jvj+31]=x[jvj+12] ;z[jvj+31]=z[jvj+12];
l15:if((x[jvj+31]<=0)) goto l31;
x[jvj+13]=s[x[jvj+31]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+31];
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=114)) goto l16;
pile[v[22]]=103; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+13,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+15,V46)*/
V46=pile[WZ2]; 
if((V40!=V46)) goto l16;
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+13,jvj+28)*/
if((x[jvj+28]!=114)) goto l31;
pile[v[22]]=102; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,jvj+13,jvj+29)*/
pile[v[22]]=140; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+29,V51)*/
V51=pile[WZ2]; 
V57=NV+V37;
V56=prov[V57];
V55=x[V56];
W=V51;
pile[v[22]]=X; pile[WZ1]=W; pile[WZ2]=23; pile[WZ3]=V55; pile[WZ4]=0; 
(*f[624])( );     /*EVLW0(X,W,23,V55,0)*/
goto l31;
l16:x[jvj+31]=t[x[jvj+31]];
goto l15;
l19:x[jvj+17]=s[x[jvj+32]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+32];
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+17,V85)*/
V85=pile[WZ2]; 
if((V85!=V61)) goto l20;
x[jvj+34]=x[jvj+17] ;z[jvj+34]=z[jvj+17];
l28:x[jvj+33]=x[jvj+34] ;z[jvj+33]=z[jvj+34];
x[jvj+30]=incon;
if((x[jvj+33]==250)) goto l34;
x[jvj+30]=x[jvj+33] ;z[jvj+30]=z[jvj+33];
l29:x[jvj+18]=x[jvj+30] ;z[jvj+18]=z[jvj+30];
if(x[jvj+19]!=20&&x[jvj+19]!=23) goto l22;
V88=x[V73];
V87=V88;
V89=z[V73];
if((x[jvj+20]=w[x[jvj+19]][3])==incon) goto l22;
V92=V87;
if((x[jvj+33]!=250)) goto l21;
pile[v[22]]=X; pile[WZ1]=128; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(X,128,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=158; pile[WZ2]=jvj+19; 
(*f[35])( );     /*CHGC1(jvj+18,158,jvj+19)*/
l21:pile[v[22]]=jvj+18; pile[WZ1]=jvj+20; pile[WZ2]=V92; 
(*f[43])( );     /*CHGC2(jvj+18,jvj+20,V92)*/
pile[WZ1]=416; pile[WZ2]=V89; 
(*f[43])( );     /*CHGC2(jvj+18,416,V89)*/
l22:if(x[jvj+19]!=89&&x[jvj+19]!=41&&x[jvj+19]!=96&&x[jvj+19]!=1317) goto l26;
V91=V73;
if((x[jvj+21]=w[x[jvj+19]][3])==incon) goto l26;
V93=V91;
if((x[jvj+33]!=250)) goto l23;
pile[v[22]]=X; pile[WZ1]=128; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(X,128,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=158; pile[WZ2]=jvj+19; 
(*f[35])( );     /*CHGC1(jvj+18,158,jvj+19)*/
pile[WZ1]=416; pile[WZ2]=(-200); 
(*f[43])( );     /*CHGC2(jvj+18,416,(-200))*/
l23:pile[v[22]]=jvj+18; pile[WZ1]=jvj+21; pile[WZ2]=V93; 
(*f[43])( );     /*CHGC2(jvj+18,jvj+21,V93)*/
l26:x[jvj+22]=t[x[jvj+22]];
goto l24;
l20:x[jvj+32]=t[x[jvj+32]];
l18:if((x[jvj+32]>0)) goto l19;
x[jvj+34]=250 ;z[jvj+34]=250;
goto l28;
l25:x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=113)) goto l26;
pile[v[22]]=102; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+23,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(140,jvj+25,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,jvj+23,jvj+26)*/
pile[v[22]]=140; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(140,jvj+26,V82)*/
V82=pile[WZ2]; 
V60=V82;
V68=knd[Q];
V70=knr[Q];
V69=V70-1;
l17:if((V68>V69)) goto l26;
V67=vnd[Q][V68];
V66=V67;
if((V60==V66)) goto l27;
V68++;
goto l17;
l27:V72=tnd[Q][V68];
x[jvj+19]=V72 ;z[jvj+19]=(V72<=sepcte) ? V72 : 0;
V74=V68+NV;
V73=prov[V74];
V61=V78;
x[jvj+34]=incon;
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(128,X,jvj+16)*/
x[jvj+32]=x[jvj+16] ;z[jvj+32]=z[jvj+16];
goto l18;
l32:v[0]=jvj; v[22]-=4; v[102]=1;return;
l33:v[0]=jvj; v[22]-=4; v[102]=0;return;
l34:pile[v[22]]=V61; pile[WZ1]=140; pile[WZ2]=jvj+30; 
(*f[329])( );     /*TRI13(V61,140,jvj+30)*/
goto l29;
}
