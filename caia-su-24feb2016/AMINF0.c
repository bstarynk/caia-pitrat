#include "dx.h"
void AMINF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V29=0,V30=0,V31=0,V26=0,V58=0,RA=0,L=0,V70=0,V23=0,V16=0,V18=0,RS=0,V24=0,RB=0,V42=0,V43=0,V41=0,V40=0,V38=0,V52=0,V50=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=64;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
RA=incon;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=B; pile[WZ1]=jvj+1; 
(*f[200])( );if(v[102]) goto l8;     /*NDD0(B,jvj+1)*/
x[jvj+53]=x[A] ;z[jvj+53]=z[A];
l1:if((x[jvj+53]<=0)) goto l8;
x[jvj+2]=s[x[jvj+53]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+53];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[1205])( );     /*LINELEM0(jvj+2,jvj+3)*/
if((x[jvj+3]==135)) goto l3;
l2:x[jvj+53]=t[x[jvj+53]];
goto l1;
l3:pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(jvj+2,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+1]) goto l2;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+2)*/
goto l2;
l5:x[jvj+6]=s[x[jvj+54]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+54];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(jvj+6,jvj+7)*/
x[jvj+55]=x[jvj+7] ;z[jvj+55]=z[jvj+7];
l6:if((x[jvj+55]>0)) goto l7;
x[jvj+54]=t[x[jvj+54]];
l4:if((x[jvj+54]>0)) goto l5;
x[jvj+64]=x[jvj+8] ;z[jvj+64]=z[jvj+8];
pile[v[22]]=18; pile[WZ1]=0; pile[WZ2]=117; pile[WZ3]=0; pile[WZ4]=jvj+12; 
(*f[391])( );     /*QUADRI10(18,0,117,0,jvj+12)*/
x[jvj+56]=x[jvj+31] ;z[jvj+56]=z[jvj+31];
l9:if((x[jvj+56]>0)) goto l10;
for(i=x[jvj+31],V30=0;i>0;i=t[i],V30++)  ;
pile[v[22]]=18; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(18,jvj+12,V31)*/
V31=pile[WZ2]; 
if((V30!=V31)) goto l13;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+12,V26)*/
V26=pile[WZ2]; 
RA=V26;
l13:x[jvj+57]=x[jvj+64] ;z[jvj+57]=z[jvj+64];
l12:if((x[jvj+57]<=0)) goto l36;
x[jvj+13]=s[x[jvj+57]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+57];
pile[v[22]]=498; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(498,jvj+13,jvj+14)*/
pile[v[22]]=688; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(688,jvj+14,V58)*/
V58=pile[WZ2]; 
if((V58!=1)) goto l14;
x[jvj+58]=t[x[jvj+57]];
l15:if((x[jvj+58]<=0)) goto l14;
x[jvj+15]=s[x[jvj+58]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+58];
pile[v[22]]=498; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(498,jvj+15,jvj+16)*/
if((x[jvj+14]!=x[jvj+16])) goto l16;
x[jvj+20]=0 ;z[jvj+20]=0;
pile[WZ1]=jvj+13; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(498,jvj+13,jvj+17)*/
x[jvj+59]=x[jvj+64] ;z[jvj+59]=z[jvj+64];
l17:if((x[jvj+59]<=0)) goto l19;
x[jvj+18]=s[x[jvj+59]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+59];
pile[v[22]]=498; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(498,jvj+18,jvj+19)*/
if((x[jvj+19]!=x[jvj+17])) goto l18;
pile[v[22]]=jvj+20; 
(*f[68])( );     /*PLUE0(jvj+20,jvj+18)*/
l18:x[jvj+59]=t[x[jvj+59]];
goto l17;
l7:x[jvj+9]=s[x[jvj+55]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+55];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+9)*/
x[jvj+55]=t[x[jvj+55]];
goto l6;
l8:x[jvj+31]=x[jvj+5] ;z[jvj+31]=z[jvj+5];
x[jvj+8]=0 ;z[jvj+8]=0;
x[jvj+54]=x[jvj+31] ;z[jvj+54]=z[jvj+31];
goto l4;
l10:x[jvj+10]=s[x[jvj+56]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+56];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[3873])( );if(v[102]) goto l11;     /*INFB0(jvj+10,jvj+11)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+11,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=117; pile[WZ2]=V29; 
(*f[186])( );     /*BTC0(jvj+12,117,V29)*/
pile[WZ1]=18; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+12,18,1)*/
l11:x[jvj+56]=t[x[jvj+56]];
goto l9;
l14:x[jvj+57]=t[x[jvj+57]];
goto l12;
l16:x[jvj+58]=t[x[jvj+58]];
goto l15;
l19:x[jvj+29]=x[jvj+20] ;z[jvj+29]=z[jvj+20];
x[jvj+23]=0 ;z[jvj+23]=0;
x[jvj+60]=x[jvj+31] ;z[jvj+60]=z[jvj+31];
l22:if((x[jvj+60]>0)) goto l23;
for(i=x[jvj+29],V18=0;i>0;i=t[i],V18++)  ;
pile[v[22]]=jvj+29; pile[WZ1]=V18; pile[WZ2]=280; pile[WZ3]=jvj+30; 
(*f[3989])( );if(v[102]) goto l36;     /*SETVAL0(jvj+29,V18,280,jvj+30)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+29; pile[WZ2]=V18; pile[WZ3]=jvj+32; 
(*f[3990])( );     /*ENSCOEFF0(jvj+31,jvj+29,V18,jvj+32)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+32; 
(*f[3991])( );if(v[102]) goto l36;     /*PRODBAGS0(jvj+30,jvj+32,RS)*/
RS=pile[WZ2]; 
x[jvj+26]=0 ;z[jvj+26]=0;
x[jvj+61]=x[jvj+23] ;z[jvj+61]=z[jvj+23];
l25:if((x[jvj+61]>0)) goto l26;
V16=incon;
V23=0;
if((x[jvj+23]==V23)) goto l27;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+26; pile[WZ2]=107; pile[WZ3]=jvj+52; 
(*f[301])( );     /*TRI11(jvj+51,jvj+26,107,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+52,22,100,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[3873])( );if(v[102]) goto l36;     /*INFB0(jvj+27,jvj+28)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(130,jvj+28,V16)*/
V16=pile[WZ2]; 
l28:V24=V16+RS;
RB=V24;
if(RA!=incon) goto l32;
l36:for(i=x[A],V52=0;i>0;i=t[i],V52++)  ;
x[jvj+41]=0 ;z[jvj+41]=0;
x[jvj+63]=x[A] ;z[jvj+63]=z[A];
l33:if((x[jvj+63]>0)) goto l34;
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[299])( );     /*COPEL0(jvj+41,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+42; pile[WZ2]=107; pile[WZ3]=jvj+49; 
(*f[301])( );     /*TRI11(jvj+48,jvj+42,107,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+49,22,100,jvj+43)*/
pile[v[22]]=107; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(107,jvj+43,jvj+44)*/
for(i=x[jvj+44],V50=0;i>0;i=t[i],V50++)  ;
if((V50==V52)) goto l37;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l21:L=s[V70];
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==L) goto l24;
V70=t[V70];
l20:if((V70>0)) goto l21;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+21; 
(*f[68])( );     /*PLUE0(jvj+23,jvj+21)*/
l24:x[jvj+60]=t[x[jvj+60]];
goto l22;
l23:x[jvj+21]=s[x[jvj+60]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+60];
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[887])( );     /*VARND0(jvj+21,jvj+22)*/
V70=x[jvj+29];
goto l20;
l26:x[jvj+24]=s[x[jvj+61]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+61];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+25)*/
pile[v[22]]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+26,jvj+25)*/
x[jvj+61]=t[x[jvj+61]];
goto l25;
l27:V16=0;
goto l28;
l30:x[jvj+33]=s[x[jvj+62]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+62];
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==x[jvj+33]) goto l31;
pile[v[22]]=B; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[3895])( );if(v[102]) goto l31;     /*INFBV0(B,jvj+33,jvj+34)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+35,jvj+34)*/
l31:x[jvj+62]=t[x[jvj+62]];
l29:if((x[jvj+62]>0)) goto l30;
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[299])( );     /*COPEL0(jvj+35,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+45)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=RB; pile[WZ4]=jvj+46; 
(*f[192])( );     /*QUADRI4(100,41,130,RB,jvj+46)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+45; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+45,jvj+37)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+36,jvj+37,107)*/
pile[v[22]]=jvj+37; pile[WZ1]=107; pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(jvj+37,107,jvj+46)*/
pile[v[22]]=107; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(107,jvj+37,jvj+38)*/
for(i=x[jvj+38],V38=0;i>0;i=t[i],V38++)  ;
if((V38!=V40)) goto l36;
x[R]=x[jvj+37] ;z[R]=z[jvj+37];
l38:v[0]=jvj; v[22]-=3; v[102]=0;return;
l32:if((RA>=RB)) goto l36;
for(i=x[A],V42=0;i>0;i=t[i],V42++)  ;
for(i=x[jvj+31],V43=0;i>0;i=t[i],V43++)  ;
V41=V42-V43;
V40=V41+1;
x[jvj+35]=0 ;z[jvj+35]=0;
x[jvj+62]=x[A] ;z[jvj+62]=z[A];
goto l29;
l34:x[jvj+39]=s[x[jvj+63]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+63];
pile[v[22]]=B; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[3895])( );if(v[102]) goto l35;     /*INFBV0(B,jvj+39,jvj+40)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+40; 
(*f[68])( );     /*PLUE0(jvj+41,jvj+40)*/
l35:x[jvj+63]=t[x[jvj+63]];
goto l33;
l37:x[R]=x[jvj+43] ;z[R]=z[jvj+43];
goto l38;
}
