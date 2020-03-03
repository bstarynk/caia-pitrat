#include "dx.h"
void Z282Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V31=0,V32=0,V3=0,V7=0,V33=0,V82=0,V85=0,V77=0,JJ=0,V87=0,V134=0,V135=0,V136=0,V137=0,V125=0,V114=0,GG=0,V113=0,G=0,V138=0,V112=0,HH=0,V111=0,H=0,V133=0,V105=0,V47=0,V36=0,V34=0,V52=0,V59=0,V35=0,V41=0,V25=0,I=0,V9=0,V17=0,K=0,L=0,V8=0,V101=0,V117=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=64;
x[jvj+1]=15783;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1895&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,NNNY,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=1280)) goto l41;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,NNNY,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]==485)) goto l26;
if((x[jvj+15]!=486)) goto l37;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(103,NNNY,jvj+26)*/
pile[v[22]]=130; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(130,jvj+26,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=NNNY; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(160,NNNY,jvj+27)*/
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(130,jvj+27,I)*/
I=pile[WZ2]; 
V9=abs(I);
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+28)*/
x[jvj+62]=x[jvj+28] ;z[jvj+62]=z[jvj+28];
l33:if((x[jvj+62]<=0)) goto l37;
x[jvj+29]=s[x[jvj+62]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+62];
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(130,jvj+29,V17)*/
V17=pile[WZ2]; 
K=V17;
pile[v[22]]=K; pile[WZ1]=jvj+30; 
(*f[1007])( );if(v[102]) goto l34;     /*DECFACTPREM0(K,jvj+30)*/
V3=incon;
x[jvj+58]=x[jvj+30] ;z[jvj+58]=z[jvj+30];
l1:if((x[jvj+58]<=0)) goto l3;
x[jvj+2]=s[x[jvj+58]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+58];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+2,V31)*/
V31=pile[WZ2]; 
if((V31!=V25)) goto l2;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(515,jvj+2,V32)*/
V32=pile[WZ2]; 
V3=V32;
l35:L=V3;
V8=V9-L;
x[jvj+63]=x[jvj+28] ;z[jvj+63]=z[jvj+28];
l45:if((x[jvj+63]>0)) goto l46;
l34:x[jvj+62]=t[x[jvj+62]];
goto l33;
l2:x[jvj+58]=t[x[jvj+58]];
goto l1;
l3:V3=0;
goto l35;
l4:V7=incon;
if((I>=0)) goto l5;
if((V8<=0)) goto l6;
V33=(-V8);
V7=V33;
l7:if((V7==(-99999998))) goto l34;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1280; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,1280,jvj+42)*/
pile[WZ3]=486; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+32; pile[WZ2]=107; pile[WZ3]=jvj+53; 
(*f[301])( );     /*TRI11(jvj+52,jvj+32,107,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+53,22,100,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V25; pile[WZ4]=jvj+44; 
(*f[192])( );     /*QUADRI4(100,41,130,V25,jvj+44)*/
pile[WZ3]=V7; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=160; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,160,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=111; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+41,jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; pile[WZ2]=103; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+43,jvj+44,103,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+45; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+46,jvj+45,jvj+33)*/
l36:NNNT=196;
pile[v[22]]=NNNY; pile[WZ1]=jvj+33; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+33,NNNX)*/
l42:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l5:if((V8<0)) goto l6;
V7=V8;
goto l7;
l6:V7=(-99999998);
goto l34;
l8:if((V101==0)) goto l9;
pile[v[22]]=1287; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1287,jvj+3,jvj+4)*/
if((x[jvj+4]==0)) goto l9;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==V125) goto l9;
l39:NNNT=218;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+39)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+39; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+39,NNNX)*/
goto l42;
l9:pile[v[22]]=1310; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1310,jvj+3,jvj+5)*/
l10:if((x[jvj+5]<=0)) goto l41;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+6,V82)*/
V82=pile[WZ2]; 
if((V82!=V125)) goto l11;
pile[v[22]]=195; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(195,jvj+6,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==V101) goto l41;
if((V101<0)) goto l12;
if((V101>0)) goto l13;
goto l39;
l11:x[jvj+5]=t[x[jvj+5]];
goto l10;
l15:V134=V105%V125;
if((V134!=0)) goto l25;
l24:x[jvj+8]=t[x[jvj+8]];
l22:if((x[jvj+8]>0)) goto l23;
for(i=x[jvj+10],V117=0;i>0;i=t[i],V117++)  ;
x[jvj+38]=incon;
if((V117==0)) goto l44;
if((V117!=1)) goto l8;
if((x[jvj+10]<=0)) goto l8;
G=s[x[jvj+10]];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+47)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=G; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,G,jvj+49)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; pile[WZ2]=103; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+48,jvj+49,103,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+50; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+50,jvj+38)*/
l38:if((x[jvj+38]==(-99999998))) goto l8;
NNNT=233;
pile[v[22]]=NNNY; pile[WZ1]=jvj+38; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+38,NNNX)*/
goto l42;
l16:V136=V105%G;
if((V136!=0)) goto l19;
goto l24;
l17:V113=(-1);
l18:G=V113;
if((G>0)) goto l16;
if((G<0)) goto l19;
goto l24;
l19:V111=incon;
V138=abs(V101);
pile[v[22]]=V138; pile[WZ1]=V125; 
(*f[1006])( );if(v[102]) goto l20;     /*POWER0(V138,V125,V112)*/
V112=pile[WZ2]; 
HH=V112;
V111=HH;
l21:H=V111;
if((H<0)) goto l25;
V135=V105%H;
if((V135!=0)) goto l24;
if((H>0)) goto l25;
goto l24;
l20:V111=(-1);
goto l21;
l23:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+9,V133)*/
V133=pile[WZ2]; 
V105=V133;
if((V101==0)) goto l15;
if((V101==0)) goto l24;
if((V101<0)) goto l19;
if((V105==0)) goto l19;
if((V101<=0)) goto l24;
V113=incon;
V137=V101+1;
pile[v[22]]=V137; pile[WZ1]=V125; 
(*f[1006])( );if(v[102]) goto l17;     /*POWER0(V137,V125,V114)*/
V114=pile[WZ2]; 
GG=V114;
V113=GG;
goto l18;
l25:pile[v[22]]=jvj+10; pile[WZ1]=V105; 
(*f[207])( );     /*PLUE2(jvj+10,V105)*/
goto l24;
l26:pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+16)*/
for(i=x[jvj+16],V47=0;i>0;i=t[i],V47++)  ;
if((V47!=2)) goto l37;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(103,NNNY,jvj+17)*/
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(130,jvj+17,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=NNNY; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(160,NNNY,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(130,jvj+18,V34)*/
V34=pile[WZ2]; 
if((V34==0)) goto l37;
if((V34==999)) goto l37;
x[jvj+59]=x[jvj+16] ;z[jvj+59]=z[jvj+16];
l27:if((x[jvj+59]<=0)) goto l37;
x[jvj+19]=s[x[jvj+59]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+59];
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=486)) goto l28;
pile[v[22]]=107; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+19,jvj+22)*/
x[jvj+60]=x[jvj+22] ;z[jvj+60]=z[jvj+22];
l29:if((x[jvj+60]<=0)) goto l28;
x[jvj+23]=s[x[jvj+60]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+60];
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(130,jvj+23,V52)*/
V52=pile[WZ2]; 
if((V36!=V52)) goto l30;
x[jvj+61]=x[jvj+16] ;z[jvj+61]=z[jvj+16];
l31:if((x[jvj+61]<=0)) goto l30;
x[jvj+24]=s[x[jvj+61]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+61];
if((x[jvj+19]==x[jvj+24])) goto l32;
pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(130,jvj+24,V59)*/
V59=pile[WZ2]; 
V35=V59;
V41=abs(V35);
if((V41>=V36)) goto l32;
if((V35==0)) goto l32;
NNNT=217;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+25)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+25; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+25,NNNX)*/
goto l42;
l28:x[jvj+59]=t[x[jvj+59]];
goto l27;
l30:x[jvj+60]=t[x[jvj+60]];
goto l29;
l32:x[jvj+61]=t[x[jvj+61]];
goto l31;
l37:pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+13,jvj+34)*/
if((x[jvj+34]!=484)) goto l41;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,NNNY,jvj+35)*/
pile[v[22]]=130; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(130,jvj+35,V125)*/
V125=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=NNNY; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(160,NNNY,jvj+36)*/
pile[v[22]]=130; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(130,jvj+36,V101)*/
V101=pile[WZ2]; 
if((V101==999)) goto l41;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+3; 
(*f[200])( );if(v[102]) goto l41;     /*NDD0(jvj+13,jvj+3)*/
pile[v[22]]=202; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(202,jvj+3,jvj+37)*/
if((x[jvj+37]!=68)) goto l8;
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=365; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(365,jvj+3,jvj+8)*/
goto l22;
l41:x[NNNX]=NNNT=incon;
l40:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l43:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+33)*/
goto l36;
l44:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+38)*/
goto l38;
l46:x[jvj+54]=s[x[jvj+63]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+63];
pile[v[22]]=jvj+54; pile[WZ1]=jvj+29; pile[WZ2]=jvj+55; 
(*f[760])( );     /*MEMEX0(jvj+54,jvj+29,jvj+55)*/
if((x[jvj+55]==135)) goto l47;
x[jvj+63]=t[x[jvj+63]];
goto l45;
l47:x[jvj+56]=0 ;z[jvj+56]=0;
x[jvj+64]=x[jvj+28] ;z[jvj+64]=z[jvj+28];
l48:if((x[jvj+64]>0)) goto l49;
x[jvj+31]=x[jvj+56] ;z[jvj+31]=z[jvj+56];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[299])( );     /*COPEL0(jvj+31,jvj+32)*/
x[jvj+33]=incon;
if((V8<0)) goto l43;
if((V8!=0)) goto l4;
if((I>=0)) goto l4;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+33)*/
goto l36;
l49:x[jvj+57]=s[x[jvj+64]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+64];
if((x[jvj+57]==x[jvj+54])) goto l50;
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[68])( );     /*PLUE0(jvj+56,jvj+57)*/
l50:x[jvj+64]=t[x[jvj+64]];
goto l48;
l12:if((x[jvj+7]<=0)) goto l39;
V77=s[x[jvj+7]];
if((V77<0)) goto l41;
V85=abs(V101);
if((V77>=V85)) goto l41;
x[jvj+7]=t[x[jvj+7]];
goto l12;
l13:if((x[jvj+7]<=0)) goto l39;
JJ=s[x[jvj+7]];
if((JJ>=0)) goto l14;
V87=abs(JJ);
if((V87<=V101)) goto l41;
l14:x[jvj+7]=t[x[jvj+7]];
goto l13;
}
