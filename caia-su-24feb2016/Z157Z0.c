#include "dx.h"
void Z157Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,T=0,V40=0,V19=0,V46=0,V67=0,V74=0,V95=0,V123=0,V102=0,V129=0,V153=0,V250=0,J=0,V276=0,V255=0,V292=0,V300=0,I=0,V318=0,V326=0,V305=0,V17=0,V287=0,V288=0,V290=0,V289=0,V316=0,V315=0,V453=0,V441=0,V173=0,V193=0,V175=0,V406=0,V351=0,V331=0,V339=0,V44=0,V47=0,V256=0,V259=0,V200=0,V220=0,V202=0,V431=0,V381=0,V361=0,V369=0,V127=0,K=0,V20=0,V103=0,V72=0,V75=0,V230=0,V233=0,V554=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=233;
x[jvj+1]=15658;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1887&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(111,NNNY,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=1214)) goto l63;
pile[v[22]]=107; pile[WZ1]=NNNY; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(107,NNNY,jvj+37)*/
x[jvj+233]=x[jvj+37] ;z[jvj+233]=z[jvj+37];
l50:if((x[jvj+233]>0)) goto l51;
pile[v[22]]=NNNY; pile[WZ1]=jvj+41; 
(*f[887])( );     /*VARND0(NNNY,jvj+41)*/
if((x[jvj+41]==0)) goto l1;
for(i=x[jvj+41],V287=0;i>0;i=t[i],V287++)  ;
if((V287!=1)) goto l61;
for(i=x[jvj+37],V288=0;i>0;i=t[i],V288++)  ;
pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(NNNY,jvj+8)*/
if((x[jvj+8]<=0)) goto l25;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+219]=x[jvj+37] ;z[jvj+219]=z[jvj+37];
l22:if((x[jvj+219]>0)) goto l23;
for(i=x[jvj+13],V290=0;i>0;i=t[i],V290++)  ;
V289=V290+1;
if((V288!=V289)) goto l25;
pile[v[22]]=365; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(365,jvj+9,jvj+10)*/
l19:if((x[jvj+10]>0)) goto l20;
x[jvj+227]=x[jvj+37] ;z[jvj+227]=z[jvj+37];
l56:if((x[jvj+227]<=0)) goto l25;
x[jvj+43]=s[x[jvj+227]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+227];
pile[v[22]]=100; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(100,jvj+43,jvj+44)*/
if((x[jvj+44]!=484)) goto l57;
NNNT=109;
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V290; pile[WZ4]=jvj+45; 
(*f[192])( );     /*QUADRI4(100,41,130,V290,jvj+45)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+45; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+45,NNNX)*/
l95:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l1:x[jvj+3]=0 ;z[jvj+3]=0;
l2:if((x[jvj+37]>0)) goto l3;
for(i=x[jvj+3],V17=0;i>0;i=t[i],V17++)  ;
NNNT=83;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V17; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,V17,jvj+42)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+42; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+42,NNNX)*/
goto l95;
l3:x[jvj+2]=s[x[jvj+37]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+37];
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+2,V16)*/
V16=pile[WZ2]; 
T=V16;
pile[v[22]]=jvj+3; pile[WZ1]=T; 
(*f[207])( );     /*PLUE2(jvj+3,T)*/
l4:x[jvj+37]=t[x[jvj+37]];
goto l2;
l5:V40=K+1;
V19=V40;
l88:pile[v[22]]=103; pile[WZ1]=jvj+107; pile[WZ2]=jvj+149; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+107,jvj+149)*/
pile[v[22]]=100; pile[WZ1]=jvj+149; pile[WZ2]=jvj+150; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+149,jvj+150)*/
if((x[jvj+150]!=22)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+151; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+149,jvj+151)*/
pile[v[22]]=101; pile[WZ1]=jvj+151; pile[WZ2]=jvj+152; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+151,jvj+152)*/
if(x[jvj+152]!=1215&&x[jvj+152]!=1214&&x[jvj+152]!=1273) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+149; pile[WZ2]=jvj+153; 
(*f[33])( );     /*FNDE0(107,jvj+149,jvj+153)*/
for(i=x[jvj+153],V20=0;i>0;i=t[i],V20++)  ;
if((V20!=V19)) goto l8;
NNNT=86;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+211; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+211)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V19; pile[WZ4]=jvj+213; 
(*f[192])( );     /*QUADRI4(100,41,130,V19,jvj+213)*/
pile[v[22]]=jvj+211; pile[WZ1]=111; pile[WZ2]=jvj+212; 
(*f[54])( );     /*TRI1(jvj+211,111,jvj+212)*/
pile[v[22]]=jvj+212; pile[WZ1]=jvj+213; pile[WZ2]=103; pile[WZ3]=jvj+214; 
(*f[58])( );     /*TRI3(jvj+212,jvj+213,103,jvj+214)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+149; pile[WZ4]=jvj+214; pile[WZ5]=jvj+154; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+149,jvj+214,jvj+154)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+154; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+107,jvj+154,NNNX)*/
goto l95;
l6:V46=V44;
l73:pile[v[22]]=102; pile[WZ1]=jvj+54; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+54,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+89,jvj+90)*/
if((x[jvj+90]!=22)) goto l11;
pile[v[22]]=111; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+89,jvj+91)*/
pile[v[22]]=101; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+91,jvj+92)*/
if(x[jvj+92]!=1215&&x[jvj+92]!=1273&&x[jvj+92]!=1214) goto l11;
pile[v[22]]=107; pile[WZ1]=jvj+89; pile[WZ2]=jvj+93; 
(*f[33])( );     /*FNDE0(107,jvj+89,jvj+93)*/
for(i=x[jvj+93],V47=0;i>0;i=t[i],V47++)  ;
if((V47>=V46)) goto l11;
NNNT=87;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+94; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+94)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+94; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+54,jvj+94,NNNX)*/
goto l95;
l7:V74=V72;
l91:pile[v[22]]=111; pile[WZ1]=jvj+148; pile[WZ2]=jvj+163; 
(*f[32])( );if(v[102]) goto l92;     /*FNDO0(111,jvj+148,jvj+163)*/
pile[v[22]]=101; pile[WZ1]=jvj+163; pile[WZ2]=jvj+164; 
(*f[32])( );if(v[102]) goto l92;     /*FNDO0(101,jvj+163,jvj+164)*/
if(x[jvj+164]!=1215&&x[jvj+164]!=1273&&x[jvj+164]!=1214) goto l92;
pile[v[22]]=107; pile[WZ1]=jvj+148; pile[WZ2]=jvj+165; 
(*f[33])( );     /*FNDE0(107,jvj+148,jvj+165)*/
for(i=x[jvj+165],V75=0;i>0;i=t[i],V75++)  ;
if((V75>=V74)) goto l92;
NNNT=87;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+166; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+166)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+166; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+107,jvj+166,NNNX)*/
goto l95;
l8:V102=incon;
if((x[jvj+109]==29)) goto l9;
V102=K;
l89:pile[v[22]]=103; pile[WZ1]=jvj+107; pile[WZ2]=jvj+155; 
(*f[32])( );if(v[102]) goto l90;     /*FNDO0(103,jvj+107,jvj+155)*/
pile[v[22]]=100; pile[WZ1]=jvj+155; pile[WZ2]=jvj+156; 
(*f[32])( );if(v[102]) goto l90;     /*FNDO0(100,jvj+155,jvj+156)*/
if((x[jvj+156]!=22)) goto l90;
pile[v[22]]=111; pile[WZ2]=jvj+157; 
(*f[32])( );if(v[102]) goto l90;     /*FNDO0(111,jvj+155,jvj+157)*/
pile[v[22]]=101; pile[WZ1]=jvj+157; pile[WZ2]=jvj+158; 
(*f[32])( );if(v[102]) goto l90;     /*FNDO0(101,jvj+157,jvj+158)*/
if(x[jvj+158]!=1215&&x[jvj+158]!=1273&&x[jvj+158]!=1214) goto l90;
pile[v[22]]=107; pile[WZ1]=jvj+155; pile[WZ2]=jvj+159; 
(*f[33])( );     /*FNDE0(107,jvj+155,jvj+159)*/
for(i=x[jvj+159],V103=0;i>0;i=t[i],V103++)  ;
if((V103>=V102)) goto l90;
NNNT=88;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+160; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+160)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+160; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+107,jvj+160,NNNX)*/
goto l95;
l9:V123=K+1;
V102=V123;
goto l89;
l10:V129=0;
l86:pile[v[22]]=100; pile[WZ1]=jvj+107; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(100,jvj+107,jvj+140)*/
if((x[jvj+140]!=22)) goto l87;
pile[v[22]]=102; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(102,jvj+107,jvj+141)*/
pile[v[22]]=130; pile[WZ1]=jvj+141; 
(*f[26])( );if(v[102]) goto l87;     /*FNDC0(130,jvj+141,V127)*/
V127=pile[WZ2]; 
if((V127>=V129)) goto l87;
pile[v[22]]=103; pile[WZ1]=jvj+107; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(103,jvj+107,jvj+142)*/
pile[v[22]]=100; pile[WZ1]=jvj+142; pile[WZ2]=jvj+143; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(100,jvj+142,jvj+143)*/
if((x[jvj+143]!=22)) goto l87;
pile[v[22]]=111; pile[WZ2]=jvj+144; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(111,jvj+142,jvj+144)*/
pile[v[22]]=101; pile[WZ1]=jvj+144; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(101,jvj+144,jvj+145)*/
if(x[jvj+145]!=1215&&x[jvj+145]!=1273&&x[jvj+145]!=1214) goto l87;
NNNT=89;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+146; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+146)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+146; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+107,jvj+146,NNNX)*/
goto l95;
l11:V153=incon;
if((x[jvj+56]==29)) goto l12;
V153=(-1);
l74:if((V44>V153)) goto l75;
pile[v[22]]=102; pile[WZ1]=jvj+54; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(102,jvj+54,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(100,jvj+95,jvj+96)*/
if((x[jvj+96]!=22)) goto l75;
pile[v[22]]=111; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(111,jvj+95,jvj+97)*/
pile[v[22]]=101; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(101,jvj+97,jvj+98)*/
if(x[jvj+98]!=1215&&x[jvj+98]!=1273&&x[jvj+98]!=1214) goto l75;
pile[v[22]]=107; pile[WZ1]=jvj+95; pile[WZ2]=jvj+99; 
(*f[33])( );     /*FNDE0(107,jvj+95,jvj+99)*/
NNNT=98;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+100; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+100)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+100; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+54,jvj+100,NNNX)*/
goto l95;
l12:V153=0;
goto l74;
l14:x[jvj+4]=s[x[jvj+171]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+171];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+4,V250)*/
V250=pile[WZ2]; 
J=V250;
pile[v[22]]=jvj+5; pile[WZ1]=J; 
(*f[207])( );     /*PLUE2(jvj+5,J)*/
l15:x[jvj+171]=t[x[jvj+171]];
l13:if((x[jvj+171]>0)) goto l14;
for(i=x[jvj+5],V233=0;i>0;i=t[i],V233++)  ;
if((V233<V230)) goto l94;
NNNT=107;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+172; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+172)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+172; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+107,jvj+172,NNNX)*/
goto l95;
l17:x[jvj+6]=s[x[jvj+105]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+105];
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+6,V276)*/
V276=pile[WZ2]; 
V255=V276;
pile[v[22]]=jvj+7; pile[WZ1]=V255; 
(*f[207])( );     /*PLUE2(jvj+7,V255)*/
l18:x[jvj+105]=t[x[jvj+105]];
l16:if((x[jvj+105]>0)) goto l17;
for(i=x[jvj+7],V259=0;i>0;i=t[i],V259++)  ;
if((V259<=V256)) goto l76;
NNNT=108;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+106; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+106)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+106; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+54,jvj+106,NNNX)*/
goto l95;
l20:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+11,V292)*/
V292=pile[WZ2]; 
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==V292) goto l21;
l25:pile[v[22]]=NNNY; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(NNNY,jvj+14)*/
if((x[jvj+14]<=0)) goto l61;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
x[jvj+19]=0 ;z[jvj+19]=0;
x[jvj+220]=x[jvj+37] ;z[jvj+220]=z[jvj+37];
l29:if((x[jvj+220]>0)) goto l30;
for(i=x[jvj+19],V316=0;i>0;i=t[i],V316++)  ;
V315=V316+1;
if((V288!=V315)) goto l61;
pile[v[22]]=365; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(365,jvj+15,jvj+16)*/
l26:if((x[jvj+16]>0)) goto l27;
x[jvj+228]=x[jvj+37] ;z[jvj+228]=z[jvj+37];
l58:if((x[jvj+228]<=0)) goto l61;
x[jvj+46]=s[x[jvj+228]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+228];
pile[v[22]]=100; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(100,jvj+46,jvj+47)*/
if((x[jvj+47]!=484)) goto l59;
NNNT=110;
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V315; pile[WZ4]=jvj+48; 
(*f[192])( );     /*QUADRI4(100,41,130,V315,jvj+48)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+48; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+48,NNNX)*/
goto l95;
l21:x[jvj+10]=t[x[jvj+10]];
goto l19;
l23:x[jvj+12]=s[x[jvj+219]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+219];
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+12,V300)*/
V300=pile[WZ2]; 
I=V300;
pile[v[22]]=jvj+13; pile[WZ1]=I; 
(*f[207])( );     /*PLUE2(jvj+13,I)*/
l24:x[jvj+219]=t[x[jvj+219]];
goto l22;
l27:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+17,V318)*/
V318=pile[WZ2]; 
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==V318) goto l61;
l28:x[jvj+16]=t[x[jvj+16]];
goto l26;
l30:x[jvj+18]=s[x[jvj+220]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+220];
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,jvj+18,V326)*/
V326=pile[WZ2]; 
V305=V326;
pile[v[22]]=jvj+19; pile[WZ1]=V305; 
(*f[207])( );     /*PLUE2(jvj+19,V305)*/
l31:x[jvj+220]=t[x[jvj+220]];
goto l29;
l33:x[jvj+177]=s[x[jvj+84]] ;z[jvj+177]=(x[jvj+177]<=sepcte) ? x[jvj+177] : z[jvj+84];
x[jvj+221]=t[x[jvj+84]];
l34:if((x[jvj+221]>0)) goto l35;
x[jvj+84]=t[x[jvj+84]];
l32:if((x[jvj+84]>0)) goto l33;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+85; 
(*f[299])( );     /*COPEL0(jvj+22,jvj+85)*/
NNNT=112;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+202; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+202)*/
pile[v[22]]=jvj+202; pile[WZ1]=111; pile[WZ2]=jvj+203; 
(*f[54])( );     /*TRI1(jvj+202,111,jvj+203)*/
pile[v[22]]=jvj+203; pile[WZ1]=jvj+85; pile[WZ2]=107; pile[WZ3]=jvj+204; 
(*f[301])( );     /*TRI11(jvj+203,jvj+85,107,jvj+204)*/
pile[v[22]]=jvj+204; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+86; 
(*f[58])( );     /*TRI3(jvj+204,22,100,jvj+86)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+86; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+54,jvj+86,NNNX)*/
goto l95;
l35:x[jvj+175]=s[x[jvj+221]] ;z[jvj+175]=(x[jvj+175]<=sepcte) ? x[jvj+175] : z[jvj+221];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+173; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+173)*/
pile[v[22]]=jvj+173; pile[WZ1]=111; pile[WZ2]=jvj+174; 
(*f[54])( );     /*TRI1(jvj+173,111,jvj+174)*/
pile[v[22]]=jvj+174; pile[WZ1]=jvj+175; pile[WZ2]=103; pile[WZ3]=jvj+176; 
(*f[58])( );     /*TRI3(jvj+174,jvj+175,103,jvj+176)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+177; pile[WZ4]=jvj+176; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+177,jvj+176,jvj+21)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[196])( );     /*PLUF0(jvj+20,jvj+21,jvj+22)*/
x[jvj+221]=t[x[jvj+221]];
goto l34;
l37:x[jvj+182]=s[x[jvj+137]] ;z[jvj+182]=(x[jvj+182]<=sepcte) ? x[jvj+182] : z[jvj+137];
x[jvj+222]=t[x[jvj+137]];
l38:if((x[jvj+222]>0)) goto l39;
x[jvj+137]=t[x[jvj+137]];
l36:if((x[jvj+137]>0)) goto l37;
pile[v[22]]=jvj+25; pile[WZ1]=jvj+138; 
(*f[299])( );     /*COPEL0(jvj+25,jvj+138)*/
NNNT=112;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+208; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+208)*/
pile[v[22]]=jvj+208; pile[WZ1]=111; pile[WZ2]=jvj+209; 
(*f[54])( );     /*TRI1(jvj+208,111,jvj+209)*/
pile[v[22]]=jvj+209; pile[WZ1]=jvj+138; pile[WZ2]=107; pile[WZ3]=jvj+210; 
(*f[301])( );     /*TRI11(jvj+209,jvj+138,107,jvj+210)*/
pile[v[22]]=jvj+210; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+139; 
(*f[58])( );     /*TRI3(jvj+210,22,100,jvj+139)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+139; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+107,jvj+139,NNNX)*/
goto l95;
l39:x[jvj+180]=s[x[jvj+222]] ;z[jvj+180]=(x[jvj+180]<=sepcte) ? x[jvj+180] : z[jvj+222];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+178; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+178)*/
pile[v[22]]=jvj+178; pile[WZ1]=111; pile[WZ2]=jvj+179; 
(*f[54])( );     /*TRI1(jvj+178,111,jvj+179)*/
pile[v[22]]=jvj+179; pile[WZ1]=jvj+180; pile[WZ2]=103; pile[WZ3]=jvj+181; 
(*f[58])( );     /*TRI3(jvj+179,jvj+180,103,jvj+181)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+182; pile[WZ4]=jvj+181; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+182,jvj+181,jvj+24)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[196])( );     /*PLUF0(jvj+23,jvj+24,jvj+25)*/
x[jvj+222]=t[x[jvj+222]];
goto l38;
l41:x[jvj+187]=s[x[jvj+74]] ;z[jvj+187]=(x[jvj+187]<=sepcte) ? x[jvj+187] : z[jvj+74];
x[jvj+223]=t[x[jvj+74]];
l42:if((x[jvj+223]>0)) goto l43;
x[jvj+74]=t[x[jvj+74]];
l40:if((x[jvj+74]>0)) goto l41;
pile[v[22]]=jvj+28; pile[WZ1]=jvj+75; 
(*f[299])( );     /*COPEL0(jvj+28,jvj+75)*/
NNNT=113;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+199; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+199)*/
pile[v[22]]=jvj+199; pile[WZ1]=111; pile[WZ2]=jvj+200; 
(*f[54])( );     /*TRI1(jvj+199,111,jvj+200)*/
pile[v[22]]=jvj+200; pile[WZ1]=jvj+75; pile[WZ2]=107; pile[WZ3]=jvj+201; 
(*f[301])( );     /*TRI11(jvj+200,jvj+75,107,jvj+201)*/
pile[v[22]]=jvj+201; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+76; 
(*f[58])( );     /*TRI3(jvj+201,22,100,jvj+76)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+76; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+54,jvj+76,NNNX)*/
goto l95;
l43:x[jvj+185]=s[x[jvj+223]] ;z[jvj+185]=(x[jvj+185]<=sepcte) ? x[jvj+185] : z[jvj+223];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+183; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+183)*/
pile[v[22]]=jvj+183; pile[WZ1]=111; pile[WZ2]=jvj+184; 
(*f[54])( );     /*TRI1(jvj+183,111,jvj+184)*/
pile[v[22]]=jvj+184; pile[WZ1]=jvj+185; pile[WZ2]=103; pile[WZ3]=jvj+186; 
(*f[58])( );     /*TRI3(jvj+184,jvj+185,103,jvj+186)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+187; pile[WZ4]=jvj+186; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+187,jvj+186,jvj+27)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[196])( );     /*PLUF0(jvj+26,jvj+27,jvj+28)*/
x[jvj+223]=t[x[jvj+223]];
goto l42;
l45:x[jvj+192]=s[x[jvj+127]] ;z[jvj+192]=(x[jvj+192]<=sepcte) ? x[jvj+192] : z[jvj+127];
x[jvj+224]=t[x[jvj+127]];
l46:if((x[jvj+224]>0)) goto l47;
x[jvj+127]=t[x[jvj+127]];
l44:if((x[jvj+127]>0)) goto l45;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+128; 
(*f[299])( );     /*COPEL0(jvj+31,jvj+128)*/
NNNT=113;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+205; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+205)*/
pile[v[22]]=jvj+205; pile[WZ1]=111; pile[WZ2]=jvj+206; 
(*f[54])( );     /*TRI1(jvj+205,111,jvj+206)*/
pile[v[22]]=jvj+206; pile[WZ1]=jvj+128; pile[WZ2]=107; pile[WZ3]=jvj+207; 
(*f[301])( );     /*TRI11(jvj+206,jvj+128,107,jvj+207)*/
pile[v[22]]=jvj+207; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+129; 
(*f[58])( );     /*TRI3(jvj+207,22,100,jvj+129)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+129; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+107,jvj+129,NNNX)*/
goto l95;
l47:x[jvj+190]=s[x[jvj+224]] ;z[jvj+190]=(x[jvj+190]<=sepcte) ? x[jvj+190] : z[jvj+224];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+188; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+188)*/
pile[v[22]]=jvj+188; pile[WZ1]=111; pile[WZ2]=jvj+189; 
(*f[54])( );     /*TRI1(jvj+188,111,jvj+189)*/
pile[v[22]]=jvj+189; pile[WZ1]=jvj+190; pile[WZ2]=103; pile[WZ3]=jvj+191; 
(*f[58])( );     /*TRI3(jvj+189,jvj+190,103,jvj+191)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+192; pile[WZ4]=jvj+191; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+192,jvj+191,jvj+30)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[196])( );     /*PLUF0(jvj+29,jvj+30,jvj+31)*/
x[jvj+224]=t[x[jvj+224]];
goto l46;
l49:x[jvj+32]=s[x[jvj+50]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+50];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[255])( );     /*COPEXP0(jvj+32,jvj+33)*/
pile[v[22]]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+34,jvj+33)*/
x[jvj+50]=t[x[jvj+50]];
l48:if((x[jvj+50]>0)) goto l49;
NNNT=130;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+193; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+193)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+194; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+194)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1214; pile[WZ4]=jvj+196; 
(*f[181])( );     /*QUADRI2(100,20,101,1214,jvj+196)*/
pile[v[22]]=jvj+196; pile[WZ1]=111; pile[WZ2]=jvj+197; 
(*f[54])( );     /*TRI1(jvj+196,111,jvj+197)*/
pile[v[22]]=jvj+197; pile[WZ1]=jvj+34; pile[WZ2]=107; pile[WZ3]=jvj+198; 
(*f[301])( );     /*TRI11(jvj+197,jvj+34,107,jvj+198)*/
pile[v[22]]=jvj+198; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+195; 
(*f[58])( );     /*TRI3(jvj+198,22,100,jvj+195)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+193; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+193,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=107; pile[WZ2]=jvj+194; 
(*f[36])( );     /*PLUSC0(jvj+53,107,jvj+194)*/
pile[WZ2]=jvj+195; 
(*f[36])( );     /*PLUSC0(jvj+53,107,jvj+195)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+53; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+53,NNNX)*/
goto l95;
l51:x[jvj+225]=s[x[jvj+233]] ;z[jvj+225]=(x[jvj+225]<=sepcte) ? x[jvj+225] : z[jvj+233];
x[jvj+38]=x[jvj+225] ;z[jvj+38]=z[jvj+225];
x[jvj+226]=x[jvj+37] ;z[jvj+226]=z[jvj+37];
l52:if((x[jvj+226]>0)) goto l53;
x[jvj+233]=t[x[jvj+233]];
goto l50;
l53:x[jvj+39]=s[x[jvj+226]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+226];
if((x[jvj+225]==x[jvj+39])) goto l54;
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[760])( );     /*MEMEX0(jvj+38,jvj+39,jvj+40)*/
if((x[jvj+40]==135)) goto l55;
l54:x[jvj+226]=t[x[jvj+226]];
goto l52;
l55:x[NNNX]=x[NNNY] ;z[NNNX]=z[NNNY];
NNNT=82;
V554=x[jvj+39];
pile[v[22]]=107; pile[WZ1]=NNNY; pile[WZ2]=V554; 
(*f[134])( );     /*OTA0(107,NNNY,V554)*/
pile[v[22]]=191; 
(*f[71])( );     /*ENLV0(191,NNNY)*/
goto l95;
l57:x[jvj+227]=t[x[jvj+227]];
goto l56;
l59:x[jvj+228]=t[x[jvj+228]];
goto l58;
l61:x[jvj+229]=x[jvj+37] ;z[jvj+229]=z[jvj+37];
l60:if((x[jvj+229]<=0)) goto l63;
x[jvj+49]=s[x[jvj+229]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+229];
pile[v[22]]=130; pile[WZ1]=jvj+49; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(130,jvj+49,V453)*/
V453=pile[WZ2]; 
V441=V453;
x[jvj+231]=x[jvj+37] ;z[jvj+231]=z[jvj+37];
l96:if((x[jvj+231]>0)) goto l97;
l62:x[jvj+229]=t[x[jvj+229]];
goto l60;
l63:pile[v[22]]=538; pile[WZ1]=NNNY; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(538,NNNY,jvj+54)*/
pile[v[22]]=111; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(111,jvj+54,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(101,jvj+55,jvj+56)*/
if((x[jvj+56]!=25)) goto l72;
x[jvj+57]=d[20];z[jvj+57]=0;
l64:if((x[jvj+57]>0)) goto l65;
x[jvj+67]=d[20];z[jvj+67]=0;
l67:if((x[jvj+67]>0)) goto l68;
x[jvj+77]=d[20];z[jvj+77]=0;
l70:if((x[jvj+77]<=0)) goto l72;
x[jvj+78]=s[x[jvj+77]] ;z[jvj+78]=(x[jvj+78]<=sepcte) ? x[jvj+78] : z[jvj+77];
pile[v[22]]=jvj+78; pile[WZ1]=jvj+54; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(jvj+78,jvj+54,jvj+79)*/
pile[v[22]]=111; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(111,jvj+79,jvj+80)*/
pile[v[22]]=101; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(101,jvj+80,jvj+81)*/
if((x[jvj+81]!=1214)) goto l71;
pile[v[22]]=268; pile[WZ1]=jvj+78; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(268,jvj+78,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=jvj+54; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(jvj+82,jvj+54,jvj+83)*/
pile[v[22]]=130; pile[WZ1]=jvj+83; 
(*f[26])( );if(v[102]) goto l71;     /*FNDC0(130,jvj+83,V351)*/
V351=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+79; pile[WZ2]=jvj+84; 
(*f[33])( );     /*FNDE0(107,jvj+79,jvj+84)*/
V331=V351;
for(i=x[jvj+84],V339=0;i>0;i=t[i],V339++)  ;
if((V339!=V331)) goto l71;
x[jvj+22]=0 ;z[jvj+22]=0;
x[jvj+20]=d[76];z[jvj+20]=0;
goto l32;
l65:x[jvj+58]=s[x[jvj+57]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+57];
pile[v[22]]=jvj+58; pile[WZ1]=jvj+54; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(jvj+58,jvj+54,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(100,jvj+59,jvj+60)*/
if((x[jvj+60]!=22)) goto l66;
pile[v[22]]=111; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(111,jvj+59,jvj+61)*/
pile[v[22]]=101; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(101,jvj+61,jvj+62)*/
V173=x[jvj+62];
if(V173!=1215&&V173!=1273&&V173!=1214) goto l66;
pile[v[22]]=268; pile[WZ1]=jvj+58; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(268,jvj+58,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+54; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(jvj+63,jvj+54,jvj+64)*/
pile[v[22]]=130; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(130,jvj+64,V193)*/
V193=pile[WZ2]; 
V175=V193;
if((V175>=0)) goto l66;
pile[v[22]]=107; pile[WZ1]=jvj+59; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(107,jvj+59,jvj+65)*/
NNNT=99;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+66)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+66; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+54,jvj+66,NNNX)*/
goto l95;
l66:x[jvj+57]=t[x[jvj+57]];
goto l64;
l68:x[jvj+68]=s[x[jvj+67]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+67];
pile[v[22]]=jvj+68; pile[WZ1]=jvj+54; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(jvj+68,jvj+54,jvj+69)*/
pile[v[22]]=111; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(111,jvj+69,jvj+70)*/
pile[v[22]]=101; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(101,jvj+70,jvj+71)*/
if((x[jvj+71]!=1214)) goto l69;
pile[v[22]]=268; pile[WZ1]=jvj+68; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(268,jvj+68,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+54; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(jvj+72,jvj+54,jvj+73)*/
pile[v[22]]=130; pile[WZ1]=jvj+73; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(130,jvj+73,V406)*/
V406=pile[WZ2]; 
if((V406!=1)) goto l69;
pile[v[22]]=107; pile[WZ1]=jvj+69; pile[WZ2]=jvj+74; 
(*f[33])( );     /*FNDE0(107,jvj+69,jvj+74)*/
x[jvj+28]=0 ;z[jvj+28]=0;
x[jvj+26]=d[76];z[jvj+26]=0;
goto l40;
l69:x[jvj+67]=t[x[jvj+67]];
goto l67;
l71:x[jvj+77]=t[x[jvj+77]];
goto l70;
l72:if(x[jvj+56]!=29&&x[jvj+56]!=30) goto l75;
pile[v[22]]=100; pile[WZ1]=jvj+54; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(100,jvj+54,jvj+87)*/
if((x[jvj+87]!=22)) goto l75;
pile[v[22]]=103; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(103,jvj+54,jvj+88)*/
pile[v[22]]=130; pile[WZ1]=jvj+88; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(130,jvj+88,V44)*/
V44=pile[WZ2]; 
V46=incon;
if((x[jvj+56]==29)) goto l6;
V67=V44+1;
V46=V67;
goto l73;
l75:if((x[jvj+56]!=30)) goto l76;
pile[v[22]]=102; pile[WZ1]=jvj+54; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(102,jvj+54,jvj+101)*/
pile[v[22]]=111; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(111,jvj+101,jvj+102)*/
pile[v[22]]=101; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(101,jvj+102,jvj+103)*/
if((x[jvj+103]!=1214)) goto l76;
pile[v[22]]=103; pile[WZ1]=jvj+54; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(103,jvj+54,jvj+104)*/
pile[v[22]]=130; pile[WZ1]=jvj+104; 
(*f[26])( );if(v[102]) goto l76;     /*FNDC0(130,jvj+104,V256)*/
V256=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+101; pile[WZ2]=jvj+105; 
(*f[33])( );     /*FNDE0(107,jvj+101,jvj+105)*/
x[jvj+7]=0 ;z[jvj+7]=0;
goto l16;
l76:pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(539,NNNY,jvj+107)*/
pile[v[22]]=111; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(111,jvj+107,jvj+108)*/
pile[v[22]]=101; pile[WZ1]=jvj+108; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(101,jvj+108,jvj+109)*/
if((x[jvj+109]!=25)) goto l85;
x[jvj+110]=d[20];z[jvj+110]=0;
l77:if((x[jvj+110]>0)) goto l78;
x[jvj+120]=d[20];z[jvj+120]=0;
l80:if((x[jvj+120]>0)) goto l81;
x[jvj+130]=d[20];z[jvj+130]=0;
l83:if((x[jvj+130]<=0)) goto l85;
x[jvj+131]=s[x[jvj+130]] ;z[jvj+131]=(x[jvj+131]<=sepcte) ? x[jvj+131] : z[jvj+130];
pile[v[22]]=jvj+131; pile[WZ1]=jvj+107; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(jvj+131,jvj+107,jvj+132)*/
pile[v[22]]=111; pile[WZ1]=jvj+132; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(111,jvj+132,jvj+133)*/
pile[v[22]]=101; pile[WZ1]=jvj+133; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(101,jvj+133,jvj+134)*/
if((x[jvj+134]!=1214)) goto l84;
pile[v[22]]=268; pile[WZ1]=jvj+131; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(268,jvj+131,jvj+135)*/
pile[v[22]]=jvj+135; pile[WZ1]=jvj+107; pile[WZ2]=jvj+136; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(jvj+135,jvj+107,jvj+136)*/
pile[v[22]]=130; pile[WZ1]=jvj+136; 
(*f[26])( );if(v[102]) goto l84;     /*FNDC0(130,jvj+136,V381)*/
V381=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+132; pile[WZ2]=jvj+137; 
(*f[33])( );     /*FNDE0(107,jvj+132,jvj+137)*/
V361=V381;
for(i=x[jvj+137],V369=0;i>0;i=t[i],V369++)  ;
if((V369!=V361)) goto l84;
x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+23]=d[76];z[jvj+23]=0;
goto l36;
l78:x[jvj+111]=s[x[jvj+110]] ;z[jvj+111]=(x[jvj+111]<=sepcte) ? x[jvj+111] : z[jvj+110];
pile[v[22]]=jvj+111; pile[WZ1]=jvj+107; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(jvj+111,jvj+107,jvj+112)*/
pile[v[22]]=100; pile[WZ1]=jvj+112; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(100,jvj+112,jvj+113)*/
if((x[jvj+113]!=22)) goto l79;
pile[v[22]]=111; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(111,jvj+112,jvj+114)*/
pile[v[22]]=101; pile[WZ1]=jvj+114; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(101,jvj+114,jvj+115)*/
V200=x[jvj+115];
if(V200!=1215&&V200!=1273&&V200!=1214) goto l79;
pile[v[22]]=268; pile[WZ1]=jvj+111; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(268,jvj+111,jvj+116)*/
pile[v[22]]=jvj+116; pile[WZ1]=jvj+107; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(jvj+116,jvj+107,jvj+117)*/
pile[v[22]]=130; pile[WZ1]=jvj+117; 
(*f[26])( );if(v[102]) goto l79;     /*FNDC0(130,jvj+117,V220)*/
V220=pile[WZ2]; 
V202=V220;
if((V202>=0)) goto l79;
pile[v[22]]=107; pile[WZ1]=jvj+112; pile[WZ2]=jvj+118; 
(*f[33])( );     /*FNDE0(107,jvj+112,jvj+118)*/
NNNT=99;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+119; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+119)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+119; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+107,jvj+119,NNNX)*/
goto l95;
l79:x[jvj+110]=t[x[jvj+110]];
goto l77;
l81:x[jvj+121]=s[x[jvj+120]] ;z[jvj+121]=(x[jvj+121]<=sepcte) ? x[jvj+121] : z[jvj+120];
pile[v[22]]=jvj+121; pile[WZ1]=jvj+107; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(jvj+121,jvj+107,jvj+122)*/
pile[v[22]]=111; pile[WZ1]=jvj+122; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(111,jvj+122,jvj+123)*/
pile[v[22]]=101; pile[WZ1]=jvj+123; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(101,jvj+123,jvj+124)*/
if((x[jvj+124]!=1214)) goto l82;
pile[v[22]]=268; pile[WZ1]=jvj+121; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(268,jvj+121,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=jvj+107; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(jvj+125,jvj+107,jvj+126)*/
pile[v[22]]=130; pile[WZ1]=jvj+126; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(130,jvj+126,V431)*/
V431=pile[WZ2]; 
if((V431!=1)) goto l82;
pile[v[22]]=107; pile[WZ1]=jvj+122; pile[WZ2]=jvj+127; 
(*f[33])( );     /*FNDE0(107,jvj+122,jvj+127)*/
x[jvj+31]=0 ;z[jvj+31]=0;
x[jvj+29]=d[76];z[jvj+29]=0;
goto l44;
l82:x[jvj+120]=t[x[jvj+120]];
goto l80;
l84:x[jvj+130]=t[x[jvj+130]];
goto l83;
l85:if(x[jvj+109]!=30&&x[jvj+109]!=29) goto l92;
V129=incon;
if((x[jvj+109]==29)) goto l10;
V129=1;
goto l86;
l87:pile[v[22]]=100; pile[WZ1]=jvj+107; pile[WZ2]=jvj+147; 
(*f[32])( );if(v[102]) goto l92;     /*FNDO0(100,jvj+107,jvj+147)*/
if((x[jvj+147]!=22)) goto l92;
pile[v[22]]=102; pile[WZ2]=jvj+148; 
(*f[32])( );if(v[102]) goto l92;     /*FNDO0(102,jvj+107,jvj+148)*/
pile[v[22]]=130; pile[WZ1]=jvj+148; 
(*f[26])( );if(v[102]) goto l90;     /*FNDC0(130,jvj+148,K)*/
K=pile[WZ2]; 
V19=incon;
if((x[jvj+109]==29)) goto l5;
V19=K;
goto l88;
l90:pile[v[22]]=100; pile[WZ1]=jvj+148; pile[WZ2]=jvj+161; 
(*f[32])( );if(v[102]) goto l92;     /*FNDO0(100,jvj+148,jvj+161)*/
if((x[jvj+161]!=22)) goto l92;
pile[v[22]]=103; pile[WZ1]=jvj+107; pile[WZ2]=jvj+162; 
(*f[32])( );if(v[102]) goto l92;     /*FNDO0(103,jvj+107,jvj+162)*/
pile[v[22]]=130; pile[WZ1]=jvj+162; 
(*f[26])( );if(v[102]) goto l92;     /*FNDC0(130,jvj+162,V72)*/
V72=pile[WZ2]; 
V74=incon;
if((x[jvj+109]==29)) goto l7;
V95=V72+1;
V74=V95;
goto l91;
l92:if((x[jvj+109]!=30)) goto l94;
pile[v[22]]=103; pile[WZ1]=jvj+107; pile[WZ2]=jvj+167; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(103,jvj+107,jvj+167)*/
pile[v[22]]=111; pile[WZ1]=jvj+167; pile[WZ2]=jvj+168; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(111,jvj+167,jvj+168)*/
pile[v[22]]=101; pile[WZ1]=jvj+168; pile[WZ2]=jvj+169; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(101,jvj+168,jvj+169)*/
if((x[jvj+169]!=1214)) goto l94;
pile[v[22]]=102; pile[WZ1]=jvj+107; pile[WZ2]=jvj+170; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(102,jvj+107,jvj+170)*/
pile[v[22]]=130; pile[WZ1]=jvj+170; 
(*f[26])( );if(v[102]) goto l94;     /*FNDC0(130,jvj+170,V230)*/
V230=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+167; pile[WZ2]=jvj+171; 
(*f[33])( );     /*FNDE0(107,jvj+167,jvj+171)*/
x[jvj+5]=0 ;z[jvj+5]=0;
goto l13;
l94:x[NNNX]=NNNT=incon;
l93:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l97:x[jvj+215]=s[x[jvj+231]] ;z[jvj+215]=(x[jvj+215]<=sepcte) ? x[jvj+215] : z[jvj+231];
pile[v[22]]=jvj+215; pile[WZ1]=jvj+49; pile[WZ2]=jvj+216; 
(*f[760])( );     /*MEMEX0(jvj+215,jvj+49,jvj+216)*/
if((x[jvj+216]==135)) goto l98;
x[jvj+231]=t[x[jvj+231]];
goto l96;
l98:x[jvj+217]=0 ;z[jvj+217]=0;
x[jvj+232]=x[jvj+37] ;z[jvj+232]=z[jvj+37];
l99:if((x[jvj+232]>0)) goto l100;
x[jvj+230]=x[jvj+217] ;z[jvj+230]=z[jvj+217];
x[jvj+50]=x[jvj+230] ;z[jvj+50]=z[jvj+230];
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; 
(*f[2031])( );if(v[102]) goto l62;     /*POSCARD0(jvj+50,jvj+51)*/
pile[v[22]]=195; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(195,jvj+51,jvj+52)*/
for(a=x[jvj+52];a>0;a=t[a]) if(s[a]==V441) goto l62;
x[jvj+34]=0 ;z[jvj+34]=0;
goto l48;
l100:x[jvj+218]=s[x[jvj+232]] ;z[jvj+218]=(x[jvj+218]<=sepcte) ? x[jvj+218] : z[jvj+232];
if((x[jvj+218]==x[jvj+215])) goto l101;
pile[v[22]]=jvj+217; pile[WZ1]=jvj+218; 
(*f[68])( );     /*PLUE0(jvj+217,jvj+218)*/
l101:x[jvj+232]=t[x[jvj+232]];
goto l99;
}
