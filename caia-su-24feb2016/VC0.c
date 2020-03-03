#include "dx.h"
void VC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,W=0,V76=0,V9=0,NN=0,N=0,V26=0,V29=0,T=0,V30=0,V39=0,TT=0,V37=0,VV=0,V24=0,V=0,V15=0,V18=0,V17=0,V16=0,LL=0,V54=0,V57=0,V62=0;
int X,D;
int Z;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=72;
x[jvj+1]=10410;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1641&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; D=pile[v[22]+1]; Z=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=X; 
(*f[1829])( );     /*VD0(X)*/
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,X,jvj+2)*/
if((x[jvj+2]!=39)) goto l47;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,X,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+3,jvj+4)*/
x[jvj+22]=x[jvj+4] ;z[jvj+22]=z[jvj+4];
pile[v[22]]=365; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(365,jvj+22,jvj+23)*/
l12:if((x[jvj+23]>0)) goto l13;
if(x[jvj+22]==11040||x[jvj+22]==10833||x[jvj+22]==10061) goto l17;
NN=0;
l15:pile[v[22]]=jvj+22; pile[WZ1]=NN; pile[WZ2]=jvj+24; 
(*f[133])( );if(v[102]) goto l16;     /*TLDEBL1(jvj+22,NN,jvj+24)*/
NN++;
if((NN<=50)) goto l15;
l17:if(x[jvj+22]!=11040&&x[jvj+22]!=10833&&x[jvj+22]!=10061) goto l47;
N=0;
l40:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,X,jvj+47)*/
if((x[jvj+47]!=39)) goto l47;
pile[v[22]]=114; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(114,X,jvj+48)*/
for(i=x[jvj+48],V15=0;i>0;i=t[i],V15++)  ;
pile[v[22]]=113; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(113,X,jvj+49)*/
for(i=x[jvj+49],V18=0;i>0;i=t[i],V18++)  ;
V17=V15+V18;
V16=V17-1;
x[jvj+50]=incon;
if((x[jvj+49]!=0)) goto l18;
x[jvj+50]=68 ;z[jvj+50]=68;
l18:pile[v[22]]=371; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(371,jvj+22,jvj+25)*/
x[jvj+50]=x[jvj+25] ;z[jvj+50]=z[jvj+25];
l41:pile[v[22]]=jvj+22; pile[WZ1]=N; 
(*f[744])( );if(v[102]) goto l47;     /*VE0(jvj+22,N,LL)*/
LL=pile[WZ2]; 
pile[WZ1]=583; pile[WZ2]=jvj+65; 
(*f[54])( );     /*TRI1(jvj+22,583,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+22; pile[WZ2]=297; pile[WZ3]=jvj+66; 
(*f[58])( );     /*TRI3(jvj+65,jvj+22,297,jvj+66)*/
pile[v[22]]=130; pile[WZ1]=N; pile[WZ2]=246; pile[WZ3]=LL; pile[WZ4]=jvj+66; pile[WZ5]=Z; 
(*f[190])( );     /*QUADRI3(130,N,246,LL,jvj+66,Z)*/
l33:if((x[jvj+49]<=0)) goto l36;
x[jvj+41]=s[x[jvj+49]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+49];
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,jvj+41,jvj+42)*/
if((x[jvj+42]!=113)) goto l34;
pile[v[22]]=103; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(103,jvj+41,jvj+43)*/
pile[v[22]]=140; pile[WZ1]=jvj+43; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+43,V37)*/
V37=pile[WZ2]; 
VV=V37;
if(VV!=(-601)&&VV!=(-609)) goto l32;
pile[v[22]]=860; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(860,X,jvj+37)*/
pile[v[22]]=146; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(146,jvj+37,jvj+38)*/
pile[v[22]]=140; pile[WZ1]=VV; pile[WZ2]=158; pile[WZ3]=jvj+38; pile[WZ4]=jvj+39; 
(*f[692])( );     /*QUADRI13(140,VV,158,jvj+38,jvj+39)*/
pile[v[22]]=Z; pile[WZ1]=283; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(Z,283,jvj+39)*/
l32:TT=V15;
l31:if((TT>V16)) goto l35;
pile[v[22]]=213; pile[WZ1]=Z; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(213,Z,jvj+35)*/
x[jvj+72]=x[jvj+35] ;z[jvj+72]=z[jvj+35];
l28:if((x[jvj+72]>0)) goto l29;
pile[v[22]]=VV; pile[WZ1]=140; pile[WZ2]=jvj+68; 
(*f[329])( );     /*TRI13(VV,140,jvj+68)*/
pile[v[22]]=122; pile[WZ1]=113; pile[WZ2]=130; pile[WZ3]=TT; pile[WZ4]=jvj+68; pile[WZ5]=jvj+40; 
(*f[47])( );     /*QUADRI0(122,113,130,TT,jvj+68,jvj+40)*/
pile[v[22]]=Z; pile[WZ1]=213; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(Z,213,jvj+40)*/
l35:pile[v[22]]=Z; pile[WZ1]=223; pile[WZ2]=VV; 
(*f[735])( );     /*PLUSC4(Z,223,VV)*/
l34:x[jvj+49]=t[x[jvj+49]];
goto l33;
l2:x[jvj+69]=t[x[jvj+69]];
l1:if((x[jvj+69]<=0)) goto l14;
x[jvj+7]=s[x[jvj+69]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+69];
pile[v[22]]=103; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+7,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+8,V5)*/
V5=pile[WZ2]; 
if((V5!=W)) goto l2;
V76=t[V76];
l5:if((V76>0)) goto l6;
x[jvj+9]=t[x[jvj+9]];
l3:if((x[jvj+9]>0)) goto l4;
x[jvj+13]=d[81];z[jvj+13]=0;
l7:if((x[jvj+13]>0)) goto l8;
x[Z]=x[jvj+11] ;z[Z]=z[jvj+11];
if((x[D]!=68)) goto l45;
x[jvj+20]=vo[15];z[jvj+20]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(583,jvj+20,jvj+21)*/
pile[v[22]]=jvj+11; pile[WZ1]=313; 
(*f[36])( );     /*PLUSC0(jvj+11,313,jvj+21)*/
l44:x[jvj+59]=vo[15];z[jvj+59]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(583,jvj+59,jvj+60)*/
pile[v[22]]=Z; pile[WZ1]=313; 
(*f[36])( );     /*PLUSC0(Z,313,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=312; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+60,312,jvj+22)*/
l45:pile[v[22]]=363; pile[WZ1]=240; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(363,240,jvj+61)*/
for(a=x[jvj+61];a>0;a=t[a]) if(s[a]==x[jvj+22]) goto l46;
l48:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l4:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(jvj+10,jvj+11,jvj+12)*/
V76=x[jvj+12];
goto l5;
l6:W=s[V76];
if((x[jvj+5]=w[x[jvj+10]][3])==incon) goto l14;
pile[v[22]]=jvj+5; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(jvj+5,X,jvj+6)*/
x[jvj+69]=x[jvj+6] ;z[jvj+69]=z[jvj+6];
goto l1;
l8:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+11; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(jvj+14,jvj+11,jvj+15)*/
if((x[jvj+16]=w[x[jvj+14]][3])==incon) goto l9;
pile[v[22]]=jvj+16; pile[WZ1]=X; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(jvj+16,X,jvj+17)*/
x[jvj+70]=x[jvj+17] ;z[jvj+70]=z[jvj+17];
l10:if((x[jvj+70]<=0)) goto l9;
x[jvj+18]=s[x[jvj+70]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+70];
pile[v[22]]=103; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+18,jvj+19)*/
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+19,V9)*/
V9=pile[WZ2]; 
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==V9) goto l11;
l14:x[jvj+23]=t[x[jvj+23]];
goto l12;
l9:x[jvj+13]=t[x[jvj+13]];
goto l7;
l11:x[jvj+70]=t[x[jvj+70]];
goto l10;
l13:x[jvj+11]=s[x[jvj+23]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+23];
x[jvj+9]=d[81];z[jvj+9]=0;
goto l3;
l16:N=NN;
goto l40;
l19:if(x[jvj+50]==incon) goto l20;
goto l41;
l20:x[jvj+50]=67 ;z[jvj+50]=67;
goto l41;
l22:x[jvj+27]=s[x[jvj+71]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+71];
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+27,V26)*/
V26=pile[WZ2]; 
if((V26!=T)) goto l23;
T++;
l25:if((T>V29)) goto l39;
pile[v[22]]=213; pile[WZ1]=Z; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(213,Z,jvj+26)*/
x[jvj+71]=x[jvj+26] ;z[jvj+71]=z[jvj+26];
l21:if((x[jvj+71]>0)) goto l22;
pile[v[22]]=V; pile[WZ1]=140; pile[WZ2]=jvj+67; 
(*f[329])( );     /*TRI13(V,140,jvj+67)*/
pile[v[22]]=122; pile[WZ1]=114; pile[WZ2]=130; pile[WZ3]=T; pile[WZ4]=jvj+67; pile[WZ5]=jvj+34; 
(*f[47])( );     /*QUADRI0(122,114,130,T,jvj+67,jvj+34)*/
pile[v[22]]=Z; pile[WZ1]=213; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(Z,213,jvj+34)*/
l39:pile[v[22]]=Z; pile[WZ1]=222; pile[WZ2]=V; 
(*f[735])( );     /*PLUSC4(Z,222,V)*/
l38:x[jvj+48]=t[x[jvj+48]];
l36:if((x[jvj+48]>0)) goto l37;
pile[v[22]]=Z; pile[WZ1]=10410; 
(*f[273])( );     /*PLUK1(Z,10410)*/
pile[v[22]]=565; pile[WZ1]=jvj+22; 
(*f[71])( );     /*ENLV0(565,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=365; pile[WZ2]=Z; 
(*f[36])( );     /*PLUSC0(jvj+22,365,Z)*/
pile[v[22]]=324; pile[WZ1]=311; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(324,311,jvj+22)*/
pile[v[22]]=Z; pile[WZ1]=371; pile[WZ2]=jvj+50; 
(*f[35])( );     /*CHGC1(Z,371,jvj+50)*/
(*f[745])( );     /*CREKNDR0(Z)*/
if((x[D]==68)) goto l44;
goto l45;
l23:x[jvj+71]=t[x[jvj+71]];
goto l21;
l24:V29=V15-1;
T=0;
goto l25;
l29:x[jvj+36]=s[x[jvj+72]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+72];
pile[v[22]]=130; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(130,jvj+36,V39)*/
V39=pile[WZ2]; 
if((V39!=TT)) goto l30;
TT++;
goto l31;
l30:x[jvj+72]=t[x[jvj+72]];
goto l28;
l37:x[jvj+44]=s[x[jvj+48]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+48];
pile[v[22]]=100; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+44,jvj+45)*/
if((x[jvj+45]!=114)) goto l38;
pile[v[22]]=103; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(103,jvj+44,jvj+46)*/
pile[v[22]]=140; pile[WZ1]=jvj+46; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(140,jvj+46,V24)*/
V24=pile[WZ2]; 
V=V24;
pile[v[22]]=860; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(860,X,jvj+28)*/
x[jvj+29]=d[6];z[jvj+29]=0;
l26:if((x[jvj+29]<=0)) goto l24;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=754; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(754,jvj+30,V30)*/
V30=pile[WZ2]; 
if((V!=V30)) goto l27;
if((x[jvj+31]=w[x[jvj+30]][3])==incon) goto l27;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+28; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(jvj+31,jvj+28,jvj+32)*/
pile[v[22]]=140; pile[WZ1]=V; pile[WZ2]=158; pile[WZ3]=jvj+32; pile[WZ4]=jvj+33; 
(*f[692])( );     /*QUADRI13(140,V,158,jvj+32,jvj+33)*/
pile[v[22]]=Z; pile[WZ1]=283; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(Z,283,jvj+33)*/
l27:x[jvj+29]=t[x[jvj+29]];
goto l26;
l43:x[jvj+54]=t[x[jvj+54]];
l42:if((x[jvj+54]<=0)) goto l48;
x[jvj+55]=s[x[jvj+54]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+54];
pile[v[22]]=117; pile[WZ1]=jvj+55; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(117,jvj+55,V54)*/
V54=pile[WZ2]; 
if((V54!=V62)) goto l43;
pile[v[22]]=109; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(109,jvj+55,jvj+56)*/
if((x[jvj+56]!=x[jvj+53])) goto l43;
x[jvj+57]=d[68];z[jvj+57]=0;
pile[WZ1]=jvj+22; pile[WZ2]=117; pile[WZ3]=V57; pile[WZ4]=jvj+58; 
(*f[192])( );     /*QUADRI4(109,jvj+22,117,V57,jvj+58)*/
pile[v[22]]=252; pile[WZ1]=jvj+55; pile[WZ2]=jvj+58; pile[WZ3]=jvj+57; 
(*f[663])( );     /*PLUG0(252,jvj+55,jvj+58,jvj+57)*/
goto l48;
l46:x[jvj+62]=vo[15];z[jvj+62]=vz[15];
pile[v[22]]=130; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(130,jvj+62,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=583; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(583,jvj+62,jvj+53)*/
x[jvj+51]=vo[20];z[jvj+51]=vz[20];
x[jvj+63]=d[68];z[jvj+63]=0;
pile[v[22]]=301; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(301,jvj+51,jvj+52)*/
if((x[jvj+52]!=68)) goto l49;
pile[v[22]]=jvj+53; pile[WZ1]=720; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+53,720,68)*/
l49:pile[v[22]]=109; pile[WZ1]=jvj+53; pile[WZ2]=117; pile[WZ3]=V62; pile[WZ4]=jvj+64; 
(*f[192])( );     /*QUADRI4(109,jvj+53,117,V62,jvj+64)*/
pile[v[22]]=209; pile[WZ1]=jvj+51; pile[WZ2]=jvj+64; pile[WZ3]=jvj+63; 
(*f[663])( );     /*PLUG0(209,jvj+51,jvj+64,jvj+63)*/
pile[v[22]]=130; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(130,Z,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=209; pile[WZ1]=jvj+51; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(209,jvj+51,jvj+54)*/
goto l42;
l47:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
