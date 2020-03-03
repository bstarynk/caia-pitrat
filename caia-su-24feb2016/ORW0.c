#include "dx.h"
void ORW0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,S=0,V11=0,V12=0,V24=0,V138=0,V140=0,V134=0,V135=0,V136=0,V137=0,V139=0,V23=0,V49=0,V37=0,V47=0,V64=0,V54=0,LL=0,V73=0,V75=0,V82=0,V83=0,V97=0,V99=0,K=0,V34=0,V93=0,V10=0,V129=0,V130=0,V51=0,V41=0,V=0,V60=0,V66=0,V132=0,V131=0;
int X,R;
int C,H,L;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=49;
x[jvj+1]=10687;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2108&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; R=pile[v[22]+1]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+43; 
(*f[46])( );     /*TRI0(0,117,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,X,jvj+17)*/
if((x[jvj+17]!=435)) goto l21;
pile[v[22]]=111; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,X,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+18,jvj+19)*/
if(x[jvj+19]!=180&&x[jvj+19]!=353&&x[jvj+19]!=723&&x[jvj+19]!=79&&x[jvj+19]!=903&&x[jvj+19]!=908&&x[jvj+19]!=911) goto l21;
L=10;
l22:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,X,jvj+20)*/
if((x[jvj+20]==435)) goto l23;
if((x[jvj+20]==73)) goto l26;
if((x[jvj+20]==22)) goto l28;
if((x[jvj+20]==39)) goto l31;
if((x[jvj+20]!=47)) goto l34;
V75=incon;
pile[v[22]]=436; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(436,X,jvj+14)*/
V75=2;
l16:V73=incon;
pile[v[22]]=428; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(428,X,jvj+13)*/
pile[v[22]]=204; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(204,jvj+13,LL)*/
LL=pile[WZ2]; 
V73=LL;
l33:K=V73;
H=V75;
l44:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(100,X,jvj+39)*/
if((x[jvj+39]==435)) goto l45;
if((x[jvj+39]!=39)) goto l48;
pile[v[22]]=114; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(114,X,jvj+44)*/
l46:if((x[jvj+44]<=0)) goto l48;
x[jvj+45]=s[x[jvj+44]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+44];
pile[v[22]]=102; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,jvj+45,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,jvj+46,jvj+47)*/
if((x[jvj+47]!=69)) goto l47;
pile[v[22]]=108; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(108,jvj+46,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+43; 
(*f[2176])( );     /*COULAV0(jvj+48,jvj+43)*/
l47:x[jvj+44]=t[x[jvj+44]];
goto l46;
l2:pile[v[22]]=528; pile[WZ1]=25; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(528,25,V1)*/
V1=pile[WZ2]; 
l32:H=V1;
K=V10;
goto l44;
l4:V1=10;
goto l32;
l5:V11=3;
l25:H=0;
K=V11;
pile[v[22]]=204; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(204,jvj+5,V12)*/
V12=pile[WZ2]; 
goto l44;
l7:if((V23<4)) goto l8;
goto l44;
l8:V138=x[X];
V140=x[jvj+5];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V134; pile[WZ2]=10687; 
(*f[98])( );     /*SRA3(135,V134,10687,V135)*/
V135=pile[WZ3]; 
pile[v[22]]=V135; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V135,125,V136)*/
V136=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V138; pile[WZ2]=V136; 
(*f[39])( );     /*SDX0(20,V138,V136,V137)*/
V137=pile[WZ3]; 
pile[WZ1]=V140; pile[WZ2]=V137; 
(*f[39])( );     /*SDX0(20,V140,V137,V139)*/
V139=pile[WZ3]; 
pile[v[22]]=V139; 
(*f[40])( );     /*SLG0(V139)*/
if((V23!=2)) goto l44;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l44;
l9:V23=g[134];
if((V23<=0)) goto l44;
V24=vg[134];
if((V24!=0)) goto l6;
if((V23<3)) goto l8;
l6:pile[v[22]]=134; pile[WZ1]=10687; pile[WZ2]=0; pile[WZ3]=(-596); pile[WZ4]=X; pile[WZ5]=(-1544); pile[v[22]+6]=jvj+5; pile[v[22]+7]=jvj+6; 
(*f[187])( );     /*INTERP0(134,10687,0,(-596),X,(-1544),jvj+5,jvj+6)*/
if((x[jvj+6]==135)) goto l7;
goto l44;
l11:x[jvj+8]=s[x[jvj+49]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+49];
pile[v[22]]=110; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(110,jvj+8,V49)*/
V49=pile[WZ2]; 
if((V49!=V)) goto l12;
pile[v[22]]=334; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(334,jvj+8,jvj+9)*/
if((x[jvj+9]==0)) goto l12;
V37=10;
l41:H=V37;
K=V51;
goto l44;
l12:x[jvj+49]=t[x[jvj+49]];
l10:if((x[jvj+49]>0)) goto l11;
pile[v[22]]=528; pile[WZ1]=25; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(528,25,V47)*/
V47=pile[WZ2]; 
V37=V47;
goto l41;
l14:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=110; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(110,jvj+11,V64)*/
V64=pile[WZ2]; 
if((V64!=V60)) goto l15;
pile[v[22]]=334; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(334,jvj+11,jvj+12)*/
if((x[jvj+12]==0)) goto l15;
V54=10;
l42:H=V54;
K=V66;
goto l44;
l15:x[jvj+10]=t[x[jvj+10]];
l13:if((x[jvj+10]>0)) goto l14;
pile[v[22]]=528; pile[WZ1]=44; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(528,44,V54)*/
V54=pile[WZ2]; 
goto l42;
l17:pile[v[22]]=R; pile[WZ1]=jvj+13; 
(*f[2175])( );     /*ORK1(R,jvj+13,V73)*/
V73=pile[WZ2]; 
goto l33;
l18:V75=0;
goto l16;
l19:pile[v[22]]=R; pile[WZ1]=jvj+15; 
(*f[2175])( );     /*ORK1(R,jvj+15,V83)*/
V83=pile[WZ2]; 
l30:K=V83;
H=V93;
goto l44;
l20:V99=1;
l27:H=0;
K=V99;
goto l44;
l21:L=1;
goto l22;
l23:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,X,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]==69)) goto l24;
if((x[jvj+22]!=22)) goto l34;
pile[v[22]]=111; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+21,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+23,jvj+5)*/
V11=incon;
pile[v[22]]=204; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(204,jvj+5,S)*/
S=pile[WZ2]; 
V11=S;
goto l25;
l24:H=0;
K=2;
goto l44;
l26:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,X,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+24,jvj+16)*/
V99=incon;
pile[v[22]]=204; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(204,jvj+16,V97)*/
V97=pile[WZ2]; 
V99=V97;
goto l27;
l28:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,X,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+25,jvj+26)*/
if(x[jvj+26]==48||x[jvj+26]==55||x[jvj+26]==54||x[jvj+26]==50||x[jvj+26]==25||x[jvj+26]==44) goto l29;
pile[v[22]]=528; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(528,jvj+26,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=204; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(204,jvj+26,K)*/
K=pile[WZ2]; 
H=V34;
goto l44;
l29:if(x[jvj+26]!=48&&x[jvj+26]!=55&&x[jvj+26]!=54&&x[jvj+26]!=50) goto l34;
pile[v[22]]=528; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(528,jvj+26,V93)*/
V93=pile[WZ2]; 
V83=incon;
pile[v[22]]=428; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(428,X,jvj+15)*/
pile[v[22]]=204; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(204,jvj+15,V82)*/
V82=pile[WZ2]; 
V83=V82;
goto l30;
l31:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,X,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+27,jvj+2)*/
pile[v[22]]=741; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(741,jvj+2,V10)*/
V10=pile[WZ2]; 
V1=incon;
pile[v[22]]=371; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(371,jvj+2,jvj+3)*/
if((x[jvj+3]!=68)) goto l1;
V1=0;
l1:pile[v[22]]=474; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(474,R,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[X]) goto l2;
l3:if(V1==incon) goto l4;
goto l32;
l34:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,X,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]==25)) goto l35;
if((x[jvj+29]!=44)) goto l43;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,X,jvj+38)*/
pile[v[22]]=140; pile[WZ1]=jvj+38; 
(*f[44])( );if(v[102]) goto l43;     /*FNDC1(140,jvj+38,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=204; pile[WZ1]=44; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(204,44,V66)*/
V66=pile[WZ2]; 
V54=incon;
pile[v[22]]=159; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(159,R,jvj+10)*/
goto l13;
l35:pile[v[22]]=528; pile[WZ1]=25; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(528,25,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=204; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(204,25,V130)*/
V130=pile[WZ2]; 
x[jvj+30]=d[20];z[jvj+30]=0;
l36:if((x[jvj+30]<=0)) goto l38;
x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=jvj+31; pile[WZ1]=X; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(jvj+31,X,jvj+32)*/
pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=24)) goto l37;
H=V129;
K=V130;
goto l44;
l37:x[jvj+30]=t[x[jvj+30]];
goto l36;
l38:pile[v[22]]=204; pile[WZ1]=25; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(204,25,V51)*/
V51=pile[WZ2]; 
x[jvj+35]=d[20];z[jvj+35]=0;
l39:if((x[jvj+35]<=0)) goto l43;
x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=jvj+36; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(jvj+36,X,jvj+37)*/
pile[v[22]]=140; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l40;     /*FNDC1(140,jvj+37,V41)*/
V41=pile[WZ2]; 
V=V41;
V37=incon;
pile[v[22]]=159; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(159,R,jvj+7)*/
x[jvj+49]=x[jvj+7] ;z[jvj+49]=z[jvj+7];
goto l10;
l40:x[jvj+35]=t[x[jvj+35]];
goto l39;
l43:K=1;
H=0;
goto l44;
l45:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,X,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(100,jvj+40,jvj+41)*/
if((x[jvj+41]!=69)) goto l48;
pile[v[22]]=108; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(108,jvj+40,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[2176])( );     /*COULAV0(jvj+42,jvj+43)*/
l48:pile[v[22]]=117; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(117,jvj+43,V132)*/
V132=pile[WZ2]; 
V131=K+V132;
C=V131;
l51:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; pile[v[22]+2]=C; pile[v[22]+3]=H; pile[v[22]+4]=L; v[102]=0;return;
l50:C=H=L=incon;
l49:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
}
