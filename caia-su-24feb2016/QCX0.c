#include "dx.h"
void QCX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V7=0,V9=0,V114=0,V115=0,V116=0,V118=0,V119=0,V117=0,V124=0,V122=0,V123=0,V125=0,V126=0,V127=0,V156=0,V157=0,V158=0,V159=0,V160=0,V161=0,V172=0,V169=0,V168=0,V166=0,V164=0,V165=0,V167=0,V170=0,V171=0,V173=0,V176=0,V174=0,V175=0,V128=0,V129=0,V143=0,V137=0,V134=0,V132=0,V130=0,V131=0,V133=0,V135=0,V136=0,V138=0,V141=0,V139=0,V140=0,V142=0,L=0,V150=0,V148=0,V149=0,V151=0,V152=0,V190=0,V191=0,V192=0,V193=0,V194=0,V195=0,V206=0,V203=0,V202=0,V200=0,V198=0,V199=0,V201=0,V204=0,V205=0,V207=0,V210=0,V208=0,V209=0,V153=0,V219=0,V217=0,V215=0,V218=0,V220=0,V216=0,V221=0,V213=0,V214=0,V146=0,V147=0,V185=0,V183=0,V181=0,V184=0,V186=0,V182=0,V187=0,V179=0,V180=0;
int I,E,Y;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=11283;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2216&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; E=pile[v[22]+1]; Y=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V9=I;
l4:L=incon;
pile[v[22]]=763; pile[WZ1]=E; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(763,E,jvj+2)*/
if((x[jvj+2]<=0)) goto l1;
x[jvj+18]=s[x[jvj+2]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+2];
V2=x[jvj+18];
x[jvj+8]=x[jvj+18] ;z[jvj+8]=z[jvj+18];
pile[WZ2]=V2; 
(*f[134])( );     /*OTA0(763,E,V2)*/
pile[v[22]]=350; pile[WZ1]=Y; 
(*f[134])( );     /*OTA0(350,Y,V2)*/
pile[v[22]]=145; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(145,Y,jvj+5)*/
if(x[jvj+5]!=25&&x[jvj+5]!=28) goto l16;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(515,Y,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,Y,V115)*/
V115=pile[WZ2]; 
if((V114>V115)) goto l16;
pile[v[22]]=322; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(322,Y,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=30; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,30,V118)*/
V118=pile[WZ2]; 
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=235; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(235,jvj+6,jvj+7)*/
pile[v[22]]=193; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(193,jvj+7,V119)*/
V119=pile[WZ2]; 
V117=V115-V114;
pile[v[22]]=(-2577); pile[WZ1]=V9; 
(*f[64])( );     /*SRA2((-2577),V9,V124)*/
V124=pile[WZ2]; 
pile[v[22]]=V124; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V124,40,V122)*/
V122=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=V122; 
(*f[2077])( );     /*SPR0(jvj+8,V122,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=V123; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V123,41,V125)*/
V125=pile[WZ2]; 
pile[v[22]]=V125; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V125,32,V126)*/
V126=pile[WZ2]; 
pile[v[22]]=V126; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V126,123,V127)*/
V127=pile[WZ2]; 
pile[v[22]]=145; pile[WZ1]=Y; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(145,Y,jvj+9)*/
if(x[jvj+9]!=25&&x[jvj+9]!=30) goto l20;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(510,Y,V156)*/
V156=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,Y,V157)*/
V157=pile[WZ2]; 
if((V156<V157)) goto l20;
pile[v[22]]=322; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(322,Y,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(241,87,V159)*/
V159=pile[WZ2]; 
pile[WZ1]=27; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(241,27,V160)*/
V160=pile[WZ2]; 
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=235; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(235,jvj+10,jvj+11)*/
pile[v[22]]=193; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(193,jvj+11,V161)*/
V161=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=V127; 
(*f[64])( );     /*SRA2((-2577),V127,V172)*/
V172=pile[WZ2]; 
pile[v[22]]=V172; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V172,40,V169)*/
V169=pile[WZ2]; 
pile[v[22]]=V159; pile[WZ1]=V169; 
(*f[64])( );     /*SRA2(V159,V169,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=(-8107); pile[WZ1]=V168; 
(*f[64])( );     /*SRA2((-8107),V168,V166)*/
V166=pile[WZ2]; 
pile[v[22]]=V166; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V166,91,V164)*/
V164=pile[WZ2]; 
pile[v[22]]=V158; pile[WZ1]=V164; 
(*f[99])( );     /*SPM0(V158,V164,V165)*/
V165=pile[WZ2]; 
pile[v[22]]=V165; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V165,93,V167)*/
V167=pile[WZ2]; 
pile[v[22]]=V160; pile[WZ1]=V167; 
(*f[64])( );     /*SRA2(V160,V167,V170)*/
V170=pile[WZ2]; 
pile[v[22]]=V157; pile[WZ1]=V170; 
(*f[99])( );     /*SPM0(V157,V170,V171)*/
V171=pile[WZ2]; 
pile[v[22]]=V171; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V171,41,V173)*/
V173=pile[WZ2]; 
pile[v[22]]=V173; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V173,32,V176)*/
V176=pile[WZ2]; 
pile[v[22]]=(-843); pile[WZ1]=V176; 
(*f[64])( );     /*SRA2((-843),V176,V174)*/
V174=pile[WZ2]; 
pile[v[22]]=V161; pile[WZ1]=V174; 
(*f[64])( );     /*SRA2(V161,V174,V175)*/
V175=pile[WZ2]; 
pile[v[22]]=V175; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V175,59,V128)*/
V128=pile[WZ2]; 
l6:pile[v[22]]=V128; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V128,125,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=(-2578); pile[WZ1]=V129; 
(*f[64])( );     /*SRA2((-2578),V129,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=V143; 
(*f[64])( );     /*SRA2((-2577),V143,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=V137; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V137,40,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=(-8107); pile[WZ1]=V134; 
(*f[64])( );     /*SRA2((-8107),V134,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=V132; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V132,91,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=V116; pile[WZ1]=V130; 
(*f[99])( );     /*SPM0(V116,V130,V131)*/
V131=pile[WZ2]; 
pile[v[22]]=V131; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V131,93,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=V118; pile[WZ1]=V133; 
(*f[64])( );     /*SRA2(V118,V133,V135)*/
V135=pile[WZ2]; 
pile[v[22]]=V117; pile[WZ1]=V135; 
(*f[99])( );     /*SPM0(V117,V135,V136)*/
V136=pile[WZ2]; 
pile[v[22]]=V136; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V136,41,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=V138; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V138,32,V141)*/
V141=pile[WZ2]; 
pile[v[22]]=(-843); pile[WZ1]=V141; 
(*f[64])( );     /*SRA2((-843),V141,V139)*/
V139=pile[WZ2]; 
pile[v[22]]=V119; pile[WZ1]=V139; 
(*f[64])( );     /*SRA2(V119,V139,V140)*/
V140=pile[WZ2]; 
pile[v[22]]=V140; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V140,59,V142)*/
V142=pile[WZ2]; 
pile[v[22]]=V142; 
(*f[656])( );     /*SPLN2(V142,L)*/
L=pile[WZ1]; 
l7:pile[v[22]]=Y; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(Y,510,1)*/
pile[WZ1]=515; pile[WZ2]=(-1); 
(*f[186])( );     /*BTC0(Y,515,(-1))*/
l1:pile[v[22]]=350; pile[WZ1]=Y; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(350,Y,jvj+3)*/
if((x[jvj+3]!=0)) goto l2;
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
V7=x[Y];
pile[v[22]]=1305; pile[WZ1]=jvj+4; pile[WZ2]=V7; 
(*f[134])( );     /*OTA0(1305,jvj+4,V7)*/
l2:if(L!=incon) goto l5;
J=V9;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l5:V9=L;
goto l4;
l9:pile[v[22]]=(-2577); pile[WZ1]=V9; 
(*f[64])( );     /*SRA2((-2577),V9,V150)*/
V150=pile[WZ2]; 
pile[v[22]]=V150; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V150,40,V148)*/
V148=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=V148; 
(*f[2077])( );     /*SPR0(jvj+8,V148,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=V149; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V149,41,V151)*/
V151=pile[WZ2]; 
pile[v[22]]=V151; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V151,32,V152)*/
V152=pile[WZ2]; 
pile[v[22]]=145; pile[WZ1]=Y; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(145,Y,jvj+12)*/
if(x[jvj+12]!=25&&x[jvj+12]!=30) goto l14;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(510,Y,V190)*/
V190=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(117,Y,V191)*/
V191=pile[WZ2]; 
if((V190<V191)) goto l14;
pile[v[22]]=322; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(322,Y,V192)*/
V192=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(241,87,V193)*/
V193=pile[WZ2]; 
pile[WZ1]=27; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(241,27,V194)*/
V194=pile[WZ2]; 
x[jvj+13]=vo[14];z[jvj+13]=vz[14];
pile[v[22]]=235; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(235,jvj+13,jvj+14)*/
pile[v[22]]=193; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(193,jvj+14,V195)*/
V195=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=V152; 
(*f[64])( );     /*SRA2((-2577),V152,V206)*/
V206=pile[WZ2]; 
pile[v[22]]=V206; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V206,40,V203)*/
V203=pile[WZ2]; 
pile[v[22]]=V193; pile[WZ1]=V203; 
(*f[64])( );     /*SRA2(V193,V203,V202)*/
V202=pile[WZ2]; 
pile[v[22]]=(-8107); pile[WZ1]=V202; 
(*f[64])( );     /*SRA2((-8107),V202,V200)*/
V200=pile[WZ2]; 
pile[v[22]]=V200; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V200,91,V198)*/
V198=pile[WZ2]; 
pile[v[22]]=V192; pile[WZ1]=V198; 
(*f[99])( );     /*SPM0(V192,V198,V199)*/
V199=pile[WZ2]; 
pile[v[22]]=V199; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V199,93,V201)*/
V201=pile[WZ2]; 
pile[v[22]]=V194; pile[WZ1]=V201; 
(*f[64])( );     /*SRA2(V194,V201,V204)*/
V204=pile[WZ2]; 
pile[v[22]]=V191; pile[WZ1]=V204; 
(*f[99])( );     /*SPM0(V191,V204,V205)*/
V205=pile[WZ2]; 
pile[v[22]]=V205; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V205,41,V207)*/
V207=pile[WZ2]; 
pile[v[22]]=V207; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V207,32,V210)*/
V210=pile[WZ2]; 
pile[v[22]]=(-843); pile[WZ1]=V210; 
(*f[64])( );     /*SRA2((-843),V210,V208)*/
V208=pile[WZ2]; 
pile[v[22]]=V195; pile[WZ1]=V208; 
(*f[64])( );     /*SRA2(V195,V208,V209)*/
V209=pile[WZ2]; 
pile[v[22]]=V209; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V209,59,V153)*/
V153=pile[WZ2]; 
l10:pile[v[22]]=V153; 
(*f[656])( );     /*SPLN2(V153,L)*/
L=pile[WZ1]; 
goto l7;
l12:pile[v[22]]=(-8107); pile[WZ1]=V152; 
(*f[64])( );     /*SRA2((-8107),V152,V219)*/
V219=pile[WZ2]; 
pile[v[22]]=V219; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V219,91,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=V215; pile[WZ1]=V217; 
(*f[99])( );     /*SPM0(V215,V217,V218)*/
V218=pile[WZ2]; 
pile[v[22]]=V218; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V218,93,V220)*/
V220=pile[WZ2]; 
pile[v[22]]=V216; pile[WZ1]=V220; 
(*f[64])( );     /*SRA2(V216,V220,V221)*/
V221=pile[WZ2]; 
pile[v[22]]=V221; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V221,59,V153)*/
V153=pile[WZ2]; 
goto l10;
l14:pile[v[22]]=322; pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(322,Y,V215)*/
V215=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(241,87,V216)*/
V216=pile[WZ2]; 
pile[v[22]]=145; pile[WZ1]=Y; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(145,Y,jvj+15)*/
if((x[jvj+15]==28)) goto l12;
l13:pile[v[22]]=510; pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(510,Y,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,Y,V214)*/
V214=pile[WZ2]; 
if((V213<V214)) goto l12;
l11:V153=V152;
goto l10;
l16:pile[v[22]]=145; pile[WZ1]=Y; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(145,Y,jvj+16)*/
if((x[jvj+16]==30)) goto l9;
l15:pile[v[22]]=515; pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(515,Y,V146)*/
V146=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,Y,V147)*/
V147=pile[WZ2]; 
if((V146>V147)) goto l9;
l8:L=V9;
goto l7;
l18:pile[v[22]]=(-8107); pile[WZ1]=V127; 
(*f[64])( );     /*SRA2((-8107),V127,V185)*/
V185=pile[WZ2]; 
pile[v[22]]=V185; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V185,91,V183)*/
V183=pile[WZ2]; 
pile[v[22]]=V181; pile[WZ1]=V183; 
(*f[99])( );     /*SPM0(V181,V183,V184)*/
V184=pile[WZ2]; 
pile[v[22]]=V184; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V184,93,V186)*/
V186=pile[WZ2]; 
pile[v[22]]=V182; pile[WZ1]=V186; 
(*f[64])( );     /*SRA2(V182,V186,V187)*/
V187=pile[WZ2]; 
pile[v[22]]=V187; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V187,59,V128)*/
V128=pile[WZ2]; 
goto l6;
l20:pile[v[22]]=322; pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(322,Y,V181)*/
V181=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(241,87,V182)*/
V182=pile[WZ2]; 
pile[v[22]]=145; pile[WZ1]=Y; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(145,Y,jvj+17)*/
if((x[jvj+17]==28)) goto l18;
l19:pile[v[22]]=510; pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(510,Y,V179)*/
V179=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,Y,V180)*/
V180=pile[WZ2]; 
if((V179<V180)) goto l18;
l17:V128=V127;
goto l6;
}
