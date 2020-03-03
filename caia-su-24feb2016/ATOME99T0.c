#include "dx.h"
void ATOME99T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V60=0,V27=0,V44=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=63;
x[jvj+1]=20099;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3606&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[R]==x[RR])) goto l20;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,R,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=25)) goto l20;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,RR,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=25)) goto l20;
x[jvj+13]=vo[14];z[jvj+13]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(642,jvj+13,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(R,jvj+7)*/
pile[v[22]]=RR; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(RR,jvj+8)*/
l1:if((x[jvj+7]>0)) goto l2;
x[jvj+14]=d[20];z[jvj+14]=0;
l5:if((x[jvj+14]<=0)) goto l20;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+15,R,jvj+16)*/
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=486)) goto l6;
pile[v[22]]=107; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,jvj+16,jvj+19)*/
for(i=x[jvj+19],V27=0;i>0;i=t[i],V27++)  ;
if((V27!=2)) goto l6;
pile[v[22]]=268; pile[WZ1]=jvj+15; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+15,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=R; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+20,R,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+22)*/
x[jvj+23]=d[20];z[jvj+23]=0;
l7:if((x[jvj+23]<=0)) goto l6;
x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=jvj+24; pile[WZ1]=RR; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+24,RR,jvj+25)*/
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+25,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=486)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(107,jvj+25,jvj+28)*/
for(i=x[jvj+28],V44=0;i>0;i=t[i],V44++)  ;
if((V44!=2)) goto l8;
pile[v[22]]=268; pile[WZ1]=jvj+24; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+24,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=RR; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+29,RR,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[255])( );     /*COPEXP0(jvj+30,jvj+31)*/
x[jvj+62]=x[jvj+19] ;z[jvj+62]=z[jvj+19];
l9:if((x[jvj+62]<=0)) goto l8;
x[jvj+58]=s[x[jvj+62]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+62];
x[jvj+37]=x[jvj+58] ;z[jvj+37]=z[jvj+58];
x[jvj+32]=x[jvj+37] ;z[jvj+32]=z[jvj+37];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[887])( );     /*VARND0(jvj+32,jvj+33)*/
if((x[jvj+33]==0)) goto l10;
x[jvj+59]=x[jvj+19] ;z[jvj+59]=z[jvj+19];
l11:if((x[jvj+59]<=0)) goto l10;
x[jvj+34]=s[x[jvj+59]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+59];
if((x[jvj+58]==x[jvj+34])) goto l12;
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[1446])( );     /*NONUL0(jvj+34,jvj+35)*/
if((x[jvj+35]==135)) goto l13;
l12:x[jvj+59]=t[x[jvj+59]];
goto l11;
l2:x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
x[jvj+57]=x[jvj+8] ;z[jvj+57]=z[jvj+8];
l3:if((x[jvj+57]>0)) goto l4;
x[jvj+7]=t[x[jvj+7]];
goto l1;
l4:x[jvj+5]=s[x[jvj+57]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+57];
pile[v[22]]=1366; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1366,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+5]) goto l20;
pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1366,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l20;
x[jvj+57]=t[x[jvj+57]];
goto l3;
l6:x[jvj+14]=t[x[jvj+14]];
goto l5;
l8:x[jvj+23]=t[x[jvj+23]];
goto l7;
l10:x[jvj+62]=t[x[jvj+62]];
goto l9;
l13:pile[v[22]]=jvj+34; pile[WZ1]=jvj+36; 
(*f[255])( );     /*COPEXP0(jvj+34,jvj+36)*/
x[jvj+63]=x[jvj+28] ;z[jvj+63]=z[jvj+28];
l14:if((x[jvj+63]<=0)) goto l12;
x[jvj+60]=s[x[jvj+63]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+63];
x[jvj+38]=x[jvj+60] ;z[jvj+38]=z[jvj+60];
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[760])( );     /*MEMEX0(jvj+37,jvj+38,jvj+39)*/
if((x[jvj+39]==135)) goto l17;
l15:x[jvj+63]=t[x[jvj+63]];
goto l14;
l17:x[jvj+61]=x[jvj+28] ;z[jvj+61]=z[jvj+28];
l16:if((x[jvj+61]<=0)) goto l15;
x[jvj+40]=s[x[jvj+61]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+61];
if((x[jvj+60]==x[jvj+40])) goto l18;
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[1446])( );     /*NONUL0(jvj+40,jvj+41)*/
if((x[jvj+41]==135)) goto l19;
l18:x[jvj+61]=t[x[jvj+61]];
goto l16;
l19:pile[v[22]]=jvj+40; pile[WZ1]=jvj+42; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+45)*/
pile[WZ3]=486; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+50)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+50; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+50,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=107; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+49,107,jvj+22)*/
pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(jvj+49,107,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+51)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+51; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+51,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=107; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+47,107,jvj+31)*/
pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+47,107,jvj+36)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; pile[WZ2]=103; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+46,jvj+47,103,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+49,jvj+48,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+55; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+55)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+56; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+56)*/
pile[v[22]]=V60; pile[WZ1]=858; pile[WZ2]=jvj+52; 
(*f[46])( );     /*TRI0(V60,858,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+53; 
(*f[189])( );     /*TRI4(jvj+52,v[13],642,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=3606; pile[WZ2]=246; pile[WZ3]=jvj+54; 
(*f[189])( );     /*TRI4(jvj+53,3606,246,jvj+54)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20099; pile[WZ4]=jvj+54; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(158,1,218,20099,jvj+54,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=159; pile[WZ2]=jvj+55; 
(*f[36])( );     /*PLUSC0(jvj+43,159,jvj+55)*/
pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(jvj+43,159,jvj+56)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+43; 
(*f[1296])( );     /*NOUVCONTR0(jvj+44,jvj+43)*/
goto l18;
l20:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
