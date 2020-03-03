#include "dx.h"
void CALMOD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,I=0,N=0,K=0,V2=0,V14=0,J=0,V4=0,V6=0,V18=0,G=0,V17=0,V19=0,V7=0,V9=0,V21=0,S=0,V20=0,GG=0,V10=0,V54=0,V45=0,V46=0,V47=0,V48=0,V50=0,II=0,V51=0,V53=0,V44=0,Q=0,V15=0,T=0,V34=0,V35=0,V36=0,V38=0,V40=0,V41=0,V43=0,V23=0,V22=0,V60=0,V55=0,V56=0,V57=0,V59=0,V25=0,V61=0,V62=0,V33=0,V26=0,V27=0,V28=0,V30=0,V32=0,V66=0,V65=0,V68=0,V8=0,V67=0,V71=0,V81=0,V82=0,V83=0,V85=0,V74=0,V86=0,V87=0,V89=0,V77=0,V79=0,V80=0,V90=0,V92=0,V93=0,V95=0,V96=0,V97=0,V99=0,V104=0,V109=0,V110=0,V119=0,V120=0,V122=0,V114=0,V115=0,V107=0,V134=0,V135=0,V144=0,V145=0,V147=0,V139=0,V140=0,V132=0;
int A,B;
int M;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=44;
x[jvj+1]=11439;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==929&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; M=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=M; 
(*f[54])( );     /*TRI1(250,158,M)*/
N=2;
l33:if((N<=A)) goto l35;
pile[v[22]]=763; pile[WZ1]=M; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(763,M,jvj+8)*/
l41:if((x[jvj+8]>0)) goto l42;
l36:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:x[jvj+2]=0 ;z[jvj+2]=0;
V12=N-1;
I=0;
l2:if((I<=V12)) goto l4;
pile[v[22]]=K; pile[WZ1]=515; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(K,515,jvj+7)*/
pile[v[22]]=447; pile[WZ1]=68; pile[WZ2]=510; pile[WZ3]=N; pile[WZ4]=jvj+7; pile[WZ5]=jvj+5; 
(*f[47])( );     /*QUADRI0(447,68,510,N,jvj+7,jvj+5)*/
V33=x[jvj+2];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=41; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(20,41,V26,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(41,N,V27,V28)*/
V28=pile[WZ3]; 
pile[WZ1]=K; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(41,K,V28,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V33; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(23,V33,V30,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
for(i=x[jvj+2],V25=0;i>0;i=t[i],V25++)  ;
if((V25!=N)) goto l30;
if((N==2)) goto l30;
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V61; pile[WZ2]=324; 
(*f[42])( );     /*SRA1(135,V61,324,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; 
(*f[40])( );     /*SLG0(V62)*/
l30:if((x[jvj+2]>0)) goto l31;
K++;
l34:if((K<=B)) goto l1;
N++;
goto l33;
l4:pile[v[22]]=N; pile[WZ1]=K; pile[WZ2]=I; 
(*f[1041])( );if(v[102]) goto l3;     /*MODPUI0(N,K,I,V2)*/
V2=pile[WZ3]; 
pile[v[22]]=jvj+2; pile[WZ1]=V2; 
(*f[207])( );     /*PLUE2(jvj+2,V2)*/
l3:I++;
goto l2;
l7:pile[v[22]]=N; pile[WZ1]=K; pile[WZ2]=J; 
(*f[1041])( );if(v[102]) goto l6;     /*MODPUI0(N,K,J,V4)*/
V4=pile[WZ3]; 
if((V4!=II)) goto l6;
pile[v[22]]=jvj+3; pile[WZ1]=J; 
(*f[207])( );     /*PLUE2(jvj+3,J)*/
l6:J++;
l5:if((J<=V14)) goto l7;
V9=(-999999);
GG=2;
l20:if((GG<=N)) goto l16;
if((V9==(-999999))) goto l14;
V54=x[jvj+3];
x[jvj+43]=67 ;z[jvj+43]=67;
V104=0;
V114=incon;
if((V9!=2)) goto l64;
if((x[jvj+43]!=67)) goto l64;
V109=incon;
if((V104==0)) goto l65;
V109=0;
l48:V110=V109;
x[jvj+19]=68 ;z[jvj+19]=68;
l49:if((V110!=0)) goto l63;
l50:pile[v[22]]=763; pile[WZ1]=M; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(763,M,jvj+15)*/
l51:if((x[jvj+15]>0)) goto l62;
pile[v[22]]=V9; pile[WZ1]=117; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(V9,117,jvj+16)*/
pile[v[22]]=M; pile[WZ1]=763; 
(*f[36])( );     /*PLUSC0(M,763,jvj+16)*/
l52:if(V114!=incon) goto l60;
l22:pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=67; pile[WZ2]=V45; 
(*f[39])( );     /*SDX0(20,67,V45,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=0; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(41,0,V46,V47)*/
V47=pile[WZ3]; 
pile[WZ1]=V9; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(41,V9,V47,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V48; pile[WZ2]=262; 
(*f[42])( );     /*SRA1(135,V48,262,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=II; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(41,II,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V54; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(23,V54,V51,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; 
(*f[40])( );     /*SLG0(V53)*/
pile[v[22]]=jvj+5; pile[WZ1]=447; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+5,447,67)*/
l14:V7=incon;
V19=N/3;
if((V19>2)) goto l15;
V7=2;
l23:V44=x[jvj+3];
Q=2;
l24:if((Q<=V7)) goto l25;
if((N<=6)) goto l32;
for(i=x[jvj+3],V23=0;i>0;i=t[i],V23++)  ;
V22=3*V23;
if((V22<=N)) goto l32;
pile[v[22]]=447; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(447,jvj+5,jvj+6)*/
if((x[jvj+6]!=68)) goto l32;
V60=x[jvj+3];
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V55; pile[WZ2]=365; 
(*f[42])( );     /*SRA1(135,V55,365,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=II; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(41,II,V56,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V60; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(23,V60,V57,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; 
(*f[40])( );     /*SLG0(V59)*/
l32:x[jvj+2]=t[x[jvj+2]];
goto l30;
l8:x[jvj+4]=0 ;z[jvj+4]=0;
V6=incon;
if((T!=0)) goto l9;
V6=1;
l10:V18=N-1;
G=V6;
l11:if((G<=V18)) goto l13;
for(i=x[jvj+4],V66=0;i>0;i=t[i],V66++)  ;
for(i=x[jvj+3],V65=0;i>0;i=t[i],V65++)  ;
if((V66!=V65)) goto l38;
V68=x[jvj+4];
l37:if((V68>0)) goto l40;
V8=135;
l28:if((V8==135)) goto l66;
l27:T++;
l26:if((T<=V15)) goto l8;
Q++;
goto l24;
l9:V6=0;
goto l10;
l13:V17=G%Q;
if((V17!=T)) goto l12;
pile[v[22]]=jvj+4; pile[WZ1]=G; 
(*f[207])( );     /*PLUE2(jvj+4,G)*/
l12:G++;
goto l11;
l15:V7=V19;
goto l23;
l16:V21=N-1;
S=0;
l17:if((S<=V21)) goto l19;
V10=GG;
if(V10>V9) V9=V10;
l21:GG++;
goto l20;
l19:for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==S) goto l18;
V20=S%GG;
if((V20!=0)) goto l21;
l18:S++;
goto l17;
l25:V15=Q-1;
T=0;
goto l26;
l31:II=s[x[jvj+2]];
x[jvj+3]=0 ;z[jvj+3]=0;
V14=N-1;
J=0;
goto l5;
l35:K=2;
goto l34;
l39:V68=t[V68];
goto l37;
l40:V67=s[V68];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V67) goto l39;
l38:V8=134;
goto l28;
l42:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=117; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(117,jvj+9,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=V81; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(10,V81,43,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V82; pile[WZ2]=1233; 
(*f[42])( );     /*SRA1(135,V82,1233,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V71; pile[WZ2]=V83; 
(*f[39])( );     /*SDX0(41,V71,V83,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=V85; 
(*f[40])( );     /*SLG0(V85)*/
pile[v[22]]=1481; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1481,jvj+9,jvj+10)*/
x[jvj+41]=x[jvj+10] ;z[jvj+41]=z[jvj+10];
l43:if((x[jvj+41]<=0)) goto l47;
x[jvj+11]=s[x[jvj+41]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+41];
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(117,jvj+11,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V86; pile[WZ2]=596; 
(*f[42])( );     /*SRA1(135,V86,596,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V74; pile[WZ2]=V87; 
(*f[39])( );     /*SDX0(41,V74,V87,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=V89; 
(*f[40])( );     /*SLG0(V89)*/
pile[v[22]]=159; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(159,jvj+11,jvj+12)*/
x[jvj+42]=x[jvj+12] ;z[jvj+42]=z[jvj+12];
l44:if((x[jvj+42]<=0)) goto l46;
x[jvj+13]=s[x[jvj+42]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+42];
pile[v[22]]=609; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(609,jvj+13,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(515,jvj+13,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(510,jvj+13,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=447; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(447,jvj+13,jvj+14)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=326; 
(*f[42])( );     /*SRA1(135,0,326,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V80; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(41,V80,V90,V92)*/
V92=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V92; pile[WZ2]=262; 
(*f[42])( );     /*SRA1(135,V92,262,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V79; pile[WZ2]=V93; 
(*f[39])( );     /*SDX0(41,V79,V93,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=V95; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V95,(-9543),V96)*/
V96=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V96; pile[WZ2]=jvj+14; 
(*f[42])( );     /*SRA1(135,V96,jvj+14,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V77; pile[WZ2]=V97; 
(*f[39])( );     /*SDX0(41,V77,V97,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=V99; 
(*f[40])( );     /*SLG0(V99)*/
l45:x[jvj+42]=t[x[jvj+42]];
goto l44;
l46:x[jvj+41]=t[x[jvj+41]];
goto l43;
l47:x[jvj+8]=t[x[jvj+8]];
goto l41;
l54:x[jvj+22]=s[x[jvj+24]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+24];
pile[v[22]]=510; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(510,jvj+22,V119)*/
V119=pile[WZ2]; 
if((V119!=N)) goto l55;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(515,jvj+22,V120)*/
V120=pile[WZ2]; 
if((V120!=II)) goto l55;
pile[v[22]]=609; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(609,jvj+22,V122)*/
V122=pile[WZ2]; 
if((V122!=V110)) goto l55;
pile[v[22]]=447; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(447,jvj+22,jvj+23)*/
if((x[jvj+23]==x[jvj+19])) goto l22;
l55:x[jvj+24]=t[x[jvj+24]];
l53:if((x[jvj+24]>0)) goto l54;
pile[v[22]]=V110; pile[WZ1]=609; pile[WZ2]=jvj+21; 
(*f[46])( );     /*TRI0(V110,609,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=II; pile[WZ2]=515; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+21,II,515,jvj+20)*/
pile[v[22]]=447; pile[WZ1]=jvj+19; pile[WZ2]=510; pile[WZ3]=N; pile[WZ4]=jvj+20; pile[WZ5]=jvj+18; 
(*f[47])( );     /*QUADRI0(447,jvj+19,510,N,jvj+20,jvj+18)*/
pile[v[22]]=jvj+17; pile[WZ1]=159; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+18)*/
goto l22;
l57:x[jvj+26]=t[x[jvj+26]];
l58:if((x[jvj+26]>0)) goto l59;
pile[v[22]]=V114; pile[WZ1]=117; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(V114,117,jvj+17)*/
pile[v[22]]=jvj+16; pile[WZ1]=1481; 
(*f[36])( );     /*PLUSC0(jvj+16,1481,jvj+17)*/
l56:pile[v[22]]=159; pile[WZ1]=jvj+17; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(159,jvj+17,jvj+24)*/
goto l53;
l59:x[jvj+25]=s[x[jvj+26]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+26];
pile[v[22]]=117; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(117,jvj+25,V115)*/
V115=pile[WZ2]; 
if((V115!=V114)) goto l57;
x[jvj+17]=x[jvj+25] ;z[jvj+17]=z[jvj+25];
goto l56;
l60:pile[v[22]]=1481; pile[WZ1]=jvj+16; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1481,jvj+16,jvj+26)*/
goto l58;
l61:x[jvj+15]=t[x[jvj+15]];
goto l51;
l62:x[jvj+27]=s[x[jvj+15]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+15];
pile[v[22]]=117; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(117,jvj+27,V107)*/
V107=pile[WZ2]; 
if((V107!=V9)) goto l61;
x[jvj+16]=x[jvj+27] ;z[jvj+16]=z[jvj+27];
goto l52;
l63:V114=K;
goto l50;
l64:V110=V104;
x[jvj+19]=x[jvj+43] ;z[jvj+19]=z[jvj+43];
if((x[jvj+19]!=68)) goto l63;
goto l49;
l65:V109=1;
goto l48;
l66:x[jvj+44]=68 ;z[jvj+44]=68;
V139=incon;
if((Q!=2)) goto l83;
if((x[jvj+44]!=67)) goto l83;
V134=incon;
if((T==0)) goto l84;
V134=0;
l67:V135=V134;
x[jvj+32]=68 ;z[jvj+32]=68;
l68:if((V135!=0)) goto l82;
l69:pile[v[22]]=763; pile[WZ1]=M; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(763,M,jvj+28)*/
l70:if((x[jvj+28]>0)) goto l81;
pile[v[22]]=Q; pile[WZ1]=117; pile[WZ2]=jvj+29; 
(*f[46])( );     /*TRI0(Q,117,jvj+29)*/
pile[v[22]]=M; pile[WZ1]=763; 
(*f[36])( );     /*PLUSC0(M,763,jvj+29)*/
l71:if(V139!=incon) goto l79;
l29:pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=68; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(20,68,V34,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=T; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(41,T,V35,V36)*/
V36=pile[WZ3]; 
pile[WZ1]=Q; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(41,Q,V36,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V38; pile[WZ2]=262; 
(*f[42])( );     /*SRA1(135,V38,262,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=II; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(41,II,V40,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V44; pile[WZ2]=V41; 
(*f[39])( );     /*SDX0(23,V44,V41,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=V43; 
(*f[40])( );     /*SLG0(V43)*/
pile[v[22]]=jvj+5; pile[WZ1]=447; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+5,447,67)*/
goto l27;
l73:x[jvj+35]=s[x[jvj+37]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+37];
pile[v[22]]=510; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l74;     /*FNDC0(510,jvj+35,V144)*/
V144=pile[WZ2]; 
if((V144!=N)) goto l74;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l74;     /*FNDC0(515,jvj+35,V145)*/
V145=pile[WZ2]; 
if((V145!=II)) goto l74;
pile[v[22]]=609; 
(*f[26])( );if(v[102]) goto l74;     /*FNDC0(609,jvj+35,V147)*/
V147=pile[WZ2]; 
if((V147!=V135)) goto l74;
pile[v[22]]=447; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(447,jvj+35,jvj+36)*/
if((x[jvj+36]==x[jvj+32])) goto l29;
l74:x[jvj+37]=t[x[jvj+37]];
l72:if((x[jvj+37]>0)) goto l73;
pile[v[22]]=V135; pile[WZ1]=609; pile[WZ2]=jvj+34; 
(*f[46])( );     /*TRI0(V135,609,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=II; pile[WZ2]=515; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+34,II,515,jvj+33)*/
pile[v[22]]=447; pile[WZ1]=jvj+32; pile[WZ2]=510; pile[WZ3]=N; pile[WZ4]=jvj+33; pile[WZ5]=jvj+31; 
(*f[47])( );     /*QUADRI0(447,jvj+32,510,N,jvj+33,jvj+31)*/
pile[v[22]]=jvj+30; pile[WZ1]=159; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+30,159,jvj+31)*/
goto l29;
l76:x[jvj+39]=t[x[jvj+39]];
l77:if((x[jvj+39]>0)) goto l78;
pile[v[22]]=V139; pile[WZ1]=117; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(V139,117,jvj+30)*/
pile[v[22]]=jvj+29; pile[WZ1]=1481; 
(*f[36])( );     /*PLUSC0(jvj+29,1481,jvj+30)*/
l75:pile[v[22]]=159; pile[WZ1]=jvj+30; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(159,jvj+30,jvj+37)*/
goto l72;
l78:x[jvj+38]=s[x[jvj+39]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+39];
pile[v[22]]=117; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l76;     /*FNDC0(117,jvj+38,V140)*/
V140=pile[WZ2]; 
if((V140!=V139)) goto l76;
x[jvj+30]=x[jvj+38] ;z[jvj+30]=z[jvj+38];
goto l75;
l79:pile[v[22]]=1481; pile[WZ1]=jvj+29; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(1481,jvj+29,jvj+39)*/
goto l77;
l80:x[jvj+28]=t[x[jvj+28]];
goto l70;
l81:x[jvj+40]=s[x[jvj+28]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+28];
pile[v[22]]=117; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l80;     /*FNDC0(117,jvj+40,V132)*/
V132=pile[WZ2]; 
if((V132!=Q)) goto l80;
x[jvj+29]=x[jvj+40] ;z[jvj+29]=z[jvj+40];
goto l71;
l82:V139=K;
goto l69;
l83:V135=T;
x[jvj+32]=x[jvj+44] ;z[jvj+32]=z[jvj+44];
if((x[jvj+32]!=68)) goto l82;
goto l68;
l84:V134=1;
goto l67;
}
