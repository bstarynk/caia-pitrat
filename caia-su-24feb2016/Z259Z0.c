#include "dx.h"
void Z259Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V100=0,I=0,V223=0,V222=0,V224=0,V195=0,V193=0,V227=0,V226=0,V228=0,V196=0,V135=0,V18=0,V12=0,K=0,L=0,V29=0,V30=0,V53=0,V47=0,V31=0,V39=0,V230=0,V201=0,V211=0,V241=0,V231=0,V120=0,V104=0,V111=0,V112=0,V87=0,V85=0,PP=0,V86=0,V157=0,V137=0,V169=0,V138=0,V181=0,V236=0,V353=0,V354=0,V75=0,V355=0,V356=0,V357=0,V77=0,V358=0,V359=0,V360=0,V361=0,V76=0,V78=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=188;
x[jvj+1]=15760;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1891&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(111,NNNY,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=625)) goto l55;
pile[v[22]]=160; pile[WZ1]=NNNY; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(160,NNNY,jvj+19)*/
pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(130,jvj+19,V135)*/
V135=pile[WZ2]; 
if((V135==1)) goto l15;
x[jvj+21]=d[20];z[jvj+21]=0;
l16:if((x[jvj+21]>0)) goto l17;
x[jvj+33]=d[20];z[jvj+33]=0;
l21:if((x[jvj+33]>0)) goto l22;
pile[v[22]]=V135; pile[WZ1]=jvj+45; 
(*f[1007])( );if(v[102]) goto l35;     /*DECFACTPREM0(V135,jvj+45)*/
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(1,117,jvj+16)*/
x[jvj+173]=x[jvj+45] ;z[jvj+173]=z[jvj+45];
l12:if((x[jvj+173]>0)) goto l13;
pile[v[22]]=117; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(117,jvj+16,V196)*/
V196=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(1,117,jvj+14)*/
l9:if((x[jvj+45]>0)) goto l10;
pile[v[22]]=117; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(117,jvj+14,V193)*/
V193=pile[WZ2]; 
V230=V193*V196;
x[jvj+46]=d[20];z[jvj+46]=0;
l26:if((x[jvj+46]<=0)) goto l35;
x[jvj+47]=s[x[jvj+46]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+46];
pile[v[22]]=jvj+47; pile[WZ1]=NNNY; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(jvj+47,NNNY,jvj+48)*/
pile[v[22]]=111; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+48,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]!=486)) goto l27;
pile[v[22]]=107; pile[WZ1]=jvj+48; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(107,jvj+48,jvj+51)*/
for(i=x[jvj+51],V201=0;i>0;i=t[i],V201++)  ;
if((V201!=2)) goto l27;
pile[v[22]]=268; pile[WZ1]=jvj+47; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(268,jvj+47,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=NNNY; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(jvj+52,NNNY,jvj+53)*/
pile[v[22]]=130; pile[WZ1]=jvj+53; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+53,V211)*/
V211=pile[WZ2]; 
if((V211!=0)) goto l27;
x[jvj+188]=x[jvj+51] ;z[jvj+188]=z[jvj+51];
l28:if((x[jvj+188]<=0)) goto l27;
x[jvj+176]=s[x[jvj+188]] ;z[jvj+176]=(x[jvj+176]<=sepcte) ? x[jvj+176] : z[jvj+188];
x[jvj+54]=x[jvj+176] ;z[jvj+54]=z[jvj+176];
x[jvj+139]=x[jvj+54] ;z[jvj+139]=z[jvj+54];
x[jvj+177]=x[jvj+51] ;z[jvj+177]=z[jvj+51];
l29:if((x[jvj+177]>0)) goto l30;
x[jvj+188]=t[x[jvj+188]];
goto l28;
l4:x[jvj+8]=0 ;z[jvj+8]=0;
l5:if((x[jvj+5]>0)) goto l6;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+105; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=111; pile[WZ2]=jvj+106; 
(*f[54])( );     /*TRI1(jvj+105,111,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=jvj+8; pile[WZ2]=107; pile[WZ3]=jvj+107; 
(*f[301])( );     /*TRI11(jvj+106,jvj+8,107,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+86; 
(*f[58])( );     /*TRI3(jvj+107,22,100,jvj+86)*/
l46:if((x[jvj+86]==(-99999998))) goto l45;
NNNT=176;
pile[v[22]]=NNNY; pile[WZ1]=jvj+86; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+86,NNNX)*/
l56:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l6:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+7)*/
x[jvj+5]=t[x[jvj+5]];
goto l5;
l7:x[jvj+86]=x[jvj+9] ;z[jvj+86]=z[jvj+9];
goto l46;
l10:x[jvj+13]=s[x[jvj+45]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+45];
pile[v[22]]=515; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(515,jvj+13,V223)*/
V223=pile[WZ2]; 
V222=V223/2;
if((V222<=0)) goto l11;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(510,jvj+13,V224)*/
V224=pile[WZ2]; 
pile[v[22]]=V222; pile[WZ1]=V224; 
(*f[1006])( );if(v[102]) goto l11;     /*POWER0(V222,V224,V195)*/
V195=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=117; pile[WZ2]=V195; 
(*f[818])( );     /*MTC0(jvj+14,117,V195)*/
l11:x[jvj+45]=t[x[jvj+45]];
goto l9;
l13:x[jvj+15]=s[x[jvj+173]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+173];
pile[v[22]]=515; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(515,jvj+15,V227)*/
V227=pile[WZ2]; 
V226=V227%2;
if((V226<=0)) goto l14;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(510,jvj+15,V228)*/
V228=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=117; pile[WZ2]=V228; 
(*f[818])( );     /*MTC0(jvj+16,117,V228)*/
l14:x[jvj+173]=t[x[jvj+173]];
goto l12;
l15:NNNT=179;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+20)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+20; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+20,NNNX)*/
goto l56;
l17:x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=jvj+22; pile[WZ1]=NNNY; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+22,NNNY,jvj+23)*/
pile[v[22]]=111; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+23,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=486)) goto l18;
pile[v[22]]=107; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+23,jvj+26)*/
pile[v[22]]=268; pile[WZ1]=jvj+22; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(268,jvj+22,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=NNNY; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+27,NNNY,jvj+28)*/
pile[v[22]]=130; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+28,V18)*/
V18=pile[WZ2]; 
if((V18!=0)) goto l18;
x[jvj+174]=x[jvj+26] ;z[jvj+174]=z[jvj+26];
l19:if((x[jvj+174]<=0)) goto l18;
x[jvj+29]=s[x[jvj+174]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+174];
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+29,V12)*/
V12=pile[WZ2]; 
K=V12;
pile[v[22]]=V135; pile[WZ1]=K; 
(*f[1011])( );     /*PGCD0(V135,K,L)*/
L=pile[WZ2]; 
if((L<=1)) goto l20;
x[jvj+180]=x[jvj+26] ;z[jvj+180]=z[jvj+26];
l57:if((x[jvj+180]>0)) goto l58;
l20:x[jvj+174]=t[x[jvj+174]];
goto l19;
l18:x[jvj+21]=t[x[jvj+21]];
goto l16;
l22:x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=jvj+34; pile[WZ1]=NNNY; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(jvj+34,NNNY,jvj+35)*/
pile[v[22]]=111; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+35,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+37]!=486)) goto l23;
pile[v[22]]=107; pile[WZ1]=jvj+35; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(107,jvj+35,jvj+38)*/
pile[v[22]]=268; pile[WZ1]=jvj+34; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(268,jvj+34,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=NNNY; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(jvj+39,NNNY,jvj+40)*/
pile[v[22]]=130; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+40,V53)*/
V53=pile[WZ2]; 
if((V53!=0)) goto l23;
x[jvj+175]=x[jvj+38] ;z[jvj+175]=z[jvj+38];
l24:if((x[jvj+175]<=0)) goto l23;
x[jvj+41]=s[x[jvj+175]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+175];
pile[v[22]]=130; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+41,V47)*/
V47=pile[WZ2]; 
V31=V47;
pile[v[22]]=V135; pile[WZ1]=V31; 
(*f[1011])( );     /*PGCD0(V135,V31,V39)*/
V39=pile[WZ2]; 
if((V39!=1)) goto l25;
x[jvj+182]=x[jvj+38] ;z[jvj+182]=z[jvj+38];
l63:if((x[jvj+182]>0)) goto l64;
l25:x[jvj+175]=t[x[jvj+175]];
goto l24;
l23:x[jvj+33]=t[x[jvj+33]];
goto l21;
l27:x[jvj+46]=t[x[jvj+46]];
goto l26;
l30:x[jvj+55]=s[x[jvj+177]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+177];
if((x[jvj+176]==x[jvj+55])) goto l31;
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[760])( );     /*MEMEX0(jvj+54,jvj+55,jvj+56)*/
if((x[jvj+56]==135)) goto l32;
l31:x[jvj+177]=t[x[jvj+177]];
goto l29;
l32:NNNT=197;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+135; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+135)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+137; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+137)*/
pile[WZ3]=V230; pile[WZ4]=jvj+133; 
(*f[192])( );     /*QUADRI4(100,41,130,V230,jvj+133)*/
pile[v[22]]=jvj+133; pile[WZ1]=160; pile[WZ2]=jvj+134; 
(*f[54])( );     /*TRI1(jvj+133,160,jvj+134)*/
pile[v[22]]=jvj+134; pile[WZ1]=jvj+135; pile[WZ2]=111; pile[WZ3]=jvj+136; 
(*f[58])( );     /*TRI3(jvj+134,jvj+135,111,jvj+136)*/
pile[v[22]]=jvj+136; pile[WZ1]=jvj+137; pile[WZ2]=103; pile[WZ3]=jvj+138; 
(*f[58])( );     /*TRI3(jvj+136,jvj+137,103,jvj+138)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+139; pile[WZ4]=jvj+138; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+139,jvj+138,jvj+57)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+57; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+57,NNNX)*/
goto l56;
l34:x[jvj+59]=s[x[jvj+58]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+58];
pile[v[22]]=268; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(268,jvj+59,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=NNNY; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(jvj+60,NNNY,jvj+61)*/
pile[v[22]]=130; pile[WZ1]=jvj+61; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(130,jvj+61,V241)*/
V241=pile[WZ2]; 
V231=V241;
if((V231<0)) goto l85;
if((V231>=V135)) goto l85;
l36:x[jvj+58]=t[x[jvj+58]];
l33:if((x[jvj+58]>0)) goto l34;
x[jvj+63]=vo[39];z[jvj+63]=vz[39];
if((x[jvj+63]==300)) goto l41;
x[jvj+64]=d[20];z[jvj+64]=0;
l38:if((x[jvj+64]<=0)) goto l41;
x[jvj+65]=s[x[jvj+64]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+64];
pile[v[22]]=jvj+65; pile[WZ1]=NNNY; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(jvj+65,NNNY,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(100,jvj+66,jvj+67)*/
if((x[jvj+67]!=484)) goto l39;
pile[v[22]]=268; pile[WZ1]=jvj+65; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(268,jvj+65,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=NNNY; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(jvj+68,NNNY,jvj+69)*/
pile[v[22]]=130; pile[WZ1]=jvj+69; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(130,jvj+69,V120)*/
V120=pile[WZ2]; 
pile[v[22]]=jvj+66; pile[WZ1]=jvj+70; 
(*f[200])( );if(v[102]) goto l39;     /*NDD0(jvj+66,jvj+70)*/
pile[v[22]]=1474; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(1474,jvj+70,jvj+71)*/
V104=V120;
x[jvj+72]=x[jvj+71] ;z[jvj+72]=z[jvj+71];
pile[v[22]]=510; pile[WZ1]=jvj+72; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(510,jvj+72,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(117,jvj+72,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=V104; pile[WZ1]=V135; pile[WZ2]=V111; pile[WZ3]=V112; pile[WZ4]=jvj+66; pile[WZ5]=jvj+11; 
(*f[1362])( );if(v[102]) goto l39;     /*FUSEQM0(V104,V135,V111,V112,jvj+66,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]==1203)) goto l39;
l40:NNNT=178;
pile[v[22]]=NNNY; pile[WZ1]=jvj+11; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+11,NNNX)*/
goto l56;
l35:x[jvj+58]=d[20];z[jvj+58]=0;
goto l33;
l39:x[jvj+64]=t[x[jvj+64]];
goto l38;
l41:x[jvj+73]=vo[16];z[jvj+73]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+73; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(905,jvj+73,V87)*/
V87=pile[WZ2]; 
if((V87!=(-9009))) goto l48;
pile[v[22]]=NNNY; pile[WZ1]=jvj+74; 
(*f[887])( );     /*VARND0(NNNY,jvj+74)*/
for(i=x[jvj+74],V85=0;i>0;i=t[i],V85++)  ;
if((V85!=1)) goto l48;
pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(NNNY,jvj+2)*/
if((x[jvj+2]<=0)) goto l48;
x[jvj+75]=s[x[jvj+2]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+2];
pile[v[22]]=jvj+75; pile[WZ1]=jvj+76; 
(*f[1290])( );if(v[102]) goto l48;     /*DEPEXP0(jvj+75,jvj+76)*/
pile[v[22]]=596; pile[WZ1]=NNNY; pile[WZ2]=jvj+77; 
(*f[492])( );     /*FIGURE0(596,NNNY,jvj+77)*/
if((x[jvj+77]==134)) goto l42;
l48:x[jvj+87]=d[20];z[jvj+87]=0;
l47:if((x[jvj+87]<=0)) goto l55;
x[jvj+88]=s[x[jvj+87]] ;z[jvj+88]=(x[jvj+88]<=sepcte) ? x[jvj+88] : z[jvj+87];
pile[v[22]]=jvj+88; pile[WZ1]=NNNY; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(jvj+88,NNNY,jvj+89)*/
pile[v[22]]=111; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+89,jvj+90)*/
pile[v[22]]=101; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+90,jvj+91)*/
if((x[jvj+91]!=485)) goto l49;
pile[v[22]]=268; pile[WZ1]=jvj+88; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(268,jvj+88,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=NNNY; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(jvj+92,NNNY,jvj+93)*/
pile[v[22]]=111; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+93,jvj+94)*/
pile[v[22]]=101; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+94,jvj+95)*/
if((x[jvj+95]!=485)) goto l49;
pile[v[22]]=107; pile[WZ1]=jvj+89; pile[WZ2]=jvj+96; 
(*f[33])( );     /*FNDE0(107,jvj+89,jvj+96)*/
pile[WZ1]=jvj+93; pile[WZ2]=jvj+97; 
(*f[33])( );     /*FNDE0(107,jvj+93,jvj+97)*/
x[jvj+178]=x[jvj+96] ;z[jvj+178]=z[jvj+96];
l50:if((x[jvj+178]<=0)) goto l49;
x[jvj+98]=s[x[jvj+178]] ;z[jvj+98]=(x[jvj+98]<=sepcte) ? x[jvj+98] : z[jvj+178];
pile[v[22]]=130; pile[WZ1]=jvj+98; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(130,jvj+98,V157)*/
V157=pile[WZ2]; 
V137=V157;
if((V137==0)) goto l51;
x[jvj+184]=x[jvj+96] ;z[jvj+184]=z[jvj+96];
l69:if((x[jvj+184]>0)) goto l70;
l51:x[jvj+178]=t[x[jvj+178]];
goto l50;
l42:pile[v[22]]=1356; pile[WZ1]=NNNY; pile[WZ2]=jvj+78; 
(*f[492])( );     /*FIGURE0(1356,NNNY,jvj+78)*/
if((x[jvj+78]==134)) goto l44;
goto l48;
l44:x[jvj+79]=d[20];z[jvj+79]=0;
l43:if((x[jvj+79]<=0)) goto l48;
x[jvj+80]=s[x[jvj+79]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+79];
pile[v[22]]=jvj+80; pile[WZ1]=NNNY; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(jvj+80,NNNY,jvj+81)*/
pile[v[22]]=268; pile[WZ1]=jvj+80; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(268,jvj+80,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=NNNY; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(jvj+82,NNNY,jvj+83)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+83; pile[WZ2]=V135; pile[WZ3]=jvj+84; pile[WZ4]=jvj+85; 
(*f[2032])( );if(v[102]) goto l45;     /*DIVEQM0(jvj+81,jvj+83,V135,jvj+84,jvj+85,PP)*/
PP=pile[WZ5]; 
if((PP>30)) goto l45;
x[jvj+5]=0 ;z[jvj+5]=0;
V100=PP-1;
x[jvj+3]=d[119];z[jvj+3]=0;
I=0;
l1:if((I<=V100)) goto l87;
for(i=x[jvj+5],V86=0;i>0;i=t[i],V86++)  ;
x[jvj+86]=incon;
if((V86!=1)) goto l4;
if((x[jvj+5]<=0)) goto l8;
x[jvj+9]=s[x[jvj+5]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+5];
pile[v[22]]=NNNY; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[760])( );     /*MEMEX0(NNNY,jvj+9,jvj+10)*/
if((x[jvj+10]==134)) goto l7;
l8:x[jvj+86]=(-99999998);
l45:x[jvj+79]=t[x[jvj+79]];
goto l43;
l49:x[jvj+87]=t[x[jvj+87]];
goto l47;
l55:x[NNNX]=NNNT=incon;
l54:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l58:x[jvj+151]=s[x[jvj+180]] ;z[jvj+151]=(x[jvj+151]<=sepcte) ? x[jvj+151] : z[jvj+180];
pile[v[22]]=jvj+151; pile[WZ1]=jvj+29; pile[WZ2]=jvj+152; 
(*f[760])( );     /*MEMEX0(jvj+151,jvj+29,jvj+152)*/
if((x[jvj+152]==135)) goto l59;
x[jvj+180]=t[x[jvj+180]];
goto l57;
l59:x[jvj+153]=0 ;z[jvj+153]=0;
x[jvj+181]=x[jvj+26] ;z[jvj+181]=z[jvj+26];
l60:if((x[jvj+181]>0)) goto l61;
x[jvj+30]=x[jvj+153] ;z[jvj+30]=z[jvj+153];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[299])( );     /*COPEL0(jvj+30,jvj+31)*/
V29=K/L;
V30=V135/L;
NNNT=171;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+116; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+116)*/
pile[WZ3]=486; pile[WZ4]=jvj+121; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+121)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V29; pile[WZ4]=jvj+122; 
(*f[192])( );     /*QUADRI4(100,41,130,V29,jvj+122)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+121; pile[WZ4]=jvj+120; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+121,jvj+120)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+120; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+31,jvj+120,107)*/
pile[v[22]]=jvj+120; pile[WZ1]=107; pile[WZ2]=jvj+122; 
(*f[36])( );     /*PLUSC0(jvj+120,107,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+118; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+118)*/
pile[WZ3]=V30; pile[WZ4]=jvj+114; 
(*f[192])( );     /*QUADRI4(100,41,130,V30,jvj+114)*/
pile[v[22]]=jvj+114; pile[WZ1]=160; pile[WZ2]=jvj+115; 
(*f[54])( );     /*TRI1(jvj+114,160,jvj+115)*/
pile[v[22]]=jvj+115; pile[WZ1]=jvj+116; pile[WZ2]=111; pile[WZ3]=jvj+117; 
(*f[58])( );     /*TRI3(jvj+115,jvj+116,111,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=jvj+118; pile[WZ2]=103; pile[WZ3]=jvj+119; 
(*f[58])( );     /*TRI3(jvj+117,jvj+118,103,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+120; pile[WZ4]=jvj+119; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+120,jvj+119,jvj+32)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+32; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+32,NNNX)*/
goto l56;
l61:x[jvj+154]=s[x[jvj+181]] ;z[jvj+154]=(x[jvj+154]<=sepcte) ? x[jvj+154] : z[jvj+181];
if((x[jvj+154]==x[jvj+151])) goto l62;
pile[v[22]]=jvj+153; pile[WZ1]=jvj+154; 
(*f[68])( );     /*PLUE0(jvj+153,jvj+154)*/
l62:x[jvj+181]=t[x[jvj+181]];
goto l60;
l64:x[jvj+155]=s[x[jvj+182]] ;z[jvj+155]=(x[jvj+155]<=sepcte) ? x[jvj+155] : z[jvj+182];
pile[v[22]]=jvj+155; pile[WZ1]=jvj+41; pile[WZ2]=jvj+156; 
(*f[760])( );     /*MEMEX0(jvj+155,jvj+41,jvj+156)*/
if((x[jvj+156]==135)) goto l65;
x[jvj+182]=t[x[jvj+182]];
goto l63;
l65:x[jvj+157]=0 ;z[jvj+157]=0;
x[jvj+183]=x[jvj+38] ;z[jvj+183]=z[jvj+38];
l66:if((x[jvj+183]>0)) goto l67;
x[jvj+42]=x[jvj+157] ;z[jvj+42]=z[jvj+157];
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[299])( );     /*COPEL0(jvj+42,jvj+43)*/
NNNT=173;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+125; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+125)*/
pile[WZ3]=486; pile[WZ4]=jvj+130; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+130)*/
pile[v[22]]=jvj+130; pile[WZ1]=111; pile[WZ2]=jvj+131; 
(*f[54])( );     /*TRI1(jvj+130,111,jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ1]=jvj+43; pile[WZ2]=107; pile[WZ3]=jvj+132; 
(*f[301])( );     /*TRI11(jvj+131,jvj+43,107,jvj+132)*/
pile[v[22]]=jvj+132; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+129; 
(*f[58])( );     /*TRI3(jvj+132,22,100,jvj+129)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+127; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+127)*/
pile[WZ3]=V135; pile[WZ4]=jvj+123; 
(*f[192])( );     /*QUADRI4(100,41,130,V135,jvj+123)*/
pile[v[22]]=jvj+123; pile[WZ1]=160; pile[WZ2]=jvj+124; 
(*f[54])( );     /*TRI1(jvj+123,160,jvj+124)*/
pile[v[22]]=jvj+124; pile[WZ1]=jvj+125; pile[WZ2]=111; pile[WZ3]=jvj+126; 
(*f[58])( );     /*TRI3(jvj+124,jvj+125,111,jvj+126)*/
pile[v[22]]=jvj+126; pile[WZ1]=jvj+127; pile[WZ2]=103; pile[WZ3]=jvj+128; 
(*f[58])( );     /*TRI3(jvj+126,jvj+127,103,jvj+128)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+129; pile[WZ4]=jvj+128; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+129,jvj+128,jvj+44)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+44; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+44,NNNX)*/
goto l56;
l67:x[jvj+158]=s[x[jvj+183]] ;z[jvj+158]=(x[jvj+158]<=sepcte) ? x[jvj+158] : z[jvj+183];
if((x[jvj+158]==x[jvj+155])) goto l68;
pile[v[22]]=jvj+157; pile[WZ1]=jvj+158; 
(*f[68])( );     /*PLUE0(jvj+157,jvj+158)*/
l68:x[jvj+183]=t[x[jvj+183]];
goto l66;
l70:x[jvj+159]=s[x[jvj+184]] ;z[jvj+159]=(x[jvj+159]<=sepcte) ? x[jvj+159] : z[jvj+184];
pile[v[22]]=jvj+159; pile[WZ1]=jvj+98; pile[WZ2]=jvj+160; 
(*f[760])( );     /*MEMEX0(jvj+159,jvj+98,jvj+160)*/
if((x[jvj+160]==135)) goto l71;
x[jvj+184]=t[x[jvj+184]];
goto l69;
l71:x[jvj+161]=0 ;z[jvj+161]=0;
x[jvj+185]=x[jvj+96] ;z[jvj+185]=z[jvj+96];
l72:if((x[jvj+185]>0)) goto l73;
x[jvj+99]=x[jvj+161] ;z[jvj+99]=z[jvj+161];
pile[v[22]]=jvj+99; pile[WZ1]=jvj+100; 
(*f[299])( );     /*COPEL0(jvj+99,jvj+100)*/
x[jvj+179]=x[jvj+97] ;z[jvj+179]=z[jvj+97];
l52:if((x[jvj+179]<=0)) goto l51;
x[jvj+101]=s[x[jvj+179]] ;z[jvj+101]=(x[jvj+101]<=sepcte) ? x[jvj+101] : z[jvj+179];
pile[v[22]]=130; pile[WZ1]=jvj+101; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(130,jvj+101,V169)*/
V169=pile[WZ2]; 
V138=V169;
if((V138==0)) goto l53;
x[jvj+186]=x[jvj+97] ;z[jvj+186]=z[jvj+97];
l75:if((x[jvj+186]>0)) goto l76;
l53:x[jvj+179]=t[x[jvj+179]];
goto l52;
l73:x[jvj+162]=s[x[jvj+185]] ;z[jvj+162]=(x[jvj+162]<=sepcte) ? x[jvj+162] : z[jvj+185];
if((x[jvj+162]==x[jvj+159])) goto l74;
pile[v[22]]=jvj+161; pile[WZ1]=jvj+162; 
(*f[68])( );     /*PLUE0(jvj+161,jvj+162)*/
l74:x[jvj+185]=t[x[jvj+185]];
goto l72;
l76:x[jvj+163]=s[x[jvj+186]] ;z[jvj+163]=(x[jvj+163]<=sepcte) ? x[jvj+163] : z[jvj+186];
pile[v[22]]=jvj+163; pile[WZ1]=jvj+101; pile[WZ2]=jvj+164; 
(*f[760])( );     /*MEMEX0(jvj+163,jvj+101,jvj+164)*/
if((x[jvj+164]==135)) goto l77;
x[jvj+186]=t[x[jvj+186]];
goto l75;
l77:x[jvj+165]=0 ;z[jvj+165]=0;
x[jvj+187]=x[jvj+97] ;z[jvj+187]=z[jvj+97];
l78:if((x[jvj+187]>0)) goto l79;
x[jvj+102]=x[jvj+165] ;z[jvj+102]=z[jvj+165];
pile[v[22]]=jvj+102; pile[WZ1]=jvj+103; 
(*f[299])( );     /*COPEL0(jvj+102,jvj+103)*/
V181=V137-V138;
NNNT=181;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+141; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+141)*/
pile[WZ3]=485; pile[WZ4]=jvj+146; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+146)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V181; pile[WZ4]=jvj+147; 
(*f[192])( );     /*QUADRI4(100,41,130,V181,jvj+147)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+146; pile[WZ4]=jvj+145; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+146,jvj+145)*/
pile[v[22]]=jvj+100; pile[WZ1]=jvj+145; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+100,jvj+145,107)*/
pile[v[22]]=jvj+145; pile[WZ1]=107; pile[WZ2]=jvj+147; 
(*f[36])( );     /*PLUSC0(jvj+145,107,jvj+147)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+148; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+148)*/
pile[v[22]]=jvj+148; pile[WZ1]=111; pile[WZ2]=jvj+149; 
(*f[54])( );     /*TRI1(jvj+148,111,jvj+149)*/
pile[v[22]]=jvj+149; pile[WZ1]=jvj+103; pile[WZ2]=107; pile[WZ3]=jvj+150; 
(*f[301])( );     /*TRI11(jvj+149,jvj+103,107,jvj+150)*/
pile[v[22]]=jvj+150; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+143; 
(*f[58])( );     /*TRI3(jvj+150,22,100,jvj+143)*/
pile[v[22]]=jvj+19; pile[WZ1]=160; pile[WZ2]=jvj+140; 
(*f[54])( );     /*TRI1(jvj+19,160,jvj+140)*/
pile[v[22]]=jvj+140; pile[WZ1]=jvj+141; pile[WZ2]=111; pile[WZ3]=jvj+142; 
(*f[58])( );     /*TRI3(jvj+140,jvj+141,111,jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=jvj+143; pile[WZ2]=103; pile[WZ3]=jvj+144; 
(*f[58])( );     /*TRI3(jvj+142,jvj+143,103,jvj+144)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+145; pile[WZ4]=jvj+144; pile[WZ5]=jvj+104; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+145,jvj+144,jvj+104)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+104; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+104,NNNX)*/
goto l56;
l79:x[jvj+166]=s[x[jvj+187]] ;z[jvj+166]=(x[jvj+166]<=sepcte) ? x[jvj+166] : z[jvj+187];
if((x[jvj+166]==x[jvj+163])) goto l80;
pile[v[22]]=jvj+165; pile[WZ1]=jvj+166; 
(*f[68])( );     /*PLUE0(jvj+165,jvj+166)*/
l80:x[jvj+187]=t[x[jvj+187]];
goto l78;
l81:V353=V76%PP;
V354=V353;
if((V354<0)) goto l82;
V75=V354;
l89:V78=incon;
x[jvj+170]=vo[14];z[jvj+170]=vz[14];
pile[v[22]]=jvj+170; pile[WZ1]=1380; pile[WZ2]=I; 
(*f[43])( );     /*CHGC2(jvj+170,1380,I)*/
x[jvj+171]=vo[16];z[jvj+171]=vz[16];
pile[v[22]]=jvj+85; pile[WZ1]=jvj+171; 
(*f[30])( );if(v[102]) goto l90;     /*EVL0(jvj+85,jvj+171,V78)*/
V78=pile[WZ2]; 
l90:x[jvj+172]=vo[14];z[jvj+172]=vz[14];
pile[v[22]]=1380; pile[WZ1]=jvj+172; 
(*f[71])( );     /*ENLV0(1380,jvj+172)*/
if(V78!=incon) goto l83;
l2:I++;
goto l1;
l82:V355=V354+PP;
V75=V355;
goto l89;
l83:V356=V78%PP;
V357=V356;
if((V357<0)) goto l84;
V77=V357;
l3:if((V75!=V77)) goto l2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+110; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+110)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+112; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+112)*/
pile[WZ3]=PP; pile[WZ4]=jvj+108; 
(*f[192])( );     /*QUADRI4(100,41,130,PP,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=160; pile[WZ2]=jvj+109; 
(*f[54])( );     /*TRI1(jvj+108,160,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=jvj+110; pile[WZ2]=111; pile[WZ3]=jvj+111; 
(*f[58])( );     /*TRI3(jvj+109,jvj+110,111,jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=jvj+112; pile[WZ2]=103; pile[WZ3]=jvj+113; 
(*f[58])( );     /*TRI3(jvj+111,jvj+112,103,jvj+113)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+76; pile[WZ4]=jvj+113; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+76,jvj+113,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[196])( );     /*PLUF0(jvj+3,jvj+4,jvj+5)*/
goto l2;
l84:V358=V357+PP;
V77=V358;
goto l3;
l85:V359=V231%V135;
V360=V359;
if((V360<0)) goto l86;
V236=V360;
l37:NNNT=232;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V236; pile[WZ4]=jvj+62; 
(*f[192])( );     /*QUADRI4(100,41,130,V236,jvj+62)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+61,jvj+62,NNNX)*/
goto l56;
l86:V361=V360+V135;
V236=V361;
goto l37;
l87:V76=incon;
x[jvj+167]=vo[14];z[jvj+167]=vz[14];
pile[v[22]]=jvj+167; pile[WZ1]=1380; pile[WZ2]=I; 
(*f[43])( );     /*CHGC2(jvj+167,1380,I)*/
x[jvj+168]=vo[16];z[jvj+168]=vz[16];
pile[v[22]]=jvj+84; pile[WZ1]=jvj+168; 
(*f[30])( );if(v[102]) goto l88;     /*EVL0(jvj+84,jvj+168,V76)*/
V76=pile[WZ2]; 
l88:x[jvj+169]=vo[14];z[jvj+169]=vz[14];
pile[v[22]]=1380; pile[WZ1]=jvj+169; 
(*f[71])( );     /*ENLV0(1380,jvj+169)*/
if(V76!=incon) goto l81;
goto l2;
}
