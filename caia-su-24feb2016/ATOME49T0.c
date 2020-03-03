#include "dx.h"
void ATOME49T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V43=0,V33=0,V49=0,V47=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=60;
x[jvj+1]=20049;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3599&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=408)) goto l8;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,RR,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l8;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,R,jvj+7)*/
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=486)) goto l8;
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+10,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,R,jvj+11)*/
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+13)*/
x[jvj+14]=d[20];z[jvj+14]=0;
l1:if((x[jvj+14]<=0)) goto l8;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=RR; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+15,RR,jvj+16)*/
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=636)) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+15; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+15,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=RR; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+19,RR,jvj+20)*/
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+20,V33)*/
V33=pile[WZ2]; 
if((V33!=1)) goto l2;
x[jvj+21]=d[20];z[jvj+21]=0;
l3:if((x[jvj+21]<=0)) goto l2;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=268; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+22,jvj+23)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+23; pile[WZ3]=jvj+24; 
(*f[45])( );if(v[102]) goto l4;     /*FNDZ0(jvj+16,jvj+23,V49,jvj+24)*/
V49=pile[WZ2]; 
pile[WZ1]=jvj+22; pile[WZ3]=jvj+25; 
(*f[45])( );if(v[102]) goto l4;     /*FNDZ0(jvj+16,jvj+22,V47,jvj+25)*/
V47=pile[WZ2]; 
x[jvj+26]=V47 ;z[jvj+26]=(x[jvj+25]==20&&V47<=sepcte) ? V47 : (x[jvj+25]==41) ? (-1000) : 0;
x[jvj+30]=V49 ;z[jvj+30]=(x[jvj+24]==20&&V49<=sepcte) ? V49 : (x[jvj+24]==41) ? (-1000) : 0;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[760])( );     /*MEMEX0(jvj+11,jvj+26,jvj+27)*/
if((x[jvj+27]==135)) goto l5;
l4:x[jvj+21]=t[x[jvj+21]];
goto l3;
l2:x[jvj+14]=t[x[jvj+14]];
goto l1;
l5:x[jvj+54]=x[jvj+30] ;z[jvj+54]=z[jvj+30];
x[jvj+59]=x[jvj+12] ;z[jvj+59]=z[jvj+12];
l10:if((x[jvj+59]>0)) goto l11;
goto l4;
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l9:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+39)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+40)*/
pile[v[22]]=V43; pile[WZ1]=858; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(V43,858,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,v[13],642,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=3599; pile[WZ2]=246; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,3599,246,jvj+38)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20049; pile[WZ4]=jvj+38; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(158,1,218,20049,jvj+38,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=159; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+33,159,jvj+39)*/
pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+33,159,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+41)*/
pile[WZ3]=486; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+29; pile[WZ2]=107; pile[WZ3]=jvj+47; 
(*f[301])( );     /*TRI11(jvj+46,jvj+29,107,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+47,22,100,jvj+43)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; pile[WZ2]=103; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+42,jvj+43,103,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+44; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+44,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+33; 
(*f[1296])( );     /*NOUVCONTR0(jvj+34,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+51; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+51)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+52; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+52)*/
pile[v[22]]=V43; pile[WZ1]=858; pile[WZ2]=jvj+48; 
(*f[46])( );     /*TRI0(V43,858,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+49; 
(*f[189])( );     /*TRI4(jvj+48,v[13],642,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=3599; pile[WZ2]=246; pile[WZ3]=jvj+50; 
(*f[189])( );     /*TRI4(jvj+49,3599,246,jvj+50)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20049; pile[WZ4]=jvj+50; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(158,1,218,20049,jvj+50,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=159; pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+35,159,jvj+51)*/
pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+35,159,jvj+52)*/
pile[WZ1]=R; 
(*f[966])( );     /*ELIMINE0(jvj+35,R)*/
l7:x[jvj+58]=t[x[jvj+58]];
l6:if((x[jvj+58]<=0)) goto l4;
x[jvj+31]=s[x[jvj+58]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+58];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[760])( );     /*MEMEX0(jvj+30,jvj+31,jvj+32)*/
if((x[jvj+32]==135)) goto l9;
goto l7;
l11:x[jvj+53]=s[x[jvj+59]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+59];
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[760])( );     /*MEMEX0(jvj+53,jvj+54,jvj+55)*/
if((x[jvj+55]==135)) goto l12;
x[jvj+59]=t[x[jvj+59]];
goto l10;
l12:x[jvj+56]=0 ;z[jvj+56]=0;
x[jvj+60]=x[jvj+12] ;z[jvj+60]=z[jvj+12];
l13:if((x[jvj+60]>0)) goto l14;
x[jvj+28]=x[jvj+56] ;z[jvj+28]=z[jvj+56];
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[299])( );     /*COPEL0(jvj+28,jvj+29)*/
x[jvj+58]=x[jvj+12] ;z[jvj+58]=z[jvj+12];
goto l6;
l14:x[jvj+57]=s[x[jvj+60]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+60];
if((x[jvj+57]==x[jvj+53])) goto l15;
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[68])( );     /*PLUE0(jvj+56,jvj+57)*/
l15:x[jvj+60]=t[x[jvj+60]];
goto l13;
}
