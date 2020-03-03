#include "dx.h"
void TRADANT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,V13=0,V=0,V35=0,V3=0,V37=0,V8=0,VV=0,V68=0,V71=0,V75=0;
int A,M;
int EE,R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=64;
x[jvj+1]=11346;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1481&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; M=pile[v[22]+1]; EE=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+61]=0 ;z[jvj+61]=0;
x[EE]=x[jvj+61] ;z[EE]=z[jvj+61];
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,A,jvj+3)*/
if((x[jvj+3]!=21)) goto l19;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,A,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=525; pile[WZ1]=773; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(525,773,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==V21) goto l20;
pile[WZ1]=21; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(525,21,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V21) goto l21;
pile[WZ1]=23; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(525,23,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==V21) goto l22;
l17:x[EE]=x[R]=incon;
l16:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l4:x[jvj+51]=s[x[jvj+21]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+21];
if((x[jvj+51]==x[jvj+8])) goto l5;
x[jvj+48]=incon;
x[jvj+64]=x[EE] ;z[jvj+64]=z[EE];
l23:if((x[jvj+64]>0)) goto l30;
pile[v[22]]=VV; pile[WZ1]=110; pile[WZ2]=jvj+48; 
(*f[329])( );     /*TRI13(VV,110,jvj+48)*/
l24:x[jvj+49]=x[jvj+48] ;z[jvj+49]=z[jvj+48];
pile[v[22]]=EE; pile[WZ1]=jvj+49; 
(*f[68])( );     /*PLUE0(EE,jvj+49)*/
pile[v[22]]=525; pile[WZ1]=1083; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(525,1083,jvj+50)*/
l25:if((x[jvj+50]<=0)) goto l5;
V68=s[x[jvj+50]];
x[jvj+63]=x[EE] ;z[jvj+63]=z[EE];
l26:if((x[jvj+63]>0)) goto l27;
V71=V68;
pile[v[22]]=jvj+49; pile[WZ1]=214; pile[WZ2]=V68; 
(*f[735])( );     /*PLUSC4(jvj+49,214,V68)*/
pile[v[22]]=jvj+51; pile[WZ1]=EE; pile[WZ2]=M; pile[WZ3]=jvj+52; 
(*f[1697])( );if(v[102]) goto l5;     /*TRADANT1(jvj+51,EE,M,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; 
(*f[255])( );     /*COPEXP0(jvj+52,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=650; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,650,jvj+54)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V71; pile[WZ4]=jvj+55; 
(*f[270])( );     /*QUADRI7(100,21,140,V71,jvj+55)*/
pile[v[22]]=jvj+54; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+54,111,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+53; pile[WZ2]=103; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+56,jvj+53,103,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+57; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+55,jvj+57,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+12)*/
l5:x[jvj+21]=t[x[jvj+21]];
l3:if((x[jvj+21]>0)) goto l4;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+22; 
(*f[299])( );     /*COPEL0(jvj+11,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=649; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,649,jvj+44)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+47)*/
pile[v[22]]=jvj+44; pile[WZ1]=111; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,111,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+22; pile[WZ2]=107; pile[WZ3]=jvj+46; 
(*f[301])( );     /*TRI11(jvj+45,jvj+22,107,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+46; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+47,jvj+46,jvj+23)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(R,107,jvj+23)*/
l18:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l9:x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=A; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+18,A,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=EE; pile[WZ2]=M; pile[WZ3]=jvj+20; 
(*f[1697])( );if(v[102]) goto l11;     /*TRADANT1(jvj+19,EE,M,jvj+20)*/
pile[v[22]]=R; pile[WZ1]=jvj+18; pile[WZ2]=jvj+20; 
(*f[35])( );     /*CHGC1(R,jvj+18,jvj+20)*/
l11:x[jvj+17]=t[x[jvj+17]];
l8:if((x[jvj+17]>0)) goto l9;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,A,jvj+21)*/
for(i=x[jvj+21],V8=0;i>0;i=t[i],V8++)  ;
if((V8<=1)) goto l13;
pile[v[22]]=525; pile[WZ1]=23; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(525,23,jvj+7)*/
x[jvj+62]=x[jvj+21] ;z[jvj+62]=z[jvj+21];
l1:if((x[jvj+62]<=0)) goto l13;
x[jvj+8]=s[x[jvj+62]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+62];
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+8,V13)*/
V13=pile[WZ2]; 
V=V13;
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==V) goto l12;
l2:x[jvj+62]=t[x[jvj+62]];
goto l1;
l12:pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+8,VV)*/
VV=pile[WZ2]; 
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+9]=d[146];z[jvj+9]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+43)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+43; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+43,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[196])( );     /*PLUF0(jvj+9,jvj+10,jvj+11)*/
goto l3;
l13:if((x[jvj+21]!=0)) goto l14;
goto l18;
l19:pile[v[22]]=jvj+3; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(jvj+3,100,R)*/
l6:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,A,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=R; pile[WZ1]=111; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(R,111,jvj+14)*/
l7:if(x[jvj+3]!=20&&x[jvj+3]!=41) goto l10;
if((x[jvj+15]=w[x[jvj+3]][3])==incon) goto l10;
pile[v[22]]=A; pile[WZ1]=jvj+15; pile[WZ3]=jvj+16; 
(*f[45])( );if(v[102]) goto l10;     /*FNDZ0(A,jvj+15,V35,jvj+16)*/
V35=pile[WZ2]; 
V3=V35;
V37=V3;
pile[v[22]]=R; pile[WZ2]=V37; 
(*f[43])( );     /*CHGC2(R,jvj+15,V37)*/
l10:x[jvj+17]=d[6];z[jvj+17]=0;
goto l8;
l20:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=654; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,654,jvj+26)*/
pile[WZ3]=651; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,651,jvj+39)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V21; pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(100,21,140,V21,jvj+41)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+41,jvj+40,jvj+30)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=41; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=103; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+27,jvj+28,103,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+29; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+30,jvj+29,R)*/
goto l6;
l21:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=651; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,651,jvj+31)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V21; pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(100,21,140,V21,jvj+33)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+32,R)*/
goto l6;
l22:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=649; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,649,jvj+34)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V21; pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(100,21,140,V21,jvj+38)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+42)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+42; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+42,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+36; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+37; 
(*f[298])( );     /*TRIENS1(jvj+36,(-20),jvj+35,107,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+38,jvj+37,R)*/
goto l6;
l27:x[jvj+58]=s[x[jvj+63]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+63];
pile[v[22]]=214; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(214,jvj+58,jvj+59)*/
for(a=x[jvj+59];a>0;a=t[a]) if(s[a]==V68) goto l28;
x[jvj+63]=t[x[jvj+63]];
goto l26;
l28:x[jvj+50]=t[x[jvj+50]];
goto l25;
l29:x[jvj+64]=t[x[jvj+64]];
goto l23;
l30:x[jvj+60]=s[x[jvj+64]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+64];
pile[v[22]]=110; pile[WZ1]=jvj+60; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(110,jvj+60,V75)*/
V75=pile[WZ2]; 
if((V75!=VV)) goto l29;
x[jvj+48]=x[jvj+60] ;z[jvj+48]=z[jvj+60];
goto l24;
l14:if((x[jvj+21]<=0)) goto l18;
x[jvj+24]=s[x[jvj+21]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+21];
pile[v[22]]=jvj+24; pile[WZ1]=EE; pile[WZ2]=M; pile[WZ3]=jvj+25; 
(*f[1697])( );if(v[102]) goto l15;     /*TRADANT1(jvj+24,EE,M,jvj+25)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(R,107,jvj+25)*/
l15:x[jvj+21]=t[x[jvj+21]];
goto l14;
}
