#include "dx.h"
void Z50Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V278=0,V281=0,V97=0,V96=0,V114=0,V106=0,V105=0,V123=0,V223=0,V224=0,V222=0,V46=0,V44=0,V134=0,V133=0,V147=0,V146=0,V160=0,V159=0,V173=0,V172=0,V185=0,V184=0,V183=0,V187=0,V186=0,V200=0,V199=0,V203=0,V202=0,V317=0,V247=0,V88=0,V352=0,V374=0;
int MMMI;
int MMMT,MMMX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=253;
if(v[0]>99700) (*f[6])( );

MMMI=pile[v[22]]; MMMT=pile[v[22]+1]; MMMX=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=x[MMMI] ;z[jvj+8]=z[MMMI];
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(100,jvj+8,jvj+53)*/
if((x[jvj+53]!=484)) goto l48;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+54; 
(*f[200])( );if(v[102]) goto l48;     /*NDD0(jvj+8,jvj+54)*/
pile[v[22]]=472; 
(*f[1975])( );if(v[102]) goto l46;     /*FNDCND0(472,jvj+54,V278)*/
V278=pile[WZ2]; 
if((V278!=1)) goto l46;
pile[v[22]]=489; pile[WZ2]=jvj+55; 
(*f[1969])( );     /*FNDEND0(489,jvj+54,jvj+55)*/
for(i=x[jvj+55],V281=0;i>0;i=t[i],V281++)  ;
if((V281==1)) goto l44;
l46:pile[v[22]]=jvj+54; pile[WZ1]=jvj+59; 
(*f[1974])( );if(v[102]) goto l48;     /*PUTCST0(jvj+54,jvj+59)*/
x[jvj+60]=vo[16];z[jvj+60]=vz[16];
pile[v[22]]=674; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(674,jvj+60,jvj+61)*/
for(a=x[jvj+61];a>0;a=t[a]) if(s[a]==1453) goto l47;
l48:pile[v[22]]=jvj+8; pile[WZ1]=jvj+62; 
(*f[1361])( );     /*VAROBJ0(jvj+8,jvj+62)*/
if((x[jvj+62]!=0)) goto l50;
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]==41)) goto l50;
l7:pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(100,jvj+8,jvj+10)*/
if((x[jvj+10]==20)) goto l50;
l49:pile[v[22]]=jvj+8; pile[WZ1]=MMMX; 
(*f[1973])( );if(v[102]) goto l50;     /*EVALUATE0(jvj+8,MMMX)*/
x[MMMT]=16686 ;z[MMMT]=16686;
l115:v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+246]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+246];
if((x[jvj+1]==x[jvj+180])) goto l3;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==649)) goto l3;
l4:pile[v[22]]=jvj+4; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+1)*/
l3:x[jvj+246]=t[x[jvj+246]];
l1:if((x[jvj+246]>0)) goto l2;
x[jvj+7]=0 ;z[jvj+7]=0;
l5:if((x[jvj+4]>0)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+180; pile[WZ2]=jvj+183; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(102,jvj+180,jvj+183)*/
pile[v[22]]=jvj+183; pile[WZ1]=jvj+184; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+183,jvj+184)*/
x[MMMT]=16724 ;z[MMMT]=16724;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+228; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+228)*/
pile[WZ3]=486; pile[WZ4]=jvj+245; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+245)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+245; pile[WZ4]=jvj+230; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+245,jvj+230)*/
pile[v[22]]=jvj+230; pile[WZ1]=107; pile[WZ2]=jvj+184; 
(*f[36])( );     /*PLUSC0(jvj+230,107,jvj+184)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+230; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+7,jvj+230,107)*/
pile[v[22]]=jvj+228; pile[WZ1]=111; pile[WZ2]=jvj+229; 
(*f[54])( );     /*TRI1(jvj+228,111,jvj+229)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+230; pile[WZ4]=jvj+229; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+230,jvj+229,MMMX)*/
goto l115;
l6:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+5,jvj+6)*/
pile[v[22]]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+6)*/
x[jvj+4]=t[x[jvj+4]];
goto l5;
l9:x[jvj+11]=s[x[jvj+167]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+167];
if((x[jvj+11]==x[jvj+168])) goto l10;
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]==649)) goto l10;
l11:pile[v[22]]=jvj+14; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+11)*/
l10:x[jvj+167]=t[x[jvj+167]];
l8:if((x[jvj+167]>0)) goto l9;
x[jvj+17]=0 ;z[jvj+17]=0;
l12:if((x[jvj+14]>0)) goto l13;
x[MMMT]=16811 ;z[MMMT]=16811;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+213; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+213)*/
pile[WZ3]=1215; pile[WZ4]=jvj+242; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+242)*/
pile[v[22]]=jvj+242; pile[WZ1]=111; pile[WZ2]=jvj+243; 
(*f[54])( );     /*TRI1(jvj+242,111,jvj+243)*/
pile[v[22]]=jvj+243; pile[WZ1]=jvj+17; pile[WZ2]=107; pile[WZ3]=jvj+244; 
(*f[301])( );     /*TRI11(jvj+243,jvj+17,107,jvj+244)*/
pile[v[22]]=jvj+244; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+214; 
(*f[58])( );     /*TRI3(jvj+244,22,100,jvj+214)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+215; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+215)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+213; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+213,MMMX)*/
pile[v[22]]=MMMX; pile[WZ1]=107; pile[WZ2]=jvj+214; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+214)*/
pile[WZ2]=jvj+215; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+215)*/
goto l115;
l13:x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+15,jvj+16)*/
pile[v[22]]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+16)*/
x[jvj+14]=t[x[jvj+14]];
goto l12;
l15:x[jvj+18]=s[x[jvj+178]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+178];
if((x[jvj+18]==x[jvj+179])) goto l16;
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]==649)) goto l16;
l17:pile[v[22]]=jvj+21; pile[WZ1]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+18)*/
l16:x[jvj+178]=t[x[jvj+178]];
l14:if((x[jvj+178]>0)) goto l15;
x[jvj+24]=0 ;z[jvj+24]=0;
l18:if((x[jvj+21]>0)) goto l19;
x[MMMT]=16622 ;z[MMMT]=16622;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+225; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+225)*/
pile[v[22]]=jvj+225; pile[WZ1]=111; pile[WZ2]=jvj+226; 
(*f[54])( );     /*TRI1(jvj+225,111,jvj+226)*/
pile[v[22]]=jvj+226; pile[WZ1]=jvj+24; pile[WZ2]=107; pile[WZ3]=jvj+227; 
(*f[301])( );     /*TRI11(jvj+226,jvj+24,107,jvj+227)*/
pile[v[22]]=jvj+227; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=MMMX; 
(*f[58])( );     /*TRI3(jvj+227,22,100,MMMX)*/
goto l115;
l19:x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+22,jvj+23)*/
pile[v[22]]=jvj+24; 
(*f[68])( );     /*PLUE0(jvj+24,jvj+23)*/
x[jvj+21]=t[x[jvj+21]];
goto l18;
l21:x[jvj+25]=s[x[jvj+185]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+185];
if((x[jvj+25]==x[jvj+186])) goto l22;
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+25,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]==649)) goto l22;
l23:pile[v[22]]=jvj+28; pile[WZ1]=jvj+25; 
(*f[68])( );     /*PLUE0(jvj+28,jvj+25)*/
l22:x[jvj+185]=t[x[jvj+185]];
l20:if((x[jvj+185]>0)) goto l21;
x[jvj+31]=0 ;z[jvj+31]=0;
l24:if((x[jvj+28]>0)) goto l25;
x[MMMT]=16671 ;z[MMMT]=16671;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+231; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+231)*/
pile[v[22]]=jvj+231; pile[WZ1]=111; pile[WZ2]=jvj+232; 
(*f[54])( );     /*TRI1(jvj+231,111,jvj+232)*/
pile[v[22]]=jvj+232; pile[WZ1]=jvj+31; pile[WZ2]=107; pile[WZ3]=jvj+233; 
(*f[301])( );     /*TRI11(jvj+232,jvj+31,107,jvj+233)*/
pile[v[22]]=jvj+233; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=MMMX; 
(*f[58])( );     /*TRI3(jvj+233,22,100,MMMX)*/
goto l115;
l25:x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+29,jvj+30)*/
pile[v[22]]=jvj+31; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+30)*/
x[jvj+28]=t[x[jvj+28]];
goto l24;
l27:x[jvj+32]=s[x[jvj+172]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+172];
if((x[jvj+32]==x[jvj+173])) goto l28;
pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]==649)) goto l28;
l29:pile[v[22]]=jvj+35; pile[WZ1]=jvj+32; 
(*f[68])( );     /*PLUE0(jvj+35,jvj+32)*/
l28:x[jvj+172]=t[x[jvj+172]];
l26:if((x[jvj+172]>0)) goto l27;
x[jvj+38]=0 ;z[jvj+38]=0;
l30:if((x[jvj+35]>0)) goto l31;
x[MMMT]=16674 ;z[MMMT]=16674;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+219; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+219)*/
pile[v[22]]=jvj+219; pile[WZ1]=111; pile[WZ2]=jvj+220; 
(*f[54])( );     /*TRI1(jvj+219,111,jvj+220)*/
pile[v[22]]=jvj+220; pile[WZ1]=jvj+38; pile[WZ2]=107; pile[WZ3]=jvj+221; 
(*f[301])( );     /*TRI11(jvj+220,jvj+38,107,jvj+221)*/
pile[v[22]]=jvj+221; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=MMMX; 
(*f[58])( );     /*TRI3(jvj+221,22,100,MMMX)*/
goto l115;
l31:x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+36,jvj+37)*/
pile[v[22]]=jvj+38; 
(*f[68])( );     /*PLUE0(jvj+38,jvj+37)*/
x[jvj+35]=t[x[jvj+35]];
goto l30;
l33:x[jvj+39]=s[x[jvj+175]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+175];
if((x[jvj+39]==x[jvj+176])) goto l34;
pile[v[22]]=111; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+39,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+40,jvj+41)*/
if((x[jvj+41]==649)) goto l34;
l35:pile[v[22]]=jvj+42; pile[WZ1]=jvj+39; 
(*f[68])( );     /*PLUE0(jvj+42,jvj+39)*/
l34:x[jvj+175]=t[x[jvj+175]];
l32:if((x[jvj+175]>0)) goto l33;
x[jvj+45]=0 ;z[jvj+45]=0;
l36:if((x[jvj+42]>0)) goto l37;
x[MMMT]=16675 ;z[MMMT]=16675;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+222; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+222)*/
pile[v[22]]=jvj+222; pile[WZ1]=111; pile[WZ2]=jvj+223; 
(*f[54])( );     /*TRI1(jvj+222,111,jvj+223)*/
pile[v[22]]=jvj+223; pile[WZ1]=jvj+45; pile[WZ2]=107; pile[WZ3]=jvj+224; 
(*f[301])( );     /*TRI11(jvj+223,jvj+45,107,jvj+224)*/
pile[v[22]]=jvj+224; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=MMMX; 
(*f[58])( );     /*TRI3(jvj+224,22,100,MMMX)*/
goto l115;
l37:x[jvj+43]=s[x[jvj+42]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+42];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+43,jvj+44)*/
pile[v[22]]=jvj+45; 
(*f[68])( );     /*PLUE0(jvj+45,jvj+44)*/
x[jvj+42]=t[x[jvj+42]];
goto l36;
l39:x[jvj+46]=s[x[jvj+167]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+167];
if((x[jvj+46]==x[jvj+170])) goto l40;
pile[v[22]]=111; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+46,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+47,jvj+48)*/
if((x[jvj+48]==649)) goto l40;
l41:pile[v[22]]=jvj+49; pile[WZ1]=jvj+46; 
(*f[68])( );     /*PLUE0(jvj+49,jvj+46)*/
l40:x[jvj+167]=t[x[jvj+167]];
l38:if((x[jvj+167]>0)) goto l39;
x[jvj+52]=0 ;z[jvj+52]=0;
l42:if((x[jvj+49]>0)) goto l43;
x[MMMT]=16810 ;z[MMMT]=16810;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1215; pile[WZ4]=jvj+216; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+216)*/
pile[v[22]]=jvj+216; pile[WZ1]=111; pile[WZ2]=jvj+217; 
(*f[54])( );     /*TRI1(jvj+216,111,jvj+217)*/
pile[v[22]]=jvj+217; pile[WZ1]=jvj+52; pile[WZ2]=107; pile[WZ3]=jvj+218; 
(*f[301])( );     /*TRI11(jvj+217,jvj+52,107,jvj+218)*/
pile[v[22]]=jvj+218; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=MMMX; 
(*f[58])( );     /*TRI3(jvj+218,22,100,MMMX)*/
goto l115;
l43:x[jvj+50]=s[x[jvj+49]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+49];
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+50,jvj+51)*/
pile[v[22]]=jvj+52; 
(*f[68])( );     /*PLUE0(jvj+52,jvj+51)*/
x[jvj+49]=t[x[jvj+49]];
goto l42;
l45:x[jvj+55]=t[x[jvj+55]];
l44:if((x[jvj+55]<=0)) goto l46;
x[jvj+56]=s[x[jvj+55]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+55];
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[1291])( );if(v[102]) goto l45;     /*CONVEXP0(jvj+56,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+57,jvj+58)*/
x[MMMT]=16684 ;z[MMMT]=16684;
x[MMMX]=x[jvj+58] ;z[MMMX]=z[jvj+58];
goto l115;
l47:x[MMMT]=16533 ;z[MMMT]=16533;
x[MMMX]=x[jvj+59] ;z[MMMX]=z[jvj+59];
goto l115;
l50:pile[v[22]]=111; pile[WZ1]=MMMI; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(111,MMMI,jvj+63)*/
pile[v[22]]=101; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(101,jvj+63,jvj+64)*/
if((x[jvj+64]==770)) goto l51;
if((x[jvj+64]==27)) goto l52;
if((x[jvj+64]==28)) goto l53;
if((x[jvj+64]==29)) goto l54;
if((x[jvj+64]==30)) goto l56;
if((x[jvj+64]==1911)) goto l60;
if((x[jvj+64]==25)) goto l64;
if((x[jvj+64]==26)) goto l73;
if((x[jvj+64]!=625)) goto l82;
pile[v[22]]=160; pile[WZ1]=MMMI; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(160,MMMI,jvj+141)*/
pile[v[22]]=130; pile[WZ1]=jvj+141; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(130,jvj+141,V185)*/
V185=pile[WZ2]; 
x[jvj+142]=d[20];z[jvj+142]=0;
l77:if((x[jvj+142]>0)) goto l78;
x[jvj+147]=d[20];z[jvj+147]=0;
l80:if((x[jvj+147]<=0)) goto l82;
x[jvj+148]=s[x[jvj+147]] ;z[jvj+148]=(x[jvj+148]<=sepcte) ? x[jvj+148] : z[jvj+147];
pile[v[22]]=jvj+148; pile[WZ1]=MMMI; pile[WZ2]=jvj+149; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(jvj+148,MMMI,jvj+149)*/
pile[v[22]]=130; pile[WZ1]=jvj+149; 
(*f[26])( );if(v[102]) goto l81;     /*FNDC0(130,jvj+149,V200)*/
V200=pile[WZ2]; 
V199=V200%V185;
pile[v[22]]=268; pile[WZ1]=jvj+148; pile[WZ2]=jvj+150; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(268,jvj+148,jvj+150)*/
pile[v[22]]=jvj+150; pile[WZ1]=MMMI; pile[WZ2]=jvj+151; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(jvj+150,MMMI,jvj+151)*/
pile[v[22]]=130; pile[WZ1]=jvj+151; 
(*f[26])( );if(v[102]) goto l81;     /*FNDC0(130,jvj+151,V203)*/
V203=pile[WZ2]; 
V202=V203%V185;
if((V199!=V202)) goto l81;
x[MMMT]=16672 ;z[MMMT]=16672;
l116:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,20,101,135,MMMX)*/
goto l115;
l51:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(102,MMMI,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(100,jvj+65,jvj+66)*/
if((x[jvj+66]!=41)) goto l82;
pile[v[22]]=jvj+65; pile[WZ1]=jvj+67; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+65,jvj+67)*/
x[MMMT]=16826 ;z[MMMT]=16826;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1778; pile[WZ4]=jvj+187; 
(*f[181])( );     /*QUADRI2(100,20,101,1778,jvj+187)*/
pile[v[22]]=jvj+187; pile[WZ1]=111; pile[WZ2]=jvj+188; 
(*f[54])( );     /*TRI1(jvj+187,111,jvj+188)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+67; pile[WZ4]=jvj+188; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+67,jvj+188,MMMX)*/
goto l115;
l52:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(102,MMMI,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+68,jvj+69)*/
pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(103,MMMI,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+70,jvj+71)*/
x[MMMT]=16689 ;z[MMMT]=16689;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=29; pile[WZ4]=jvj+189; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+189)*/
pile[v[22]]=jvj+189; pile[WZ1]=111; pile[WZ2]=jvj+190; 
(*f[54])( );     /*TRI1(jvj+189,111,jvj+190)*/
pile[v[22]]=jvj+190; pile[WZ1]=jvj+69; pile[WZ2]=103; pile[WZ3]=jvj+191; 
(*f[58])( );     /*TRI3(jvj+190,jvj+69,103,jvj+191)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+71; pile[WZ4]=jvj+191; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+71,jvj+191,MMMX)*/
goto l115;
l53:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(102,MMMI,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+73; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+72,jvj+73)*/
pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(103,MMMI,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+74,jvj+75)*/
x[MMMT]=16722 ;z[MMMT]=16722;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+192; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+192)*/
pile[v[22]]=jvj+192; pile[WZ1]=111; pile[WZ2]=jvj+193; 
(*f[54])( );     /*TRI1(jvj+192,111,jvj+193)*/
pile[v[22]]=jvj+193; pile[WZ1]=jvj+73; pile[WZ2]=103; pile[WZ3]=jvj+194; 
(*f[58])( );     /*TRI3(jvj+193,jvj+73,103,jvj+194)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+75; pile[WZ4]=jvj+194; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+75,jvj+194,MMMX)*/
goto l115;
l54:pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(103,MMMI,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(100,jvj+76,jvj+77)*/
if((x[jvj+77]!=41)) goto l55;
pile[v[22]]=jvj+76; pile[WZ1]=jvj+78; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+76,jvj+78)*/
pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(102,MMMI,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+80; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+79,jvj+80)*/
x[MMMT]=16808 ;z[MMMT]=16808;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+195; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+195)*/
pile[WZ3]=88; pile[WZ4]=jvj+234; 
(*f[181])( );     /*QUADRI2(100,20,101,88,jvj+234)*/
pile[v[22]]=jvj+234; pile[WZ1]=111; pile[WZ2]=jvj+235; 
(*f[54])( );     /*TRI1(jvj+234,111,jvj+235)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+78; pile[WZ4]=jvj+235; pile[WZ5]=jvj+197; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+78,jvj+235,jvj+197)*/
pile[v[22]]=jvj+195; pile[WZ1]=111; pile[WZ2]=jvj+196; 
(*f[54])( );     /*TRI1(jvj+195,111,jvj+196)*/
pile[v[22]]=jvj+196; pile[WZ1]=jvj+197; pile[WZ2]=103; pile[WZ3]=jvj+198; 
(*f[58])( );     /*TRI3(jvj+196,jvj+197,103,jvj+198)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+80; pile[WZ4]=jvj+198; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+80,jvj+198,MMMX)*/
goto l115;
l55:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(102,MMMI,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(100,jvj+81,jvj+82)*/
if((x[jvj+82]!=41)) goto l82;
pile[v[22]]=jvj+81; pile[WZ1]=jvj+83; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+81,jvj+83)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+84; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+76,jvj+84)*/
x[MMMT]=16809 ;z[MMMT]=16809;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+199; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+199)*/
pile[WZ3]=87; pile[WZ4]=jvj+236; 
(*f[181])( );     /*QUADRI2(100,20,101,87,jvj+236)*/
pile[v[22]]=jvj+236; pile[WZ1]=111; pile[WZ2]=jvj+237; 
(*f[54])( );     /*TRI1(jvj+236,111,jvj+237)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+83; pile[WZ4]=jvj+237; pile[WZ5]=jvj+202; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+83,jvj+237,jvj+202)*/
pile[v[22]]=jvj+199; pile[WZ1]=111; pile[WZ2]=jvj+200; 
(*f[54])( );     /*TRI1(jvj+199,111,jvj+200)*/
pile[v[22]]=jvj+200; pile[WZ1]=jvj+84; pile[WZ2]=103; pile[WZ3]=jvj+201; 
(*f[58])( );     /*TRI3(jvj+200,jvj+84,103,jvj+201)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+202; pile[WZ4]=jvj+201; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+202,jvj+201,MMMX)*/
goto l115;
l56:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(102,MMMI,jvj+85)*/
pile[v[22]]=100; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(100,jvj+85,jvj+86)*/
if((x[jvj+86]!=484)) goto l58;
pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,MMMI,jvj+87)*/
pile[v[22]]=130; pile[WZ1]=jvj+87; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(130,jvj+87,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=jvj+85; pile[WZ1]=jvj+88; 
(*f[200])( );if(v[102]) goto l58;     /*NDD0(jvj+85,jvj+88)*/
pile[v[22]]=164; 
(*f[1975])( );if(v[102]) goto l57;     /*FNDCND0(164,jvj+88,V96)*/
V96=pile[WZ2]; 
if((V96>V97)) goto l57;
x[MMMT]=16692 ;z[MMMT]=16692;
goto l116;
l57:pile[v[22]]=280; pile[WZ1]=jvj+88; 
(*f[1975])( );if(v[102]) goto l58;     /*FNDCND0(280,jvj+88,V114)*/
V114=pile[WZ2]; 
if((V114<=V97)) goto l58;
x[MMMT]=16694 ;z[MMMT]=16694;
l117:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,20,101,134,MMMX)*/
goto l115;
l58:pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(103,MMMI,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(100,jvj+89,jvj+90)*/
if((x[jvj+90]!=484)) goto l82;
pile[v[22]]=130; pile[WZ1]=jvj+85; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(130,jvj+85,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=jvj+89; pile[WZ1]=jvj+91; 
(*f[200])( );if(v[102]) goto l82;     /*NDD0(jvj+89,jvj+91)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l59;     /*FNDCND0(280,jvj+91,V105)*/
V105=pile[WZ2]; 
if((V105<V106)) goto l59;
x[MMMT]=16693 ;z[MMMT]=16693;
goto l116;
l59:pile[v[22]]=164; pile[WZ1]=jvj+91; 
(*f[1975])( );if(v[102]) goto l82;     /*FNDCND0(164,jvj+91,V123)*/
V123=pile[WZ2]; 
if((V123>=V106)) goto l82;
x[MMMT]=16695 ;z[MMMT]=16695;
goto l117;
l60:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(102,MMMI,jvj+92)*/
pile[v[22]]=130; pile[WZ1]=jvj+92; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(130,jvj+92,V223)*/
V223=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(103,MMMI,jvj+93)*/
pile[v[22]]=130; pile[WZ1]=jvj+93; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(130,jvj+93,V224)*/
V224=pile[WZ2]; 
V222=V223%V224;
if((V222!=0)) goto l61;
pile[v[22]]=jvj+92; pile[WZ1]=jvj+94; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+92,jvj+94)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+95; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+93,jvj+95)*/
x[MMMT]=16789 ;z[MMMT]=16789;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=63; pile[WZ4]=jvj+203; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+203)*/
pile[v[22]]=jvj+203; pile[WZ1]=111; pile[WZ2]=jvj+204; 
(*f[54])( );     /*TRI1(jvj+203,111,jvj+204)*/
pile[v[22]]=jvj+204; pile[WZ1]=jvj+95; pile[WZ2]=103; pile[WZ3]=jvj+205; 
(*f[58])( );     /*TRI3(jvj+204,jvj+95,103,jvj+205)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+205; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+94,jvj+205,MMMX)*/
goto l115;
l61:pile[v[22]]=111; pile[WZ1]=jvj+93; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(111,jvj+93,jvj+96)*/
pile[v[22]]=101; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(101,jvj+96,jvj+97)*/
if((x[jvj+97]!=52)) goto l82;
pile[v[22]]=102; pile[WZ1]=jvj+93; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(102,jvj+93,jvj+98)*/
pile[v[22]]=130; pile[WZ1]=jvj+98; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(130,jvj+98,V46)*/
V46=pile[WZ2]; 
V44=V223%V46;
if((V44!=0)) goto l82;
pile[v[22]]=jvj+92; pile[WZ1]=jvj+99; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+92,jvj+99)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+100; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+98,jvj+100)*/
x[MMMT]=16791 ;z[MMMT]=16791;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+206; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+206)*/
pile[WZ3]=63; pile[WZ4]=jvj+238; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+238)*/
pile[v[22]]=jvj+238; pile[WZ1]=111; pile[WZ2]=jvj+239; 
(*f[54])( );     /*TRI1(jvj+238,111,jvj+239)*/
pile[v[22]]=jvj+239; pile[WZ1]=jvj+100; pile[WZ2]=103; pile[WZ3]=jvj+240; 
(*f[58])( );     /*TRI3(jvj+239,jvj+100,103,jvj+240)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+99; pile[WZ4]=jvj+240; pile[WZ5]=jvj+208; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+99,jvj+240,jvj+208)*/
pile[v[22]]=jvj+206; pile[WZ1]=111; pile[WZ2]=jvj+207; 
(*f[54])( );     /*TRI1(jvj+206,111,jvj+207)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+208; pile[WZ4]=jvj+207; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+208,jvj+207,MMMX)*/
goto l115;
l63:x[jvj+102]=s[x[jvj+101]] ;z[jvj+102]=(x[jvj+102]<=sepcte) ? x[jvj+102] : z[jvj+101];
pile[v[22]]=jvj+102; pile[WZ1]=MMMI; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(jvj+102,MMMI,jvj+103)*/
pile[v[22]]=100; pile[WZ1]=jvj+103; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(100,jvj+103,jvj+104)*/
if((x[jvj+104]!=484)) goto l65;
pile[v[22]]=268; pile[WZ1]=jvj+102; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(268,jvj+102,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=MMMI; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(jvj+105,MMMI,jvj+106)*/
pile[v[22]]=130; pile[WZ1]=jvj+106; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(130,jvj+106,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=jvj+103; pile[WZ1]=jvj+107; 
(*f[200])( );if(v[102]) goto l65;     /*NDD0(jvj+103,jvj+107)*/
pile[v[22]]=164; 
(*f[1975])( );if(v[102]) goto l65;     /*FNDCND0(164,jvj+107,V133)*/
V133=pile[WZ2]; 
if((V133>=V134)) goto l65;
x[MMMT]=16696 ;z[MMMT]=16696;
goto l117;
l64:x[jvj+101]=d[20];z[jvj+101]=0;
l62:if((x[jvj+101]>0)) goto l63;
x[jvj+108]=d[20];z[jvj+108]=0;
l66:if((x[jvj+108]>0)) goto l67;
x[jvj+115]=d[20];z[jvj+115]=0;
l69:if((x[jvj+115]<=0)) goto l82;
x[jvj+116]=s[x[jvj+115]] ;z[jvj+116]=(x[jvj+116]<=sepcte) ? x[jvj+116] : z[jvj+115];
pile[v[22]]=jvj+116; pile[WZ1]=MMMI; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(jvj+116,MMMI,jvj+117)*/
pile[v[22]]=111; pile[WZ1]=jvj+117; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(111,jvj+117,jvj+118)*/
pile[v[22]]=101; pile[WZ1]=jvj+118; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(101,jvj+118,jvj+119)*/
if((x[jvj+119]!=990)) goto l70;
pile[v[22]]=102; pile[WZ1]=jvj+117; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(102,jvj+117,jvj+120)*/
pile[v[22]]=jvj+120; pile[WZ1]=jvj+121; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+120,jvj+121)*/
pile[v[22]]=103; pile[WZ1]=jvj+117; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(103,jvj+117,jvj+122)*/
pile[v[22]]=jvj+122; pile[WZ1]=jvj+123; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+122,jvj+123)*/
pile[v[22]]=268; pile[WZ1]=jvj+116; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(268,jvj+116,jvj+124)*/
pile[v[22]]=jvj+124; pile[WZ1]=MMMI; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(jvj+124,MMMI,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=jvj+126; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+125,jvj+126)*/
x[MMMT]=16733 ;z[MMMT]=16733;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+209; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+209)*/
pile[WZ3]=486; pile[WZ4]=jvj+241; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+241)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+241; pile[WZ4]=jvj+211; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+241,jvj+211)*/
pile[v[22]]=jvj+211; pile[WZ1]=107; pile[WZ2]=jvj+123; 
(*f[36])( );     /*PLUSC0(jvj+211,107,jvj+123)*/
pile[WZ2]=jvj+126; 
(*f[36])( );     /*PLUSC0(jvj+211,107,jvj+126)*/
pile[v[22]]=jvj+209; pile[WZ1]=111; pile[WZ2]=jvj+210; 
(*f[54])( );     /*TRI1(jvj+209,111,jvj+210)*/
pile[v[22]]=jvj+210; pile[WZ1]=jvj+211; pile[WZ2]=103; pile[WZ3]=jvj+212; 
(*f[58])( );     /*TRI3(jvj+210,jvj+211,103,jvj+212)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+121; pile[WZ4]=jvj+212; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+121,jvj+212,MMMX)*/
goto l115;
l65:x[jvj+101]=t[x[jvj+101]];
goto l62;
l67:x[jvj+109]=s[x[jvj+108]] ;z[jvj+109]=(x[jvj+109]<=sepcte) ? x[jvj+109] : z[jvj+108];
pile[v[22]]=jvj+109; pile[WZ1]=MMMI; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(jvj+109,MMMI,jvj+110)*/
pile[v[22]]=100; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(100,jvj+110,jvj+111)*/
if((x[jvj+111]!=484)) goto l68;
pile[v[22]]=268; pile[WZ1]=jvj+109; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(268,jvj+109,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=MMMI; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(jvj+112,MMMI,jvj+113)*/
pile[v[22]]=130; pile[WZ1]=jvj+113; 
(*f[26])( );if(v[102]) goto l68;     /*FNDC0(130,jvj+113,V147)*/
V147=pile[WZ2]; 
pile[v[22]]=jvj+110; pile[WZ1]=jvj+114; 
(*f[200])( );if(v[102]) goto l68;     /*NDD0(jvj+110,jvj+114)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l68;     /*FNDCND0(280,jvj+114,V146)*/
V146=pile[WZ2]; 
if((V146<=V147)) goto l68;
x[MMMT]=16697 ;z[MMMT]=16697;
goto l117;
l68:x[jvj+108]=t[x[jvj+108]];
goto l66;
l70:x[jvj+115]=t[x[jvj+115]];
goto l69;
l72:x[jvj+128]=s[x[jvj+127]] ;z[jvj+128]=(x[jvj+128]<=sepcte) ? x[jvj+128] : z[jvj+127];
pile[v[22]]=jvj+128; pile[WZ1]=MMMI; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(jvj+128,MMMI,jvj+129)*/
pile[v[22]]=100; pile[WZ1]=jvj+129; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(100,jvj+129,jvj+130)*/
if((x[jvj+130]!=484)) goto l74;
pile[v[22]]=268; pile[WZ1]=jvj+128; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(268,jvj+128,jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ1]=MMMI; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(jvj+131,MMMI,jvj+132)*/
pile[v[22]]=130; pile[WZ1]=jvj+132; 
(*f[26])( );if(v[102]) goto l74;     /*FNDC0(130,jvj+132,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=jvj+129; pile[WZ1]=jvj+133; 
(*f[200])( );if(v[102]) goto l74;     /*NDD0(jvj+129,jvj+133)*/
pile[v[22]]=164; 
(*f[1975])( );if(v[102]) goto l74;     /*FNDCND0(164,jvj+133,V159)*/
V159=pile[WZ2]; 
if((V159>=V160)) goto l74;
x[MMMT]=16698 ;z[MMMT]=16698;
goto l116;
l73:x[jvj+127]=d[20];z[jvj+127]=0;
l71:if((x[jvj+127]>0)) goto l72;
x[jvj+134]=d[20];z[jvj+134]=0;
l75:if((x[jvj+134]<=0)) goto l82;
x[jvj+135]=s[x[jvj+134]] ;z[jvj+135]=(x[jvj+135]<=sepcte) ? x[jvj+135] : z[jvj+134];
pile[v[22]]=jvj+135; pile[WZ1]=MMMI; pile[WZ2]=jvj+136; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(jvj+135,MMMI,jvj+136)*/
pile[v[22]]=100; pile[WZ1]=jvj+136; pile[WZ2]=jvj+137; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(100,jvj+136,jvj+137)*/
if((x[jvj+137]!=484)) goto l76;
pile[v[22]]=268; pile[WZ1]=jvj+135; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(268,jvj+135,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=MMMI; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(jvj+138,MMMI,jvj+139)*/
pile[v[22]]=130; pile[WZ1]=jvj+139; 
(*f[26])( );if(v[102]) goto l76;     /*FNDC0(130,jvj+139,V173)*/
V173=pile[WZ2]; 
pile[v[22]]=jvj+136; pile[WZ1]=jvj+140; 
(*f[200])( );if(v[102]) goto l76;     /*NDD0(jvj+136,jvj+140)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l76;     /*FNDCND0(280,jvj+140,V172)*/
V172=pile[WZ2]; 
if((V172<=V173)) goto l76;
x[MMMT]=16699 ;z[MMMT]=16699;
goto l116;
l74:x[jvj+127]=t[x[jvj+127]];
goto l71;
l76:x[jvj+134]=t[x[jvj+134]];
goto l75;
l78:x[jvj+143]=s[x[jvj+142]] ;z[jvj+143]=(x[jvj+143]<=sepcte) ? x[jvj+143] : z[jvj+142];
pile[v[22]]=jvj+143; pile[WZ1]=MMMI; pile[WZ2]=jvj+144; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(jvj+143,MMMI,jvj+144)*/
pile[v[22]]=130; pile[WZ1]=jvj+144; 
(*f[26])( );if(v[102]) goto l79;     /*FNDC0(130,jvj+144,V184)*/
V184=pile[WZ2]; 
V183=V184%V185;
pile[v[22]]=268; pile[WZ1]=jvj+143; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(268,jvj+143,jvj+145)*/
pile[v[22]]=jvj+145; pile[WZ1]=MMMI; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(jvj+145,MMMI,jvj+146)*/
pile[v[22]]=130; pile[WZ1]=jvj+146; 
(*f[26])( );if(v[102]) goto l79;     /*FNDC0(130,jvj+146,V187)*/
V187=pile[WZ2]; 
V186=V187%V185;
if((V183==V186)) goto l79;
x[MMMT]=16512 ;z[MMMT]=16512;
goto l117;
l79:x[jvj+142]=t[x[jvj+142]];
goto l77;
l81:x[jvj+147]=t[x[jvj+147]];
goto l80;
l82:pile[v[22]]=100; pile[WZ1]=MMMI; pile[WZ2]=jvj+152; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(100,MMMI,jvj+152)*/
if((x[jvj+152]!=22)) goto l93;
pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+153; 
(*f[33])( );     /*FNDE0(1564,145,jvj+153)*/
for(a=x[jvj+153];a>0;a=t[a]) if(s[a]==x[jvj+64]) goto l83;
l85:pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+158; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+158)*/
for(i=x[jvj+158],V317=0;i>0;i=t[i],V317++)  ;
if((V317!=1)) goto l87;
pile[v[22]]=1675; pile[WZ1]=1714; pile[WZ2]=jvj+159; 
(*f[33])( );     /*FNDE0(1675,1714,jvj+159)*/
for(a=x[jvj+159];a>0;a=t[a]) if(s[a]==x[jvj+64]) goto l86;
l87:if((x[jvj+158]!=0)) goto l91;
pile[v[22]]=1808; pile[WZ1]=1714; pile[WZ2]=jvj+162; 
(*f[33])( );     /*FNDE0(1808,1714,jvj+162)*/
for(a=x[jvj+162];a>0;a=t[a]) if(s[a]==x[jvj+64]) goto l88;
l89:pile[v[22]]=1809; pile[WZ1]=1714; pile[WZ2]=jvj+163; 
(*f[33])( );     /*FNDE0(1809,1714,jvj+163)*/
for(a=x[jvj+163];a>0;a=t[a]) if(s[a]==x[jvj+64]) goto l90;
l91:for(i=x[jvj+158],V88=0;i>0;i=t[i],V88++)  ;
if((V88!=1)) goto l93;
pile[v[22]]=1675; pile[WZ1]=1714; pile[WZ2]=jvj+164; 
(*f[33])( );     /*FNDE0(1675,1714,jvj+164)*/
for(a=x[jvj+164];a>0;a=t[a]) if(s[a]==x[jvj+64]) goto l92;
l93:if((x[jvj+64]==1215)) goto l94;
if((x[jvj+64]==55)) goto l100;
if((x[jvj+64]==48)) goto l103;
if((x[jvj+64]==486)) goto l106;
if((x[jvj+64]!=485)) goto l114;
pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+185; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+185)*/
x[jvj+253]=x[jvj+185] ;z[jvj+253]=z[jvj+185];
l112:if((x[jvj+253]<=0)) goto l114;
x[jvj+186]=s[x[jvj+253]] ;z[jvj+186]=(x[jvj+186]<=sepcte) ? x[jvj+186] : z[jvj+253];
pile[v[22]]=130; pile[WZ1]=jvj+186; 
(*f[26])( );if(v[102]) goto l113;     /*FNDC0(130,jvj+186,V374)*/
V374=pile[WZ2]; 
if((V374!=0)) goto l113;
x[jvj+28]=0 ;z[jvj+28]=0;
goto l20;
l83:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+154; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(102,MMMI,jvj+154)*/
pile[v[22]]=1922; pile[WZ1]=jvj+64; pile[WZ2]=jvj+155; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(1922,jvj+64,jvj+155)*/
pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+156; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(103,MMMI,jvj+156)*/
pile[v[22]]=jvj+154; pile[WZ1]=jvj+156; pile[WZ2]=jvj+157; 
(*f[760])( );     /*MEMEX0(jvj+154,jvj+156,jvj+157)*/
if((x[jvj+157]==135)) goto l84;
goto l85;
l84:x[MMMT]=16739 ;z[MMMT]=16739;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+155; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+155,MMMX)*/
goto l115;
l86:if((x[jvj+158]<=0)) goto l87;
x[jvj+160]=s[x[jvj+158]] ;z[jvj+160]=(x[jvj+160]<=sepcte) ? x[jvj+160] : z[jvj+158];
pile[v[22]]=jvj+160; pile[WZ1]=jvj+161; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+160,jvj+161)*/
x[MMMT]=16643 ;z[MMMT]=16643;
x[MMMX]=x[jvj+161] ;z[MMMX]=z[jvj+161];
goto l115;
l88:pile[v[22]]=80; pile[WZ1]=jvj+64; pile[WZ2]=MMMX; 
(*f[32])( );if(v[102]) goto l89;     /*FNDO0(80,jvj+64,MMMX)*/
x[MMMT]=16676 ;z[MMMT]=16676;
goto l115;
l90:pile[v[22]]=1668; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l91;     /*FNDC0(1668,jvj+64,V247)*/
V247=pile[WZ2]; 
x[MMMT]=16677 ;z[MMMT]=16677;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V247; pile[WZ4]=MMMX; 
(*f[192])( );     /*QUADRI4(100,41,130,V247,MMMX)*/
goto l115;
l92:if((x[jvj+158]<=0)) goto l93;
x[jvj+165]=s[x[jvj+158]] ;z[jvj+165]=(x[jvj+165]<=sepcte) ? x[jvj+165] : z[jvj+158];
pile[v[22]]=jvj+165; pile[WZ1]=jvj+166; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+165,jvj+166)*/
x[MMMT]=16720 ;z[MMMT]=16720;
x[MMMX]=x[jvj+166] ;z[MMMX]=z[jvj+166];
goto l115;
l94:pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+167; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+167)*/
x[jvj+247]=x[jvj+167] ;z[jvj+247]=z[jvj+167];
l95:if((x[jvj+247]>0)) goto l96;
x[jvj+248]=x[jvj+167] ;z[jvj+248]=z[jvj+167];
l98:if((x[jvj+248]<=0)) goto l114;
x[jvj+170]=s[x[jvj+248]] ;z[jvj+170]=(x[jvj+170]<=sepcte) ? x[jvj+170] : z[jvj+248];
pile[v[22]]=101; pile[WZ1]=jvj+170; pile[WZ2]=jvj+171; 
(*f[32])( );if(v[102]) goto l99;     /*FNDO0(101,jvj+170,jvj+171)*/
if((x[jvj+171]!=134)) goto l99;
x[jvj+49]=0 ;z[jvj+49]=0;
goto l38;
l96:x[jvj+168]=s[x[jvj+247]] ;z[jvj+168]=(x[jvj+168]<=sepcte) ? x[jvj+168] : z[jvj+247];
pile[v[22]]=101; pile[WZ1]=jvj+168; pile[WZ2]=jvj+169; 
(*f[32])( );if(v[102]) goto l97;     /*FNDO0(101,jvj+168,jvj+169)*/
if((x[jvj+169]!=135)) goto l97;
x[jvj+14]=0 ;z[jvj+14]=0;
goto l8;
l97:x[jvj+247]=t[x[jvj+247]];
goto l95;
l99:x[jvj+248]=t[x[jvj+248]];
goto l98;
l100:pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+172; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+172)*/
x[jvj+249]=x[jvj+172] ;z[jvj+249]=z[jvj+172];
l101:if((x[jvj+249]<=0)) goto l114;
x[jvj+173]=s[x[jvj+249]] ;z[jvj+173]=(x[jvj+173]<=sepcte) ? x[jvj+173] : z[jvj+249];
pile[v[22]]=101; pile[WZ1]=jvj+173; pile[WZ2]=jvj+174; 
(*f[32])( );if(v[102]) goto l102;     /*FNDO0(101,jvj+173,jvj+174)*/
if((x[jvj+174]!=134)) goto l102;
x[jvj+35]=0 ;z[jvj+35]=0;
goto l26;
l102:x[jvj+249]=t[x[jvj+249]];
goto l101;
l103:pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+175; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+175)*/
x[jvj+250]=x[jvj+175] ;z[jvj+250]=z[jvj+175];
l104:if((x[jvj+250]<=0)) goto l114;
x[jvj+176]=s[x[jvj+250]] ;z[jvj+176]=(x[jvj+176]<=sepcte) ? x[jvj+176] : z[jvj+250];
pile[v[22]]=101; pile[WZ1]=jvj+176; pile[WZ2]=jvj+177; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(101,jvj+176,jvj+177)*/
if((x[jvj+177]!=135)) goto l105;
x[jvj+42]=0 ;z[jvj+42]=0;
goto l32;
l105:x[jvj+250]=t[x[jvj+250]];
goto l104;
l106:pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+178; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+178)*/
x[jvj+251]=x[jvj+178] ;z[jvj+251]=z[jvj+178];
l107:if((x[jvj+251]>0)) goto l108;
x[jvj+252]=x[jvj+178] ;z[jvj+252]=z[jvj+178];
l110:if((x[jvj+252]<=0)) goto l114;
x[jvj+180]=s[x[jvj+252]] ;z[jvj+180]=(x[jvj+180]<=sepcte) ? x[jvj+180] : z[jvj+252];
pile[v[22]]=111; pile[WZ1]=jvj+180; pile[WZ2]=jvj+181; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(111,jvj+180,jvj+181)*/
pile[v[22]]=101; pile[WZ1]=jvj+181; pile[WZ2]=jvj+182; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(101,jvj+181,jvj+182)*/
if((x[jvj+182]!=52)) goto l111;
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+246]=x[jvj+178] ;z[jvj+246]=z[jvj+178];
goto l1;
l108:x[jvj+179]=s[x[jvj+251]] ;z[jvj+179]=(x[jvj+179]<=sepcte) ? x[jvj+179] : z[jvj+251];
pile[v[22]]=130; pile[WZ1]=jvj+179; 
(*f[26])( );if(v[102]) goto l109;     /*FNDC0(130,jvj+179,V352)*/
V352=pile[WZ2]; 
if((V352!=1)) goto l109;
x[jvj+21]=0 ;z[jvj+21]=0;
goto l14;
l109:x[jvj+251]=t[x[jvj+251]];
goto l107;
l111:x[jvj+252]=t[x[jvj+252]];
goto l110;
l113:x[jvj+253]=t[x[jvj+253]];
goto l112;
l114:x[MMMT]=x[MMMX]=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
}
