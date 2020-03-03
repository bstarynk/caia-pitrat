#include "dx.h"
void PREPOUA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V18=0,I=0,V28=0,J=0,V45=0,V56=0,V39=0,V79=0,V64=0;
int R,D;
int F,II,Y,G,JJ;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=54;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; D=pile[v[22]+1]; F=pile[v[22]+2]; Y=pile[v[22]+4]; G=pile[v[22]+5]; v[22]+=7; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=55)) goto l7;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,R,jvj+3)*/
for(i=x[jvj+3],V7=0;i>0;i=t[i],V7++)  ;
if((V7!=3)) goto l7;
x[jvj+43]=x[jvj+3] ;z[jvj+43]=z[jvj+3];
l1:if((x[jvj+43]<=0)) goto l7;
x[jvj+4]=s[x[jvj+43]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+43];
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=22)) goto l2;
pile[v[22]]=103; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+4,jvj+6)*/
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+6,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+4,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=484)) goto l2;
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+4,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+9,jvj+10)*/
x[jvj+46]=x[jvj+10] ;z[jvj+46]=z[jvj+10];
if(x[jvj+46]!=29&&x[jvj+46]!=30) goto l2;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+11; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(jvj+7,jvj+11)*/
if((x[jvj+11]!=x[D])) goto l2;
I=V18;
x[jvj+44]=x[jvj+3] ;z[jvj+44]=z[jvj+3];
l3:if((x[jvj+44]<=0)) goto l2;
x[jvj+12]=s[x[jvj+44]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+44];
if((x[jvj+4]==x[jvj+12])) goto l4;
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=22)) goto l4;
pile[v[22]]=102; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+12,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+14,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+12,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=484)) goto l4;
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+12,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+17,jvj+18)*/
x[jvj+20]=x[jvj+18] ;z[jvj+20]=z[jvj+18];
if(x[jvj+20]!=29&&x[jvj+20]!=30) goto l4;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+19; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(jvj+15,jvj+19)*/
if((x[jvj+19]!=x[D])) goto l4;
pile[v[22]]=844; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(844,jvj+20,jvj+21)*/
J=V28;
x[jvj+52]=x[jvj+3] ;z[jvj+52]=z[jvj+3];
l5:if((x[jvj+52]<=0)) goto l4;
x[jvj+45]=s[x[jvj+52]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+52];
if((x[jvj+4]==x[jvj+45])) goto l6;
if((x[jvj+12]==x[jvj+45])) goto l6;
x[Y]=x[jvj+45] ;z[Y]=z[jvj+45];
x[F]=x[jvj+46] ;z[F]=z[jvj+46];
II=I;
x[G]=x[jvj+21] ;z[G]=z[jvj+21];
JJ=J;
l18:v[0]=jvj; v[22]-=7; pile[v[22]+3]=II; pile[v[22]+6]=JJ; v[102]=0;return;
l2:x[jvj+43]=t[x[jvj+43]];
goto l1;
l4:x[jvj+44]=t[x[jvj+44]];
goto l3;
l6:x[jvj+52]=t[x[jvj+52]];
goto l5;
l7:JJ=0;
x[G]=250 ;z[G]=250;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,R,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=55)) goto l17;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(107,R,jvj+24)*/
for(i=x[jvj+24],V45=0;i>0;i=t[i],V45++)  ;
if((V45!=2)) goto l17;
x[jvj+47]=x[jvj+24] ;z[jvj+47]=z[jvj+24];
l8:if((x[jvj+47]>0)) goto l9;
x[jvj+50]=x[jvj+24] ;z[jvj+50]=z[jvj+24];
l13:if((x[jvj+50]<=0)) goto l17;
x[jvj+33]=s[x[jvj+50]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+50];
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+33,jvj+34)*/
if((x[jvj+34]!=22)) goto l14;
pile[v[22]]=102; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+33,jvj+35)*/
pile[v[22]]=130; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+35,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+33; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+33,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+36,jvj+37)*/
if((x[jvj+37]!=484)) goto l14;
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+33,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+38,jvj+39)*/
x[jvj+41]=x[jvj+39] ;z[jvj+41]=z[jvj+39];
if(x[jvj+41]!=26&&x[jvj+41]!=27&&x[jvj+41]!=28&&x[jvj+41]!=29&&x[jvj+41]!=30) goto l14;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+40; 
(*f[200])( );if(v[102]) goto l14;     /*NDD0(jvj+36,jvj+40)*/
if((x[jvj+40]!=x[D])) goto l14;
pile[v[22]]=844; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(844,jvj+41,jvj+42)*/
V64=V79;
x[jvj+54]=x[jvj+24] ;z[jvj+54]=z[jvj+24];
l15:if((x[jvj+54]<=0)) goto l14;
x[jvj+51]=s[x[jvj+54]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+54];
if((x[jvj+33]!=x[jvj+51])) goto l16;
x[jvj+54]=t[x[jvj+54]];
goto l15;
l9:x[jvj+25]=s[x[jvj+47]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+47];
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]!=22)) goto l10;
pile[v[22]]=103; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+25,jvj+27)*/
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+27,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+25,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=484)) goto l10;
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+25,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+30,jvj+31)*/
x[jvj+48]=x[jvj+31] ;z[jvj+48]=z[jvj+31];
if(x[jvj+48]!=26&&x[jvj+48]!=27&&x[jvj+48]!=28&&x[jvj+48]!=29&&x[jvj+48]!=30) goto l10;
pile[v[22]]=jvj+28; pile[WZ1]=jvj+32; 
(*f[200])( );if(v[102]) goto l10;     /*NDD0(jvj+28,jvj+32)*/
if((x[jvj+32]!=x[D])) goto l10;
V39=V56;
x[jvj+53]=x[jvj+24] ;z[jvj+53]=z[jvj+24];
l11:if((x[jvj+53]<=0)) goto l10;
x[jvj+49]=s[x[jvj+53]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+53];
if((x[jvj+25]!=x[jvj+49])) goto l12;
x[jvj+53]=t[x[jvj+53]];
goto l11;
l10:x[jvj+47]=t[x[jvj+47]];
goto l8;
l12:II=V39;
x[F]=x[jvj+48] ;z[F]=z[jvj+48];
x[Y]=x[jvj+49] ;z[Y]=z[jvj+49];
goto l18;
l14:x[jvj+50]=t[x[jvj+50]];
goto l13;
l16:II=V64;
x[F]=x[jvj+42] ;z[F]=z[jvj+42];
x[Y]=x[jvj+51] ;z[Y]=z[jvj+51];
goto l18;
l17:x[F]=II=x[Y]=x[G]=JJ=incon;
v[0]=jvj; v[22]-=7; v[102]=1;return;
}
