#include "dx.h"
void ORKI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V19=0,V=0,V26=0,V28=0,V34=0,V32=0,V41=0,V39=0,V46=0,V59=0,V75=0,V77=0,V70=0,V71=0,V72=0,V73=0,V74=0,V76=0,V58=0,V47=0,V63=0,P=0,V64=0;
int A,B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=48;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=vo[15];z[jvj+1]=vz[15];
pile[v[22]]=302; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(302,jvj+1,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=287; pile[WZ1]=A; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(287,A,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=238; pile[WZ2]=1000; 
(*f[43])( );     /*CHGC2(jvj+39,238,1000)*/
l36:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+28; 
(*f[46])( );     /*TRI0(0,117,jvj+28)*/
x[jvj+22]=0 ;z[jvj+22]=0;
pile[v[22]]=258; pile[WZ1]=A; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(258,A,jvj+21)*/
l4:if((x[jvj+21]>0)) goto l5;
pile[v[22]]=187; pile[WZ1]=A; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(187,A,jvj+24)*/
l6:if((x[jvj+24]>0)) goto l7;
pile[v[22]]=256; pile[WZ1]=A; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(256,A,jvj+26)*/
l8:if((x[jvj+26]<=0)) goto l9;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+27; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+27)*/
x[jvj+26]=t[x[jvj+26]];
goto l8;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+3,jvj+4)*/
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=179)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+4,jvj+7)*/
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=285)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+7,jvj+10)*/
pile[v[22]]=163; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+10,V12)*/
V12=pile[WZ2]; 
if((V12!=(-4712))) goto l3;
pile[v[22]]=436; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(436,jvj+4,jvj+11)*/
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+11,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=jvj+3; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(135,jvj+3,jvj+12)*/
V=V19;
x[jvj+13]=x[jvj+12] ;z[jvj+13]=z[jvj+12];
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+13,jvj+14)*/
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=30)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+14,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+17,V26)*/
V26=pile[WZ2]; 
if((V!=V26)) goto l3;
pile[v[22]]=103; pile[WZ1]=jvj+14; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+14,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+18,V28)*/
V28=pile[WZ2]; 
if((V28!=0)) goto l3;
pile[v[22]]=134; pile[WZ1]=jvj+13; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(134,jvj+13,jvj+19)*/
pile[v[22]]=jvj+13; pile[WZ1]=515; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+13,515,0)*/
pile[v[22]]=jvj+19; 
(*f[2105])( );     /*ORKB0(jvj+19)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+23]=s[x[jvj+21]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+21];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+23)*/
x[jvj+21]=t[x[jvj+21]];
goto l4;
l7:x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+25; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+25)*/
x[jvj+24]=t[x[jvj+24]];
goto l6;
l10:x[jvj+20]=s[x[jvj+22]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+22];
pile[v[22]]=510; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(510,jvj+20,V34)*/
V34=pile[WZ2]; 
l11:x[jvj+22]=t[x[jvj+22]];
l9:if((x[jvj+22]>0)) goto l10;
pile[v[22]]=117; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(117,jvj+28,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+37; 
(*f[46])( );     /*TRI0(0,117,jvj+37)*/
x[jvj+31]=0 ;z[jvj+31]=0;
pile[v[22]]=159; pile[WZ1]=A; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(159,A,jvj+30)*/
l13:if((x[jvj+30]>0)) goto l14;
pile[v[22]]=234; pile[WZ1]=A; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(234,A,jvj+33)*/
l15:if((x[jvj+33]>0)) goto l16;
pile[v[22]]=474; pile[WZ1]=A; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(474,A,jvj+35)*/
l17:if((x[jvj+35]<=0)) goto l18;
x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+36; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+36)*/
x[jvj+35]=t[x[jvj+35]];
goto l17;
l12:pile[v[22]]=jvj+28; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+28,117,1)*/
goto l11;
l14:x[jvj+32]=s[x[jvj+30]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+30];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+32)*/
x[jvj+30]=t[x[jvj+30]];
goto l13;
l16:x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+34)*/
x[jvj+33]=t[x[jvj+33]];
goto l15;
l19:x[jvj+29]=s[x[jvj+31]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+31];
pile[v[22]]=515; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(515,jvj+29,V41)*/
V41=pile[WZ2]; 
l20:x[jvj+31]=t[x[jvj+31]];
l18:if((x[jvj+31]>0)) goto l19;
pile[v[22]]=117; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(117,jvj+37,V39)*/
V39=pile[WZ2]; 
V47=V32+V39;
V46=incon;
if((V47>0)) goto l22;
V46=1;
l26:V63=1000/V46;
if((V47>0)) goto l27;
V58=g[154];
if((V58<=0)) goto l27;
V59=vg[154];
if((V59!=0)) goto l23;
if((V58<3)) goto l25;
l23:pile[v[22]]=154; pile[WZ1]=10251; pile[WZ2]=0; pile[WZ3]=(-598); pile[WZ4]=A; pile[WZ5]=(-591); pile[v[22]+6]=B; pile[v[22]+7]=jvj+38; 
(*f[187])( );     /*INTERP0(154,10251,0,(-598),A,(-591),B,jvj+38)*/
if((x[jvj+38]==135)) goto l24;
l27:P=V63;
x[jvj+42]=d[108];z[jvj+42]=0;
l28:if((x[jvj+42]<=0)) goto l35;
x[jvj+43]=s[x[jvj+42]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+42];
pile[v[22]]=447; pile[WZ1]=jvj+43; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(447,jvj+43,jvj+40)*/
x[jvj+44]=d[117];z[jvj+44]=0;
l30:if((x[jvj+44]<=0)) goto l29;
x[jvj+45]=s[x[jvj+44]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+44];
pile[v[22]]=jvj+45; pile[WZ1]=jvj+43; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(jvj+45,jvj+43,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=A; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(jvj+46,A,jvj+47)*/
x[jvj+48]=x[jvj+47] ;z[jvj+48]=z[jvj+47];
l32:if((x[jvj+48]<=0)) goto l31;
x[jvj+41]=s[x[jvj+48]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+48];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(jvj+40,jvj+41,V64)*/
V64=pile[WZ2]; 
l33:x[jvj+48]=t[x[jvj+48]];
goto l32;
l21:pile[v[22]]=jvj+37; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+37,117,1)*/
goto l20;
l22:V46=V47;
goto l26;
l24:if((V58<4)) goto l25;
goto l27;
l25:V75=x[A];
V77=x[B];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V70; pile[WZ2]=10251; 
(*f[98])( );     /*SRA3(135,V70,10251,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=V71; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V71,125,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=30; pile[WZ1]=V72; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(30,V72,126,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V75; pile[WZ2]=V73; 
(*f[39])( );     /*SDX0(41,V75,V73,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V77; pile[WZ2]=V74; 
(*f[39])( );     /*SDX0(20,V77,V74,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=V76; 
(*f[40])( );     /*SLG0(V76)*/
if((V58!=2)) goto l27;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l27;
l29:x[jvj+42]=t[x[jvj+42]];
goto l28;
l31:x[jvj+44]=t[x[jvj+44]];
goto l30;
l34:pile[v[22]]=jvj+41; pile[WZ1]=jvj+40; pile[WZ2]=P; 
(*f[43])( );     /*CHGC2(jvj+41,jvj+40,P)*/
goto l33;
l35:v[0]=jvj; v[22]-=2; return;
}
