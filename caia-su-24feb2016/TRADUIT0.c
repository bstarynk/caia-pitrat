#include "dx.h"
void TRADUIT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V4=0,V5=0,V6=0,V30=0,II=0,JJ=0,V=0,I=0,J=0,L=0,N=0,GG=0,G=0,HH=0,H=0,V49=0,V52=0,S=0,V62=0,V61=0,V64=0,V63=0,V51=0,V53=0,V54=0,V58=0,V57=0,V56=0,V60=0,K=0,V59=0,KK=0,V66=0,V81=0,V77=0,V78=0,V79=0,V80=0,V65=0,V74=0,C=0,V75=0;
int X;
int Y;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=46;
x[jvj+1]=10670;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1082&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; Y=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+26]=x[jvj+27]=G=H=x[jvj+29]=S=x[jvj+30]=N=x[jvj+28]=K=KK=incon;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,X,jvj+2)*/
if((x[jvj+2]!=895)) goto l13;
pile[v[22]]=160; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(160,X,jvj+3)*/
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+3,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,X,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+4,jvj+5)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,X,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=61)) goto l13;
pile[v[22]]=102; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+6,jvj+8)*/
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+8,II)*/
II=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,X,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=61)) goto l13;
pile[v[22]]=102; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+9,jvj+11)*/
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+11,JJ)*/
JJ=pile[WZ2]; 
V1=incon;
if((II<JJ)) goto l1;
V1=JJ;
l7:V5=incon;
if((II<JJ)) goto l8;
V5=II;
l5:V4=incon;
if((V1==0)) goto l6;
V4=V1;
l9:V6=incon;
if((V1==0)) goto l10;
V6=(-1);
l11:pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+6,jvj+12)*/
pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+9,jvj+13)*/
x[jvj+43]=incon;
if((II<JJ)) goto l2;
x[jvj+43]=x[jvj+13] ;z[jvj+43]=z[jvj+13];
l3:x[jvj+44]=incon;
if((II<JJ)) goto l4;
x[jvj+44]=x[jvj+12] ;z[jvj+44]=z[jvj+12];
l12:x[jvj+22]=x[jvj+43] ;z[jvj+22]=z[jvj+43];
x[jvj+24]=x[jvj+44] ;z[jvj+24]=z[jvj+44];
V=V30;
x[jvj+31]=x[jvj+5] ;z[jvj+31]=z[jvj+5];
I=V4;
J=V5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=433; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,433,jvj+39)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+39; pile[WZ4]=Y; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+39,Y)*/
L=V6;
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+22,jvj+23)*/
x[jvj+26]=x[jvj+23] ;z[jvj+26]=z[jvj+23];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+23; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+23,jvj+29)*/
l15:pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+24,jvj+25)*/
x[jvj+27]=x[jvj+25] ;z[jvj+27]=z[jvj+25];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+25; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+25,jvj+30)*/
l16:if(x[jvj+26]!=incon) goto l17;
l19:pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+22,GG)*/
GG=pile[WZ2]; 
G=GG;
l20:pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+24,HH)*/
HH=pile[WZ2]; 
H=HH;
l24:if(G!=incon) goto l25;
if(H!=incon) goto l27;
l32:if(x[jvj+29]==incon) goto l33;
l35:if(x[jvj+30]==incon) goto l36;
l38:if(N==incon) goto l39;
l44:if(x[jvj+31]!=957&&x[jvj+31]!=988&&x[jvj+31]!=989&&x[jvj+31]!=1089) goto l45;
pile[v[22]]=J; 
(*f[850])( );if(v[102]) goto l45;     /*LOG0(J,V53)*/
V53=pile[WZ1]; 
pile[v[22]]=I; 
(*f[850])( );if(v[102]) goto l45;     /*LOG0(I,V54)*/
V54=pile[WZ1]; 
V58=V53-V54;
V57=V58*10;
V56=V57/N;
V60=10*V54;
K=V56;
V59=V60+K;
KK=V59;
l45:if(x[jvj+29]!=incon) goto l46;
l55:if(S!=incon) goto l56;
l54:V65=g[379];
if((V65<=0)) goto l61;
V66=vg[379];
if((V66!=0)) goto l51;
if((V65<3)) goto l53;
l51:pile[v[22]]=379; pile[WZ1]=10670; pile[WZ2]=0; pile[WZ3]=(-606); pile[WZ4]=Y; pile[WZ5]=jvj+32; 
(*f[232])( );     /*INTERP3(379,10670,0,(-606),Y,jvj+32)*/
if((x[jvj+32]==135)) goto l52;
l61:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:V1=II;
goto l7;
l2:x[jvj+43]=x[jvj+12] ;z[jvj+43]=z[jvj+12];
goto l3;
l4:x[jvj+44]=x[jvj+13] ;z[jvj+44]=z[jvj+13];
goto l12;
l6:V4=1;
goto l9;
l8:V5=JJ;
goto l5;
l10:V6=(-2);
goto l11;
l13:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,X,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=325)) goto l14;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,X,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[1082])( );     /*TRADUIT0(jvj+16,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,X,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[1082])( );     /*TRADUIT0(jvj+19,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=325; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,325,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+41,jvj+21,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+42; pile[WZ5]=Y; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+42,Y)*/
goto l54;
l14:x[Y]=x[X] ;z[Y]=z[X];
goto l54;
l17:if(x[jvj+27]!=incon) goto l18;
goto l19;
l18:pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ3]=jvj+28; 
(*f[1394])( );     /*ENTRE0(jvj+26,jvj+27,N,jvj+28)*/
N=pile[WZ2]; 
goto l19;
l21:V49=V51;
l22:x[jvj+45]=incon;
if((V51>=0)) goto l23;
x[jvj+45]=87 ;z[jvj+45]=87;
l43:N=V49;
x[jvj+28]=x[jvj+45] ;z[jvj+28]=z[jvj+45];
goto l44;
l23:x[jvj+45]=88 ;z[jvj+45]=88;
goto l43;
l25:if(H!=incon) goto l26;
goto l32;
l26:if((G>=H)) goto l27;
S=G;
goto l32;
l27:S=H;
goto l32;
l28:V61=incon;
if((S<0)) goto l29;
V61=G;
l62:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V61; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(100,41,130,V61,jvj+29)*/
goto l35;
l29:V62=G-S;
V61=V62;
goto l62;
l30:V63=incon;
if((S<0)) goto l31;
V63=H;
l63:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V63; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,V63,jvj+30)*/
goto l38;
l31:V64=H-S;
V63=V64;
goto l63;
l33:if(G!=incon) goto l34;
goto l35;
l34:if(S!=incon) goto l28;
goto l35;
l36:if(H!=incon) goto l37;
goto l38;
l37:if(S!=incon) goto l30;
goto l38;
l39:if(x[jvj+28]==incon) goto l40;
goto l45;
l40:if(G!=incon) goto l41;
goto l45;
l41:if(H!=incon) goto l42;
goto l45;
l42:V51=G-H;
V49=incon;
if((V51>=0)) goto l21;
V52=(-V51);
V49=V52;
goto l22;
l46:if(x[jvj+30]!=incon) goto l47;
goto l55;
l47:if(x[jvj+28]!=incon) goto l48;
goto l55;
l48:if(K!=incon) goto l49;
goto l55;
l49:if(KK!=incon) goto l50;
goto l55;
l50:pile[v[22]]=Y; pile[WZ1]=I; pile[WZ2]=KK; pile[WZ3]=jvj+29; pile[WZ4]=jvj+30; pile[WZ5]=jvj+28; pile[v[22]+6]=K; pile[v[22]+7]=V; pile[v[22]+8]=J; pile[v[22]+9]=L; pile[v[22]+10]=jvj+31; pile[v[22]+11]=68; 
(*f[1395])( );     /*CONSTRUIT0(Y,I,KK,jvj+29,jvj+30,jvj+28,K,V,J,L,jvj+31,68)*/
goto l55;
l52:if((V65<4)) goto l53;
goto l61;
l53:V81=x[Y];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V77; pile[WZ2]=10670; 
(*f[98])( );     /*SRA3(135,V77,10670,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=V78; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V78,125,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V81; pile[WZ2]=V79; 
(*f[39])( );     /*SDX0(20,V81,V79,V80)*/
V80=pile[WZ3]; 
pile[v[22]]=V80; 
(*f[40])( );     /*SLG0(V80)*/
if((V65!=2)) goto l61;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l61;
l56:if((S>=0)) goto l54;
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,Y,jvj+33)*/
l57:if((x[jvj+33]<=0)) goto l54;
x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=107; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,jvj+34,jvj+35)*/
x[jvj+46]=x[jvj+35] ;z[jvj+46]=z[jvj+35];
l58:if((x[jvj+46]>0)) goto l59;
x[jvj+33]=t[x[jvj+33]];
goto l57;
l59:x[jvj+36]=s[x[jvj+46]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+46];
pile[v[22]]=103; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(103,jvj+36,jvj+37)*/
pile[v[22]]=130; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(130,jvj+37,V74)*/
V74=pile[WZ2]; 
C=V74;
V75=C+S;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V75; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,V75,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=103; pile[WZ2]=jvj+38; 
(*f[35])( );     /*CHGC1(jvj+36,103,jvj+38)*/
l60:x[jvj+46]=t[x[jvj+46]];
goto l58;
}
