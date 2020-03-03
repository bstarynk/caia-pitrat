#include "dx.h"
void VOIRCOND0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,V29=0,V18=0,V15=0,A=0,B=0,V5=0,V2=0,V9=0,V6=0,V37=0,V35=0,V32=0,V59=0,GG=0,V48=0,RS=0;
int ZZ,PP;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=43;
if(v[0]>99700) (*f[6])( );

ZZ=pile[v[22]]; PP=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=GG=x[jvj+33]=x[jvj+6]=x[jvj+14]=N=x[jvj+38]=x[jvj+16]=B=A=x[RES]=incon;
pile[v[22]]=510; pile[WZ1]=ZZ; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(510,ZZ,N)*/
N=pile[WZ2]; 
if((N==11)) goto l1;
if((N==3)) goto l2;
if((N==10)) goto l3;
if((N==7)) goto l4;
if((N==5)) goto l5;
if((N==6)) goto l6;
if((N==9)) goto l7;
if((N==12)) goto l8;
if((N==4)) goto l9;
if((N==1)) goto l10;
if((N==2)) goto l11;
if((N==8)) goto l12;
if((N!=13)) goto l13;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(515,ZZ,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=459; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(459,ZZ,jvj+31)*/
pile[v[22]]=447; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,ZZ,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=PP; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(jvj+32,PP,jvj+33)*/
GG=V59;
x[jvj+1]=x[jvj+31] ;z[jvj+1]=z[jvj+31];
l13:x[jvj+37]=1299 ;z[jvj+37]=1299;
if(x[jvj+1]!=incon) goto l14;
l18:if(x[jvj+6]==incon) goto l19;
l23:if(x[jvj+38]==incon) goto l24;
l33:if(B==incon) goto l34;
l37:if(x[jvj+38]==incon) goto l38;
l48:pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; pile[WZ2]=RES; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(jvj+37,jvj+38,RES)*/
l49:if(N==incon) goto l50;
if(x[RES]==incon) goto l51;
l53:v[0]=jvj; v[22]-=3; v[102]=0;return;
l1:pile[v[22]]=447; pile[WZ1]=ZZ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,ZZ,jvj+1)*/
x[jvj+37]=201 ;z[jvj+37]=201;
l22:pile[v[22]]=475; pile[WZ1]=ZZ; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(475,ZZ,jvj+34)*/
pile[v[22]]=459; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(459,ZZ,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=PP; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(jvj+35,PP,jvj+14)*/
x[jvj+6]=x[jvj+34] ;z[jvj+6]=z[jvj+34];
goto l23;
l2:pile[v[22]]=459; pile[WZ1]=ZZ; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(459,ZZ,jvj+2)*/
pile[v[22]]=475; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(475,ZZ,jvj+3)*/
x[jvj+4]=vo[16];z[jvj+4]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(498,jvj+4,jvj+5)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+3,jvj+5,jvj+6)*/
x[jvj+14]=x[jvj+2] ;z[jvj+14]=z[jvj+2];
x[jvj+1]=25 ;z[jvj+1]=25;
goto l13;
l3:pile[v[22]]=459; pile[WZ1]=ZZ; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(459,ZZ,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=PP; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+7,PP,jvj+8)*/
pile[v[22]]=447; pile[WZ1]=ZZ; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,ZZ,jvj+9)*/
pile[v[22]]=475; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(475,ZZ,jvj+6)*/
x[jvj+14]=x[jvj+8] ;z[jvj+14]=z[jvj+8];
x[jvj+1]=x[jvj+9] ;z[jvj+1]=z[jvj+9];
goto l13;
l4:pile[v[22]]=609; pile[WZ1]=ZZ; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(609,ZZ,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=459; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(459,ZZ,jvj+10)*/
pile[v[22]]=447; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,ZZ,jvj+11)*/
pile[v[22]]=475; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(475,ZZ,jvj+12)*/
x[jvj+13]=vo[V29];z[jvj+13]=vz[V29];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+10,jvj+13,jvj+14)*/
x[jvj+1]=x[jvj+11] ;z[jvj+1]=z[jvj+11];
x[jvj+6]=x[jvj+12] ;z[jvj+6]=z[jvj+12];
goto l13;
l5:pile[v[22]]=459; pile[WZ1]=ZZ; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(459,ZZ,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=PP; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+15,PP,jvj+14)*/
pile[v[22]]=1260; pile[WZ1]=ZZ; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1260,ZZ,jvj+16)*/
x[jvj+1]=44 ;z[jvj+1]=44;
goto l13;
l6:pile[v[22]]=459; pile[WZ1]=ZZ; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(459,ZZ,jvj+17)*/
pile[v[22]]=475; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(475,ZZ,jvj+18)*/
pile[v[22]]=447; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,ZZ,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=PP; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(jvj+19,PP,jvj+16)*/
x[jvj+14]=x[jvj+17] ;z[jvj+14]=z[jvj+17];
x[jvj+1]=x[jvj+18] ;z[jvj+1]=z[jvj+18];
goto l13;
l7:pile[v[22]]=459; pile[WZ1]=ZZ; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(459,ZZ,jvj+20)*/
pile[v[22]]=475; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(475,ZZ,jvj+21)*/
x[jvj+22]=vo[16];z[jvj+22]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(498,jvj+22,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+23; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(jvj+21,jvj+23,jvj+16)*/
x[jvj+14]=x[jvj+20] ;z[jvj+14]=z[jvj+20];
x[jvj+1]=44 ;z[jvj+1]=44;
goto l13;
l8:pile[v[22]]=459; pile[WZ1]=ZZ; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(459,ZZ,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=PP; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+24,PP,jvj+25)*/
pile[v[22]]=447; pile[WZ1]=ZZ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,ZZ,jvj+1)*/
pile[v[22]]=1260; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1260,ZZ,jvj+16)*/
x[jvj+14]=x[jvj+25] ;z[jvj+14]=z[jvj+25];
goto l13;
l9:pile[v[22]]=515; pile[WZ1]=ZZ; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(515,ZZ,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=459; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(459,ZZ,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=PP; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(jvj+26,PP,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=447; pile[WZ1]=ZZ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,ZZ,jvj+1)*/
A=V15;
B=V18;
goto l13;
l10:pile[v[22]]=515; pile[WZ1]=ZZ; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(515,ZZ,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=447; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,ZZ,jvj+1)*/
pile[v[22]]=489; pile[WZ1]=PP; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(489,PP,jvj+27)*/
for(i=x[jvj+27],V2=0;i>0;i=t[i],V2++)  ;
A=V2;
B=V5;
goto l13;
l11:pile[v[22]]=515; pile[WZ1]=ZZ; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(515,ZZ,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=447; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,ZZ,jvj+1)*/
pile[v[22]]=365; pile[WZ1]=PP; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(365,PP,jvj+28)*/
for(i=x[jvj+28],V6=0;i>0;i=t[i],V6++)  ;
A=V6;
B=V9;
goto l13;
l12:pile[v[22]]=515; pile[WZ1]=ZZ; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(515,ZZ,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=609; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(609,ZZ,V35)*/
V35=pile[WZ2]; 
x[jvj+29]=vo[V35];z[jvj+29]=vz[V35];
pile[v[22]]=459; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(459,ZZ,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(jvj+30,jvj+29,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=447; pile[WZ1]=ZZ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,ZZ,jvj+1)*/
A=V32;
B=V37;
goto l13;
l14:if(GG!=incon) goto l15;
goto l18;
l15:if(x[jvj+33]!=incon) goto l16;
goto l18;
l16:if((x[jvj+1]!=44)) goto l18;
for(a=x[jvj+33];a>0;a=t[a]) if(s[a]==GG) goto l17;
goto l18;
l17:x[jvj+38]=135 ;z[jvj+38]=135;
goto l18;
l19:if(x[jvj+14]==incon) goto l20;
goto l23;
l20:if(N!=incon) goto l21;
goto l23;
l21:if((N==11)) goto l22;
goto l23;
l24:if(x[jvj+1]!=incon) goto l25;
goto l33;
l25:if(x[jvj+14]!=incon) goto l26;
goto l33;
l26:if(x[jvj+6]!=incon) goto l27;
l29:if(x[jvj+16]!=incon) goto l30;
goto l33;
l27:if((x[jvj+1]==25)) goto l28;
if((x[jvj+1]!=26)) goto l29;
if((x[jvj+14]!=x[jvj+6])) goto l32;
goto l29;
l28:if((x[jvj+14]==x[jvj+6])) goto l32;
goto l29;
l30:if((x[jvj+1]==45)) goto l31;
if((x[jvj+1]!=44)) goto l33;
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l32;
goto l33;
l31:for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l33;
l32:x[jvj+38]=135 ;z[jvj+38]=135;
goto l33;
l34:if(A==incon) goto l35;
goto l37;
l35:if(N!=incon) goto l36;
goto l37;
l36:if((N!=11)) goto l37;
pile[v[22]]=515; pile[WZ1]=ZZ; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(515,ZZ,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=459; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(459,ZZ,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=PP; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(jvj+36,PP,A)*/
A=pile[WZ2]; 
B=V48;
goto l37;
l38:if(A!=incon) goto l39;
goto l49;
l39:if(x[jvj+1]!=incon) goto l40;
goto l49;
l40:if(B!=incon) goto l41;
goto l49;
l41:if((x[jvj+1]==25)) goto l42;
if((x[jvj+1]==26)) goto l44;
if((x[jvj+1]==27)) goto l45;
if((x[jvj+1]==28)) goto l46;
if((x[jvj+1]==29)) goto l47;
if((x[jvj+1]!=30)) goto l49;
if((A<=B)) goto l43;
goto l49;
l42:if((A==B)) goto l43;
goto l49;
l43:x[jvj+38]=135 ;z[jvj+38]=135;
goto l48;
l44:if((A!=B)) goto l43;
goto l49;
l45:if((A>B)) goto l43;
goto l49;
l46:if((A>=B)) goto l43;
goto l49;
l47:if((A<B)) goto l43;
goto l49;
l50:if(x[RES]==incon) goto l54;
goto l53;
l51:pile[v[22]]=jvj+37; pile[WZ1]=134; pile[WZ2]=RES; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(jvj+37,134,RES)*/
goto l53;
l52:v[0]=jvj; v[22]-=3; v[102]=1;return;
l54:pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+42; 
(*f[46])( );     /*TRI0(0,416,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,20,158,jvj+43)*/
pile[v[22]]=101; pile[WZ1]=PP; pile[WZ2]=140; pile[WZ3]=(-7423); pile[WZ4]=jvj+43; pile[WZ5]=jvj+41; 
(*f[599])( );     /*QUADRI12(101,PP,140,(-7423),jvj+43,jvj+41)*/
pile[v[22]]=10343; pile[WZ1]=158; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(10343,158,jvj+40)*/
pile[v[22]]=jvj+41; pile[WZ1]=(-20); pile[WZ3]=128; pile[WZ4]=jvj+39; 
(*f[298])( );     /*TRIENS1(jvj+41,(-20),jvj+40,128,jvj+39)*/
pile[v[22]]=ZZ; pile[WZ1]=jvj+39; 
(*f[30])( );if(v[102]) goto l51;     /*EVL0(ZZ,jvj+39,RS)*/
RS=pile[WZ2]; 
if((RS!=135)) goto l51;
x[RES]=135 ;z[RES]=135;
goto l53;
}
