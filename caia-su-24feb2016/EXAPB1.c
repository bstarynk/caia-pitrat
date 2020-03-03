#include "dx.h"
void EXAPB1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,KR=0,UR=0,NR=0,NX=0,V18=0,V20=0,V11=0,V22=0,V24=0,V13=0,V33=0,V=0,V29=0,V28=0,V48=0,V38=0,V43=0,V42=0,V59=0,V54=0,V55=0,V58=0,V56=0,V53=0,V8=0,K=0,V10=0,V9=0,V109=0,V108=0,V50=0,V51=0,NRR=0,V5=0,V7=0,V6=0,JJ=0,V4=0,V102=0,V34=0,V103=0,V104=0,V105=0,V92=0,V91=0,V93=0,V94=0,V95=0,V97=0,V98=0,V99=0,NT=0,KK=0,V62=0,NV=0,LL=0,V63=0,NW=0,V76=0,V75=0,A=0,V111=0,V112=0,V77=0,B=0,V115=0,V116=0,V79=0,V84=0,V83=0,C=0,V120=0,V121=0,V81=0,V85=0,V123=0,V140=0,V139=0,V147=0,V146=0,V154=0,V153=0;
int E,EC,FF;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=71;
x[jvj+1]=11128;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==521&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; EC=pile[v[22]+1]; FF=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l1:V1=bh[v[1]][0];
V2=bh[v[1]][1];
KR=V1;
UR=V2;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(0,117,jvj+36)*/
if((KR==89)) goto l34;
if((KR==78)) goto l35;
if((KR==86)) goto l32;
if((KR==87)) goto l37;
if((KR==69)) goto l38;
if((KR==73)) goto l39;
if((KR==88)) goto l40;
if((KR==72)) goto l41;
if((KR==66)) goto l42;
if((KR==74)) goto l43;
if((KR==71)) goto l45;
if((KR==81)) goto l48;
if((KR==75)) goto l49;
if((KR==70)) goto l50;
if((KR==79)) goto l51;
if((KR==80)) goto l52;
if((KR==65)) goto l53;
if((KR==82)) goto l54;
if((KR==76)) goto l55;
if((KR==77)) goto l56;
if((KR==67)) goto l57;
if((KR==85)) goto l59;
if((KR==84)) goto l65;
if((KR==68)) goto l25;
if((KR!=90)) goto l79;
pile[v[22]]=FF; 
(*f[155])( );     /*EXAPB0(FF)*/
l79:if(KR!=83&&KR!=90) goto l77;
l81:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l3:x[jvj+5]=s[x[jvj+62]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+62];
pile[v[22]]=109; pile[WZ1]=jvj+5; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(109,jvj+5,jvj+50)*/
pile[v[22]]=983; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(983,jvj+50,jvj+51)*/
pile[v[22]]=878; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(878,jvj+51,jvj+52)*/
l82:if((x[jvj+52]<=0)) goto l4;
x[jvj+53]=s[x[jvj+52]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+52];
pile[v[22]]=163; pile[WZ1]=jvj+53; 
(*f[44])( );if(v[102]) goto l83;     /*FNDC1(163,jvj+53,V140)*/
V140=pile[WZ2]; 
pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l83;     /*FNDC1(163,jvj+5,V139)*/
V139=pile[WZ2]; 
if((V140==V139)) goto l83;
x[jvj+52]=t[x[jvj+52]];
goto l82;
l6:x[jvj+6]=s[x[jvj+63]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+63];
pile[v[22]]=970; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(970,jvj+6,jvj+9)*/
if((x[jvj+9]!=324)) goto l7;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(163,jvj+6,V18)*/
V18=pile[WZ2]; 
if((V18==(-7141))) goto l7;
l8:pile[v[22]]=jvj+10; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+10,117,1)*/
l7:x[jvj+63]=t[x[jvj+63]];
l5:if((x[jvj+63]>0)) goto l6;
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l67;     /*FNDC0(117,jvj+10,V20)*/
V20=pile[WZ2]; 
V11=V20;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+13; 
(*f[46])( );     /*TRI0(0,117,jvj+13)*/
pile[v[22]]=878; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(878,jvj+7,jvj+12)*/
x[jvj+64]=x[jvj+12] ;z[jvj+64]=z[jvj+12];
l10:if((x[jvj+64]>0)) goto l11;
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l67;     /*FNDC0(117,jvj+13,V24)*/
V24=pile[WZ2]; 
V13=V24;
V92=x[jvj+7];
pile[v[22]]=20; pile[WZ1]=V92; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V92,0,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V91; pile[WZ2]=547; 
(*f[42])( );     /*SRA1(135,V91,547,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=V93; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V93,58,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=V94; pile[WZ1]=V11; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V94,V11,41,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V95; pile[WZ2]=104; 
(*f[42])( );     /*SRA1(135,V95,104,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=V97; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V97,58,V98)*/
V98=pile[WZ2]; 
pile[v[22]]=V98; pile[WZ1]=V13; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V98,V13,41,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=V99; 
(*f[40])( );     /*SLG0(V99)*/
l67:x[jvj+48]=t[x[jvj+48]];
l66:if((x[jvj+48]<=0)) goto l79;
x[jvj+7]=s[x[jvj+48]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+48];
pile[v[22]]=284; pile[WZ1]=jvj+7; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(284,jvj+7,jvj+49)*/
if((x[jvj+49]!=0)) goto l67;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(0,117,jvj+10)*/
pile[v[22]]=878; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(878,jvj+7,jvj+8)*/
x[jvj+63]=x[jvj+8] ;z[jvj+63]=z[jvj+8];
goto l5;
l11:x[jvj+6]=s[x[jvj+64]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+64];
pile[v[22]]=163; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+6,V22)*/
V22=pile[WZ2]; 
if((V22==(-7141))) goto l12;
l9:pile[v[22]]=970; pile[WZ1]=jvj+6; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(970,jvj+6,jvj+11)*/
if((x[jvj+11]==324)) goto l12;
l13:pile[v[22]]=jvj+13; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+13,117,1)*/
l12:x[jvj+64]=t[x[jvj+64]];
goto l10;
l14:V28=V29;
l64:pile[v[22]]=135; pile[WZ1]=V28; pile[WZ2]=967; 
(*f[42])( );     /*SRA1(135,V28,967,V103)*/
V103=pile[WZ3]; 
pile[v[22]]=V103; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V103,58,V104)*/
V104=pile[WZ2]; 
pile[v[22]]=V104; pile[WZ1]=V34; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V104,V34,41,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=V105; 
(*f[40])( );     /*SLG0(V105)*/
l62:x[jvj+71]=t[x[jvj+71]];
l61:if((x[jvj+71]<=0)) goto l60;
x[jvj+44]=s[x[jvj+71]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+71];
pile[v[22]]=860; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(860,jvj+44,jvj+45)*/
if((x[jvj+45]!=530)) goto l62;
pile[v[22]]=935; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(935,jvj+44,jvj+46)*/
if((x[jvj+46]!=547)) goto l62;
pile[v[22]]=967; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(967,jvj+44,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=jvj+44; pile[WZ1]=EC; pile[WZ2]=jvj+47; 
(*f[505])( );     /*EVCOND0(jvj+44,EC,jvj+47)*/
if((x[jvj+47]==135)) goto l63;
goto l62;
l15:pile[v[22]]=860; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(860,jvj+15,jvj+16)*/
if((x[jvj+16]==954)) goto l20;
l21:pile[v[22]]=jvj+15; pile[WZ1]=EC; pile[WZ2]=jvj+22; 
(*f[505])( );     /*EVCOND0(jvj+15,EC,jvj+22)*/
if((x[jvj+22]==135)) goto l22;
l20:x[jvj+65]=t[x[jvj+65]];
l18:if((x[jvj+65]>0)) goto l19;
x[jvj+18]=t[x[jvj+18]];
l16:if((x[jvj+18]>0)) goto l17;
if((x[jvj+23]==0)) goto l46;
pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(5,0,42,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V109; pile[WZ2]=V108; 
(*f[39])( );     /*SDX0(20,V109,V108,V43)*/
V43=pile[WZ3]; 
V42=incon;
pile[v[22]]=163; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(163,jvj+24,V48)*/
V48=pile[WZ2]; 
V38=V48;
pile[v[22]]=V43; pile[WZ1]=V38; 
(*f[37])( );     /*SRA0(V43,V38,V42)*/
V42=pile[WZ2]; 
l47:pile[v[22]]=V42; 
(*f[40])( );     /*SLG0(V42)*/
l24:if((x[jvj+23]<=0)) goto l46;
x[jvj+25]=s[x[jvj+23]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+23];
pile[v[22]]=jvj+25; pile[WZ1]=32; 
(*f[508])( );     /*LISTESSAI0(jvj+25,32)*/
x[jvj+23]=t[x[jvj+23]];
goto l24;
l17:x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(jvj+19,jvj+20,jvj+21)*/
x[jvj+65]=x[jvj+21] ;z[jvj+65]=z[jvj+21];
goto l18;
l19:x[jvj+15]=s[x[jvj+65]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+65];
if((UR==65)) goto l15;
if((UR!=75)) goto l21;
pile[v[22]]=860; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(860,jvj+15,jvj+17)*/
if((x[jvj+17]!=954)) goto l20;
goto l21;
l22:pile[v[22]]=jvj+23; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+23,jvj+15)*/
goto l20;
l23:V42=V43;
goto l47;
l25:x[jvj+35]=0 ;z[jvj+35]=0;
x[jvj+66]=x[EC] ;z[jvj+66]=z[EC];
l28:if((x[jvj+66]>0)) goto l29;
pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,NT,KK)*/
NT=pile[WZ1]; KK=pile[WZ2]; 
V62=KK+1;
pile[v[22]]=V62; 
(*f[126])( );     /*LND2(V62,NV,LL)*/
NV=pile[WZ1]; LL=pile[WZ2]; 
V63=LL+1;
pile[v[22]]=V63; 
(*f[135])( );     /*LND3(V63,NW)*/
NW=pile[WZ1]; 
pile[v[22]]=NT; pile[WZ1]=NV; pile[WZ2]=E; pile[WZ3]=NW; pile[WZ4]=jvj+35; 
(*f[520])( );     /*ANEXPERIENCES0(NT,NV,E,NW,jvj+35)*/
goto l79;
l29:x[jvj+26]=s[x[jvj+66]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+66];
pile[v[22]]=111; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+26,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=25)) goto l31;
x[jvj+29]=d[20];z[jvj+29]=0;
l26:if((x[jvj+29]<=0)) goto l31;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+26; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(jvj+30,jvj+26,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+31,jvj+32)*/
if((x[jvj+32]!=43)) goto l27;
pile[v[22]]=102; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,jvj+31,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]==683)) goto l30;
l27:x[jvj+29]=t[x[jvj+29]];
goto l26;
l31:pile[v[22]]=jvj+35; pile[WZ1]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+35,jvj+26)*/
l30:x[jvj+66]=t[x[jvj+66]];
goto l28;
l32:x[jvj+37]=incon;
V59=bh[v[1]][2];
if((V59==43)) goto l33;
x[jvj+37]=29 ;z[jvj+37]=29;
l36:pile[v[22]]=3; 
(*f[126])( );     /*LND2(3,V54,V55)*/
V54=pile[WZ1]; V55=pile[WZ2]; 
V58=V55+1;
pile[v[22]]=V58; 
(*f[135])( );     /*LND3(V58,V56)*/
V56=pile[WZ1]; 
pile[v[22]]=jvj+37; pile[WZ1]=UR; pile[WZ2]=V54; pile[WZ3]=V56; pile[WZ4]=E; pile[WZ5]=EC; pile[v[22]+6]=jvj+36; 
(*f[517])( );     /*EXAPBV0(jvj+37,UR,V54,V56,E,EC,jvj+36)*/
goto l79;
l33:x[jvj+37]=996 ;z[jvj+37]=996;
goto l36;
l34:pile[v[22]]=E; pile[WZ1]=EC; pile[WZ2]=jvj+36; 
(*f[495])( );     /*EXAPBY0(E,EC,jvj+36)*/
goto l79;
l35:pile[v[22]]=UR; pile[WZ1]=E; pile[WZ2]=jvj+36; 
(*f[511])( );     /*EXAPBN0(UR,E,jvj+36)*/
goto l79;
l37:pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,V53)*/
V53=pile[WZ1]; 
pile[v[22]]=V53; pile[WZ1]=E; pile[WZ2]=EC; pile[WZ3]=jvj+36; 
(*f[516])( );     /*EXAPBW0(V53,E,EC,jvj+36)*/
goto l79;
l38:pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,V8,K)*/
V8=pile[WZ1]; K=pile[WZ2]; 
V10=K+1;
pile[v[22]]=V10; 
(*f[135])( );     /*LND3(V10,V9)*/
V9=pile[WZ1]; 
pile[v[22]]=E; pile[WZ1]=EC; pile[WZ2]=jvj+36; pile[WZ3]=V8; pile[WZ4]=V9; 
(*f[504])( );     /*EXAPBE0(E,EC,jvj+36,V8,V9)*/
goto l79;
l39:pile[v[22]]=E; pile[WZ1]=EC; pile[WZ2]=UR; 
(*f[499])( );     /*EXAPBI0(E,EC,UR)*/
goto l79;
l40:pile[v[22]]=UR; pile[WZ1]=EC; pile[WZ2]=E; 
(*f[510])( );     /*EXAPBX0(UR,EC,E)*/
goto l79;
l41:pile[v[22]]=E; pile[WZ1]=EC; pile[WZ2]=UR; 
(*f[512])( );     /*EXAPBH0(E,EC,UR)*/
goto l79;
l42:pile[v[22]]=E; pile[WZ1]=EC; pile[WZ2]=UR; 
(*f[514])( );     /*EXAPBB0(E,EC,UR)*/
goto l79;
l43:pile[v[22]]=E; pile[WZ1]=EC; pile[WZ2]=UR; 
(*f[515])( );     /*EXAPBJ0(E,EC,UR)*/
goto l79;
l45:x[jvj+67]=x[E] ;z[jvj+67]=z[E];
l44:if((x[jvj+67]<=0)) goto l79;
x[jvj+24]=s[x[jvj+67]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+67];
pile[v[22]]=109; pile[WZ1]=jvj+24; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(109,jvj+24,jvj+54)*/
pile[v[22]]=983; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(983,jvj+54,jvj+55)*/
pile[v[22]]=878; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(878,jvj+55,jvj+56)*/
l84:if((x[jvj+56]<=0)) goto l46;
x[jvj+57]=s[x[jvj+56]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+56];
pile[v[22]]=163; pile[WZ1]=jvj+57; 
(*f[44])( );if(v[102]) goto l85;     /*FNDC1(163,jvj+57,V147)*/
V147=pile[WZ2]; 
pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l85;     /*FNDC1(163,jvj+24,V146)*/
V146=pile[WZ2]; 
if((V147==V146)) goto l85;
x[jvj+56]=t[x[jvj+56]];
goto l84;
l46:x[jvj+67]=t[x[jvj+67]];
goto l44;
l48:pile[v[22]]=jvj+39; 
(*f[500])( );if(v[102]) goto l79;     /*QUESLIRE0(jvj+39)*/
pile[WZ1]=E; pile[WZ2]=EC; 
(*f[501])( );     /*QUESPB0(jvj+39,E,EC)*/
goto l79;
l49:pile[v[22]]=E; pile[WZ1]=EC; 
(*f[503])( );     /*EXAPBK0(E,EC)*/
goto l79;
l50:pile[v[22]]=E; pile[WZ1]=EC; 
(*f[506])( );     /*EXAPBF0(E,EC)*/
goto l79;
l51:pile[v[22]]=E; 
(*f[507])( );     /*EXAPBO0(E)*/
goto l79;
l52:pile[v[22]]=E; 
(*f[513])( );     /*EXAPBP0(E)*/
goto l79;
l53:pile[v[22]]=E; pile[WZ1]=EC; 
(*f[518])( );     /*EXAPBA0(E,EC)*/
goto l79;
l54:pile[v[22]]=E; 
(*f[519])( );     /*EXAPBR0(E)*/
goto l79;
l55:pile[v[22]]=1; 
(*f[126])( );     /*LND2(1,V50,V51)*/
V50=pile[WZ1]; V51=pile[WZ2]; 
pile[v[22]]=V51; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+40; 
(*f[78])( );if(v[102]) goto l79;     /*SMA0(V51,36,67,jvj+40)*/
pile[v[22]]=85; pile[WZ1]=V50; pile[WZ2]=E; 
(*f[509])( );     /*ETUTILISE1(85,V50,E,jvj+40)*/
goto l79;
l56:pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,NRR,V5)*/
NRR=pile[WZ1]; V5=pile[WZ2]; 
V7=V5+1;
pile[v[22]]=V7; 
(*f[135])( );     /*LND3(V7,V6)*/
V6=pile[WZ1]; 
pile[v[22]]=E; pile[WZ1]=NRR; pile[WZ2]=V6; 
(*f[502])( );     /*EXAPBM0(E,NRR,V6)*/
goto l79;
l57:pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,NR,JJ)*/
NR=pile[WZ1]; JJ=pile[WZ2]; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(250,158,jvj+3)*/
V4=JJ+1;
pile[v[22]]=V4; 
(*f[135])( );     /*LND3(V4,NX)*/
NX=pile[WZ1]; 
x[jvj+62]=x[E] ;z[jvj+62]=z[E];
l2:if((x[jvj+62]>0)) goto l3;
pile[v[22]]=jvj+3; pile[WZ1]=2; 
(*f[498])( );     /*SORCOMPA0(jvj+3,2)*/
goto l79;
l59:x[jvj+69]=x[E] ;z[jvj+69]=z[E];
l58:if((x[jvj+69]<=0)) goto l79;
x[jvj+41]=s[x[jvj+69]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+69];
pile[v[22]]=109; pile[WZ1]=jvj+41; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(109,jvj+41,jvj+58)*/
pile[v[22]]=983; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(983,jvj+58,jvj+59)*/
pile[v[22]]=878; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(878,jvj+59,jvj+60)*/
l86:if((x[jvj+60]<=0)) goto l60;
x[jvj+61]=s[x[jvj+60]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+60];
pile[v[22]]=163; pile[WZ1]=jvj+61; 
(*f[44])( );if(v[102]) goto l87;     /*FNDC1(163,jvj+61,V154)*/
V154=pile[WZ2]; 
pile[WZ1]=jvj+41; 
(*f[44])( );if(v[102]) goto l87;     /*FNDC1(163,jvj+41,V153)*/
V153=pile[WZ2]; 
if((V154==V153)) goto l87;
x[jvj+60]=t[x[jvj+60]];
goto l86;
l60:x[jvj+69]=t[x[jvj+69]];
goto l58;
l63:pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V102,0,V29)*/
V29=pile[WZ3]; 
V28=incon;
pile[v[22]]=163; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(163,jvj+14,V33)*/
V33=pile[WZ2]; 
V=V33;
pile[v[22]]=V29; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V29,V,V28)*/
V28=pile[WZ2]; 
goto l64;
l65:pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(457,324,jvj+48)*/
goto l66;
l68:pile[v[22]]=V76; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V76,83,V75)*/
V75=pile[WZ2]; 
l69:V77=incon;
pile[v[22]]=1000; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(1000,jvj+36,A)*/
A=pile[WZ2]; 
if((A<=0)) goto l70;
pile[v[22]]=135; pile[WZ1]=V75; pile[WZ2]=1000; 
(*f[42])( );     /*SRA1(135,V75,1000,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=V111; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V111,58,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=V112; pile[WZ1]=A; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V112,A,41,V77)*/
V77=pile[WZ3]; 
l71:V79=incon;
pile[v[22]]=1041; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l72;     /*FNDC0(1041,jvj+36,B)*/
B=pile[WZ2]; 
if((B<=0)) goto l72;
pile[v[22]]=135; pile[WZ1]=V77; pile[WZ2]=1041; 
(*f[42])( );     /*SRA1(135,V77,1041,V115)*/
V115=pile[WZ3]; 
pile[v[22]]=V115; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V115,58,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=V116; pile[WZ1]=B; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V116,B,41,V79)*/
V79=pile[WZ3]; 
l73:V81=incon;
pile[v[22]]=510; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l76;     /*FNDC0(510,jvj+36,C)*/
C=pile[WZ2]; 
if((C<=0)) goto l76;
pile[v[22]]=V79; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V79,(-9813),V120)*/
V120=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=C; pile[WZ2]=V120; 
(*f[39])( );     /*SDX0(41,C,V120,V121)*/
V121=pile[WZ3]; 
pile[v[22]]=V121; pile[WZ1]=(-8405); 
(*f[37])( );     /*SRA0(V121,(-8405),V84)*/
V84=pile[WZ2]; 
V83=incon;
if((C>1)) goto l74;
V83=V84;
l75:V81=V83;
l78:pile[v[22]]=V81; 
(*f[40])( );     /*SLG0(V81)*/
l80:pile[v[22]]=34; 
(*f[346])( );     /*LK1(34)*/
goto l1;
l70:V77=V75;
goto l71;
l72:V79=V77;
goto l73;
l74:pile[v[22]]=V84; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V84,83,V83)*/
V83=pile[WZ2]; 
goto l75;
l76:V81=V79;
goto l78;
l77:pile[v[22]]=117; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l80;     /*FNDC0(117,jvj+36,V85)*/
V85=pile[WZ2]; 
if((V85<=0)) goto l80;
pile[v[22]]=41; pile[WZ1]=V85; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V85,0,V123)*/
V123=pile[WZ3]; 
pile[v[22]]=V123; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V123,(-4670),V76)*/
V76=pile[WZ2]; 
V75=incon;
if((V85>1)) goto l68;
V75=V76;
goto l69;
l83:x[jvj+4]=x[jvj+53] ;z[jvj+4]=z[jvj+53];
pile[v[22]]=NR; pile[WZ1]=NX; pile[WZ2]=jvj+3; pile[WZ3]=167; pile[WZ4]=jvj+4; pile[WZ5]=jvj+5; 
(*f[497])( );     /*COMPNORD0(NR,NX,jvj+3,167,jvj+4,jvj+5)*/
l4:x[jvj+62]=t[x[jvj+62]];
goto l2;
l85:x[jvj+68]=x[jvj+57] ;z[jvj+68]=z[jvj+57];
pile[v[22]]=109; pile[WZ1]=jvj+24; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(109,jvj+24,jvj+38)*/
V109=x[jvj+38];
x[jvj+20]=x[jvj+68] ;z[jvj+20]=z[jvj+68];
x[jvj+23]=0 ;z[jvj+23]=0;
x[jvj+18]=d[19];z[jvj+18]=0;
goto l16;
l87:x[jvj+70]=x[jvj+61] ;z[jvj+70]=z[jvj+61];
pile[v[22]]=109; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(109,jvj+41,jvj+42)*/
x[jvj+14]=x[jvj+70] ;z[jvj+14]=z[jvj+70];
pile[v[22]]=944; pile[WZ1]=jvj+14; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(944,jvj+14,jvj+43)*/
V102=x[jvj+42];
x[jvj+71]=x[jvj+43] ;z[jvj+71]=z[jvj+43];
goto l61;
}
