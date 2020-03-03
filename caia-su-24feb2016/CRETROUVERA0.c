#include "dx.h"
void CRETROUVERA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V50=0,V53=0,KK=0,V55=0,K=0,I=0,V66=0,V69=0,II=0,V72=0,V75=0,V60=0,V77=0,V14=0,V24=0,V27=0,V30=0,V11=0;
int D,S,RA;
int RB,V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=52;
x[jvj+1]=11639;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3707&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; S=pile[v[22]+1]; RA=pile[v[22]+2]; RB=pile[v[22]+3]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RA; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,RA,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==486)) goto l1;
if((x[jvj+3]!=485)) goto l33;
pile[v[22]]=107; pile[WZ1]=RA; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,RA,jvj+7)*/
for(i=x[jvj+7],V66=0;i>0;i=t[i],V66++)  ;
if((V66!=2)) goto l33;
x[jvj+43]=x[jvj+7] ;z[jvj+43]=z[jvj+7];
l6:if((x[jvj+43]<=0)) goto l33;
x[jvj+8]=s[x[jvj+43]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+43];
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+8,V69)*/
V69=pile[WZ2]; 
II=V69;
x[jvj+44]=x[jvj+7] ;z[jvj+44]=z[jvj+7];
l8:if((x[jvj+44]<=0)) goto l7;
x[jvj+9]=s[x[jvj+44]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+44];
if((x[jvj+8]==x[jvj+9])) goto l9;
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=486)) goto l9;
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+12)*/
for(i=x[jvj+12],V72=0;i>0;i=t[i],V72++)  ;
if((V72!=2)) goto l9;
x[jvj+45]=x[jvj+12] ;z[jvj+45]=z[jvj+12];
l10:if((x[jvj+45]<=0)) goto l9;
x[jvj+13]=s[x[jvj+45]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+45];
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+13,V75)*/
V75=pile[WZ2]; 
V60=V75;
x[jvj+46]=x[jvj+12] ;z[jvj+46]=z[jvj+12];
l12:if((x[jvj+46]<=0)) goto l11;
x[jvj+14]=s[x[jvj+46]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+46];
if((x[jvj+13]==x[jvj+14])) goto l13;
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+14,V77)*/
V77=pile[WZ2]; 
if((V77!=(-7141))) goto l13;
K=V60;
I=II;
l28:pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(509,D,jvj+26)*/
l29:if((x[jvj+26]<=0)) goto l33;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=25)) goto l30;
x[jvj+30]=d[20];z[jvj+30]=0;
l31:if((x[jvj+30]<=0)) goto l30;
x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+27; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+31,jvj+27,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,jvj+32,jvj+33)*/
if((x[jvj+33]!=484)) goto l32;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+34; 
(*f[200])( );if(v[102]) goto l32;     /*NDD0(jvj+32,jvj+34)*/
if((x[jvj+34]!=x[D])) goto l32;
pile[v[22]]=268; pile[WZ1]=jvj+31; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(268,jvj+31,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+27; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+35,jvj+27,jvj+36)*/
pile[v[22]]=111; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+36,jvj+37)*/
pile[v[22]]=100; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,jvj+36,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+37,jvj+39)*/
pile[v[22]]=107; pile[WZ1]=jvj+36; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(107,jvj+36,jvj+40)*/
for(i=x[jvj+40],V11=0;i>0;i=t[i],V11++)  ;
if((I==0)) goto l14;
if((x[jvj+38]!=22)) goto l32;
if((V11==2)) goto l19;
l32:x[jvj+30]=t[x[jvj+30]];
goto l31;
l1:pile[v[22]]=107; pile[WZ1]=RA; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,RA,jvj+4)*/
for(i=x[jvj+4],V50=0;i>0;i=t[i],V50++)  ;
if((V50!=2)) goto l33;
x[jvj+41]=x[jvj+4] ;z[jvj+41]=z[jvj+4];
l2:if((x[jvj+41]<=0)) goto l33;
x[jvj+5]=s[x[jvj+41]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+41];
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+5,V53)*/
V53=pile[WZ2]; 
KK=V53;
x[jvj+42]=x[jvj+4] ;z[jvj+42]=z[jvj+4];
l4:if((x[jvj+42]<=0)) goto l3;
x[jvj+6]=s[x[jvj+42]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+42];
if((x[jvj+5]==x[jvj+6])) goto l5;
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+6,V55)*/
V55=pile[WZ2]; 
if((V55!=(-7141))) goto l5;
K=KK;
I=0;
goto l28;
l3:x[jvj+41]=t[x[jvj+41]];
goto l2;
l5:x[jvj+42]=t[x[jvj+42]];
goto l4;
l7:x[jvj+43]=t[x[jvj+43]];
goto l6;
l9:x[jvj+44]=t[x[jvj+44]];
goto l8;
l11:x[jvj+45]=t[x[jvj+45]];
goto l10;
l13:x[jvj+46]=t[x[jvj+46]];
goto l12;
l14:if((x[jvj+38]!=22)) goto l32;
if((V11!=2)) goto l32;
if((x[jvj+39]!=486)) goto l19;
x[jvj+47]=x[jvj+40] ;z[jvj+47]=z[jvj+40];
l15:if((x[jvj+47]<=0)) goto l32;
x[jvj+15]=s[x[jvj+47]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+47];
pile[v[22]]=130; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+15,V14)*/
V14=pile[WZ2]; 
if((K!=V14)) goto l16;
x[jvj+48]=x[jvj+40] ;z[jvj+48]=z[jvj+40];
l17:if((x[jvj+48]<=0)) goto l16;
x[jvj+16]=s[x[jvj+48]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+48];
if((x[jvj+15]==x[jvj+16])) goto l18;
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]==484)) goto l35;
l18:x[jvj+48]=t[x[jvj+48]];
goto l17;
l16:x[jvj+47]=t[x[jvj+47]];
goto l15;
l19:if((x[jvj+39]!=485)) goto l32;
if((I==0)) goto l32;
x[jvj+49]=x[jvj+40] ;z[jvj+49]=z[jvj+40];
l20:if((x[jvj+49]<=0)) goto l32;
x[jvj+18]=s[x[jvj+49]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+49];
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+18,V24)*/
V24=pile[WZ2]; 
if((I!=V24)) goto l21;
x[jvj+50]=x[jvj+40] ;z[jvj+50]=z[jvj+40];
l22:if((x[jvj+50]<=0)) goto l21;
x[jvj+19]=s[x[jvj+50]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+50];
if((x[jvj+18]==x[jvj+19])) goto l23;
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=486)) goto l23;
pile[v[22]]=107; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+19,jvj+22)*/
for(i=x[jvj+22],V27=0;i>0;i=t[i],V27++)  ;
if((V27!=2)) goto l23;
x[jvj+51]=x[jvj+22] ;z[jvj+51]=z[jvj+22];
l24:if((x[jvj+51]<=0)) goto l23;
x[jvj+23]=s[x[jvj+51]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+51];
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+23,V30)*/
V30=pile[WZ2]; 
if((K!=V30)) goto l25;
x[jvj+52]=x[jvj+22] ;z[jvj+52]=z[jvj+22];
l26:if((x[jvj+52]<=0)) goto l25;
x[jvj+24]=s[x[jvj+52]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+52];
if((x[jvj+23]==x[jvj+24])) goto l27;
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]==484)) goto l35;
l27:x[jvj+52]=t[x[jvj+52]];
goto l26;
l21:x[jvj+49]=t[x[jvj+49]];
goto l20;
l23:x[jvj+50]=t[x[jvj+50]];
goto l22;
l25:x[jvj+51]=t[x[jvj+51]];
goto l24;
l30:x[jvj+26]=t[x[jvj+26]];
goto l29;
l33:pile[v[22]]=D; pile[WZ1]=S; pile[WZ2]=RA; pile[WZ3]=RB; 
(*f[4023])( );if(v[102]) goto l35;     /*CRETROUVER0(D,S,RA,RB,V)*/
V=pile[WZ4]; 
l36:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; pile[v[22]+4]=V; v[102]=0;return;
l35:x[RB]=V=incon;
l34:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
}
