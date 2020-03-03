#include "dx.h"
void MEVALX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V37=0,V29=0,WW=0,V53=0,V49=0,V54=0,W=0,V24=0,V=0;
int TL,BT,X;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=46;
x[jvj+1]=10066;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1839&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; BT=pile[v[22]+1]; X=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l30:x[jvj+3]=x[jvj+8]=incon;
pile[v[22]]=BT; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(BT,X,jvj+2)*/
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+2,jvj+3)*/
l1:pile[v[22]]=248; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(248,jvj+2,jvj+4)*/
l2:if((x[jvj+4]<=0)) goto l12;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=161; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(161,jvj+5,jvj+6)*/
if((x[jvj+6]!=x[X])) goto l3;
pile[v[22]]=122; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(122,jvj+5,jvj+7)*/
if((x[jvj+7]!=x[BT])) goto l3;
x[jvj+8]=x[jvj+5] ;z[jvj+8]=z[jvj+5];
l12:if(x[jvj+3]!=incon) goto l13;
l29:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:x[jvj+4]=t[x[jvj+4]];
goto l2;
l5:x[jvj+45]=t[x[jvj+45]];
l4:if((x[jvj+45]<=0)) goto l24;
x[jvj+10]=s[x[jvj+45]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+45];
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+10,V7)*/
V7=pile[WZ2]; 
if((V7!=V)) goto l5;
pile[v[22]]=361; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(361,jvj+10,jvj+33)*/
if((x[jvj+33]!=225)) goto l24;
pile[v[22]]=158; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(158,jvj+10,jvj+34)*/
if(x[jvj+34]!=89&&x[jvj+34]!=96&&x[jvj+34]!=41&&x[jvj+34]!=20) goto l24;
pile[v[22]]=232; pile[WZ1]=jvj+28; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(232,jvj+28,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+26; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+35,jvj+26,jvj+36)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+31; pile[WZ3]=jvj+28; pile[WZ4]=jvj+37; 
(*f[1996])( );if(v[102]) goto l24;     /*MEVALE0(jvj+10,jvj+31,jvj+36,jvj+28,jvj+37)*/
x[jvj+44]=x[jvj+37] ;z[jvj+44]=z[jvj+37];
l28:pile[v[22]]=jvj+44; pile[WZ1]=jvj+2; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(jvj+44,jvj+2,jvj+38)*/
pile[v[22]]=BT; pile[WZ1]=X; 
(*f[1380])( );     /*RECZ0(BT,X,jvj+38)*/
pile[v[22]]=248; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(248,jvj+38,jvj+39)*/
pile[v[22]]=356; pile[WZ1]=jvj+8; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(356,jvj+8,jvj+40)*/
l25:if((x[jvj+39]>0)) goto l26;
pile[v[22]]=jvj+2; 
(*f[1997])( );     /*MEVALV0(jvj+2)*/
goto l30;
l7:if(x[jvj+46]==incon) goto l8;
if((x[jvj+46]!=(-99999998))) goto l17;
l16:x[jvj+18]=t[x[jvj+18]];
l15:if((x[jvj+18]<=0)) goto l18;
x[jvj+11]=s[x[jvj+18]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+18];
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+11,V29)*/
V29=pile[WZ2]; 
if((V29!=V37)) goto l16;
x[jvj+46]=incon;
pile[v[22]]=361; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(361,jvj+11,jvj+12)*/
if((x[jvj+12]!=x[jvj+13])) goto l6;
x[jvj+46]=135 ;z[jvj+46]=135;
l6:pile[v[22]]=268; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+13,jvj+14)*/
if((x[jvj+12]!=x[jvj+14])) goto l7;
x[jvj+46]=134 ;z[jvj+46]=134;
l17:x[jvj+44]=x[jvj+46] ;z[jvj+44]=z[jvj+46];
goto l28;
l8:x[jvj+46]=(-99999998);
goto l16;
l10:if(x[jvj+23]==incon) goto l11;
if((x[jvj+23]!=(-99999998))) goto l21;
l20:x[jvj+20]=t[x[jvj+20]];
l19:if((x[jvj+20]<=0)) goto l22;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+21,V53)*/
V53=pile[WZ2]; 
V49=V53;
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(110,jvj+21,V54)*/
V54=pile[WZ2]; 
W=V54;
x[jvj+23]=incon;
if((V49!=V37)) goto l9;
if((W!=WW)) goto l9;
x[jvj+23]=135 ;z[jvj+23]=135;
l9:if((V49!=WW)) goto l10;
if((W!=V37)) goto l10;
x[jvj+23]=134 ;z[jvj+23]=134;
l21:pile[v[22]]=145; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(145,jvj+21,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+13; pile[WZ2]=jvj+23; pile[WZ3]=jvj+24; 
(*f[1998])( );if(v[102]) goto l20;     /*MEVALF0(jvj+22,jvj+13,jvj+23,jvj+24)*/
x[jvj+44]=x[jvj+24] ;z[jvj+44]=z[jvj+24];
goto l28;
l11:x[jvj+23]=(-99999998);
goto l20;
l13:if(x[jvj+8]!=incon) goto l14;
goto l29;
l14:pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+3,jvj+15)*/
if((x[jvj+15]!=22)) goto l29;
pile[v[22]]=102; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+3,jvj+16)*/
pile[v[22]]=140; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+16,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+3,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+17,jvj+13)*/
if(x[jvj+13]!=225&&x[jvj+13]!=178) goto l18;
pile[v[22]]=356; pile[WZ1]=jvj+8; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(356,jvj+8,jvj+18)*/
goto l15;
l18:if(x[jvj+13]!=25&&x[jvj+13]!=26&&x[jvj+13]!=27&&x[jvj+13]!=28&&x[jvj+13]!=29&&x[jvj+13]!=30&&x[jvj+13]!=44&&x[jvj+13]!=45) goto l22;
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+3,jvj+19)*/
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+19,WW)*/
WW=pile[WZ2]; 
pile[v[22]]=356; pile[WZ1]=jvj+8; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(356,jvj+8,jvj+20)*/
goto l19;
l22:pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+3,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+25,jvj+26)*/
if(x[jvj+26]!=25&&x[jvj+26]!=26&&x[jvj+26]!=29&&x[jvj+26]!=30&&x[jvj+26]!=27&&x[jvj+26]!=28) goto l29;
x[jvj+27]=d[20];z[jvj+27]=0;
l23:if((x[jvj+27]<=0)) goto l29;
x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=jvj+28; pile[WZ1]=jvj+3; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+28,jvj+3,jvj+29)*/
pile[v[22]]=140; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(140,jvj+29,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+28; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(268,jvj+28,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+3; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+30,jvj+3,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+31,jvj+32)*/
if(x[jvj+32]!=89&&x[jvj+32]!=96&&x[jvj+32]!=41&&x[jvj+32]!=20&&x[jvj+32]!=1317) goto l24;
V=V24;
pile[v[22]]=356; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(356,jvj+8,jvj+9)*/
x[jvj+45]=x[jvj+9] ;z[jvj+45]=z[jvj+9];
goto l4;
l24:x[jvj+27]=t[x[jvj+27]];
goto l23;
l26:x[jvj+41]=s[x[jvj+39]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+39];
pile[v[22]]=122; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(122,jvj+41,jvj+42)*/
if((x[jvj+42]!=x[BT])) goto l27;
pile[v[22]]=161; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(161,jvj+41,jvj+43)*/
if((x[jvj+43]!=x[X])) goto l27;
pile[v[22]]=jvj+41; pile[WZ1]=356; pile[WZ2]=jvj+40; 
(*f[34])( );     /*CHGC0(jvj+41,356,jvj+40)*/
pile[WZ1]=360; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+41,360,68)*/
l27:x[jvj+39]=t[x[jvj+39]];
goto l25;
}
