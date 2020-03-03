#include "dx.h"
void SOMFACT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V5=0,I=0,V3=0,V24=0,V22=0,N=0,V18=0,V27=0,V19=0,NN=0,V45=0,V49=0,V47=0,V34=0,V50=0,V52=0,V51=0,V53=0,V58=0,V60=0,V40=0,V57=0,V56=0,V55=0,V39=0,V61=0,V37=0,V63=0,V62=0,V35=0,V75=0,V74=0,V78=0,V79=0,V70=0,V80=0,V81=0,V71=0,V67=0,V82=0,V83=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=69;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+54]=0 ;z[jvj+54]=0;
x[jvj+3]=x[jvj+54] ;z[jvj+3]=z[jvj+54];
x[jvj+55]=x[A] ;z[jvj+55]=z[A];
l2:if((x[jvj+55]>0)) goto l3;
if((x[jvj+3]<=0)) goto l59;
x[jvj+14]=s[x[jvj+3]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+3];
x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=1260; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1260,jvj+14,jvj+15)*/
l12:if((x[jvj+15]>0)) goto l13;
x[jvj+23]=0 ;z[jvj+23]=0;
x[jvj+21]=d[64];z[jvj+21]=0;
l20:if((x[jvj+17]>0)) goto l21;
x[jvj+69]=x[jvj+23] ;z[jvj+69]=z[jvj+23];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+38; 
(*f[46])( );     /*TRI0(0,117,jvj+38)*/
x[jvj+65]=x[jvj+3] ;z[jvj+65]=z[jvj+3];
l40:if((x[jvj+65]>0)) goto l41;
pile[v[22]]=117; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l59;     /*FNDC0(117,jvj+38,V35)*/
V35=pile[WZ2]; 
x[jvj+31]=0 ;z[jvj+31]=0;
x[jvj+62]=x[jvj+3] ;z[jvj+62]=z[jvj+3];
l30:if((x[jvj+62]>0)) goto l31;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V35; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,V35,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[1682])( );if(v[102]) goto l59;     /*SIMPCTA1(jvj+39,jvj+40)*/
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l59;     /*FNDC0(510,jvj+40,V83)*/
V83=pile[WZ2]; 
x[jvj+42]=0 ;z[jvj+42]=0;
x[jvj+66]=x[jvj+69] ;z[jvj+66]=z[jvj+69];
l43:if((x[jvj+66]>0)) goto l44;
pile[v[22]]=1260; pile[WZ1]=jvj+40; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(1260,jvj+40,jvj+43)*/
l46:if((x[jvj+43]>0)) goto l47;
x[jvj+50]=0 ;z[jvj+50]=0;
x[jvj+48]=d[64];z[jvj+48]=0;
l56:if((x[jvj+42]>0)) goto l57;
pile[v[22]]=jvj+50; pile[WZ1]=1260; pile[WZ2]=jvj+51; 
(*f[300])( );     /*TRI10(jvj+50,1260,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=V83; pile[WZ2]=510; pile[WZ3]=R; 
(*f[189])( );     /*TRI4(jvj+51,V83,510,R)*/
v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:V2=1;
l5:V3=abs(I);
pile[v[22]]=V3; pile[WZ1]=jvj+2; 
(*f[1007])( );if(v[102]) goto l6;     /*DECFACTPREM0(V3,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=1260; pile[WZ2]=jvj+52; 
(*f[300])( );     /*TRI10(jvj+2,1260,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=V2; pile[WZ2]=510; pile[WZ3]=jvj+4; 
(*f[189])( );     /*TRI4(jvj+52,V2,510,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+4)*/
l6:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+1,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==486)) goto l7;
if((x[jvj+6]!=485)) goto l4;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[1681])( );if(v[102]) goto l4;     /*SOMFACT0(jvj+9,jvj+10)*/
pile[v[22]]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+10)*/
l4:x[jvj+55]=t[x[jvj+55]];
goto l2;
l3:x[jvj+1]=s[x[jvj+55]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+55];
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+1,V5)*/
V5=pile[WZ2]; 
I=V5;
V2=incon;
if((I>=0)) goto l1;
V2=(-1);
goto l5;
l7:pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1680])( );if(v[102]) goto l4;     /*PRDFACT0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+8)*/
goto l4;
l9:x[jvj+56]=t[x[jvj+56]];
l8:if((x[jvj+56]<=0)) goto l14;
x[jvj+13]=s[x[jvj+56]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+56];
pile[v[22]]=510; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(510,jvj+13,V24)*/
V24=pile[WZ2]; 
if((V24!=N)) goto l9;
x[jvj+57]=t[x[jvj+57]];
l10:if((x[jvj+57]>0)) goto l11;
pile[v[22]]=jvj+17; pile[WZ1]=N; 
(*f[207])( );     /*PLUE2(jvj+17,N)*/
l14:x[jvj+15]=t[x[jvj+15]];
goto l12;
l11:x[jvj+11]=s[x[jvj+57]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+57];
pile[v[22]]=1260; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1260,jvj+11,jvj+12)*/
x[jvj+56]=x[jvj+12] ;z[jvj+56]=z[jvj+12];
goto l8;
l13:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=510; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(510,jvj+16,V22)*/
V22=pile[WZ2]; 
N=V22;
x[jvj+57]=x[jvj+3] ;z[jvj+57]=z[jvj+3];
goto l10;
l16:x[jvj+18]=s[x[jvj+58]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+58];
pile[v[22]]=1260; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1260,jvj+18,jvj+19)*/
x[jvj+59]=x[jvj+19] ;z[jvj+59]=z[jvj+19];
l17:if((x[jvj+59]>0)) goto l18;
x[jvj+58]=t[x[jvj+58]];
l15:if((x[jvj+58]>0)) goto l16;
if((V18==999999)) goto l22;
pile[v[22]]=510; pile[WZ1]=NN; pile[WZ2]=515; pile[WZ3]=V18; pile[WZ4]=jvj+22; 
(*f[391])( );     /*QUADRI10(510,NN,515,V18,jvj+22)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[196])( );     /*PLUF0(jvj+21,jvj+22,jvj+23)*/
l22:x[jvj+17]=t[x[jvj+17]];
goto l20;
l18:x[jvj+20]=s[x[jvj+59]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+59];
pile[v[22]]=510; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(510,jvj+20,V27)*/
V27=pile[WZ2]; 
if((V27!=NN)) goto l19;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(515,jvj+20,V19)*/
V19=pile[WZ2]; 
if(V19<V18) V18=V19;
l19:x[jvj+59]=t[x[jvj+59]];
goto l17;
l21:NN=s[x[jvj+17]];
V18=999999;
x[jvj+58]=x[jvj+3] ;z[jvj+58]=z[jvj+3];
goto l15;
l24:x[jvj+24]=s[x[jvj+60]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+60];
pile[v[22]]=510; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(510,jvj+24,V45)*/
V45=pile[WZ2]; 
if((V45!=V50)) goto l25;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(515,jvj+24,V49)*/
V49=pile[WZ2]; 
V47=V52-V49;
V34=V47;
l29:V51=V52-V34;
pile[v[22]]=510; pile[WZ1]=V50; pile[WZ2]=515; pile[WZ3]=V51; pile[WZ4]=jvj+29; 
(*f[391])( );     /*QUADRI10(510,V50,515,V51,jvj+29)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[196])( );     /*PLUF0(jvj+27,jvj+29,jvj+30)*/
l28:x[jvj+61]=t[x[jvj+61]];
l26:if((x[jvj+61]>0)) goto l27;
pile[v[22]]=jvj+30; pile[WZ1]=1260; pile[WZ2]=jvj+53; 
(*f[300])( );     /*TRI10(jvj+30,1260,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=V53; pile[WZ2]=510; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+53,V53,510,jvj+32)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+32)*/
l32:x[jvj+62]=t[x[jvj+62]];
goto l30;
l25:x[jvj+60]=t[x[jvj+60]];
l23:if((x[jvj+60]>0)) goto l24;
V34=V52;
goto l29;
l27:x[jvj+28]=s[x[jvj+61]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+61];
pile[v[22]]=510; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(510,jvj+28,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(515,jvj+28,V52)*/
V52=pile[WZ2]; 
V34=incon;
x[jvj+60]=x[jvj+69] ;z[jvj+60]=z[jvj+69];
goto l23;
l31:x[jvj+25]=s[x[jvj+62]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+62];
pile[v[22]]=510; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(510,jvj+25,V53)*/
V53=pile[WZ2]; 
x[jvj+30]=0 ;z[jvj+30]=0;
pile[v[22]]=1260; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1260,jvj+25,jvj+26)*/
x[jvj+27]=d[64];z[jvj+27]=0;
x[jvj+61]=x[jvj+26] ;z[jvj+61]=z[jvj+26];
goto l26;
l34:x[jvj+33]=s[x[jvj+63]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+63];
pile[v[22]]=510; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(510,jvj+33,V58)*/
V58=pile[WZ2]; 
if((V58!=V57)) goto l35;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(515,jvj+33,V60)*/
V60=pile[WZ2]; 
V40=V60;
l39:V55=V56-V40;
pile[v[22]]=V55; pile[WZ1]=V57; 
(*f[1006])( );if(v[102]) goto l38;     /*POWER0(V55,V57,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=jvj+37; pile[WZ1]=117; pile[WZ2]=V39; 
(*f[818])( );     /*MTC0(jvj+37,117,V39)*/
l38:x[jvj+64]=t[x[jvj+64]];
l36:if((x[jvj+64]>0)) goto l37;
pile[v[22]]=117; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(117,jvj+37,V61)*/
V61=pile[WZ2]; 
V37=V61;
V62=V63*V37;
pile[v[22]]=jvj+38; pile[WZ1]=117; pile[WZ2]=V62; 
(*f[186])( );     /*BTC0(jvj+38,117,V62)*/
l42:x[jvj+65]=t[x[jvj+65]];
goto l40;
l35:x[jvj+63]=t[x[jvj+63]];
l33:if((x[jvj+63]>0)) goto l34;
V40=0;
goto l39;
l37:x[jvj+36]=s[x[jvj+64]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+64];
pile[v[22]]=510; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(510,jvj+36,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(515,jvj+36,V56)*/
V56=pile[WZ2]; 
V40=incon;
x[jvj+63]=x[jvj+69] ;z[jvj+63]=z[jvj+69];
goto l33;
l41:x[jvj+34]=s[x[jvj+65]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+65];
pile[v[22]]=510; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(510,jvj+34,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+37; 
(*f[46])( );     /*TRI0(1,117,jvj+37)*/
pile[v[22]]=1260; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(1260,jvj+34,jvj+35)*/
x[jvj+64]=x[jvj+35] ;z[jvj+64]=z[jvj+35];
goto l36;
l44:x[jvj+41]=s[x[jvj+66]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+66];
pile[v[22]]=510; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(510,jvj+41,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=jvj+42; pile[WZ1]=V75; 
(*f[207])( );     /*PLUE2(jvj+42,V75)*/
l45:x[jvj+66]=t[x[jvj+66]];
goto l43;
l47:x[jvj+44]=s[x[jvj+43]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+43];
pile[v[22]]=510; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(510,jvj+44,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=jvj+42; pile[WZ1]=V74; 
(*f[207])( );     /*PLUE2(jvj+42,V74)*/
l48:x[jvj+43]=t[x[jvj+43]];
goto l46;
l51:x[jvj+46]=s[x[jvj+67]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+67];
pile[v[22]]=510; pile[WZ1]=jvj+46; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(510,jvj+46,V78)*/
V78=pile[WZ2]; 
if((V78!=V67)) goto l52;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(515,jvj+46,V79)*/
V79=pile[WZ2]; 
V70=V79;
l58:V82=V70+V71;
pile[v[22]]=510; pile[WZ1]=V67; pile[WZ2]=515; pile[WZ3]=V82; pile[WZ4]=jvj+49; 
(*f[391])( );     /*QUADRI10(510,V67,515,V82,jvj+49)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[196])( );     /*PLUF0(jvj+48,jvj+49,jvj+50)*/
x[jvj+42]=t[x[jvj+42]];
goto l56;
l52:x[jvj+67]=t[x[jvj+67]];
l50:if((x[jvj+67]>0)) goto l51;
V70=0;
goto l58;
l54:x[jvj+47]=s[x[jvj+68]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+68];
pile[v[22]]=510; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(510,jvj+47,V80)*/
V80=pile[WZ2]; 
if((V80!=V67)) goto l55;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(515,jvj+47,V81)*/
V81=pile[WZ2]; 
V71=V81;
l49:V70=incon;
pile[v[22]]=1260; pile[WZ1]=jvj+40; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(1260,jvj+40,jvj+45)*/
x[jvj+67]=x[jvj+45] ;z[jvj+67]=z[jvj+45];
goto l50;
l55:x[jvj+68]=t[x[jvj+68]];
l53:if((x[jvj+68]>0)) goto l54;
V71=0;
goto l49;
l57:V67=s[x[jvj+42]];
V71=incon;
x[jvj+68]=x[jvj+69] ;z[jvj+68]=z[jvj+69];
goto l53;
l59:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
