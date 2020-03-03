#include "dx.h"
void Z162Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V93=0,V72=0,V99=0,V120=0,V127=0,V148=0,V176=0,V155=0,V182=0,V256=0,V283=0,V303=0,V323=0,V305=0,V216=0,V30=0,K=0,V18=0,V97=0,V100=0,V330=0,V350=0,V332=0,V241=0,V60=0,V40=0,V48=0,V180=0,V70=0,V73=0,V156=0,V125=0,V128=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=222;
x[jvj+1]=15663;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1888&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,NNNY,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=1215)) goto l32;
pile[v[22]]=107; pile[WZ1]=NNNY; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,NNNY,jvj+22)*/
x[jvj+210]=x[jvj+22] ;z[jvj+210]=z[jvj+22];
l27:if((x[jvj+210]>0)) goto l28;
x[jvj+211]=x[jvj+22] ;z[jvj+211]=z[jvj+22];
l30:if((x[jvj+211]<=0)) goto l32;
x[jvj+28]=s[x[jvj+211]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+211];
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=134)) goto l31;
x[jvj+216]=x[jvj+22] ;z[jvj+216]=z[jvj+22];
l75:if((x[jvj+216]>0)) goto l76;
l31:x[jvj+211]=t[x[jvj+211]];
goto l30;
l2:x[jvj+2]=s[x[jvj+63]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+63];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+3)*/
x[jvj+63]=t[x[jvj+63]];
l1:if((x[jvj+63]>0)) goto l2;
NNNT=85;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+172; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+172)*/
pile[v[22]]=jvj+172; pile[WZ1]=111; pile[WZ2]=jvj+173; 
(*f[54])( );     /*TRI1(jvj+172,111,jvj+173)*/
pile[v[22]]=jvj+173; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+174; 
(*f[301])( );     /*TRI11(jvj+173,jvj+4,107,jvj+174)*/
pile[v[22]]=jvj+174; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+174,22,100,jvj+64)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+64; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+33,jvj+64,NNNX)*/
l68:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l4:x[jvj+5]=s[x[jvj+115]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+115];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+6)*/
x[jvj+115]=t[x[jvj+115]];
l3:if((x[jvj+115]>0)) goto l4;
NNNT=85;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+181; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+181)*/
pile[v[22]]=jvj+181; pile[WZ1]=111; pile[WZ2]=jvj+182; 
(*f[54])( );     /*TRI1(jvj+181,111,jvj+182)*/
pile[v[22]]=jvj+182; pile[WZ1]=jvj+7; pile[WZ2]=107; pile[WZ3]=jvj+183; 
(*f[301])( );     /*TRI11(jvj+182,jvj+7,107,jvj+183)*/
pile[v[22]]=jvj+183; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+116; 
(*f[58])( );     /*TRI3(jvj+183,22,100,jvj+116)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+116; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+85,jvj+116,NNNX)*/
goto l68;
l5:V93=V70+1;
V72=V93;
l57:pile[v[22]]=103; pile[WZ1]=jvj+85; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+85,jvj+126)*/
pile[v[22]]=100; pile[WZ1]=jvj+126; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+126,jvj+127)*/
if((x[jvj+127]!=22)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+126,jvj+128)*/
pile[v[22]]=101; pile[WZ1]=jvj+128; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+128,jvj+129)*/
if(x[jvj+129]!=1215&&x[jvj+129]!=1214&&x[jvj+129]!=1273) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+126; pile[WZ2]=jvj+130; 
(*f[33])( );     /*FNDE0(107,jvj+126,jvj+130)*/
for(i=x[jvj+130],V73=0;i>0;i=t[i],V73++)  ;
if((V73!=V72)) goto l8;
NNNT=86;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+184; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+184)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V72; pile[WZ4]=jvj+186; 
(*f[192])( );     /*QUADRI4(100,41,130,V72,jvj+186)*/
pile[v[22]]=jvj+184; pile[WZ1]=111; pile[WZ2]=jvj+185; 
(*f[54])( );     /*TRI1(jvj+184,111,jvj+185)*/
pile[v[22]]=jvj+185; pile[WZ1]=jvj+186; pile[WZ2]=103; pile[WZ3]=jvj+187; 
(*f[58])( );     /*TRI3(jvj+185,jvj+186,103,jvj+187)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+126; pile[WZ4]=jvj+187; pile[WZ5]=jvj+131; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+126,jvj+187,jvj+131)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+131; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+85,jvj+131,NNNX)*/
goto l68;
l6:V99=V97;
l42:pile[v[22]]=102; pile[WZ1]=jvj+33; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+33,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+67,jvj+68)*/
if((x[jvj+68]!=22)) goto l22;
pile[v[22]]=111; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+67,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+69,jvj+70)*/
if(x[jvj+70]!=1215&&x[jvj+70]!=1273&&x[jvj+70]!=1214) goto l22;
pile[v[22]]=107; pile[WZ1]=jvj+67; pile[WZ2]=jvj+71; 
(*f[33])( );     /*FNDE0(107,jvj+67,jvj+71)*/
for(i=x[jvj+71],V100=0;i>0;i=t[i],V100++)  ;
if((V100>=V99)) goto l22;
NNNT=87;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+72; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+72)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+72; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+33,jvj+72,NNNX)*/
goto l68;
l7:V127=V125;
l60:pile[v[22]]=111; pile[WZ1]=jvj+125; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(111,jvj+125,jvj+140)*/
pile[v[22]]=101; pile[WZ1]=jvj+140; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(101,jvj+140,jvj+141)*/
if(x[jvj+141]!=1215&&x[jvj+141]!=1273&&x[jvj+141]!=1214) goto l61;
pile[v[22]]=107; pile[WZ1]=jvj+125; pile[WZ2]=jvj+142; 
(*f[33])( );     /*FNDE0(107,jvj+125,jvj+142)*/
for(i=x[jvj+142],V128=0;i>0;i=t[i],V128++)  ;
if((V128>=V127)) goto l61;
NNNT=87;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+143; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+143)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+143; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+85,jvj+143,NNNX)*/
goto l68;
l8:V155=incon;
if((x[jvj+87]==29)) goto l9;
V155=V70;
l58:pile[v[22]]=103; pile[WZ1]=jvj+85; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(103,jvj+85,jvj+132)*/
pile[v[22]]=100; pile[WZ1]=jvj+132; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(100,jvj+132,jvj+133)*/
if((x[jvj+133]!=22)) goto l59;
pile[v[22]]=111; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(111,jvj+132,jvj+134)*/
pile[v[22]]=101; pile[WZ1]=jvj+134; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(101,jvj+134,jvj+135)*/
if(x[jvj+135]!=1215&&x[jvj+135]!=1273&&x[jvj+135]!=1214) goto l59;
pile[v[22]]=107; pile[WZ1]=jvj+132; pile[WZ2]=jvj+136; 
(*f[33])( );     /*FNDE0(107,jvj+132,jvj+136)*/
for(i=x[jvj+136],V156=0;i>0;i=t[i],V156++)  ;
if((V156>=V155)) goto l59;
NNNT=88;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+137; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+137)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+137; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+85,jvj+137,NNNX)*/
goto l68;
l9:V176=V70+1;
V155=V176;
goto l58;
l10:V182=0;
l55:pile[v[22]]=100; pile[WZ1]=jvj+85; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(100,jvj+85,jvj+117)*/
if((x[jvj+117]!=22)) goto l56;
pile[v[22]]=102; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(102,jvj+85,jvj+118)*/
pile[v[22]]=130; pile[WZ1]=jvj+118; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(130,jvj+118,V180)*/
V180=pile[WZ2]; 
if((V180>=V182)) goto l56;
pile[v[22]]=103; pile[WZ1]=jvj+85; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(103,jvj+85,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=jvj+119; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(100,jvj+119,jvj+120)*/
if((x[jvj+120]!=22)) goto l56;
pile[v[22]]=111; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(111,jvj+119,jvj+121)*/
pile[v[22]]=101; pile[WZ1]=jvj+121; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(101,jvj+121,jvj+122)*/
if(x[jvj+122]!=1215&&x[jvj+122]!=1273&&x[jvj+122]!=1214) goto l56;
NNNT=89;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+123; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+123)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+123; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+85,jvj+123,NNNX)*/
goto l68;
l12:x[jvj+8]=s[x[jvj+53]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+53];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[987])( );if(v[102]) goto l13;     /*NEGEXP0(jvj+8,jvj+9)*/
pile[v[22]]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+9)*/
l13:x[jvj+53]=t[x[jvj+53]];
l11:if((x[jvj+53]>0)) goto l12;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+54; 
(*f[299])( );     /*COPEL0(jvj+10,jvj+54)*/
NNNT=90;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+169; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+169)*/
pile[v[22]]=jvj+169; pile[WZ1]=111; pile[WZ2]=jvj+170; 
(*f[54])( );     /*TRI1(jvj+169,111,jvj+170)*/
pile[v[22]]=jvj+170; pile[WZ1]=jvj+54; pile[WZ2]=107; pile[WZ3]=jvj+171; 
(*f[301])( );     /*TRI11(jvj+170,jvj+54,107,jvj+171)*/
pile[v[22]]=jvj+171; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+55; 
(*f[58])( );     /*TRI3(jvj+171,22,100,jvj+55)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+55; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+33,jvj+55,NNNX)*/
goto l68;
l15:x[jvj+11]=s[x[jvj+105]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+105];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[987])( );if(v[102]) goto l16;     /*NEGEXP0(jvj+11,jvj+12)*/
pile[v[22]]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+12)*/
l16:x[jvj+105]=t[x[jvj+105]];
l14:if((x[jvj+105]>0)) goto l15;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+106; 
(*f[299])( );     /*COPEL0(jvj+13,jvj+106)*/
NNNT=90;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+178; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+178)*/
pile[v[22]]=jvj+178; pile[WZ1]=111; pile[WZ2]=jvj+179; 
(*f[54])( );     /*TRI1(jvj+178,111,jvj+179)*/
pile[v[22]]=jvj+179; pile[WZ1]=jvj+106; pile[WZ2]=107; pile[WZ3]=jvj+180; 
(*f[301])( );     /*TRI11(jvj+179,jvj+106,107,jvj+180)*/
pile[v[22]]=jvj+180; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+107; 
(*f[58])( );     /*TRI3(jvj+180,22,100,jvj+107)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+107; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+85,jvj+107,NNNX)*/
goto l68;
l17:V256=incon;
if((x[jvj+35]==29)) goto l18;
V256=0;
l44:if((V97!=V256)) goto l45;
pile[v[22]]=102; pile[WZ1]=jvj+33; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,jvj+33,jvj+79)*/
pile[v[22]]=111; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(111,jvj+79,jvj+80)*/
pile[v[22]]=101; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(101,jvj+80,jvj+81)*/
if((x[jvj+81]!=1215)) goto l45;
pile[v[22]]=107; pile[WZ1]=jvj+79; pile[WZ2]=jvj+82; 
(*f[33])( );     /*FNDE0(107,jvj+79,jvj+82)*/
x[jvj+16]=0 ;z[jvj+16]=0;
l19:if((x[jvj+82]>0)) goto l20;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+83; 
(*f[299])( );     /*COPEL0(jvj+16,jvj+83)*/
NNNT=91;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+175; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+175)*/
pile[v[22]]=jvj+175; pile[WZ1]=111; pile[WZ2]=jvj+176; 
(*f[54])( );     /*TRI1(jvj+175,111,jvj+176)*/
pile[v[22]]=jvj+176; pile[WZ1]=jvj+83; pile[WZ2]=107; pile[WZ3]=jvj+177; 
(*f[301])( );     /*TRI11(jvj+176,jvj+83,107,jvj+177)*/
pile[v[22]]=jvj+177; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+84; 
(*f[58])( );     /*TRI3(jvj+177,22,100,jvj+84)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+84; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+33,jvj+84,NNNX)*/
goto l68;
l18:V256=1;
goto l44;
l20:x[jvj+14]=s[x[jvj+82]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+82];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[987])( );if(v[102]) goto l21;     /*NEGEXP0(jvj+14,jvj+15)*/
pile[v[22]]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+15)*/
l21:x[jvj+82]=t[x[jvj+82]];
goto l19;
l22:V283=incon;
if((x[jvj+35]==29)) goto l23;
V283=(-1);
l43:if((V97>V283)) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+33; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+33,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+73,jvj+74)*/
if((x[jvj+74]!=22)) goto l17;
pile[v[22]]=111; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+73,jvj+75)*/
pile[v[22]]=101; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+75,jvj+76)*/
if(x[jvj+76]!=1215&&x[jvj+76]!=1273&&x[jvj+76]!=1214) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+73; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(107,jvj+73,jvj+77)*/
NNNT=98;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+78)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+78; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+33,jvj+78,NNNX)*/
goto l68;
l23:V283=0;
goto l43;
l26:x[jvj+19]=s[x[jvj+157]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+157];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+19; 
(*f[522])( );     /*PLUB2(jvj+17,jvj+19)*/
x[jvj+157]=t[x[jvj+157]];
l25:if((x[jvj+157]>0)) goto l26;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+158; 
(*f[299])( );     /*COPEL0(jvj+17,jvj+158)*/
NNNT=106;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+188; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+188)*/
pile[WZ3]=1215; pile[WZ4]=jvj+190; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+190)*/
pile[v[22]]=jvj+190; pile[WZ1]=111; pile[WZ2]=jvj+191; 
(*f[54])( );     /*TRI1(jvj+190,111,jvj+191)*/
pile[v[22]]=jvj+191; pile[WZ1]=jvj+158; pile[WZ2]=107; pile[WZ3]=jvj+192; 
(*f[301])( );     /*TRI11(jvj+191,jvj+158,107,jvj+192)*/
pile[v[22]]=jvj+192; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+189; 
(*f[58])( );     /*TRI3(jvj+192,22,100,jvj+189)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+188; pile[WZ4]=jvj+159; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+188,jvj+159)*/
pile[v[22]]=jvj+159; pile[WZ1]=107; pile[WZ2]=jvj+189; 
(*f[36])( );     /*PLUSC0(jvj+159,107,jvj+189)*/
pile[v[22]]=jvj+156; pile[WZ1]=jvj+159; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+156,jvj+159,107)*/
pile[v[22]]=jvj+144; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+144,jvj+159,NNNX)*/
goto l68;
l28:x[jvj+23]=s[x[jvj+210]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+210];
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=135)) goto l29;
x[jvj+214]=x[jvj+22] ;z[jvj+214]=z[jvj+22];
l69:if((x[jvj+214]>0)) goto l70;
l29:x[jvj+210]=t[x[jvj+210]];
goto l27;
l32:pile[v[22]]=538; pile[WZ1]=NNNY; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(538,NNNY,jvj+33)*/
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(111,jvj+33,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=25)) goto l41;
x[jvj+36]=d[20];z[jvj+36]=0;
l33:if((x[jvj+36]>0)) goto l34;
x[jvj+46]=d[20];z[jvj+46]=0;
l36:if((x[jvj+46]>0)) goto l37;
x[jvj+56]=d[20];z[jvj+56]=0;
l39:if((x[jvj+56]<=0)) goto l41;
x[jvj+57]=s[x[jvj+56]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+56];
pile[v[22]]=jvj+57; pile[WZ1]=jvj+33; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(jvj+57,jvj+33,jvj+58)*/
pile[v[22]]=111; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,jvj+58,jvj+59)*/
pile[v[22]]=101; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+59,jvj+60)*/
if((x[jvj+60]!=1215)) goto l40;
pile[v[22]]=268; pile[WZ1]=jvj+57; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(268,jvj+57,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+33; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(jvj+61,jvj+33,jvj+62)*/
pile[v[22]]=130; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(130,jvj+62,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+58; pile[WZ2]=jvj+63; 
(*f[33])( );     /*FNDE0(107,jvj+58,jvj+63)*/
K=V30;
for(i=x[jvj+63],V18=0;i>0;i=t[i],V18++)  ;
if((V18!=K)) goto l40;
x[jvj+4]=0 ;z[jvj+4]=0;
goto l1;
l34:x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
pile[v[22]]=jvj+37; pile[WZ1]=jvj+33; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(jvj+37,jvj+33,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+38,jvj+39)*/
if((x[jvj+39]!=22)) goto l35;
pile[v[22]]=111; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+38,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+40,jvj+41)*/
V303=x[jvj+41];
if(V303!=1215&&V303!=1273&&V303!=1214) goto l35;
pile[v[22]]=268; pile[WZ1]=jvj+37; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(268,jvj+37,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+33; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(jvj+42,jvj+33,jvj+43)*/
pile[v[22]]=130; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(130,jvj+43,V323)*/
V323=pile[WZ2]; 
V305=V323;
if((V305>=0)) goto l35;
pile[v[22]]=107; pile[WZ1]=jvj+38; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(107,jvj+38,jvj+44)*/
NNNT=99;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+45)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+45; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+33,jvj+45,NNNX)*/
goto l68;
l35:x[jvj+36]=t[x[jvj+36]];
goto l33;
l37:x[jvj+47]=s[x[jvj+46]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+46];
pile[v[22]]=jvj+47; pile[WZ1]=jvj+33; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(jvj+47,jvj+33,jvj+48)*/
pile[v[22]]=111; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+48,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]!=1215)) goto l38;
pile[v[22]]=268; pile[WZ1]=jvj+47; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(268,jvj+47,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+33; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(jvj+51,jvj+33,jvj+52)*/
pile[v[22]]=130; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(130,jvj+52,V216)*/
V216=pile[WZ2]; 
if((V216!=0)) goto l38;
pile[v[22]]=107; pile[WZ1]=jvj+48; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(107,jvj+48,jvj+53)*/
x[jvj+10]=0 ;z[jvj+10]=0;
goto l11;
l38:x[jvj+46]=t[x[jvj+46]];
goto l36;
l40:x[jvj+56]=t[x[jvj+56]];
goto l39;
l41:if(x[jvj+35]!=29&&x[jvj+35]!=30) goto l45;
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(100,jvj+33,jvj+65)*/
if((x[jvj+65]!=22)) goto l45;
pile[v[22]]=103; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(103,jvj+33,jvj+66)*/
pile[v[22]]=130; pile[WZ1]=jvj+66; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(130,jvj+66,V97)*/
V97=pile[WZ2]; 
V99=incon;
if((x[jvj+35]==29)) goto l6;
V120=V97+1;
V99=V120;
goto l42;
l45:pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(539,NNNY,jvj+85)*/
pile[v[22]]=111; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(111,jvj+85,jvj+86)*/
pile[v[22]]=101; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(101,jvj+86,jvj+87)*/
if((x[jvj+87]!=25)) goto l54;
x[jvj+88]=d[20];z[jvj+88]=0;
l46:if((x[jvj+88]>0)) goto l47;
x[jvj+98]=d[20];z[jvj+98]=0;
l49:if((x[jvj+98]>0)) goto l50;
x[jvj+108]=d[20];z[jvj+108]=0;
l52:if((x[jvj+108]<=0)) goto l54;
x[jvj+109]=s[x[jvj+108]] ;z[jvj+109]=(x[jvj+109]<=sepcte) ? x[jvj+109] : z[jvj+108];
pile[v[22]]=jvj+109; pile[WZ1]=jvj+85; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(jvj+109,jvj+85,jvj+110)*/
pile[v[22]]=111; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(111,jvj+110,jvj+111)*/
pile[v[22]]=101; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(101,jvj+111,jvj+112)*/
if((x[jvj+112]!=1215)) goto l53;
pile[v[22]]=268; pile[WZ1]=jvj+109; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(268,jvj+109,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=jvj+85; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(jvj+113,jvj+85,jvj+114)*/
pile[v[22]]=130; pile[WZ1]=jvj+114; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(130,jvj+114,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+110; pile[WZ2]=jvj+115; 
(*f[33])( );     /*FNDE0(107,jvj+110,jvj+115)*/
V40=V60;
for(i=x[jvj+115],V48=0;i>0;i=t[i],V48++)  ;
if((V48!=V40)) goto l53;
x[jvj+7]=0 ;z[jvj+7]=0;
goto l3;
l47:x[jvj+89]=s[x[jvj+88]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+88];
pile[v[22]]=jvj+89; pile[WZ1]=jvj+85; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(jvj+89,jvj+85,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(100,jvj+90,jvj+91)*/
if((x[jvj+91]!=22)) goto l48;
pile[v[22]]=111; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(111,jvj+90,jvj+92)*/
pile[v[22]]=101; pile[WZ1]=jvj+92; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(101,jvj+92,jvj+93)*/
V330=x[jvj+93];
if(V330!=1215&&V330!=1273&&V330!=1214) goto l48;
pile[v[22]]=268; pile[WZ1]=jvj+89; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(268,jvj+89,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=jvj+85; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(jvj+94,jvj+85,jvj+95)*/
pile[v[22]]=130; pile[WZ1]=jvj+95; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(130,jvj+95,V350)*/
V350=pile[WZ2]; 
V332=V350;
if((V332>=0)) goto l48;
pile[v[22]]=107; pile[WZ1]=jvj+90; pile[WZ2]=jvj+96; 
(*f[33])( );     /*FNDE0(107,jvj+90,jvj+96)*/
NNNT=99;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+97; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+97)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+97; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+85,jvj+97,NNNX)*/
goto l68;
l48:x[jvj+88]=t[x[jvj+88]];
goto l46;
l50:x[jvj+99]=s[x[jvj+98]] ;z[jvj+99]=(x[jvj+99]<=sepcte) ? x[jvj+99] : z[jvj+98];
pile[v[22]]=jvj+99; pile[WZ1]=jvj+85; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(jvj+99,jvj+85,jvj+100)*/
pile[v[22]]=111; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,jvj+100,jvj+101)*/
pile[v[22]]=101; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+101,jvj+102)*/
if((x[jvj+102]!=1215)) goto l51;
pile[v[22]]=268; pile[WZ1]=jvj+99; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(268,jvj+99,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=jvj+85; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(jvj+103,jvj+85,jvj+104)*/
pile[v[22]]=130; pile[WZ1]=jvj+104; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(130,jvj+104,V241)*/
V241=pile[WZ2]; 
if((V241!=0)) goto l51;
pile[v[22]]=107; pile[WZ1]=jvj+100; pile[WZ2]=jvj+105; 
(*f[33])( );     /*FNDE0(107,jvj+100,jvj+105)*/
x[jvj+13]=0 ;z[jvj+13]=0;
goto l14;
l51:x[jvj+98]=t[x[jvj+98]];
goto l49;
l53:x[jvj+108]=t[x[jvj+108]];
goto l52;
l54:if(x[jvj+87]!=30&&x[jvj+87]!=29) goto l61;
V182=incon;
if((x[jvj+87]==29)) goto l10;
V182=1;
goto l55;
l56:pile[v[22]]=100; pile[WZ1]=jvj+85; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(100,jvj+85,jvj+124)*/
if((x[jvj+124]!=22)) goto l61;
pile[v[22]]=102; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(102,jvj+85,jvj+125)*/
pile[v[22]]=130; pile[WZ1]=jvj+125; 
(*f[26])( );if(v[102]) goto l59;     /*FNDC0(130,jvj+125,V70)*/
V70=pile[WZ2]; 
V72=incon;
if((x[jvj+87]==29)) goto l5;
V72=V70;
goto l57;
l59:pile[v[22]]=100; pile[WZ1]=jvj+125; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(100,jvj+125,jvj+138)*/
if((x[jvj+138]!=22)) goto l61;
pile[v[22]]=103; pile[WZ1]=jvj+85; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(103,jvj+85,jvj+139)*/
pile[v[22]]=130; pile[WZ1]=jvj+139; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(130,jvj+139,V125)*/
V125=pile[WZ2]; 
V127=incon;
if((x[jvj+87]==29)) goto l7;
V148=V125+1;
V127=V148;
goto l60;
l61:pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+144; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(543,NNNY,jvj+144)*/
pile[v[22]]=111; pile[WZ1]=jvj+144; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(111,jvj+144,jvj+145)*/
pile[v[22]]=101; pile[WZ1]=jvj+145; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(101,jvj+145,jvj+146)*/
if((x[jvj+146]!=485)) goto l67;
pile[v[22]]=107; pile[WZ1]=jvj+144; pile[WZ2]=jvj+147; 
(*f[33])( );     /*FNDE0(107,jvj+144,jvj+147)*/
x[jvj+218]=x[jvj+147] ;z[jvj+218]=z[jvj+147];
l81:if((x[jvj+218]>0)) goto l82;
l67:x[NNNX]=NNNT=incon;
l66:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l63:x[jvj+212]=t[x[jvj+212]];
l62:if((x[jvj+212]<=0)) goto l67;
x[jvj+148]=s[x[jvj+212]] ;z[jvj+148]=(x[jvj+148]<=sepcte) ? x[jvj+148] : z[jvj+212];
if((x[NNNY]!=x[jvj+148])) goto l63;
pile[v[22]]=111; pile[WZ1]=jvj+148; pile[WZ2]=jvj+149; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(111,jvj+148,jvj+149)*/
pile[v[22]]=101; pile[WZ1]=jvj+149; pile[WZ2]=jvj+150; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(101,jvj+149,jvj+150)*/
if((x[jvj+150]!=1215)) goto l63;
pile[v[22]]=107; pile[WZ1]=jvj+148; pile[WZ2]=jvj+151; 
(*f[33])( );     /*FNDE0(107,jvj+148,jvj+151)*/
x[jvj+213]=x[jvj+147] ;z[jvj+213]=z[jvj+147];
l64:if((x[jvj+213]<=0)) goto l63;
x[jvj+152]=s[x[jvj+213]] ;z[jvj+152]=(x[jvj+152]<=sepcte) ? x[jvj+152] : z[jvj+213];
if((x[jvj+148]==x[jvj+152])) goto l65;
pile[v[22]]=111; pile[WZ1]=jvj+152; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(111,jvj+152,jvj+153)*/
pile[v[22]]=101; pile[WZ1]=jvj+153; pile[WZ2]=jvj+154; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(101,jvj+153,jvj+154)*/
if((x[jvj+154]!=1215)) goto l65;
x[jvj+206]=x[jvj+152] ;z[jvj+206]=z[jvj+152];
x[jvj+220]=x[jvj+222] ;z[jvj+220]=z[jvj+222];
l87:if((x[jvj+220]>0)) goto l88;
l65:x[jvj+213]=t[x[jvj+213]];
goto l64;
l70:x[jvj+193]=s[x[jvj+214]] ;z[jvj+193]=(x[jvj+193]<=sepcte) ? x[jvj+193] : z[jvj+214];
pile[v[22]]=jvj+193; pile[WZ1]=jvj+23; pile[WZ2]=jvj+194; 
(*f[760])( );     /*MEMEX0(jvj+193,jvj+23,jvj+194)*/
if((x[jvj+194]==135)) goto l71;
x[jvj+214]=t[x[jvj+214]];
goto l69;
l71:x[jvj+195]=0 ;z[jvj+195]=0;
x[jvj+215]=x[jvj+22] ;z[jvj+215]=z[jvj+22];
l72:if((x[jvj+215]>0)) goto l73;
x[jvj+25]=x[jvj+195] ;z[jvj+25]=z[jvj+195];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[299])( );     /*COPEL0(jvj+25,jvj+26)*/
NNNT=84;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+160; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+160)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+161; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+161)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1215; pile[WZ4]=jvj+163; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+163)*/
pile[v[22]]=jvj+163; pile[WZ1]=111; pile[WZ2]=jvj+164; 
(*f[54])( );     /*TRI1(jvj+163,111,jvj+164)*/
pile[v[22]]=jvj+164; pile[WZ1]=jvj+26; pile[WZ2]=107; pile[WZ3]=jvj+165; 
(*f[301])( );     /*TRI11(jvj+164,jvj+26,107,jvj+165)*/
pile[v[22]]=jvj+165; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+162; 
(*f[58])( );     /*TRI3(jvj+165,22,100,jvj+162)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+160; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+160,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=107; pile[WZ2]=jvj+161; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+161)*/
pile[WZ2]=jvj+162; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+162)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+27; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+27,NNNX)*/
goto l68;
l73:x[jvj+196]=s[x[jvj+215]] ;z[jvj+196]=(x[jvj+196]<=sepcte) ? x[jvj+196] : z[jvj+215];
if((x[jvj+196]==x[jvj+193])) goto l74;
pile[v[22]]=jvj+195; pile[WZ1]=jvj+196; 
(*f[68])( );     /*PLUE0(jvj+195,jvj+196)*/
l74:x[jvj+215]=t[x[jvj+215]];
goto l72;
l76:x[jvj+197]=s[x[jvj+216]] ;z[jvj+197]=(x[jvj+197]<=sepcte) ? x[jvj+197] : z[jvj+216];
pile[v[22]]=jvj+197; pile[WZ1]=jvj+28; pile[WZ2]=jvj+198; 
(*f[760])( );     /*MEMEX0(jvj+197,jvj+28,jvj+198)*/
if((x[jvj+198]==135)) goto l77;
x[jvj+216]=t[x[jvj+216]];
goto l75;
l77:x[jvj+199]=0 ;z[jvj+199]=0;
x[jvj+217]=x[jvj+22] ;z[jvj+217]=z[jvj+22];
l78:if((x[jvj+217]>0)) goto l79;
x[jvj+30]=x[jvj+199] ;z[jvj+30]=z[jvj+199];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[299])( );     /*COPEL0(jvj+30,jvj+31)*/
NNNT=119;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1215; pile[WZ4]=jvj+166; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+166)*/
pile[v[22]]=jvj+166; pile[WZ1]=111; pile[WZ2]=jvj+167; 
(*f[54])( );     /*TRI1(jvj+166,111,jvj+167)*/
pile[v[22]]=jvj+167; pile[WZ1]=jvj+31; pile[WZ2]=107; pile[WZ3]=jvj+168; 
(*f[301])( );     /*TRI11(jvj+167,jvj+31,107,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+168,22,100,jvj+32)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+32; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+32,NNNX)*/
goto l68;
l79:x[jvj+200]=s[x[jvj+217]] ;z[jvj+200]=(x[jvj+200]<=sepcte) ? x[jvj+200] : z[jvj+217];
if((x[jvj+200]==x[jvj+197])) goto l80;
pile[v[22]]=jvj+199; pile[WZ1]=jvj+200; 
(*f[68])( );     /*PLUE0(jvj+199,jvj+200)*/
l80:x[jvj+217]=t[x[jvj+217]];
goto l78;
l82:x[jvj+201]=s[x[jvj+218]] ;z[jvj+201]=(x[jvj+201]<=sepcte) ? x[jvj+201] : z[jvj+218];
pile[v[22]]=jvj+201; pile[WZ1]=NNNY; pile[WZ2]=jvj+202; 
(*f[760])( );     /*MEMEX0(jvj+201,NNNY,jvj+202)*/
if((x[jvj+202]==135)) goto l83;
x[jvj+218]=t[x[jvj+218]];
goto l81;
l83:x[jvj+203]=0 ;z[jvj+203]=0;
x[jvj+219]=x[jvj+147] ;z[jvj+219]=z[jvj+147];
l84:if((x[jvj+219]>0)) goto l85;
x[jvj+222]=x[jvj+203] ;z[jvj+222]=z[jvj+203];
x[jvj+212]=x[jvj+147] ;z[jvj+212]=z[jvj+147];
goto l62;
l85:x[jvj+204]=s[x[jvj+219]] ;z[jvj+204]=(x[jvj+204]<=sepcte) ? x[jvj+204] : z[jvj+219];
if((x[jvj+204]==x[jvj+201])) goto l86;
pile[v[22]]=jvj+203; pile[WZ1]=jvj+204; 
(*f[68])( );     /*PLUE0(jvj+203,jvj+204)*/
l86:x[jvj+219]=t[x[jvj+219]];
goto l84;
l88:x[jvj+205]=s[x[jvj+220]] ;z[jvj+205]=(x[jvj+205]<=sepcte) ? x[jvj+205] : z[jvj+220];
pile[v[22]]=jvj+205; pile[WZ1]=jvj+206; pile[WZ2]=jvj+207; 
(*f[760])( );     /*MEMEX0(jvj+205,jvj+206,jvj+207)*/
if((x[jvj+207]==135)) goto l89;
x[jvj+220]=t[x[jvj+220]];
goto l87;
l89:x[jvj+208]=0 ;z[jvj+208]=0;
x[jvj+221]=x[jvj+222] ;z[jvj+221]=z[jvj+222];
l90:if((x[jvj+221]>0)) goto l91;
x[jvj+155]=x[jvj+208] ;z[jvj+155]=z[jvj+208];
pile[v[22]]=jvj+155; pile[WZ1]=jvj+156; 
(*f[299])( );     /*COPEL0(jvj+155,jvj+156)*/
pile[v[22]]=107; pile[WZ1]=jvj+152; pile[WZ2]=jvj+157; 
(*f[33])( );     /*FNDE0(107,jvj+152,jvj+157)*/
x[jvj+17]=0 ;z[jvj+17]=0;
l24:if((x[jvj+151]<=0)) goto l25;
x[jvj+18]=s[x[jvj+151]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+151];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[522])( );     /*PLUB2(jvj+17,jvj+18)*/
x[jvj+151]=t[x[jvj+151]];
goto l24;
l91:x[jvj+209]=s[x[jvj+221]] ;z[jvj+209]=(x[jvj+209]<=sepcte) ? x[jvj+209] : z[jvj+221];
if((x[jvj+209]==x[jvj+205])) goto l92;
pile[v[22]]=jvj+208; pile[WZ1]=jvj+209; 
(*f[68])( );     /*PLUE0(jvj+208,jvj+209)*/
l92:x[jvj+221]=t[x[jvj+221]];
goto l90;
}
