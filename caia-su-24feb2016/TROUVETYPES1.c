#include "dx.h"
void TROUVETYPES1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V7=0,V8=0,V10=0,V12=0,V21=0,V22=0,V23=0,V26=0,V31=0,V44=0,V65=0,V62=0,V66=0,V49=0,V51=0,V50=0,V52=0,V61=0,V82=0,V81=0,V84=0,V60=0,V83=0,V57=0,V80=0,V79=0,V77=0,V78=0,V43=0,V89=0,V110=0,V107=0,V111=0,V94=0,V96=0,V95=0,V97=0,V106=0,V127=0,V126=0,V129=0,V105=0,V128=0,V102=0,V125=0,V124=0,V122=0,V123=0,V88=0;
int ED,A,ND,NT,S,B;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=75;
x[jvj+1]=11077;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==4091&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
ED=pile[v[22]]; A=pile[v[22]+1]; ND=pile[v[22]+2]; NT=pile[v[22]+3]; S=pile[v[22]+4]; B=pile[v[22]+5]; v[22]+=6; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V23=B;
V22=NT;
V21=ND;
l19:if((V23==0)) goto l3;
x[jvj+66]=x[A] ;z[jvj+66]=z[A];
l10:if((x[jvj+66]>0)) goto l11;
x[jvj+67]=x[A] ;z[jvj+67]=z[A];
l12:if((x[jvj+67]>0)) goto l13;
pile[v[22]]=258; pile[WZ1]=S; 
(*f[71])( );     /*ENLV0(258,S)*/
x[jvj+69]=x[A] ;z[jvj+69]=z[A];
l17:if((x[jvj+69]<=0)) goto l20;
x[jvj+7]=s[x[jvj+69]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+69];
x[jvj+42]=258 ;z[jvj+42]=258;
pile[v[22]]=159; pile[WZ1]=jvj+7; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(159,jvj+7,jvj+41)*/
for(i=x[jvj+41],V89=0;i>0;i=t[i],V89++)  ;
pile[v[22]]=jvj+42; pile[WZ1]=S; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(jvj+42,S,jvj+43)*/
l59:if((x[jvj+43]>0)) goto l85;
pile[v[22]]=159; pile[WZ1]=jvj+7; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(159,jvj+7,jvj+44)*/
V110=1;
l60:pile[v[22]]=jvj+42; pile[WZ1]=S; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(jvj+42,S,jvj+45)*/
x[jvj+73]=x[jvj+45] ;z[jvj+73]=z[jvj+45];
l61:if((x[jvj+73]>0)) goto l65;
pile[v[22]]=V110; pile[WZ1]=510; pile[WZ2]=jvj+46; 
(*f[46])( );     /*TRI0(V110,510,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+44; pile[WZ2]=159; pile[WZ3]=jvj+47; 
(*f[301])( );     /*TRI11(jvj+46,jvj+44,159,jvj+47)*/
V107=V110;
if((x[jvj+42]==256)) goto l86;
if((x[jvj+42]!=258)) goto l62;
pile[v[22]]=1197; pile[WZ1]=jvj+7; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(1197,jvj+7,jvj+48)*/
pile[v[22]]=195; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(195,jvj+7,jvj+49)*/
pile[v[22]]=jvj+47; pile[WZ1]=1197; pile[WZ2]=jvj+48; 
(*f[34])( );     /*CHGC0(jvj+47,1197,jvj+48)*/
pile[WZ1]=195; pile[WZ2]=jvj+49; 
(*f[34])( );     /*CHGC0(jvj+47,195,jvj+49)*/
l62:pile[v[22]]=S; pile[WZ1]=jvj+42; pile[WZ2]=jvj+47; 
(*f[36])( );     /*PLUSC0(S,jvj+42,jvj+47)*/
l63:pile[v[22]]=jvj+7; pile[WZ1]=510; pile[WZ2]=V107; 
(*f[43])( );     /*CHGC2(jvj+7,510,V107)*/
l18:x[jvj+69]=t[x[jvj+69]];
goto l17;
l2:x[jvj+3]=s[x[jvj+62]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+62];
pile[v[22]]=159; pile[WZ1]=jvj+3; 
(*f[71])( );     /*ENLV0(159,jvj+3)*/
x[jvj+62]=t[x[jvj+62]];
l1:if((x[jvj+62]>0)) goto l2;
x[jvj+63]=x[A] ;z[jvj+63]=z[A];
l4:if((x[jvj+63]>0)) goto l5;
pile[v[22]]=256; pile[WZ1]=S; 
(*f[71])( );     /*ENLV0(256,S)*/
x[jvj+65]=x[ED] ;z[jvj+65]=z[ED];
l8:if((x[jvj+65]<=0)) goto l20;
x[jvj+19]=s[x[jvj+65]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+65];
x[jvj+21]=256 ;z[jvj+21]=256;
pile[v[22]]=159; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(159,jvj+19,jvj+20)*/
for(i=x[jvj+20],V44=0;i>0;i=t[i],V44++)  ;
pile[v[22]]=jvj+21; pile[WZ1]=S; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(jvj+21,S,jvj+22)*/
l31:if((x[jvj+22]>0)) goto l57;
pile[v[22]]=159; pile[WZ1]=jvj+19; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(159,jvj+19,jvj+23)*/
V65=1;
l32:pile[v[22]]=jvj+21; pile[WZ1]=S; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(jvj+21,S,jvj+24)*/
x[jvj+70]=x[jvj+24] ;z[jvj+70]=z[jvj+24];
l33:if((x[jvj+70]>0)) goto l37;
pile[v[22]]=V65; pile[WZ1]=510; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(V65,510,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+23; pile[WZ2]=159; pile[WZ3]=jvj+26; 
(*f[301])( );     /*TRI11(jvj+25,jvj+23,159,jvj+26)*/
V62=V65;
if((x[jvj+21]==256)) goto l58;
if((x[jvj+21]!=258)) goto l34;
pile[v[22]]=1197; pile[WZ1]=jvj+19; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(1197,jvj+19,jvj+27)*/
pile[v[22]]=195; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(195,jvj+19,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=1197; pile[WZ2]=jvj+27; 
(*f[34])( );     /*CHGC0(jvj+26,1197,jvj+27)*/
pile[WZ1]=195; pile[WZ2]=jvj+28; 
(*f[34])( );     /*CHGC0(jvj+26,195,jvj+28)*/
l34:pile[v[22]]=S; pile[WZ1]=jvj+21; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(S,jvj+21,jvj+26)*/
l35:pile[v[22]]=jvj+19; pile[WZ1]=510; pile[WZ2]=V62; 
(*f[43])( );     /*CHGC2(jvj+19,510,V62)*/
l9:x[jvj+65]=t[x[jvj+65]];
goto l8;
l3:x[jvj+62]=x[ED] ;z[jvj+62]=z[ED];
goto l1;
l5:x[jvj+4]=s[x[jvj+63]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+63];
pile[v[22]]=510; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(510,jvj+4,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
x[jvj+64]=x[jvj+5] ;z[jvj+64]=z[jvj+5];
l7:if((x[jvj+64]<=0)) goto l6;
x[jvj+12]=s[x[jvj+64]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+64];
pile[v[22]]=159; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(159,jvj+12,jvj+13)*/
l23:if((x[jvj+13]>0)) goto l26;
pile[v[22]]=V2; pile[WZ1]=510; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(V2,510,jvj+14)*/
pile[v[22]]=jvj+12; pile[WZ1]=159; 
(*f[36])( );     /*PLUSC0(jvj+12,159,jvj+14)*/
l24:pile[v[22]]=jvj+14; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+14,117,1)*/
x[jvj+64]=t[x[jvj+64]];
goto l7;
l6:x[jvj+63]=t[x[jvj+63]];
goto l4;
l11:x[jvj+6]=s[x[jvj+66]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+66];
pile[v[22]]=159; pile[WZ1]=jvj+6; 
(*f[71])( );     /*ENLV0(159,jvj+6)*/
x[jvj+66]=t[x[jvj+66]];
goto l10;
l13:x[jvj+7]=s[x[jvj+67]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+67];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(jvj+7,jvj+8)*/
x[jvj+68]=x[jvj+8] ;z[jvj+68]=z[jvj+8];
l14:if((x[jvj+68]>0)) goto l15;
x[jvj+67]=t[x[jvj+67]];
goto l12;
l15:x[jvj+9]=s[x[jvj+68]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+68];
pile[v[22]]=510; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(510,jvj+9,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=159; pile[WZ1]=jvj+7; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(159,jvj+7,jvj+16)*/
l27:if((x[jvj+16]>0)) goto l30;
pile[v[22]]=V7; pile[WZ1]=510; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(V7,510,jvj+17)*/
pile[v[22]]=jvj+7; pile[WZ1]=159; 
(*f[36])( );     /*PLUSC0(jvj+7,159,jvj+17)*/
l28:pile[v[22]]=jvj+17; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+17,117,1)*/
l16:x[jvj+68]=t[x[jvj+68]];
goto l14;
l20:pile[v[22]]=256; pile[WZ1]=S; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(256,S,jvj+10)*/
for(i=x[jvj+10],V8=0;i>0;i=t[i],V8++)  ;
pile[v[22]]=258; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(258,S,jvj+11)*/
for(i=x[jvj+11],V10=0;i>0;i=t[i],V10++)  ;
if((V8>V21)) goto l21;
if((V10>V22)) goto l21;
l22:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=6; return;
l21:V12=1-V23;
V21=V8;
V22=V10;
V23=V12;
goto l19;
l25:x[jvj+13]=t[x[jvj+13]];
goto l23;
l26:x[jvj+15]=s[x[jvj+13]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+13];
pile[v[22]]=510; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(510,jvj+15,V26)*/
V26=pile[WZ2]; 
if((V26!=V2)) goto l25;
x[jvj+14]=x[jvj+15] ;z[jvj+14]=z[jvj+15];
goto l24;
l29:x[jvj+16]=t[x[jvj+16]];
goto l27;
l30:x[jvj+18]=s[x[jvj+16]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+16];
pile[v[22]]=510; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(510,jvj+18,V31)*/
V31=pile[WZ2]; 
if((V31!=V7)) goto l29;
x[jvj+17]=x[jvj+18] ;z[jvj+17]=z[jvj+18];
goto l28;
l36:x[jvj+70]=t[x[jvj+70]];
goto l33;
l37:x[jvj+29]=s[x[jvj+70]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+70];
pile[v[22]]=510; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(510,jvj+29,V66)*/
V66=pile[WZ2]; 
if((V66!=V65)) goto l36;
V65++;
if((V65<=500)) goto l32;
goto l9;
l39:x[jvj+30]=s[x[jvj+71]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+71];
pile[v[22]]=510; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(510,jvj+30,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(117,jvj+30,V51)*/
V51=pile[WZ2]; 
x[jvj+72]=x[jvj+20] ;z[jvj+72]=z[jvj+20];
l40:if((x[jvj+72]<=0)) goto l42;
x[jvj+31]=s[x[jvj+72]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+72];
pile[v[22]]=510; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(510,jvj+31,V50)*/
V50=pile[WZ2]; 
if((V50!=V49)) goto l41;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(117,jvj+31,V52)*/
V52=pile[WZ2]; 
if((V52!=V51)) goto l41;
x[jvj+71]=t[x[jvj+71]];
l38:if((x[jvj+71]>0)) goto l39;
V62=V61;
goto l35;
l41:x[jvj+72]=t[x[jvj+72]];
goto l40;
l42:x[jvj+22]=t[x[jvj+22]];
goto l31;
l48:V84=t[V84];
l45:if((V84>0)) goto l49;
V60=135;
l46:if((V60==134)) goto l42;
l43:pile[v[22]]=510; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(510,jvj+32,V61)*/
V61=pile[WZ2]; 
x[jvj+71]=x[jvj+39] ;z[jvj+71]=z[jvj+39];
goto l38;
l49:V83=s[V84];
for(a=x[jvj+34];a>0;a=t[a]) if(s[a]==V83) goto l48;
l47:V60=134;
goto l46;
l53:V79=s[V80];
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==V79) goto l54;
l51:V57=134;
l50:if((V57==134)) goto l42;
l44:pile[v[22]]=195; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(195,jvj+32,jvj+33)*/
pile[WZ1]=jvj+19; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(195,jvj+19,jvj+34)*/
for(i=x[jvj+33],V82=0;i>0;i=t[i],V82++)  ;
for(i=x[jvj+34],V81=0;i>0;i=t[i],V81++)  ;
if((V82!=V81)) goto l47;
V84=x[jvj+33];
goto l45;
l54:V80=t[V80];
l52:if((V80>0)) goto l53;
V57=135;
goto l50;
l55:pile[v[22]]=1197; pile[WZ1]=jvj+32; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(1197,jvj+32,jvj+36)*/
pile[WZ1]=jvj+19; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(1197,jvj+19,jvj+35)*/
for(i=x[jvj+36],V78=0;i>0;i=t[i],V78++)  ;
for(i=x[jvj+35],V77=0;i>0;i=t[i],V77++)  ;
if((V78!=V77)) goto l51;
V80=x[jvj+36];
goto l52;
l56:pile[v[22]]=447; pile[WZ1]=jvj+32; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(447,jvj+32,jvj+37)*/
pile[v[22]]=498; pile[WZ1]=jvj+19; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(498,jvj+19,jvj+38)*/
if((x[jvj+37]!=x[jvj+38])) goto l42;
goto l43;
l57:x[jvj+32]=s[x[jvj+22]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+22];
pile[v[22]]=159; pile[WZ1]=jvj+32; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(159,jvj+32,jvj+39)*/
for(i=x[jvj+39],V43=0;i>0;i=t[i],V43++)  ;
if((V44!=V43)) goto l42;
if((x[jvj+21]==256)) goto l56;
if((x[jvj+21]==258)) goto l55;
if((x[jvj+21]==258)) goto l44;
goto l43;
l58:pile[v[22]]=498; pile[WZ1]=jvj+19; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(498,jvj+19,jvj+40)*/
pile[v[22]]=jvj+26; pile[WZ1]=447; 
(*f[35])( );     /*CHGC1(jvj+26,447,jvj+40)*/
goto l34;
l64:x[jvj+73]=t[x[jvj+73]];
goto l61;
l65:x[jvj+50]=s[x[jvj+73]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+73];
pile[v[22]]=510; pile[WZ1]=jvj+50; 
(*f[26])( );if(v[102]) goto l64;     /*FNDC0(510,jvj+50,V111)*/
V111=pile[WZ2]; 
if((V111!=V110)) goto l64;
V110++;
if((V110<=500)) goto l60;
goto l18;
l67:x[jvj+51]=s[x[jvj+74]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+74];
pile[v[22]]=510; pile[WZ1]=jvj+51; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(510,jvj+51,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(117,jvj+51,V96)*/
V96=pile[WZ2]; 
x[jvj+75]=x[jvj+41] ;z[jvj+75]=z[jvj+41];
l68:if((x[jvj+75]<=0)) goto l70;
x[jvj+52]=s[x[jvj+75]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+75];
pile[v[22]]=510; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(510,jvj+52,V95)*/
V95=pile[WZ2]; 
if((V95!=V94)) goto l69;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(117,jvj+52,V97)*/
V97=pile[WZ2]; 
if((V97!=V96)) goto l69;
x[jvj+74]=t[x[jvj+74]];
l66:if((x[jvj+74]>0)) goto l67;
V107=V106;
goto l63;
l69:x[jvj+75]=t[x[jvj+75]];
goto l68;
l70:x[jvj+43]=t[x[jvj+43]];
goto l59;
l76:V129=t[V129];
l73:if((V129>0)) goto l77;
V105=135;
l74:if((V105==134)) goto l70;
l71:pile[v[22]]=510; pile[WZ1]=jvj+53; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(510,jvj+53,V106)*/
V106=pile[WZ2]; 
x[jvj+74]=x[jvj+60] ;z[jvj+74]=z[jvj+60];
goto l66;
l77:V128=s[V129];
for(a=x[jvj+55];a>0;a=t[a]) if(s[a]==V128) goto l76;
l75:V105=134;
goto l74;
l81:V124=s[V125];
for(a=x[jvj+56];a>0;a=t[a]) if(s[a]==V124) goto l82;
l79:V102=134;
l78:if((V102==134)) goto l70;
l72:pile[v[22]]=195; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(195,jvj+53,jvj+54)*/
pile[WZ1]=jvj+7; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(195,jvj+7,jvj+55)*/
for(i=x[jvj+54],V127=0;i>0;i=t[i],V127++)  ;
for(i=x[jvj+55],V126=0;i>0;i=t[i],V126++)  ;
if((V127!=V126)) goto l75;
V129=x[jvj+54];
goto l73;
l82:V125=t[V125];
l80:if((V125>0)) goto l81;
V102=135;
goto l78;
l83:pile[v[22]]=1197; pile[WZ1]=jvj+53; pile[WZ2]=jvj+57; 
(*f[33])( );     /*FNDE0(1197,jvj+53,jvj+57)*/
pile[WZ1]=jvj+7; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(1197,jvj+7,jvj+56)*/
for(i=x[jvj+57],V123=0;i>0;i=t[i],V123++)  ;
for(i=x[jvj+56],V122=0;i>0;i=t[i],V122++)  ;
if((V123!=V122)) goto l79;
V125=x[jvj+57];
goto l80;
l84:pile[v[22]]=447; pile[WZ1]=jvj+53; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(447,jvj+53,jvj+58)*/
pile[v[22]]=498; pile[WZ1]=jvj+7; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(498,jvj+7,jvj+59)*/
if((x[jvj+58]!=x[jvj+59])) goto l70;
goto l71;
l85:x[jvj+53]=s[x[jvj+43]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+43];
pile[v[22]]=159; pile[WZ1]=jvj+53; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(159,jvj+53,jvj+60)*/
for(i=x[jvj+60],V88=0;i>0;i=t[i],V88++)  ;
if((V89!=V88)) goto l70;
if((x[jvj+42]==256)) goto l84;
if((x[jvj+42]==258)) goto l83;
if((x[jvj+42]==258)) goto l72;
goto l71;
l86:pile[v[22]]=498; pile[WZ1]=jvj+7; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(498,jvj+7,jvj+61)*/
pile[v[22]]=jvj+47; pile[WZ1]=447; 
(*f[35])( );     /*CHGC1(jvj+47,447,jvj+61)*/
goto l62;
}
