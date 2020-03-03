#include "dx.h"
void TRINOMERIG1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NK=0,V17=0,V33=0;
int ZZ,RR,N;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=61;
if(v[0]>99700) (*f[6])( );

ZZ=pile[v[22]]; RR=pile[v[22]+1]; N=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=ZZ; 
(*f[981])( );if(v[102]) goto l17;     /*CPTVAR0(ZZ,NK)*/
NK=pile[WZ1]; 
if((x[N]!=68)) goto l6;
if((NK<=0)) goto l6;
pile[v[22]]=100; pile[WZ1]=ZZ; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,ZZ,jvj+13)*/
if((x[jvj+13]!=22)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,ZZ,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=485)) goto l7;
pile[v[22]]=107; pile[WZ1]=ZZ; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,ZZ,jvj+11)*/
l5:if((x[jvj+11]<=0)) goto l18;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=RR; pile[WZ2]=67; 
(*f[1900])( );     /*TRINOMERIG1(jvj+12,RR,67)*/
x[jvj+11]=t[x[jvj+11]];
goto l5;
l2:x[jvj+1]=s[x[jvj+48]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+48];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+2)*/
pile[v[22]]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+2)*/
x[jvj+48]=t[x[jvj+48]];
l1:if((x[jvj+48]>0)) goto l2;
x[jvj+5]=incon;
for(i=x[jvj+49],V17=0;i>0;i=t[i],V17++)  ;
if((V17!=1)) goto l20;
if((x[jvj+49]<=0)) goto l20;
x[jvj+4]=s[x[jvj+49]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+49];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
l11:pile[v[22]]=RR; pile[WZ1]=459; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(RR,459,jvj+5)*/
l18:v[0]=jvj; v[22]-=3; return;
l4:x[jvj+6]=s[x[jvj+50]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+50];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+7)*/
x[jvj+50]=t[x[jvj+50]];
l3:if((x[jvj+50]>0)) goto l4;
x[jvj+10]=incon;
if((V33==0)) goto l19;
if((V33!=1)) goto l21;
if((x[jvj+51]<=0)) goto l21;
x[jvj+9]=s[x[jvj+51]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+51];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
l16:pile[v[22]]=RR; pile[WZ1]=447; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(RR,447,jvj+10)*/
goto l18;
l6:if((NK!=0)) goto l7;
pile[v[22]]=ZZ; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(ZZ,jvj+16)*/
pile[v[22]]=RR; pile[WZ1]=475; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(RR,475,jvj+16)*/
goto l18;
l7:if((NK==1)) goto l8;
if((NK!=2)) goto l17;
pile[v[22]]=111; pile[WZ1]=ZZ; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,ZZ,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=486)) goto l17;
pile[v[22]]=107; pile[WZ1]=ZZ; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(107,ZZ,jvj+24)*/
x[jvj+53]=x[jvj+24] ;z[jvj+53]=z[jvj+24];
l12:if((x[jvj+53]<=0)) goto l17;
x[jvj+25]=s[x[jvj+53]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+53];
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]!=484)) goto l13;
x[jvj+40]=x[jvj+25] ;z[jvj+40]=z[jvj+25];
x[jvj+57]=x[jvj+24] ;z[jvj+57]=z[jvj+24];
l28:if((x[jvj+57]>0)) goto l29;
l13:x[jvj+53]=t[x[jvj+53]];
goto l12;
l8:pile[v[22]]=111; pile[WZ1]=ZZ; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,ZZ,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=486)) goto l17;
pile[v[22]]=107; pile[WZ1]=ZZ; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,ZZ,jvj+19)*/
x[jvj+52]=x[jvj+19] ;z[jvj+52]=z[jvj+19];
l9:if((x[jvj+52]<=0)) goto l17;
x[jvj+20]=s[x[jvj+52]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+52];
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=484)) goto l10;
x[jvj+55]=x[jvj+19] ;z[jvj+55]=z[jvj+19];
l22:if((x[jvj+55]>0)) goto l23;
l10:x[jvj+52]=t[x[jvj+52]];
goto l9;
l17:pile[v[22]]=RR; pile[WZ1]=158; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(RR,158,12)*/
goto l18;
l19:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+10)*/
goto l16;
l20:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+3; pile[WZ2]=107; pile[WZ3]=jvj+31; 
(*f[301])( );     /*TRI11(jvj+30,jvj+3,107,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+5; 
(*f[58])( );     /*TRI3(jvj+31,22,100,jvj+5)*/
goto l11;
l21:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+8; pile[WZ2]=107; pile[WZ3]=jvj+34; 
(*f[301])( );     /*TRI11(jvj+33,jvj+8,107,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+34,22,100,jvj+10)*/
goto l16;
l23:x[jvj+35]=s[x[jvj+55]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+55];
pile[v[22]]=jvj+35; pile[WZ1]=jvj+20; pile[WZ2]=jvj+36; 
(*f[760])( );     /*MEMEX0(jvj+35,jvj+20,jvj+36)*/
if((x[jvj+36]==135)) goto l24;
x[jvj+55]=t[x[jvj+55]];
goto l22;
l24:x[jvj+37]=0 ;z[jvj+37]=0;
x[jvj+56]=x[jvj+19] ;z[jvj+56]=z[jvj+19];
l25:if((x[jvj+56]>0)) goto l26;
x[jvj+49]=x[jvj+37] ;z[jvj+49]=z[jvj+37];
x[jvj+3]=0 ;z[jvj+3]=0;
x[jvj+48]=x[jvj+49] ;z[jvj+48]=z[jvj+49];
goto l1;
l26:x[jvj+38]=s[x[jvj+56]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+56];
if((x[jvj+38]==x[jvj+35])) goto l27;
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[68])( );     /*PLUE0(jvj+37,jvj+38)*/
l27:x[jvj+56]=t[x[jvj+56]];
goto l25;
l29:x[jvj+39]=s[x[jvj+57]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+57];
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[760])( );     /*MEMEX0(jvj+39,jvj+40,jvj+41)*/
if((x[jvj+41]==135)) goto l30;
x[jvj+57]=t[x[jvj+57]];
goto l28;
l30:x[jvj+42]=0 ;z[jvj+42]=0;
x[jvj+58]=x[jvj+24] ;z[jvj+58]=z[jvj+24];
l31:if((x[jvj+58]>0)) goto l32;
x[jvj+61]=x[jvj+42] ;z[jvj+61]=z[jvj+42];
x[jvj+54]=x[jvj+24] ;z[jvj+54]=z[jvj+24];
l14:if((x[jvj+54]<=0)) goto l13;
x[jvj+27]=s[x[jvj+54]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+54];
if((x[jvj+25]==x[jvj+27])) goto l15;
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=484)) goto l15;
x[jvj+59]=x[jvj+61] ;z[jvj+59]=z[jvj+61];
l34:if((x[jvj+59]>0)) goto l35;
l15:x[jvj+54]=t[x[jvj+54]];
goto l14;
l32:x[jvj+43]=s[x[jvj+58]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+58];
if((x[jvj+43]==x[jvj+39])) goto l33;
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[68])( );     /*PLUE0(jvj+42,jvj+43)*/
l33:x[jvj+58]=t[x[jvj+58]];
goto l31;
l35:x[jvj+44]=s[x[jvj+59]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+59];
pile[v[22]]=jvj+44; pile[WZ1]=jvj+27; pile[WZ2]=jvj+45; 
(*f[760])( );     /*MEMEX0(jvj+44,jvj+27,jvj+45)*/
if((x[jvj+45]==135)) goto l36;
x[jvj+59]=t[x[jvj+59]];
goto l34;
l36:x[jvj+46]=0 ;z[jvj+46]=0;
x[jvj+60]=x[jvj+61] ;z[jvj+60]=z[jvj+61];
l37:if((x[jvj+60]>0)) goto l38;
x[jvj+51]=x[jvj+46] ;z[jvj+51]=z[jvj+46];
for(i=x[jvj+51],V33=0;i>0;i=t[i],V33++)  ;
x[jvj+8]=0 ;z[jvj+8]=0;
x[jvj+50]=x[jvj+51] ;z[jvj+50]=z[jvj+51];
goto l3;
l38:x[jvj+47]=s[x[jvj+60]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+60];
if((x[jvj+47]==x[jvj+44])) goto l39;
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[68])( );     /*PLUE0(jvj+46,jvj+47)*/
l39:x[jvj+60]=t[x[jvj+60]];
goto l37;
}
