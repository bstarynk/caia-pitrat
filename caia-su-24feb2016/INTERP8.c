#include "dx.h"
void INTERP8(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int O1,O2,O3,O4,K1,K2,ZZN,OS1,OS2,OS3,OS4,CS1,CS2,N1,N2,S1,S2,E1,E2,E3,NS1,NS2,SS1,SS2,ES1,ES2,ES3,ZZG,ZZBL;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=46;
if(v[0]>99700) (*f[6])( );

O1=pile[v[22]]; O2=pile[v[22]+1]; O3=pile[v[22]+2]; O4=pile[v[22]+3]; K1=pile[v[22]+4]; K2=pile[v[22]+5]; ZZN=pile[v[22]+6]; OS1=pile[v[22]+7]; OS2=pile[v[22]+8]; OS3=pile[v[22]+9]; OS4=pile[v[22]+10]; CS1=pile[v[22]+11]; CS2=pile[v[22]+12]; N1=pile[v[22]+13]; N2=pile[v[22]+14]; S1=pile[v[22]+15]; S2=pile[v[22]+16]; E1=pile[v[22]+17]; E2=pile[v[22]+18]; E3=pile[v[22]+19]; NS1=pile[v[22]+20]; NS2=pile[v[22]+21]; SS1=pile[v[22]+22]; SS2=pile[v[22]+23]; ES1=pile[v[22]+24]; ES2=pile[v[22]+25]; ES3=pile[v[22]+26]; ZZG=pile[v[22]+27]; ZZBL=pile[v[22]+28]; RES=pile[v[22]+29]; v[22]+=30; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(216,158,jvj+1)*/
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(0,416,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+18,20,158,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=O1; pile[WZ2]=140; pile[WZ3]=OS1; pile[WZ4]=jvj+19; pile[WZ5]=jvj+2; 
(*f[599])( );     /*QUADRI12(101,O1,140,OS1,jvj+19,jvj+2)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+2)*/
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+20; 
(*f[46])( );     /*TRI0(0,416,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+20,20,158,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=O2; pile[WZ2]=140; pile[WZ3]=OS2; pile[WZ4]=jvj+21; pile[WZ5]=jvj+3; 
(*f[599])( );     /*QUADRI12(101,O2,140,OS2,jvj+21,jvj+3)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+3)*/
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(0,416,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+22,20,158,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=O3; pile[WZ2]=140; pile[WZ3]=OS3; pile[WZ4]=jvj+23; pile[WZ5]=jvj+4; 
(*f[599])( );     /*QUADRI12(101,O3,140,OS3,jvj+23,jvj+4)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+4)*/
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0((-200),416,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=K1; pile[WZ2]=162; pile[WZ3]=jvj+25; 
(*f[815])( );     /*TRI18(jvj+24,K1,162,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=CS1; pile[WZ2]=158; pile[WZ3]=89; pile[WZ4]=jvj+25; pile[WZ5]=jvj+5; 
(*f[48])( );     /*QUADRI1(140,CS1,158,89,jvj+25,jvj+5)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+5)*/
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+26; 
(*f[46])( );     /*TRI0((-200),416,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=K2; pile[WZ2]=162; pile[WZ3]=jvj+27; 
(*f[815])( );     /*TRI18(jvj+26,K2,162,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=CS2; pile[WZ2]=158; pile[WZ3]=89; pile[WZ4]=jvj+27; pile[WZ5]=jvj+6; 
(*f[48])( );     /*QUADRI1(140,CS2,158,89,jvj+27,jvj+6)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+6)*/
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+28; 
(*f[46])( );     /*TRI0((-200),416,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=41; pile[WZ2]=158; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+28,41,158,jvj+29)*/
pile[v[22]]=130; pile[WZ1]=N1; pile[WZ2]=140; pile[WZ3]=NS1; pile[WZ4]=jvj+29; pile[WZ5]=jvj+7; 
(*f[197])( );     /*QUADRI5(130,N1,140,NS1,jvj+29,jvj+7)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+7)*/
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0((-200),416,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=41; pile[WZ2]=158; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+30,41,158,jvj+31)*/
pile[v[22]]=130; pile[WZ1]=N2; pile[WZ2]=140; pile[WZ3]=NS2; pile[WZ4]=jvj+31; pile[WZ5]=jvj+8; 
(*f[197])( );     /*QUADRI5(130,N2,140,NS2,jvj+31,jvj+8)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+8)*/
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+32; 
(*f[46])( );     /*TRI0((-200),416,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=S1; pile[WZ2]=163; pile[WZ3]=jvj+33; 
(*f[631])( );     /*TRI16(jvj+32,S1,163,jvj+33)*/
pile[v[22]]=140; pile[WZ1]=SS1; pile[WZ2]=158; pile[WZ3]=96; pile[WZ4]=jvj+33; pile[WZ5]=jvj+9; 
(*f[48])( );     /*QUADRI1(140,SS1,158,96,jvj+33,jvj+9)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+9)*/
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+34; 
(*f[46])( );     /*TRI0((-200),416,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=S2; pile[WZ2]=163; pile[WZ3]=jvj+35; 
(*f[631])( );     /*TRI16(jvj+34,S2,163,jvj+35)*/
pile[v[22]]=140; pile[WZ1]=SS2; pile[WZ2]=158; pile[WZ3]=96; pile[WZ4]=jvj+35; pile[WZ5]=jvj+10; 
(*f[48])( );     /*QUADRI1(140,SS2,158,96,jvj+35,jvj+10)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+10)*/
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(0,416,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=23; pile[WZ2]=158; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+36,23,158,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=ES1; pile[WZ2]=140; pile[WZ3]=jvj+38; 
(*f[631])( );     /*TRI16(jvj+37,ES1,140,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=E1; pile[WZ2]=128; pile[WZ3]=jvj+11; 
(*f[301])( );     /*TRI11(jvj+38,E1,128,jvj+11)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+11)*/
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+39; 
(*f[46])( );     /*TRI0(0,416,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=23; pile[WZ2]=158; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+39,23,158,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=ES2; pile[WZ2]=140; pile[WZ3]=jvj+41; 
(*f[631])( );     /*TRI16(jvj+40,ES2,140,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=E2; pile[WZ2]=128; pile[WZ3]=jvj+12; 
(*f[301])( );     /*TRI11(jvj+41,E2,128,jvj+12)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+12)*/
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+42; 
(*f[46])( );     /*TRI0(0,416,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=23; pile[WZ2]=158; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,23,158,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=ES3; pile[WZ2]=140; pile[WZ3]=jvj+44; 
(*f[631])( );     /*TRI16(jvj+43,ES3,140,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=E3; pile[WZ2]=128; pile[WZ3]=jvj+13; 
(*f[301])( );     /*TRI11(jvj+44,E3,128,jvj+13)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+13)*/
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+45; 
(*f[46])( );     /*TRI0(0,416,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+45,20,158,jvj+46)*/
pile[v[22]]=101; pile[WZ1]=O4; pile[WZ2]=140; pile[WZ3]=OS4; pile[WZ4]=jvj+46; pile[WZ5]=jvj+14; 
(*f[599])( );     /*QUADRI12(101,O4,140,OS4,jvj+46,jvj+14)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+14)*/
V1=vg[ZZG];
if((V1<=0)) goto l1;
x[jvj+15]=V1 ;z[jvj+15]=(V1<=sepcte) ? V1 : 0;
pile[v[22]]=135; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(135,jvj+15,jvj+16)*/
x[jvj+17]=vo[20];z[jvj+17]=vz[20];
pile[v[22]]=jvj+17; pile[WZ1]=558; pile[WZ2]=jvj+1; 
(*f[35])( );     /*CHGC1(jvj+17,558,jvj+1)*/
pile[v[22]]=jvj+16; pile[WZ1]=RES; 
(*f[598])( );     /*EVLQ2(jvj+16,RES)*/
l2:v[0]=jvj; v[22]-=30; return;
l1:x[RES]=135 ;z[RES]=135;
goto l2;
}
