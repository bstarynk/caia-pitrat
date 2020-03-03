#include "dx.h"
void ANACM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V6=0,V9=0,V8=0,V2=0,V14=0,V16=0,V19=0,V18=0,V12=0,NA=0,NB=0,V29=0,V28=0,V35=0,V31=0,V32=0,V33=0,V34=0;
int CM,BL;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=11680;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1471&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
CM=pile[v[22]]; BL=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+17]=x[jvj+15]=NA=NB=incon;
pile[v[22]]=1481; pile[WZ1]=CM; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1481,CM,jvj+10)*/
if((x[jvj+10]!=0)) goto l38;
x[jvj+17]=985 ;z[jvj+17]=985;
x[jvj+15]=250 ;z[jvj+15]=250;
l38:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+5; 
(*f[46])( );     /*TRI0(0,117,jvj+5)*/
pile[v[22]]=1481; pile[WZ1]=CM; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1481,CM,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(117,jvj+5,V2)*/
V2=pile[WZ2]; 
NA=V2;
l39:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0(0,117,jvj+9)*/
pile[v[22]]=1481; pile[WZ1]=CM; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1481,CM,jvj+8)*/
l7:if((x[jvj+8]>0)) goto l8;
pile[v[22]]=117; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(117,jvj+9,V12)*/
V12=pile[WZ2]; 
NB=V12;
l19:if(x[jvj+17]==incon) goto l20;
if(x[jvj+15]!=incon) goto l30;
l37:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:V4=1;
l5:V8=V4*V9;
pile[v[22]]=jvj+5; pile[WZ1]=117; pile[WZ2]=V8; 
(*f[186])( );     /*BTC0(jvj+5,117,V8)*/
l4:x[jvj+4]=t[x[jvj+4]];
goto l2;
l3:x[jvj+2]=s[x[jvj+4]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+4];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+2,V6)*/
V6=pile[WZ2]; 
if((V6!=999)) goto l4;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+2,V9)*/
V9=pile[WZ2]; 
V4=incon;
pile[v[22]]=158; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(158,jvj+2,jvj+3)*/
if((x[jvj+3]!=1005)) goto l1;
V4=2;
goto l5;
l6:V14=1;
l10:V18=V14*V19;
pile[v[22]]=jvj+9; pile[WZ1]=117; pile[WZ2]=V18; 
(*f[186])( );     /*BTC0(jvj+9,117,V18)*/
l9:x[jvj+8]=t[x[jvj+8]];
goto l7;
l8:x[jvj+6]=s[x[jvj+8]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+8];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+6,V16)*/
V16=pile[WZ2]; 
if((V16==999)) goto l9;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+6,V19)*/
V19=pile[WZ2]; 
V14=incon;
pile[v[22]]=158; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(158,jvj+6,jvj+7)*/
if((x[jvj+7]!=1005)) goto l6;
V14=2;
goto l10;
l11:x[jvj+18]=602 ;z[jvj+18]=602;
l24:x[jvj+17]=1378 ;z[jvj+17]=1378;
x[jvj+15]=x[jvj+18] ;z[jvj+15]=z[jvj+18];
l30:x[jvj+16]=incon;
pile[v[22]]=763; pile[WZ1]=1576; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(763,1576,jvj+11)*/
l31:if((x[jvj+11]>0)) goto l32;
pile[v[22]]=218; pile[WZ1]=jvj+17; pile[WZ2]=447; pile[WZ3]=jvj+15; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(218,jvj+17,447,jvj+15,jvj+16)*/
l35:pile[v[22]]=1576; pile[WZ1]=763; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(1576,763,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=252; pile[WZ2]=BL; 
(*f[36])( );     /*PLUSC0(jvj+16,252,BL)*/
V35=x[BL];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V31; pile[WZ2]=966; 
(*f[42])( );     /*SRA1(135,V31,966,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V32,(-9543),V33)*/
V33=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V35; pile[WZ2]=V33; 
(*f[39])( );     /*SDX0(20,V35,V33,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V34; pile[WZ2]=jvj+17; 
(*f[42])( );     /*SRA1(135,V34,jvj+17,V29)*/
V29=pile[WZ3]; 
V28=incon;
if((x[jvj+15]!=250)) goto l34;
V28=V29;
l36:pile[v[22]]=V28; 
(*f[40])( );     /*SLG0(V28)*/
goto l37;
l12:x[jvj+18]=605 ;z[jvj+18]=605;
goto l24;
l13:x[jvj+19]=602 ;z[jvj+19]=602;
l27:x[jvj+17]=738 ;z[jvj+17]=738;
x[jvj+15]=x[jvj+19] ;z[jvj+15]=z[jvj+19];
goto l30;
l14:x[jvj+19]=605 ;z[jvj+19]=605;
goto l27;
l15:x[jvj+20]=1378 ;z[jvj+20]=1378;
l16:if(NA<((NB*9)/10)-2) goto l17;
if(x[jvj+20]==incon) goto l18;
l28:x[jvj+17]=743 ;z[jvj+17]=743;
x[jvj+15]=x[jvj+20] ;z[jvj+15]=z[jvj+20];
goto l30;
l17:x[jvj+20]=738 ;z[jvj+20]=738;
goto l28;
l18:x[jvj+20]=1299 ;z[jvj+20]=1299;
goto l28;
l20:if(x[jvj+15]==incon) goto l21;
goto l37;
l21:if(NA!=incon) goto l22;
l29:x[jvj+17]=178 ;z[jvj+17]=178;
x[jvj+15]=250 ;z[jvj+15]=250;
goto l30;
l22:if(NB!=incon) goto l23;
goto l29;
l23:if((NB!=0)) goto l25;
if((NA<=0)) goto l25;
x[jvj+18]=incon;
if((NA>30)) goto l11;
if((NA<7)) goto l12;
x[jvj+18]=206 ;z[jvj+18]=206;
goto l24;
l25:if((NA==0)) goto l26;
if((NA<=0)) goto l29;
if((NB<=0)) goto l29;
x[jvj+20]=incon;
if(NA>((NB*11)/10)+2) goto l15;
goto l16;
l26:if((NB<=0)) goto l29;
x[jvj+19]=incon;
if((NB>30)) goto l13;
if((NB<7)) goto l14;
x[jvj+19]=206 ;z[jvj+19]=206;
goto l27;
l32:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=218; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(218,jvj+12,jvj+13)*/
if((x[jvj+13]!=x[jvj+17])) goto l33;
pile[v[22]]=447; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(447,jvj+12,jvj+14)*/
if((x[jvj+14]!=x[jvj+15])) goto l33;
x[jvj+16]=x[jvj+12] ;z[jvj+16]=z[jvj+12];
goto l35;
l33:x[jvj+11]=t[x[jvj+11]];
goto l31;
l34:pile[v[22]]=135; pile[WZ1]=V29; pile[WZ2]=jvj+15; 
(*f[42])( );     /*SRA1(135,V29,jvj+15,V28)*/
V28=pile[WZ3]; 
goto l36;
}
