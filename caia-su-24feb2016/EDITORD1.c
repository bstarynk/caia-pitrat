#include "dx.h"
void EDITORD1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V44=0,V37=0,V39=0,V38=0,V45=0,T=0,V40=0,V56=0,V58=0,V84=0,V161=0,V162=0,V163=0,V164=0,V102=0,V33=0,V29=0,V27=0,V28=0,V31=0,V25=0,V32=0,V20=0,V21=0,V10=0,V97=0,V94=0,V93=0,V95=0,V88=0,V89=0,V115=0,I=0,V109=0,V108=0,V180=0,V181=0,V179=0,V175=0,V176=0,V128=0,V126=0,V127=0,V130=0,V125=0,V131=0,V134=0,V171=0,V172=0,V173=0,V174=0,V150=0,V151=0,JJ=0,V152=0,M=0,V76=0,V166=0,V167=0,V168=0,V169=0,V72=0,V73=0,V70=0,F=0,NR=0,V159=0,V160=0,V68=0,V154=0,V153=0,V156=0,V157=0,V141=0,V142=0,V149=0,V140=0;
int KR,UR,N,S;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=163;
x[jvj+1]=10305;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==313&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
KR=pile[v[22]]; UR=pile[v[22]+1]; N=pile[v[22]+2]; S=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=x[jvj+64]=x[jvj+55]=V141=incon;
if((KR==80)) goto l21;
if((KR==65)) goto l22;
if((KR!=69)) goto l41;
x[jvj+32]=924 ;z[jvj+32]=924;
l23:pile[v[22]]=120; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(120,jvj+32,jvj+33)*/
pile[v[22]]=698; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(698,jvj+33,jvj+34)*/
pile[v[22]]=683; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(683,jvj+34,V33)*/
V33=pile[WZ2]; 
if((V33!=N)) goto l24;
pile[v[22]]=jvj+34; 
(*f[183])( );     /*ENLEVENATTENTE0(jvj+34)*/
l24:x[jvj+32]=x[jvj+33] ;z[jvj+32]=z[jvj+33];
goto l23;
l1:pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(457,324,jvj+3)*/
l2:if((x[jvj+3]<=0)) goto l117;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(683,jvj+4,V14)*/
V14=pile[WZ2]; 
if((V14!=N)) goto l3;
pile[v[22]]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+4)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l2;
l5:V38=V39;
l126:if(V38!=incon) goto l127;
l123:x[jvj+161]=t[x[jvj+161]];
l122:if((x[jvj+161]<=0)) goto l121;
x[jvj+6]=s[x[jvj+161]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+161];
V40=incon;
pile[v[22]]=493; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(493,jvj+6,V45)*/
V45=pile[WZ2]; 
T=V45;
V40=T;
l6:if(V40==incon) goto l7;
l124:if(V40!=incon) goto l125;
goto l123;
l7:V40=(-1);
goto l124;
l9:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=683; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(683,jvj+8,V56)*/
V56=pile[WZ2]; 
if((V56==N)) goto l145;
l10:x[jvj+7]=t[x[jvj+7]];
l8:if((x[jvj+7]>0)) goto l9;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(645,597,jvj+9)*/
l11:if((x[jvj+9]<=0)) goto l145;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=683; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(683,jvj+10,V58)*/
V58=pile[WZ2]; 
if((V58!=1)) goto l12;
pile[v[22]]=N; pile[WZ1]=683; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(N,683,jvj+19)*/
pile[v[22]]=265; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(265,jvj+10,jvj+15)*/
l14:if((x[jvj+15]>0)) goto l15;
pile[v[22]]=597; pile[WZ1]=645; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(597,645,jvj+19)*/
l145:if((KR==83)) goto l146;
if((KR!=69)) goto l144;
V140=incon;
V141=(-999999);
if(V141!=incon) goto l131;
l138:if(V141!=incon) goto l139;
l140:if(V140==incon) goto l141;
l142:if(V140!=incon) goto l143;
l144:if((x[S]!=68)) goto l146;
pile[v[22]]=N; 
(*f[136])( );     /*EDITORD0(N)*/
l146:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l12:x[jvj+9]=t[x[jvj+9]];
goto l11;
l15:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=158; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(158,jvj+16,jvj+17)*/
pile[v[22]]=120; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(120,jvj+16,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+12)*/
if((KR!=67)) goto l147;
x[jvj+11]=d[12];z[jvj+11]=0;
l13:if((x[jvj+11]<=0)) goto l147;
x[jvj+128]=s[x[jvj+11]] ;z[jvj+128]=(x[jvj+128]<=sepcte) ? x[jvj+128] : z[jvj+11];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+128; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+128,jvj+13)*/
pile[WZ3]=989; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,989,jvj+14)*/
pile[v[22]]=68; pile[WZ1]=jvj+14; pile[WZ2]=38; pile[WZ3]=jvj+12; pile[WZ4]=jvj+13; pile[WZ5]=597; pile[v[22]+6]=jvj+12; 
(*f[337])( );     /*EAFA0(68,jvj+14,38,jvj+12,jvj+13,597,jvj+12)*/
x[jvj+11]=t[x[jvj+11]];
goto l13;
l18:x[jvj+21]=t[x[jvj+21]];
l17:if((x[jvj+21]<=0)) goto l130;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=683; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(683,jvj+22,V84)*/
V84=pile[WZ2]; 
if((V84!=N)) goto l18;
pile[v[22]]=265; pile[WZ2]=jvj+114; 
(*f[33])( );     /*FNDE0(265,jvj+22,jvj+114)*/
pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+115; 
(*f[78])( );if(v[102]) goto l130;     /*SMA0(1,64,67,jvj+115)*/
l129:if((x[jvj+114]<=0)) goto l130;
x[jvj+116]=s[x[jvj+114]] ;z[jvj+116]=(x[jvj+116]<=sepcte) ? x[jvj+116] : z[jvj+114];
pile[v[22]]=jvj+115; pile[WZ1]=jvj+116; 
(*f[428])( );     /*SUPBOULN0(jvj+115,jvj+116)*/
x[jvj+114]=t[x[jvj+114]];
goto l129;
l21:pile[v[22]]=jvj+30; 
(*f[138])( );if(v[102]) goto l41;     /*EXPPB0(jvj+30)*/
pile[WZ1]=898; pile[WZ2]=jvj+31; 
(*f[300])( );     /*TRI10(jvj+30,898,jvj+31)*/
pile[v[22]]=jvj+31; 
(*f[422])( );     /*RECHPB0(jvj+31)*/
(*f[423])( );     /*INTRECHPB0(jvj+31)*/
l41:pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(645,597,jvj+52)*/
x[jvj+159]=x[jvj+52] ;z[jvj+159]=z[jvj+52];
l42:if((x[jvj+159]<=0)) goto l44;
x[jvj+53]=s[x[jvj+159]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+159];
pile[v[22]]=683; pile[WZ1]=jvj+53; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(683,jvj+53,V10)*/
V10=pile[WZ2]; 
if((V10!=N)) goto l43;
x[jvj+55]=x[jvj+53] ;z[jvj+55]=z[jvj+53];
l44:if(x[jvj+64]==incon) goto l45;
l77:if(x[jvj+55]!=incon) goto l78;
l94:if((KR!=84)) goto l95;
pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,M)*/
M=pile[WZ1]; 
pile[v[22]]=N; pile[WZ1]=M; 
(*f[424])( );     /*CRETENACE0(N,M)*/
l95:if((KR!=86)) goto l96;
pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,V76)*/
V76=pile[WZ1]; 
pile[v[22]]=N; pile[WZ1]=V76; pile[WZ2]=UR; 
(*f[426])( );     /*COMPARNORD0(N,V76,UR)*/
l96:if(x[jvj+64]==incon) goto l97;
l110:if((KR!=71)) goto l113;
pile[v[22]]=1549; pile[WZ1]=240; pile[WZ2]=jvj+107; 
(*f[33])( );     /*FNDE0(1549,240,jvj+107)*/
l111:if((x[jvj+107]<=0)) goto l113;
x[jvj+24]=s[x[jvj+107]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+107];
pile[v[22]]=109; pile[WZ1]=jvj+24; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l112;     /*FNDO0(109,jvj+24,jvj+108)*/
x[jvj+28]=x[jvj+108] ;z[jvj+28]=z[jvj+108];
pile[v[22]]=184; pile[WZ1]=jvj+28; 
(*f[71])( );     /*ENLV0(184,jvj+28)*/
pile[v[22]]=1539; pile[WZ1]=240; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1539,240,jvj+23)*/
pile[v[22]]=449; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l148;     /*FNDO0(449,jvj+24,jvj+25)*/
x[jvj+154]=x[jvj+23] ;z[jvj+154]=z[jvj+23];
l19:if((x[jvj+154]<=0)) goto l148;
x[jvj+26]=s[x[jvj+154]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+154];
pile[v[22]]=117; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+26,V102)*/
V102=pile[WZ2]; 
pile[v[22]]=jvj+25; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(jvj+25,jvj+26,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+133; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+133)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3496); pile[WZ4]=jvj+137; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3496),jvj+137)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V102; pile[WZ4]=jvj+135; 
(*f[192])( );     /*QUADRI4(100,41,130,V102,jvj+135)*/
pile[v[22]]=jvj+133; pile[WZ1]=111; pile[WZ2]=jvj+134; 
(*f[54])( );     /*TRI1(jvj+133,111,jvj+134)*/
pile[v[22]]=jvj+134; pile[WZ1]=jvj+135; pile[WZ2]=103; pile[WZ3]=jvj+136; 
(*f[58])( );     /*TRI3(jvj+134,jvj+135,103,jvj+136)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+137; pile[WZ4]=jvj+136; pile[WZ5]=jvj+129; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+137,jvj+136,jvj+129)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+27; pile[WZ4]=jvj+140; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+27,jvj+140)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9977); pile[WZ4]=jvj+143; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9977),jvj+143)*/
pile[WZ4]=jvj+141; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9977),jvj+141)*/
pile[v[22]]=jvj+141; pile[WZ1]=103; pile[WZ2]=jvj+142; 
(*f[54])( );     /*TRI1(jvj+141,103,jvj+142)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+143; pile[WZ4]=jvj+142; pile[WZ5]=jvj+138; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+143,jvj+142,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+139; 
(*f[180])( );     /*TRIENS0(jvj+138,(-20),114,jvj+139)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+140; pile[WZ4]=jvj+139; pile[WZ5]=jvj+131; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+140,jvj+139,jvj+131)*/
pile[v[22]]=jvj+129; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+130; 
(*f[180])( );     /*TRIENS0(jvj+129,(-20),107,jvj+130)*/
pile[v[22]]=jvj+131; pile[WZ2]=jvj+130; pile[WZ3]=105; pile[WZ4]=jvj+132; 
(*f[298])( );     /*TRIENS1(jvj+131,(-20),jvj+130,105,jvj+132)*/
pile[v[22]]=jvj+132; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+132,42,100,jvj+29)*/
pile[v[22]]=jvj+28; pile[WZ1]=184; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+28,184,jvj+29)*/
l20:x[jvj+154]=t[x[jvj+154]];
goto l19;
l22:pile[v[22]]=N; 
(*f[420])( );     /*FAITCOND0(N)*/
goto l41;
l25:pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(1484,854,V29)*/
V29=pile[WZ2]; 
V27=sepfacts+1;
V28=sepfacts+V29;
l26:if((V27>V28)) goto l30;
V31=r[V27];
if((V31!=1)) goto l27;
x[jvj+35]=V27 ;z[jvj+35]=(V27<=sepcte) ? V27 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(983,jvj+35,jvj+36)*/
x[jvj+37]=x[jvj+36] ;z[jvj+37]=z[jvj+36];
pile[v[22]]=863; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(863,jvj+37,jvj+38)*/
x[jvj+155]=x[jvj+38] ;z[jvj+155]=z[jvj+38];
l28:if((x[jvj+155]<=0)) goto l27;
x[jvj+39]=s[x[jvj+155]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+155];
pile[v[22]]=683; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(683,jvj+39,V25)*/
V25=pile[WZ2]; 
if((V25!=N)) goto l29;
V32=x[jvj+39];
pile[v[22]]=863; pile[WZ1]=jvj+37; pile[WZ2]=V32; 
(*f[134])( );     /*OTA0(863,jvj+37,V32)*/
l29:x[jvj+155]=t[x[jvj+155]];
goto l28;
l27:V27++;
goto l26;
l30:if((UR==45)) goto l34;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(457,324,jvj+40)*/
l31:if((x[jvj+40]<=0)) goto l34;
x[jvj+41]=s[x[jvj+40]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+40];
pile[v[22]]=983; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(983,jvj+41,jvj+42)*/
pile[v[22]]=878; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(878,jvj+42,jvj+43)*/
x[jvj+156]=x[jvj+43] ;z[jvj+156]=z[jvj+43];
l33:if((x[jvj+156]<=0)) goto l32;
x[jvj+44]=s[x[jvj+156]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+156];
pile[v[22]]=493; pile[WZ1]=jvj+44; 
(*f[71])( );     /*ENLV0(493,jvj+44)*/
x[jvj+156]=t[x[jvj+156]];
goto l33;
l32:x[jvj+40]=t[x[jvj+40]];
goto l31;
l34:pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(457,324,jvj+45)*/
l35:if((x[jvj+45]<=0)) goto l41;
x[jvj+46]=s[x[jvj+45]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+45];
pile[v[22]]=983; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(983,jvj+46,jvj+47)*/
pile[v[22]]=878; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(878,jvj+47,jvj+48)*/
x[jvj+157]=x[jvj+48] ;z[jvj+157]=z[jvj+48];
l37:if((x[jvj+157]<=0)) goto l36;
x[jvj+49]=s[x[jvj+157]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+157];
pile[v[22]]=944; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(944,jvj+49,jvj+50)*/
x[jvj+158]=x[jvj+50] ;z[jvj+158]=z[jvj+50];
l38:if((x[jvj+158]>0)) goto l39;
x[jvj+157]=t[x[jvj+157]];
goto l37;
l36:x[jvj+45]=t[x[jvj+45]];
goto l35;
l39:x[jvj+51]=s[x[jvj+158]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+158];
pile[v[22]]=683; pile[WZ1]=jvj+51; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(683,jvj+51,V20)*/
V20=pile[WZ2]; 
if((V20!=N)) goto l40;
V21=x[jvj+51];
pile[v[22]]=944; pile[WZ1]=jvj+49; pile[WZ2]=V21; 
(*f[134])( );     /*OTA0(944,jvj+49,V21)*/
l40:x[jvj+158]=t[x[jvj+158]];
goto l38;
l43:x[jvj+159]=t[x[jvj+159]];
goto l42;
l45:if(KR==70||KR==68) goto l46;
goto l77;
l47:x[jvj+52]=t[x[jvj+52]];
l46:if((x[jvj+52]<=0)) goto l77;
x[jvj+54]=s[x[jvj+52]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+52];
pile[v[22]]=683; pile[WZ1]=jvj+54; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(683,jvj+54,V97)*/
V97=pile[WZ2]; 
if((V97!=N)) goto l47;
x[jvj+64]=x[jvj+54] ;z[jvj+64]=z[jvj+54];
if((KR!=70)) goto l77;
pile[v[22]]=20; pile[WZ1]=10305; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10305,0,V161)*/
V161=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V161; pile[WZ2]=333; 
(*f[42])( );     /*SRA1(135,V161,333,V162)*/
V162=pile[WZ3]; 
pile[v[22]]=V162; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V162,58,V163)*/
V163=pile[WZ2]; 
pile[v[22]]=V163; pile[WZ1]=N; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V163,N,41,V164)*/
V164=pile[WZ3]; 
pile[v[22]]=V164; 
(*f[40])( );     /*SLG0(V164)*/
goto l77;
l48:pile[v[22]]=1418; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(1418,jvj+55,jvj+56)*/
if((x[jvj+56]==68)) goto l88;
l87:pile[v[22]]=N; 
(*f[420])( );     /*FAITCOND0(N)*/
pile[v[22]]=265; pile[WZ1]=jvj+55; pile[WZ2]=jvj+57; 
(*f[33])( );     /*FNDE0(265,jvj+55,jvj+57)*/
l49:if((x[jvj+57]<=0)) goto l88;
x[jvj+58]=s[x[jvj+57]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+57];
pile[v[22]]=120; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(120,jvj+58,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=KR; pile[WZ2]=UR; pile[WZ3]=N; 
(*f[311])( );     /*FINDEX0(jvj+59,KR,UR,N)*/
l50:x[jvj+57]=t[x[jvj+57]];
goto l49;
l51:pile[v[22]]=1418; pile[WZ1]=jvj+55; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(1418,jvj+55,jvj+60)*/
if((x[jvj+60]==68)) goto l94;
l91:pile[v[22]]=265; pile[WZ1]=jvj+55; pile[WZ2]=jvj+99; 
(*f[33])( );     /*FNDE0(265,jvj+55,jvj+99)*/
l92:if((x[jvj+99]<=0)) goto l94;
x[jvj+100]=s[x[jvj+99]] ;z[jvj+100]=(x[jvj+100]<=sepcte) ? x[jvj+100] : z[jvj+99];
pile[v[22]]=158; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(158,jvj+100,jvj+101)*/
pile[v[22]]=120; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(120,jvj+100,jvj+102)*/
pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(30,0,32,V150)*/
V150=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V150; pile[WZ2]=jvj+101; 
(*f[42])( );     /*SRA1(135,V150,jvj+101,V151)*/
V151=pile[WZ3]; 
pile[v[22]]=V151; 
(*f[40])( );     /*SLG0(V151)*/
pile[v[22]]=10; pile[WZ1]=jvj+102; pile[WZ2]=0; 
(*f[421])( );     /*XO0(10,jvj+102,0,JJ)*/
JJ=pile[WZ3]; 
pile[v[22]]=76; pile[WZ1]=0; pile[WZ2]=45; 
(*f[41])( );     /*SRB0(76,0,45,V152)*/
V152=pile[WZ3]; 
pile[v[22]]=V152; 
(*f[40])( );     /*SLG0(V152)*/
l93:x[jvj+99]=t[x[jvj+99]];
goto l92;
l52:pile[v[22]]=1418; pile[WZ1]=jvj+55; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(1418,jvj+55,jvj+61)*/
if((x[jvj+61]==68)) goto l86;
l83:pile[v[22]]=265; pile[WZ1]=jvj+55; pile[WZ2]=jvj+89; 
(*f[33])( );     /*FNDE0(265,jvj+55,jvj+89)*/
pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+90; 
(*f[78])( );if(v[102]) goto l86;     /*SMA0(1,36,67,jvj+90)*/
l84:if((x[jvj+89]<=0)) goto l86;
x[jvj+91]=s[x[jvj+89]] ;z[jvj+91]=(x[jvj+91]<=sepcte) ? x[jvj+91] : z[jvj+89];
pile[v[22]]=120; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(120,jvj+91,jvj+92)*/
pile[v[22]]=158; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(158,jvj+91,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=158; pile[WZ2]=jvj+94; 
(*f[54])( );     /*TRI1(jvj+93,158,jvj+94)*/
pile[v[22]]=jvj+90; pile[WZ1]=jvj+92; pile[WZ3]=N; pile[WZ4]=UR; 
(*f[152])( );     /*CHERCHATOME0(jvj+90,jvj+92,jvj+94,N,UR)*/
l85:x[jvj+89]=t[x[jvj+89]];
goto l84;
l53:V94=bh[v[1]][2];
pile[v[22]]=898; pile[WZ1]=905; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(898,905,jvj+62)*/
l54:if((x[jvj+62]<=0)) goto l110;
x[jvj+63]=s[x[jvj+62]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+62];
pile[v[22]]=162; pile[WZ1]=jvj+63; 
(*f[219])( );if(v[102]) goto l55;     /*FNDC2(162,jvj+63,V93)*/
V93=pile[WZ2]; 
if((V93!=V94)) goto l55;
pile[v[22]]=905; 
(*f[44])( );if(v[102]) goto l55;     /*FNDC1(905,jvj+63,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=68; pile[WZ1]=1418; pile[WZ2]=jvj+124; 
(*f[54])( );     /*TRI1(68,1418,jvj+124)*/
pile[v[22]]=jvj+124; pile[WZ1]=1384; pile[WZ2]=1383; pile[WZ3]=jvj+125; 
(*f[58])( );     /*TRI3(jvj+124,1384,1383,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=jvj+126; pile[WZ2]=1092; pile[WZ3]=jvj+127; 
(*f[58])( );     /*TRI3(jvj+125,jvj+126,1092,jvj+127)*/
pile[v[22]]=683; pile[WZ1]=N; pile[WZ2]=905; pile[WZ3]=V95; pile[WZ4]=jvj+127; pile[WZ5]=jvj+64; 
(*f[197])( );     /*QUADRI5(683,N,905,V95,jvj+127,jvj+64)*/
if(x[jvj+64]!=incon) goto l58;
l101:pile[v[22]]=597; pile[WZ1]=645; pile[WZ2]=jvj+64; 
(*f[36])( );     /*PLUSC0(597,645,jvj+64)*/
goto l110;
l55:x[jvj+62]=t[x[jvj+62]];
goto l54;
l57:x[jvj+126]=228 ;z[jvj+126]=228;
l100:if(x[jvj+126]!=incon) goto l53;
goto l110;
l58:if((UR!=84)) goto l59;
pile[v[22]]=jvj+64; pile[WZ1]=970; pile[WZ2]=985; 
(*f[35])( );     /*CHGC1(jvj+64,970,985)*/
l59:if((UR!=80)) goto l101;
pile[v[22]]=3; 
(*f[126])( );     /*LND2(3,V88,V89)*/
V88=pile[WZ1]; V89=pile[WZ2]; 
pile[v[22]]=V89; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+65; 
(*f[78])( );if(v[102]) goto l101;     /*SMA0(V89,64,67,jvj+65)*/
pile[v[22]]=jvj+64; pile[WZ1]=970; pile[WZ2]=1489; 
(*f[35])( );     /*CHGC1(jvj+64,970,1489)*/
pile[WZ1]=1540; pile[WZ2]=V88; 
(*f[43])( );     /*CHGC2(jvj+64,1540,V88)*/
pile[WZ1]=934; pile[WZ2]=jvj+65; 
(*f[35])( );     /*CHGC1(jvj+64,934,jvj+65)*/
goto l101;
l61:V108=V109;
l64:if(V108!=incon) goto l65;
l63:pile[v[22]]=120; pile[WZ1]=jvj+66; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(120,jvj+66,jvj+69)*/
l62:x[jvj+66]=x[jvj+69] ;z[jvj+66]=z[jvj+69];
pile[v[22]]=103; pile[WZ1]=jvj+66; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(103,jvj+66,jvj+70)*/
pile[v[22]]=111; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(111,jvj+66,jvj+71)*/
V180=x[jvj+71];
V181=x[jvj+70];
pile[v[22]]=20; pile[WZ1]=V180; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V180,0,V179)*/
V179=pile[WZ3]; 
pile[WZ1]=V181; pile[WZ2]=V179; 
(*f[39])( );     /*SDX0(20,V181,V179,V109)*/
V109=pile[WZ3]; 
V108=incon;
pile[v[22]]=1547; pile[WZ1]=jvj+66; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(1547,jvj+66,V115)*/
V115=pile[WZ2]; 
I=V115;
pile[v[22]]=41; pile[WZ1]=I; pile[WZ2]=V109; 
(*f[39])( );     /*SDX0(41,I,V109,V108)*/
V108=pile[WZ3]; 
l60:if(V108==incon) goto l61;
goto l64;
l65:pile[v[22]]=V108; 
(*f[40])( );     /*SLG0(V108)*/
goto l63;
l67:x[jvj+72]=x[jvj+67] ;z[jvj+72]=z[jvj+67];
l66:pile[v[22]]=120; pile[WZ1]=jvj+72; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l90;     /*FNDO0(120,jvj+72,jvj+67)*/
pile[v[22]]=218; pile[WZ1]=jvj+67; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(218,jvj+67,jvj+73)*/
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V175)*/
V175=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V175; pile[WZ2]=jvj+73; 
(*f[42])( );     /*SRA1(135,V175,jvj+73,V176)*/
V176=pile[WZ3]; 
pile[v[22]]=V176; 
(*f[40])( );     /*SLG0(V176)*/
pile[v[22]]=287; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(287,jvj+67,jvj+68)*/
x[jvj+69]=x[jvj+68] ;z[jvj+69]=z[jvj+68];
goto l62;
l69:V126++;
l68:if((V126>V127)) goto l72;
V130=r[V126];
if((V130!=1)) goto l69;
x[jvj+74]=V126 ;z[jvj+74]=(V126<=sepcte) ? V126 : 0;
pile[v[22]]=345; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(345,jvj+74,jvj+75)*/
x[jvj+76]=x[jvj+75] ;z[jvj+76]=z[jvj+75];
pile[v[22]]=365; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(365,jvj+76,jvj+77)*/
x[jvj+160]=x[jvj+77] ;z[jvj+160]=z[jvj+77];
l70:if((x[jvj+160]<=0)) goto l69;
x[jvj+78]=s[x[jvj+160]] ;z[jvj+78]=(x[jvj+78]<=sepcte) ? x[jvj+78] : z[jvj+160];
pile[v[22]]=683; pile[WZ1]=jvj+78; 
(*f[26])( );if(v[102]) goto l71;     /*FNDC0(683,jvj+78,V125)*/
V125=pile[WZ2]; 
if((V125!=N)) goto l71;
V131=x[jvj+78];
pile[v[22]]=365; pile[WZ1]=jvj+76; pile[WZ2]=V131; 
(*f[134])( );     /*OTA0(365,jvj+76,V131)*/
l71:x[jvj+160]=t[x[jvj+160]];
goto l70;
l72:pile[v[22]]=265; pile[WZ1]=jvj+55; pile[WZ2]=jvj+79; 
(*f[33])( );     /*FNDE0(265,jvj+55,jvj+79)*/
l73:if((x[jvj+79]<=0)) goto l48;
x[jvj+80]=s[x[jvj+79]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+79];
l75:pile[v[22]]=120; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(120,jvj+80,jvj+81)*/
pile[v[22]]=287; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(287,jvj+81,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=KR; pile[WZ2]=UR; pile[WZ3]=N; 
(*f[311])( );     /*FINDEX0(jvj+82,KR,UR,N)*/
l76:x[jvj+80]=x[jvj+81] ;z[jvj+80]=z[jvj+81];
goto l75;
l74:x[jvj+79]=t[x[jvj+79]];
goto l73;
l78:if((KR!=73)) goto l79;
pile[v[22]]=jvj+55; 
(*f[419])( );     /*TOUTSQ0(jvj+55)*/
l79:if((KR!=79)) goto l81;
pile[v[22]]=265; pile[WZ1]=jvj+55; pile[WZ2]=jvj+83; 
(*f[33])( );     /*FNDE0(265,jvj+55,jvj+83)*/
pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+84; 
(*f[78])( );if(v[102]) goto l81;     /*SMA0(1,64,67,jvj+84)*/
l80:if((x[jvj+83]<=0)) goto l81;
x[jvj+85]=s[x[jvj+83]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+83];
pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; pile[WZ2]=jvj+55; pile[WZ3]=265; 
(*f[427])( );     /*SUPAT0(jvj+84,jvj+85,jvj+55,265)*/
x[jvj+83]=t[x[jvj+83]];
goto l80;
l81:if((KR!=72)) goto l86;
pile[v[22]]=1418; pile[WZ1]=jvj+55; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(1418,jvj+55,jvj+86)*/
if((x[jvj+86]!=68)) goto l52;
pile[v[22]]=265; pile[WZ2]=jvj+87; 
(*f[33])( );     /*FNDE0(265,jvj+55,jvj+87)*/
pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+88; 
(*f[78])( );if(v[102]) goto l52;     /*SMA0(1,36,67,jvj+88)*/
l82:if((x[jvj+87]<=0)) goto l52;
V134=s[x[jvj+87]];
pile[v[22]]=jvj+88; pile[WZ1]=jvj+55; 
(*f[153])( );     /*CHERCHATOMEBIS0(jvj+88,jvj+55)*/
x[jvj+87]=t[x[jvj+87]];
goto l82;
l86:if(KR!=81&&KR!=82) goto l88;
pile[v[22]]=1418; pile[WZ1]=jvj+55; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(1418,jvj+55,jvj+95)*/
if((x[jvj+95]!=68)) goto l48;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l72;     /*FNDC0(1484,854,V128)*/
V128=pile[WZ2]; 
V126=sepfacts+1;
V127=sepfacts+V128;
goto l68;
l88:if((KR!=76)) goto l94;
pile[v[22]]=1418; pile[WZ1]=jvj+55; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(1418,jvj+55,jvj+96)*/
if((x[jvj+96]!=68)) goto l51;
pile[v[22]]=265; pile[WZ2]=jvj+97; 
(*f[33])( );     /*FNDE0(265,jvj+55,jvj+97)*/
l89:if((x[jvj+97]<=0)) goto l51;
x[jvj+72]=s[x[jvj+97]] ;z[jvj+72]=(x[jvj+72]<=sepcte) ? x[jvj+72] : z[jvj+97];
pile[v[22]]=158; pile[WZ1]=jvj+72; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l90;     /*FNDO0(158,jvj+72,jvj+98)*/
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V171)*/
V171=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V171; pile[WZ2]=1547; 
(*f[42])( );     /*SRA1(135,V171,1547,V172)*/
V172=pile[WZ3]; 
pile[v[22]]=V172; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V172,58,V173)*/
V173=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V173; pile[WZ2]=jvj+98; 
(*f[42])( );     /*SRA1(135,V173,jvj+98,V174)*/
V174=pile[WZ3]; 
pile[v[22]]=V174; 
(*f[40])( );     /*SLG0(V174)*/
goto l66;
l90:x[jvj+97]=t[x[jvj+97]];
goto l89;
l97:if((KR!=68)) goto l98;
pile[v[22]]=20; pile[WZ1]=10305; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10305,0,V166)*/
V166=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V166; pile[WZ2]=178; 
(*f[42])( );     /*SRA1(135,V166,178,V167)*/
V167=pile[WZ3]; 
pile[v[22]]=V167; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V167,58,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=V168; pile[WZ1]=N; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V168,N,41,V169)*/
V169=pile[WZ3]; 
pile[v[22]]=V169; 
(*f[40])( );     /*SLG0(V169)*/
l98:if(x[jvj+64]==incon) goto l99;
goto l110;
l99:if((KR!=70)) goto l110;
x[jvj+126]=incon;
if(UR!=83&&UR!=84) goto l56;
x[jvj+126]=255 ;z[jvj+126]=255;
l56:if(x[jvj+126]==incon) goto l57;
goto l100;
l103:x[jvj+103]=t[x[jvj+103]];
l102:if((x[jvj+103]<=0)) goto l104;
x[jvj+104]=s[x[jvj+103]] ;z[jvj+104]=(x[jvj+104]<=sepcte) ? x[jvj+104] : z[jvj+103];
pile[v[22]]=683; pile[WZ1]=jvj+104; 
(*f[26])( );if(v[102]) goto l103;     /*FNDC0(683,jvj+104,V72)*/
V72=pile[WZ2]; 
if((V72!=NR)) goto l103;
pile[v[22]]=905; 
(*f[44])( );if(v[102]) goto l103;     /*FNDC1(905,jvj+104,V73)*/
V73=pile[WZ2]; 
if((V73==F)) goto l103;
V70=67;
l104:if(V70==incon) goto l105;
l115:if(V70!=incon) goto l107;
l116:if((KR!=85)) goto l119;
x[jvj+5]=0 ;z[jvj+5]=0;
if(x[jvj+5]!=incon) goto l1;
l117:if(x[jvj+5]!=incon) goto l118;
l119:if((KR!=78)) goto l128;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+110; 
(*f[33])( );     /*FNDE0(457,324,jvj+110)*/
l120:if((x[jvj+110]<=0)) goto l128;
x[jvj+111]=s[x[jvj+110]] ;z[jvj+111]=(x[jvj+111]<=sepcte) ? x[jvj+111] : z[jvj+110];
pile[v[22]]=983; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l121;     /*FNDO0(983,jvj+111,jvj+112)*/
pile[v[22]]=878; pile[WZ1]=jvj+112; pile[WZ2]=jvj+113; 
(*f[33])( );     /*FNDE0(878,jvj+112,jvj+113)*/
V156=x[jvj+111];
x[jvj+161]=x[jvj+113] ;z[jvj+161]=z[jvj+113];
goto l122;
l105:V70=68;
goto l115;
l107:if((V70!=68)) goto l109;
pile[v[22]]=1418; pile[WZ1]=jvj+64; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l106;     /*FNDO0(1418,jvj+64,jvj+106)*/
if((x[jvj+106]!=68)) goto l106;
pile[v[22]]=N; pile[WZ1]=F; pile[WZ2]=jvj+64; 
(*f[312])( );     /*CRENSORDBIS0(N,F,jvj+64)*/
l106:pile[v[22]]=1418; pile[WZ1]=jvj+64; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(1418,jvj+64,jvj+105)*/
if((x[jvj+105]==68)) goto l109;
l108:pile[v[22]]=N; pile[WZ1]=UR; pile[WZ2]=NR; pile[WZ3]=F; pile[WZ4]=jvj+64; 
(*f[425])( );     /*CRENSORD0(N,UR,NR,F,jvj+64)*/
l109:if((V70!=67)) goto l116;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=905; 
(*f[42])( );     /*SRA1(135,0,905,V159)*/
V159=pile[WZ3]; 
pile[v[22]]=V159; pile[WZ1]=(-9990); 
(*f[37])( );     /*SRA0(V159,(-9990),V160)*/
V160=pile[WZ2]; 
pile[v[22]]=V160; 
(*f[40])( );     /*SLG0(V160)*/
goto l116;
l113:if(x[jvj+64]!=incon) goto l114;
goto l116;
l114:if((KR!=68)) goto l116;
pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,NR,V68)*/
NR=pile[WZ1]; V68=pile[WZ2]; 
pile[v[22]]=V68; 
(*f[258])( );     /*SMV1(V68,F)*/
F=pile[WZ1]; 
V70=incon;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+103; 
(*f[33])( );     /*FNDE0(645,597,jvj+103)*/
goto l102;
l118:V154=x[jvj+5];
pile[v[22]]=23; pile[WZ1]=V154; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(23,V154,0,V153)*/
V153=pile[WZ3]; 
pile[v[22]]=V153; 
(*f[40])( );     /*SLG0(V153)*/
goto l119;
l121:x[jvj+110]=t[x[jvj+110]];
goto l120;
l125:pile[v[22]]=20; pile[WZ1]=V156; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V156,0,V39)*/
V39=pile[WZ3]; 
V38=incon;
pile[v[22]]=163; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+6,V44)*/
V44=pile[WZ2]; 
V37=V44;
pile[v[22]]=V39; pile[WZ1]=V37; 
(*f[37])( );     /*SRA0(V39,V37,V38)*/
V38=pile[WZ2]; 
l4:if(V38==incon) goto l5;
goto l126;
l127:pile[v[22]]=41; pile[WZ1]=V40; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(41,V40,V38,V157)*/
V157=pile[WZ3]; 
pile[v[22]]=V157; 
(*f[40])( );     /*SLG0(V157)*/
goto l123;
l128:if((KR!=66)) goto l130;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(645,597,jvj+21)*/
goto l17;
l130:if(KR!=67&&KR!=75) goto l145;
if((N==1)) goto l145;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(645,597,jvj+7)*/
goto l8;
l131:pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+117; 
(*f[33])( );     /*FNDE0(457,324,jvj+117)*/
l132:if((x[jvj+117]<=0)) goto l138;
x[jvj+118]=s[x[jvj+117]] ;z[jvj+118]=(x[jvj+118]<=sepcte) ? x[jvj+118] : z[jvj+117];
pile[v[22]]=983; pile[WZ1]=jvj+118; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l133;     /*FNDO0(983,jvj+118,jvj+119)*/
pile[v[22]]=878; pile[WZ1]=jvj+119; pile[WZ2]=jvj+120; 
(*f[33])( );     /*FNDE0(878,jvj+119,jvj+120)*/
x[jvj+162]=x[jvj+120] ;z[jvj+162]=z[jvj+120];
l134:if((x[jvj+162]<=0)) goto l133;
x[jvj+121]=s[x[jvj+162]] ;z[jvj+121]=(x[jvj+121]<=sepcte) ? x[jvj+121] : z[jvj+162];
pile[v[22]]=944; pile[WZ1]=jvj+121; pile[WZ2]=jvj+122; 
(*f[33])( );     /*FNDE0(944,jvj+121,jvj+122)*/
x[jvj+163]=x[jvj+122] ;z[jvj+163]=z[jvj+122];
l135:if((x[jvj+163]>0)) goto l136;
x[jvj+162]=t[x[jvj+162]];
goto l134;
l133:x[jvj+117]=t[x[jvj+117]];
goto l132;
l136:x[jvj+123]=s[x[jvj+163]] ;z[jvj+123]=(x[jvj+123]<=sepcte) ? x[jvj+123] : z[jvj+163];
pile[v[22]]=117; pile[WZ1]=jvj+123; 
(*f[26])( );if(v[102]) goto l137;     /*FNDC0(117,jvj+123,V142)*/
V142=pile[WZ2]; 
if(V142>V141) V141=V142;
l137:x[jvj+163]=t[x[jvj+163]];
goto l135;
l139:if((V141==(-999999))) goto l140;
V149=V141+1;
V140=V149;
goto l140;
l141:V140=1;
goto l142;
l143:pile[v[22]]=924; pile[WZ1]=117; pile[WZ2]=V140; 
(*f[43])( );     /*CHGC2(924,117,V140)*/
goto l144;
l147:pile[v[22]]=120; pile[WZ1]=jvj+12; pile[WZ2]=158; pile[WZ3]=jvj+17; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(120,jvj+12,158,jvj+17,jvj+20)*/
pile[v[22]]=jvj+19; pile[WZ1]=265; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+19,265,jvj+20)*/
l16:x[jvj+15]=t[x[jvj+15]];
goto l14;
l148:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=683; pile[WZ4]=jvj+153; 
(*f[181])( );     /*QUADRI2(100,20,101,683,jvj+153)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6470); pile[WZ4]=jvj+151; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6470),jvj+151)*/
pile[v[22]]=jvj+151; pile[WZ1]=103; pile[WZ2]=jvj+152; 
(*f[54])( );     /*TRI1(jvj+151,103,jvj+152)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+153; pile[WZ4]=jvj+152; pile[WZ5]=jvj+150; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+153,jvj+152,jvj+150)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+148; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+148)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3496); pile[WZ4]=jvj+146; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3496),jvj+146)*/
pile[v[22]]=jvj+146; pile[WZ1]=436; pile[WZ2]=jvj+147; 
(*f[54])( );     /*TRI1(jvj+146,436,jvj+147)*/
pile[v[22]]=jvj+147; pile[WZ1]=jvj+148; pile[WZ2]=111; pile[WZ3]=jvj+149; 
(*f[58])( );     /*TRI3(jvj+147,jvj+148,111,jvj+149)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+150; pile[WZ4]=jvj+149; pile[WZ5]=jvj+144; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+150,jvj+149,jvj+144)*/
pile[v[22]]=jvj+144; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+145; 
(*f[180])( );     /*TRIENS0(jvj+144,(-20),105,jvj+145)*/
pile[v[22]]=jvj+145; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+109; 
(*f[58])( );     /*TRI3(jvj+145,42,100,jvj+109)*/
pile[v[22]]=jvj+28; pile[WZ1]=184; pile[WZ2]=jvj+109; 
(*f[36])( );     /*PLUSC0(jvj+28,184,jvj+109)*/
l112:x[jvj+107]=t[x[jvj+107]];
goto l111;
}
