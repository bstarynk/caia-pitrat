#include "dx.h"
void QV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V33=0,K=0,YY=0,V34=0,V39=0,V44=0,KK=0,V31=0;
int G,H,S;
int B,RS;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=57;
x[jvj+1]=10286;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2064&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
G=pile[v[22]]; H=pile[v[22]+1]; S=pile[v[22]+2]; B=pile[v[22]+3]; RS=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=G; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,G,jvj+22)*/
if((x[jvj+22]==484)) goto l21;
if((x[jvj+22]!=22)) goto l27;
pile[v[22]]=111; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,G,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+25,jvj+26)*/
if(x[jvj+26]!=486&&x[jvj+26]!=485) goto l27;
pile[v[22]]=107; pile[WZ1]=G; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,G,jvj+27)*/
x[jvj+53]=x[jvj+27] ;z[jvj+53]=z[jvj+27];
l22:if((x[jvj+53]<=0)) goto l27;
x[jvj+28]=s[x[jvj+53]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+53];
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[887])( );     /*VARND0(jvj+28,jvj+29)*/
for(a=x[jvj+29];a>0;a=t[a]) if(s[a]==x[S]) goto l3;
l23:x[jvj+53]=t[x[jvj+53]];
goto l22;
l2:x[jvj+2]=s[x[jvj+48]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+48];
if((x[jvj+2]==x[jvj+28])) goto l4;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==x[S]) goto l23;
l4:x[jvj+48]=t[x[jvj+48]];
l1:if((x[jvj+48]>0)) goto l2;
x[jvj+55]=x[jvj+27] ;z[jvj+55]=z[jvj+27];
l29:if((x[jvj+55]>0)) goto l30;
goto l23;
l3:x[jvj+48]=x[jvj+27] ;z[jvj+48]=z[jvj+27];
goto l1;
l6:x[jvj+4]=s[x[jvj+49]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+49];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+5)*/
x[jvj+49]=t[x[jvj+49]];
l5:if((x[jvj+49]>0)) goto l6;
x[jvj+37]=x[jvj+18] ;z[jvj+37]=z[jvj+18];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=64; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,64,jvj+33)*/
pile[WZ3]=485; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+6; pile[WZ2]=107; pile[WZ3]=jvj+43; 
(*f[301])( );     /*TRI11(jvj+42,jvj+6,107,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+43,22,100,jvj+35)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; pile[WZ2]=103; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+34,jvj+35,103,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+36; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+37,jvj+36,jvj+30)*/
l24:if((x[jvj+30]==(-99999998))) goto l23;
pile[v[22]]=jvj+28; pile[WZ1]=jvj+30; pile[WZ2]=S; pile[WZ3]=jvj+31; pile[WZ4]=jvj+32; 
(*f[2064])( );if(v[102]) goto l23;     /*QV0(jvj+28,jvj+30,S,jvj+31,jvj+32)*/
x[jvj+54]=incon;
if((x[jvj+26]==486)) goto l20;
x[jvj+54]=x[jvj+32] ;z[jvj+54]=z[jvj+32];
l25:x[B]=x[jvj+31] ;z[B]=z[jvj+31];
x[RS]=x[jvj+54] ;z[RS]=z[jvj+54];
l28:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l7:pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+7,V33)*/
V33=pile[WZ2]; 
K=V33;
if((K!=0)) goto l17;
l18:if(x[jvj+30]==incon) goto l19;
goto l24;
l10:x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[200])( );if(v[102]) goto l17;     /*NDD0(jvj+8,jvj+9)*/
YY=0;
pile[v[22]]=365; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(365,jvj+9,jvj+10)*/
x[jvj+50]=x[jvj+10] ;z[jvj+50]=z[jvj+10];
l8:if((x[jvj+50]<=0)) goto l17;
x[jvj+11]=s[x[jvj+50]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+50];
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+11,V34)*/
V34=pile[WZ2]; 
if((YY==V34)) goto l18;
l9:x[jvj+50]=t[x[jvj+50]];
goto l8;
l12:x[jvj+51]=t[x[jvj+51]];
l11:if((x[jvj+51]<=0)) goto l18;
x[jvj+15]=s[x[jvj+51]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+51];
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=484)) goto l12;
x[jvj+52]=x[jvj+12] ;z[jvj+52]=z[jvj+12];
l13:if((x[jvj+52]<=0)) goto l12;
x[jvj+17]=s[x[jvj+52]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+52];
if((x[jvj+15]==x[jvj+17])) goto l14;
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+17,V44)*/
V44=pile[WZ2]; 
KK=V44;
if((KK>0)) goto l17;
l14:x[jvj+52]=t[x[jvj+52]];
goto l13;
l16:if((x[jvj+49]==0)) goto l18;
pile[v[22]]=H; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(H,jvj+18)*/
x[jvj+6]=0 ;z[jvj+6]=0;
goto l5;
l17:pile[v[22]]=H; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(H,jvj+20)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=63; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+39,jvj+21,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+40; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+40,jvj+30)*/
goto l24;
l19:x[jvj+30]=(-99999998);
goto l23;
l20:x[jvj+54]=67 ;z[jvj+54]=67;
goto l25;
l21:x[jvj+23]=x[G] ;z[jvj+23]=z[G];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[200])( );if(v[102]) goto l27;     /*NDD0(jvj+23,jvj+24)*/
if((x[S]!=x[jvj+24])) goto l27;
x[B]=x[H] ;z[B]=z[H];
x[RS]=68 ;z[RS]=68;
goto l28;
l27:x[B]=x[RS]=incon;
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l30:x[jvj+44]=s[x[jvj+55]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+55];
pile[v[22]]=jvj+44; pile[WZ1]=jvj+28; pile[WZ2]=jvj+45; 
(*f[760])( );     /*MEMEX0(jvj+44,jvj+28,jvj+45)*/
if((x[jvj+45]==135)) goto l31;
x[jvj+55]=t[x[jvj+55]];
goto l29;
l31:x[jvj+46]=0 ;z[jvj+46]=0;
x[jvj+56]=x[jvj+27] ;z[jvj+56]=z[jvj+27];
l32:if((x[jvj+56]>0)) goto l33;
x[jvj+57]=x[jvj+46] ;z[jvj+57]=z[jvj+46];
x[jvj+49]=x[jvj+57] ;z[jvj+49]=z[jvj+57];
x[jvj+30]=incon;
if((x[jvj+49]!=0)) goto l15;
x[jvj+30]=x[H] ;z[jvj+30]=z[H];
l15:if((x[jvj+26]==485)) goto l16;
if((x[jvj+26]!=486)) goto l18;
for(i=x[jvj+49],V31=0;i>0;i=t[i],V31++)  ;
if((V31!=1)) goto l18;
if((x[jvj+49]<=0)) goto l18;
x[jvj+7]=s[x[jvj+49]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+49];
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+7,jvj+19)*/
if((x[jvj+19]==41)) goto l7;
if((x[jvj+19]==484)) goto l10;
if((x[jvj+19]!=22)) goto l18;
pile[v[22]]=107; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+12)*/
for(i=x[jvj+12],V39=0;i>0;i=t[i],V39++)  ;
if((V39!=2)) goto l18;
pile[v[22]]=111; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+7,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=485)) goto l18;
x[jvj+51]=x[jvj+12] ;z[jvj+51]=z[jvj+12];
goto l11;
l33:x[jvj+47]=s[x[jvj+56]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+56];
if((x[jvj+47]==x[jvj+44])) goto l34;
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[68])( );     /*PLUE0(jvj+46,jvj+47)*/
l34:x[jvj+56]=t[x[jvj+56]];
goto l32;
}
