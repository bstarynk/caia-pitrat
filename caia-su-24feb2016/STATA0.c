#include "dx.h"
void STATA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V42=0,V45=0,V2=0,V47=0,V24=0,V27=0,DD=0,V22=0,V=0,GG=0,V81=0;
int Q,X;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=74;
x[jvj+1]=11504;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==912&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Q=pile[v[22]]; X=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[jvj+8]=x[jvj+3]=incon;
pile[v[22]]=288; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(288,X,jvj+2)*/
if((x[jvj+2]!=187)) goto l3;
x[jvj+4]=1529 ;z[jvj+4]=1529;
l4:pile[v[22]]=Q; pile[WZ1]=jvj+4; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(Q,jvj+4,1)*/
if(x[jvj+2]!=incon) goto l5;
l18:x[jvj+8]=250 ;z[jvj+8]=250;
if(x[jvj+2]!=incon) goto l50;
l56:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+66]=1528 ;z[jvj+66]=1528;
l6:pile[v[22]]=1521; pile[WZ1]=1447; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1521,1447,jvj+6)*/
l7:if((x[jvj+6]>0)) goto l8;
x[jvj+10]=incon;
if((x[jvj+2]==187)) goto l11;
x[jvj+10]=1459 ;z[jvj+10]=1459;
l12:x[jvj+3]=x[jvj+10] ;z[jvj+3]=z[jvj+10];
if((x[jvj+2]==187)) goto l13;
pile[v[22]]=1525; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1525,X,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=1532; 
(*f[1211])( );     /*MARKUTILE0(jvj+9,1532)*/
pile[WZ1]=876; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+9,876,1)*/
l13:pile[v[22]]=Q; pile[WZ1]=jvj+10; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(Q,jvj+10,1)*/
l14:if((x[jvj+2]==187)) goto l17;
pile[v[22]]=1522; pile[WZ1]=1447; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1522,1447,jvj+11)*/
l15:if((x[jvj+11]<=0)) goto l17;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=X; pile[WZ1]=jvj+12; pile[WZ3]=jvj+13; 
(*f[45])( );if(v[102]) goto l16;     /*FNDZ0(X,jvj+12,V45,jvj+13)*/
V45=pile[WZ2]; 
V2=V45;
V47=V2;
pile[v[22]]=Q; pile[WZ2]=V47; 
(*f[186])( );     /*BTC0(Q,jvj+12,V47)*/
l16:x[jvj+11]=t[x[jvj+11]];
goto l15;
l3:x[jvj+4]=1527 ;z[jvj+4]=1527;
goto l4;
l5:pile[v[22]]=1018; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1018,jvj+2,jvj+5)*/
pile[v[22]]=Q; pile[WZ1]=jvj+5; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(Q,jvj+5,1)*/
l1:x[jvj+66]=incon;
if((x[jvj+2]==187)) goto l2;
x[jvj+66]=1490 ;z[jvj+66]=1490;
goto l6;
l8:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(jvj+7,X,V42)*/
V42=pile[WZ2]; 
if((V42<=0)) goto l9;
x[jvj+3]=x[jvj+7] ;z[jvj+3]=z[jvj+7];
x[jvj+8]=x[jvj+66] ;z[jvj+8]=z[jvj+66];
if((x[jvj+2]!=187)) goto l10;
pile[v[22]]=Q; pile[WZ1]=jvj+3; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(Q,jvj+3,1)*/
l10:pile[v[22]]=Q; pile[WZ1]=jvj+8; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(Q,jvj+8,1)*/
goto l14;
l9:x[jvj+6]=t[x[jvj+6]];
goto l7;
l11:x[jvj+10]=1530 ;z[jvj+10]=1530;
goto l12;
l17:if(x[jvj+8]==incon) goto l18;
l51:pile[v[22]]=159; pile[WZ1]=X; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(159,X,jvj+41)*/
l52:if((x[jvj+41]<=0)) goto l56;
x[jvj+17]=s[x[jvj+41]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+41];
pile[v[22]]=110; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l53;     /*FNDC1(110,jvj+17,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=158; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(158,jvj+17,jvj+42)*/
V=V22;
x[jvj+44]=incon;
pile[v[22]]=159; pile[WZ1]=Q; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(159,Q,jvj+14)*/
x[jvj+67]=x[jvj+14] ;z[jvj+67]=z[jvj+14];
l19:if((x[jvj+67]>0)) goto l20;
pile[v[22]]=110; pile[WZ1]=V; pile[WZ2]=288; pile[WZ3]=jvj+2; pile[WZ4]=jvj+44; 
(*f[692])( );     /*QUADRI13(110,V,288,jvj+2,jvj+44)*/
l54:GG=x[jvj+42];
x[jvj+43]=x[jvj+44] ;z[jvj+43]=z[jvj+44];
if((GG!=576)) goto l26;
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+17,jvj+28)*/
pile[v[22]]=1515; pile[WZ1]=1447; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(1515,1447,jvj+29)*/
x[jvj+71]=x[jvj+29] ;z[jvj+71]=z[jvj+29];
l39:if((x[jvj+71]<=0)) goto l26;
x[jvj+30]=s[x[jvj+71]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+71];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(jvj+30,jvj+28,jvj+31)*/
x[jvj+45]=256 ;z[jvj+45]=256;
pile[v[22]]=jvj+45; pile[WZ1]=jvj+43; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(jvj+45,jvj+43,jvj+46)*/
l57:if((x[jvj+46]>0)) goto l59;
pile[v[22]]=jvj+30; pile[WZ1]=218; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+30,218,jvj+33)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+43,jvj+45,jvj+33)*/
l41:x[jvj+51]=x[jvj+31] ;z[jvj+51]=z[jvj+31];
x[jvj+49]=258 ;z[jvj+49]=258;
pile[v[22]]=jvj+49; pile[WZ1]=jvj+33; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(jvj+49,jvj+33,jvj+50)*/
l60:if((x[jvj+50]>0)) goto l62;
pile[v[22]]=jvj+51; pile[WZ1]=218; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+51,218,jvj+32)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+33,jvj+49,jvj+32)*/
l42:pile[v[22]]=X; pile[WZ1]=jvj+3; pile[WZ2]=jvj+32; pile[WZ3]=jvj+8; pile[WZ4]=jvj+4; 
(*f[1220])( );     /*STATX0(X,jvj+3,jvj+32,jvj+8,jvj+4)*/
pile[WZ2]=jvj+33; 
(*f[1220])( );     /*STATX0(X,jvj+3,jvj+33,jvj+8,jvj+4)*/
l40:x[jvj+71]=t[x[jvj+71]];
goto l39;
l20:x[jvj+15]=s[x[jvj+67]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+67];
pile[v[22]]=110; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(110,jvj+15,V24)*/
V24=pile[WZ2]; 
if((V24!=V)) goto l21;
pile[v[22]]=288; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(288,jvj+15,jvj+16)*/
if((x[jvj+16]!=x[jvj+2])) goto l21;
x[jvj+44]=x[jvj+15] ;z[jvj+44]=z[jvj+15];
goto l54;
l21:x[jvj+67]=t[x[jvj+67]];
goto l19;
l24:if(x[jvj+37]==incon) goto l25;
l43:if((x[jvj+37]==(-99999998))) goto l30;
x[jvj+34]=x[jvj+72] ;z[jvj+34]=z[jvj+72];
pile[v[22]]=jvj+34; pile[WZ1]=1447; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(jvj+34,1447,jvj+35)*/
x[jvj+73]=x[jvj+35] ;z[jvj+73]=z[jvj+35];
l44:if((x[jvj+73]<=0)) goto l30;
x[jvj+36]=s[x[jvj+73]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+73];
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(jvj+36,jvj+37,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; 
(*f[999])( );     /*REDUINBRE0(V27,DD)*/
DD=pile[WZ1]; 
x[jvj+54]=256 ;z[jvj+54]=256;
pile[v[22]]=jvj+54; pile[WZ1]=jvj+43; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(jvj+54,jvj+43,jvj+55)*/
l63:if((x[jvj+55]>0)) goto l65;
pile[v[22]]=jvj+36; pile[WZ1]=218; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+36,218,jvj+39)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+54; 
(*f[36])( );     /*PLUSC0(jvj+43,jvj+54,jvj+39)*/
l69:x[jvj+63]=258 ;z[jvj+63]=258;
pile[v[22]]=jvj+63; pile[WZ1]=jvj+39; pile[WZ2]=jvj+64; 
(*f[33])( );     /*FNDE0(jvj+63,jvj+39,jvj+64)*/
l70:if((x[jvj+64]>0)) goto l72;
pile[v[22]]=DD; pile[WZ1]=1106; pile[WZ2]=jvj+38; 
(*f[46])( );     /*TRI0(DD,1106,jvj+38)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+63; 
(*f[36])( );     /*PLUSC0(jvj+39,jvj+63,jvj+38)*/
l46:pile[v[22]]=X; pile[WZ1]=jvj+3; pile[WZ2]=jvj+38; pile[WZ3]=jvj+8; pile[WZ4]=jvj+4; 
(*f[1220])( );     /*STATX0(X,jvj+3,jvj+38,jvj+8,jvj+4)*/
pile[WZ2]=jvj+39; 
(*f[1220])( );     /*STATX0(X,jvj+3,jvj+39,jvj+8,jvj+4)*/
l45:x[jvj+73]=t[x[jvj+73]];
goto l44;
l25:x[jvj+37]=(-99999998);
l30:x[jvj+27]=incon;
if((GG==749)) goto l37;
if((GG==576)) goto l31;
x[jvj+27]=(-99999998);
l55:pile[v[22]]=X; pile[WZ1]=jvj+3; pile[WZ2]=jvj+43; pile[WZ3]=jvj+8; pile[WZ4]=jvj+4; 
(*f[1220])( );     /*STATX0(X,jvj+3,jvj+43,jvj+8,jvj+4)*/
pile[v[22]]=Q; pile[WZ1]=159; 
(*f[36])( );     /*PLUSC0(Q,159,jvj+43)*/
l53:x[jvj+41]=t[x[jvj+41]];
goto l52;
l26:x[jvj+72]=incon;
if((GG!=576)) goto l27;
x[jvj+72]=1514 ;z[jvj+72]=1514;
l27:if(GG==749||GG==756) goto l28;
if(x[jvj+72]==incon) goto l29;
if((x[jvj+72]!=(-99999998))) goto l22;
goto l30;
l28:x[jvj+72]=1516 ;z[jvj+72]=1516;
l22:x[jvj+37]=incon;
if(GG!=749&&GG!=756) goto l23;
x[jvj+37]=x[jvj+17] ;z[jvj+37]=z[jvj+17];
l23:if((GG!=576)) goto l24;
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+17,jvj+18)*/
x[jvj+37]=x[jvj+18] ;z[jvj+37]=z[jvj+18];
goto l43;
l29:x[jvj+72]=(-99999998);
goto l30;
l31:x[jvj+20]=0 ;z[jvj+20]=0;
pile[v[22]]=1517; pile[WZ1]=1447; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1517,1447,jvj+19)*/
x[jvj+68]=x[jvj+19] ;z[jvj+68]=z[jvj+19];
l32:if((x[jvj+68]>0)) goto l33;
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+17,jvj+22)*/
pile[v[22]]=1300; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1300,jvj+22,jvj+23)*/
x[jvj+69]=x[jvj+23] ;z[jvj+69]=z[jvj+23];
l34:if((x[jvj+69]>0)) goto l35;
pile[v[22]]=1294; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(1294,jvj+22,jvj+25)*/
x[jvj+70]=x[jvj+25] ;z[jvj+70]=z[jvj+25];
l36:if((x[jvj+70]<=0)) goto l38;
x[jvj+26]=s[x[jvj+70]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+70];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+20,jvj+26)*/
x[jvj+70]=t[x[jvj+70]];
goto l36;
l33:x[jvj+21]=s[x[jvj+68]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+68];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[68])( );     /*PLUE0(jvj+20,jvj+21)*/
x[jvj+68]=t[x[jvj+68]];
goto l32;
l35:x[jvj+24]=s[x[jvj+69]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+69];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+24; 
(*f[68])( );     /*PLUE0(jvj+20,jvj+24)*/
x[jvj+69]=t[x[jvj+69]];
goto l34;
l37:pile[v[22]]=1518; pile[WZ1]=1447; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(1518,1447,jvj+27)*/
l47:if((x[jvj+27]==(-99999998))) goto l55;
x[jvj+74]=x[jvj+27] ;z[jvj+74]=z[jvj+27];
l48:if((x[jvj+74]<=0)) goto l55;
x[jvj+60]=s[x[jvj+74]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+74];
x[jvj+58]=256 ;z[jvj+58]=256;
pile[v[22]]=jvj+58; pile[WZ1]=jvj+43; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(jvj+58,jvj+43,jvj+59)*/
l66:if((x[jvj+59]>0)) goto l68;
pile[v[22]]=jvj+60; pile[WZ1]=218; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+60,218,jvj+40)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+43,jvj+58,jvj+40)*/
l49:pile[v[22]]=X; pile[WZ1]=jvj+3; pile[WZ2]=jvj+40; pile[WZ3]=jvj+8; pile[WZ4]=jvj+4; 
(*f[1220])( );     /*STATX0(X,jvj+3,jvj+40,jvj+8,jvj+4)*/
x[jvj+74]=t[x[jvj+74]];
goto l48;
l38:x[jvj+27]=x[jvj+20] ;z[jvj+27]=z[jvj+20];
goto l47;
l50:if(x[jvj+3]!=incon) goto l51;
goto l56;
l58:x[jvj+46]=t[x[jvj+46]];
goto l57;
l59:x[jvj+47]=s[x[jvj+46]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+46];
pile[v[22]]=218; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(218,jvj+47,jvj+48)*/
if((x[jvj+48]!=x[jvj+30])) goto l58;
x[jvj+33]=x[jvj+47] ;z[jvj+33]=z[jvj+47];
goto l41;
l61:x[jvj+50]=t[x[jvj+50]];
goto l60;
l62:x[jvj+52]=s[x[jvj+50]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+50];
pile[v[22]]=218; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(218,jvj+52,jvj+53)*/
if((x[jvj+53]!=x[jvj+51])) goto l61;
x[jvj+32]=x[jvj+52] ;z[jvj+32]=z[jvj+52];
goto l42;
l64:x[jvj+55]=t[x[jvj+55]];
goto l63;
l65:x[jvj+56]=s[x[jvj+55]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+55];
pile[v[22]]=218; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(218,jvj+56,jvj+57)*/
if((x[jvj+57]!=x[jvj+36])) goto l64;
x[jvj+39]=x[jvj+56] ;z[jvj+39]=z[jvj+56];
goto l69;
l67:x[jvj+59]=t[x[jvj+59]];
goto l66;
l68:x[jvj+61]=s[x[jvj+59]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+59];
pile[v[22]]=218; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(218,jvj+61,jvj+62)*/
if((x[jvj+62]!=x[jvj+60])) goto l67;
x[jvj+40]=x[jvj+61] ;z[jvj+40]=z[jvj+61];
goto l49;
l71:x[jvj+64]=t[x[jvj+64]];
goto l70;
l72:x[jvj+65]=s[x[jvj+64]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+64];
pile[v[22]]=1106; pile[WZ1]=jvj+65; 
(*f[26])( );if(v[102]) goto l71;     /*FNDC0(1106,jvj+65,V81)*/
V81=pile[WZ2]; 
if((V81!=DD)) goto l71;
x[jvj+38]=x[jvj+65] ;z[jvj+38]=z[jvj+65];
goto l46;
}
