#include "dx.h"
void DOUBB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V14=0,V61=0,V65=0,V46=0,VV=0,V76=0,V72=0,V45=0,V42=0,TT=0,V80=0,V23=0,V=0,V30=0,V33=0,W=0;
int R,T;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=57;
x[jvj+1]=10496;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1828&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,R,jvj+29)*/
x[jvj+52]=w[x[jvj+29]][8];
l8:if((x[jvj+52]<=0)) goto l11;
x[jvj+30]=s[x[jvj+52]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+52];
pile[v[22]]=jvj+30; pile[WZ1]=R; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(jvj+30,R,jvj+31)*/
x[jvj+53]=x[jvj+31] ;z[jvj+53]=z[jvj+31];
l9:if((x[jvj+53]>0)) goto l10;
x[jvj+52]=t[x[jvj+52]];
goto l8;
l3:pile[v[22]]=436; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,jvj+4,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+9,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=V8; pile[WZ2]=jvj+11; 
(*f[1988])( );     /*USV0(jvj+10,V8,jvj+11)*/
if((x[jvj+11]==135)) goto l26;
l2:x[jvj+49]=t[x[jvj+49]];
l1:if((x[jvj+49]<=0)) goto l27;
x[jvj+4]=s[x[jvj+49]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+49];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=54)) goto l2;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[1989])( );if(v[102]) goto l2;     /*DOUBX0(jvj+7,jvj+4,jvj+8)*/
if((x[jvj+8]==135)) goto l3;
goto l2;
l5:x[jvj+50]=t[x[jvj+50]];
l4:if((x[jvj+50]<=0)) goto l22;
x[jvj+23]=s[x[jvj+50]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+50];
pile[v[22]]=102; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+23,jvj+24)*/
pile[v[22]]=140; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+24,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+23; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+23,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+25,V65)*/
V65=pile[WZ2]; 
V46=V61;
VV=V65;
x[jvj+51]=x[jvj+21] ;z[jvj+51]=z[jvj+21];
l6:if((x[jvj+51]<=0)) goto l5;
x[jvj+26]=s[x[jvj+51]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+51];
pile[v[22]]=103; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+26,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+27,V76)*/
V76=pile[WZ2]; 
if((VV!=V76)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+26; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+26,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+28,V72)*/
V72=pile[WZ2]; 
V45=V72;
pile[v[22]]=V45; pile[WZ1]=V46; pile[WZ2]=R; pile[WZ3]=jvj+22; 
(*f[1802])( );     /*SUBST1(V45,V46,R,jvj+22)*/
l7:x[jvj+51]=t[x[jvj+51]];
goto l6;
l10:x[jvj+32]=s[x[jvj+53]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+53];
pile[v[22]]=T; pile[WZ1]=jvj+32; pile[WZ2]=R; 
(*f[1990])( );     /*DOUBC0(T,jvj+32,R)*/
x[jvj+53]=t[x[jvj+53]];
goto l9;
l11:pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,R,jvj+33)*/
x[jvj+54]=x[jvj+33] ;z[jvj+54]=z[jvj+33];
l12:if((x[jvj+54]>0)) goto l13;
l29:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l13:x[jvj+19]=s[x[jvj+54]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+54];
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+19,jvj+34)*/
if((x[jvj+34]!=39)) goto l16;
pile[v[22]]=111; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+19,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+37,jvj+38)*/
TT=x[jvj+38];
pile[v[22]]=632; pile[WZ1]=240; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(632,240,jvj+39)*/
for(a=x[jvj+39];a>0;a=t[a]) if(s[a]==TT) goto l23;
x[jvj+56]=t[x[jvj+54]];
l19:if((x[jvj+56]<=0)) goto l23;
x[jvj+17]=s[x[jvj+56]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+56];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+19; pile[WZ2]=jvj+40; 
(*f[1991])( );     /*MEMEY0(jvj+17,jvj+19,jvj+40)*/
if((x[jvj+40]==135)) goto l21;
l20:x[jvj+56]=t[x[jvj+56]];
goto l19;
l14:x[jvj+54]=t[x[jvj+54]];
goto l12;
l16:x[jvj+55]=t[x[jvj+54]];
l15:if((x[jvj+55]<=0)) goto l23;
x[jvj+35]=s[x[jvj+55]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+55];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[760])( );     /*MEMEX0(jvj+19,jvj+35,jvj+36)*/
if((x[jvj+36]==135)) goto l18;
l17:x[jvj+55]=t[x[jvj+55]];
goto l15;
l18:V42=x[jvj+35];
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=V42; 
(*f[134])( );     /*OTA0(107,R,V42)*/
goto l17;
l21:V80=x[jvj+17];
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=39)) goto l22;
pile[v[22]]=113; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(113,jvj+19,jvj+20)*/
pile[WZ1]=jvj+17; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(113,jvj+17,jvj+21)*/
x[jvj+22]=vo[15];z[jvj+22]=vz[15];
x[jvj+50]=x[jvj+20] ;z[jvj+50]=z[jvj+20];
goto l4;
l22:pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=V80; 
(*f[134])( );     /*OTA0(107,R,V80)*/
pile[v[22]]=T; pile[WZ1]=415; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(T,415,68)*/
goto l20;
l23:pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+19,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+41,jvj+42)*/
if((x[jvj+42]!=179)) goto l14;
pile[v[22]]=436; pile[WZ1]=jvj+19; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(436,jvj+19,jvj+43)*/
pile[v[22]]=140; pile[WZ1]=jvj+43; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+43,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+19,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+10,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=172)) goto l24;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,jvj+10,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+14,V14)*/
V14=pile[WZ2]; 
if((V14!=0)) goto l24;
pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(103,jvj+10,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]==23)) goto l14;
l24:x[jvj+44]=vo[15];z[jvj+44]=vz[15];
V=V23;
x[jvj+57]=t[x[jvj+54]];
l25:if((x[jvj+57]<=0)) goto l14;
x[jvj+7]=s[x[jvj+57]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+57];
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+7,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+45,jvj+46)*/
if((x[jvj+46]!=179)) goto l26;
pile[v[22]]=436; pile[WZ1]=jvj+7; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(436,jvj+7,jvj+47)*/
pile[v[22]]=140; pile[WZ1]=jvj+47; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(140,jvj+47,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+7,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]==250)) goto l27;
x[jvj+49]=x[jvj+33] ;z[jvj+49]=z[jvj+33];
goto l1;
l27:pile[v[22]]=jvj+10; pile[WZ1]=jvj+2; pile[WZ2]=jvj+48; 
(*f[760])( );     /*MEMEX0(jvj+10,jvj+2,jvj+48)*/
if((x[jvj+48]==135)) goto l28;
l26:x[jvj+57]=t[x[jvj+57]];
goto l25;
l28:V33=x[jvj+7];
W=V30;
pile[v[22]]=W; pile[WZ1]=V; pile[WZ2]=R; pile[WZ3]=jvj+44; 
(*f[1802])( );     /*SUBST1(W,V,R,jvj+44)*/
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=V33; 
(*f[134])( );     /*OTA0(107,R,V33)*/
pile[v[22]]=T; pile[WZ1]=415; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(T,415,68)*/
goto l26;
}
