#include "dx.h"
void ATOME97T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V56=0,V16=0,V29=0,V57=0,V15=0,V63=0,V18=0,V17=0,V59=0,V65=0,V22=0,V21=0,V61=0;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=59;
x[jvj+1]=20097;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3236&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,RR,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=55)) goto l14;
pile[v[22]]=870; pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(870,RR,V16)*/
V16=pile[WZ2]; 
if((V16!=2)) goto l14;
pile[v[22]]=107; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,RR,jvj+11)*/
for(i=x[jvj+11],V29=0;i>0;i=t[i],V29++)  ;
if((V29!=2)) goto l14;
x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(642,jvj+12,V57)*/
V57=pile[WZ2]; 
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=RR; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(RR,jvj+3)*/
if((x[jvj+3]<=0)) goto l3;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=509; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1969])( );     /*FNDEND0(509,jvj+4,jvj+5)*/
l1:if((x[jvj+5]<=0)) goto l3;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=870; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(870,jvj+6,V56)*/
V56=pile[WZ2]; 
if((V56!=2)) goto l2;
pile[v[22]]=868; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(868,jvj+6,jvj+7)*/
if((x[jvj+7]!=30)) goto l2;
pile[v[22]]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+6)*/
l2:x[jvj+5]=t[x[jvj+5]];
goto l1;
l4:x[jvj+8]=t[x[jvj+8]];
l3:if((x[jvj+8]<=0)) goto l14;
x[jvj+13]=s[x[jvj+8]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+8];
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=30)) goto l4;
pile[v[22]]=870; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(870,jvj+13,V15)*/
V15=pile[WZ2]; 
if((V15!=2)) goto l4;
pile[v[22]]=102; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+13,jvj+16)*/
pile[v[22]]=103; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+13,jvj+17)*/
x[jvj+18]=x[jvj+16] ;z[jvj+18]=z[jvj+16];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
x[jvj+58]=x[jvj+11] ;z[jvj+58]=z[jvj+11];
l5:if((x[jvj+58]<=0)) goto l4;
x[jvj+20]=s[x[jvj+58]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+58];
pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=26)) goto l6;
x[jvj+59]=x[jvj+11] ;z[jvj+59]=z[jvj+11];
l7:if((x[jvj+59]<=0)) goto l6;
x[jvj+23]=s[x[jvj+59]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+59];
if((x[jvj+20]==x[jvj+23])) goto l8;
pile[v[22]]=111; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+23,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=25)) goto l8;
x[jvj+26]=d[20];z[jvj+26]=0;
l9:if((x[jvj+26]<=0)) goto l8;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=268; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+27,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+20; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+28,jvj+20,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+29,jvj+30)*/
if(x[jvj+30]!=96&&x[jvj+30]!=89&&x[jvj+30]!=41&&x[jvj+30]!=20&&x[jvj+30]!=128&&x[jvj+30]!=570&&x[jvj+30]!=1317) goto l10;
if((x[jvj+31]=w[x[jvj+30]][3])==incon) goto l10;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+31; pile[WZ3]=jvj+32; 
(*f[45])( );if(v[102]) goto l10;     /*FNDZ0(jvj+29,jvj+31,V63,jvj+32)*/
V63=pile[WZ2]; 
V18=V63;
V17=V18;
pile[WZ1]=jvj+33; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+33)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+27; pile[WZ3]=jvj+34; 
(*f[45])( );if(v[102]) goto l10;     /*FNDZ0(jvj+20,jvj+27,V59,jvj+34)*/
V59=pile[WZ2]; 
x[jvj+35]=V59 ;z[jvj+35]=(x[jvj+34]==20&&V59<=sepcte) ? V59 : (x[jvj+34]==41) ? (-1000) : 0;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[760])( );     /*MEMEX0(jvj+16,jvj+35,jvj+36)*/
if((x[jvj+36]==135)) goto l11;
l10:x[jvj+26]=t[x[jvj+26]];
goto l9;
l6:x[jvj+58]=t[x[jvj+58]];
goto l5;
l8:x[jvj+59]=t[x[jvj+59]];
goto l7;
l11:x[jvj+56]=x[jvj+33] ;z[jvj+56]=z[jvj+33];
x[jvj+37]=d[20];z[jvj+37]=0;
l12:if((x[jvj+37]<=0)) goto l10;
x[jvj+38]=s[x[jvj+37]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+37];
pile[v[22]]=268; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(268,jvj+38,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+23; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+39,jvj+23,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+40,jvj+41)*/
if(x[jvj+41]!=96&&x[jvj+41]!=89&&x[jvj+41]!=41&&x[jvj+41]!=20&&x[jvj+41]!=128&&x[jvj+41]!=570&&x[jvj+41]!=1317) goto l13;
if((x[jvj+42]=w[x[jvj+41]][3])==incon) goto l13;
pile[v[22]]=jvj+40; pile[WZ1]=jvj+42; pile[WZ3]=jvj+43; 
(*f[45])( );if(v[102]) goto l13;     /*FNDZ0(jvj+40,jvj+42,V65,jvj+43)*/
V65=pile[WZ2]; 
V22=V65;
V21=V22;
if((V17<=V21)) goto l13;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+38; pile[WZ3]=jvj+44; 
(*f[45])( );if(v[102]) goto l13;     /*FNDZ0(jvj+23,jvj+38,V61,jvj+44)*/
V61=pile[WZ2]; 
x[jvj+45]=V61 ;z[jvj+45]=(x[jvj+44]==20&&V61<=sepcte) ? V61 : (x[jvj+44]==41) ? (-1000) : 0;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[760])( );     /*MEMEX0(jvj+17,jvj+45,jvj+46)*/
if((x[jvj+46]==135)) goto l15;
l13:x[jvj+37]=t[x[jvj+37]];
goto l12;
l14:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l15:pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+52; 
(*f[270])( );     /*QUADRI7(101,jvj+13,110,(-601),jvj+52)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+53; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+53)*/
pile[v[22]]=V57; pile[WZ1]=858; pile[WZ2]=jvj+49; 
(*f[46])( );     /*TRI0(V57,858,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+50; 
(*f[189])( );     /*TRI4(jvj+49,v[13],642,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=3236; pile[WZ2]=246; pile[WZ3]=jvj+51; 
(*f[189])( );     /*TRI4(jvj+50,3236,246,jvj+51)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20097; pile[WZ4]=jvj+51; pile[WZ5]=jvj+47; 
(*f[269])( );     /*QUADRI6(158,1,218,20097,jvj+51,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=159; pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+47,159,jvj+52)*/
pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+47,159,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=111; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+54,111,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; pile[WZ2]=103; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+55,jvj+56,103,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+57; pile[WZ5]=jvj+48; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+57,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+47; 
(*f[1296])( );     /*NOUVCONTR0(jvj+48,jvj+47)*/
goto l13;
}
