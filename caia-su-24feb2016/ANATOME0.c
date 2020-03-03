#include "dx.h"
void ANATOME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V11=0,V76=0,V77=0,FM=0,V38=0,V30=0,V31=0,V32=0,V33=0,V34=0,V35=0,V36=0,V37=0,V19=0,V20=0,V=0,V254=0,V22=0,V25=0,T=0,V51=0,V47=0,V66=0,V42=0,V58=0,W=0,V86=0,V103=0,F=0,V79=0,V109=0,V118=0,V119=0,V88=0,V89=0,V90=0,V91=0,V92=0,V93=0,V140=0,V124=0,V154=0,V161=0,V149=0,V177=0,QQ=0,V169=0,V168=0,V186=0,V165=0,V171=0,V170=0,V196=0,V224=0,V225=0,V226=0,V227=0,V228=0,V233=0,V229=0,V230=0,V231=0,V232=0,V189=0,V223=0,V218=0,V219=0,V220=0,V221=0,V222=0,V180=0,V179=0,V211=0,V212=0,V213=0,V214=0,V215=0,V242=0,V234=0,V235=0,V236=0,V237=0,V238=0,V239=0,V240=0,V241=0,V246=0,V243=0,V244=0,V245=0,V209=0,V207=0,V208=0;
int N,UR,ND;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=156;
x[jvj+1]=11098;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==154&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; UR=pile[v[22]+1]; ND=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
FM=incon;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(645,597,jvj+14)*/
l11:if((x[jvj+14]<=0)) goto l13;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=683; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(683,jvj+15,V76)*/
V76=pile[WZ2]; 
if((V76!=ND)) goto l12;
pile[v[22]]=905; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(905,jvj+15,V77)*/
V77=pile[WZ2]; 
FM=V77;
l13:V38=x[N];
pile[v[22]]=N; pile[WZ1]=0; pile[WZ2]=V38; pile[WZ3]=972; 
(*f[285])( );     /*ENLY0(N,0,V38,972,V30,V31)*/
V30=pile[WZ4]; V31=pile[WZ5]; 
pile[WZ1]=V31; pile[WZ2]=V30; pile[WZ3]=1033; 
(*f[285])( );     /*ENLY0(N,V31,V30,1033,V32,V33)*/
V32=pile[WZ4]; V33=pile[WZ5]; 
pile[WZ1]=V33; pile[WZ2]=V32; pile[WZ3]=1088; 
(*f[285])( );     /*ENLY0(N,V33,V32,1088,V34,V35)*/
V34=pile[WZ4]; V35=pile[WZ5]; 
pile[WZ1]=V35; pile[WZ2]=V34; pile[WZ3]=1183; 
(*f[285])( );     /*ENLY0(N,V35,V34,1183,V36,V37)*/
V36=pile[WZ4]; V37=pile[WZ5]; 
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(645,597,jvj+2)*/
l1:if((x[jvj+2]<=0)) goto l70;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+3,V5)*/
V5=pile[WZ2]; 
if((V5!=ND)) goto l2;
x[jvj+13]=incon;
pile[v[22]]=970; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(970,jvj+3,jvj+12)*/
if((x[jvj+12]==985)) goto l9;
if((x[jvj+12]!=341)) goto l10;
pile[v[22]]=1538; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1538,N,jvj+4)*/
l3:if((x[jvj+4]<=0)) goto l10;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=683; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,jvj+5,V11)*/
V11=pile[WZ2]; 
if((V11!=ND)) goto l4;
x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=159; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(159,jvj+5,jvj+6)*/
l5:if((x[jvj+6]>0)) goto l6;
x[jvj+13]=x[jvj+11] ;z[jvj+13]=z[jvj+11];
l14:pile[v[22]]=184; pile[WZ1]=N; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(184,N,jvj+16)*/
pile[v[22]]=N; pile[WZ1]=109; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(N,109,jvj+17)*/
pile[v[22]]=jvj+16; pile[WZ1]=184; pile[WZ2]=jvj+137; 
(*f[300])( );     /*TRI10(jvj+16,184,jvj+137)*/
pile[v[22]]=jvj+137; pile[WZ1]=jvj+13; pile[WZ2]=107; pile[WZ3]=jvj+138; 
(*f[301])( );     /*TRI11(jvj+137,jvj+13,107,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=854; pile[WZ2]=100; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+138,854,100,jvj+18)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=N; 
(*f[487])( );     /*CARCONTR0(jvj+17,jvj+18,N)*/
pile[v[22]]=1088; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(1088,jvj+17,jvj+20)*/
x[jvj+142]=x[jvj+20] ;z[jvj+142]=z[jvj+20];
l17:if((x[jvj+142]>0)) goto l18;
pile[v[22]]=1088; pile[WZ1]=jvj+17; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1088,jvj+17,jvj+23)*/
l22:if((x[jvj+23]<=0)) goto l35;
x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=140; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,jvj+24,V22)*/
V22=pile[WZ2]; 
if((V22!=(-3629))) goto l23;
pile[v[22]]=1275; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(1275,jvj+24,jvj+27)*/
l26:if((x[jvj+27]<=0)) goto l35;
T=s[x[jvj+27]];
pile[v[22]]=1088; pile[WZ1]=jvj+17; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(1088,jvj+17,jvj+25)*/
x[jvj+143]=x[jvj+25] ;z[jvj+143]=z[jvj+25];
l24:if((x[jvj+143]<=0)) goto l27;
x[jvj+26]=s[x[jvj+143]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+143];
pile[v[22]]=140; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(140,jvj+26,V25)*/
V25=pile[WZ2]; 
if((V25!=T)) goto l25;
pile[v[22]]=258; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(258,jvj+26,jvj+28)*/
x[jvj+144]=x[jvj+28] ;z[jvj+144]=z[jvj+28];
l28:if((x[jvj+144]<=0)) goto l27;
x[jvj+29]=s[x[jvj+144]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+144];
pile[v[22]]=1018; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(1018,jvj+29,jvj+30)*/
if((x[jvj+30]!=1216)) goto l29;
pile[v[22]]=145; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(145,jvj+29,jvj+31)*/
pile[v[22]]=447; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(447,jvj+29,jvj+32)*/
pile[v[22]]=jvj+17; pile[WZ1]=(-3629); pile[WZ2]=jvj+31; pile[WZ3]=jvj+32; pile[WZ4]=1216; 
(*f[489])( );     /*AJA0(jvj+17,(-3629),jvj+31,jvj+32,1216)*/
l29:x[jvj+144]=t[x[jvj+144]];
goto l28;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+4]=t[x[jvj+4]];
goto l3;
l6:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=1489; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1489,jvj+7,jvj+8)*/
x[jvj+139]=x[jvj+8] ;z[jvj+139]=z[jvj+8];
l7:if((x[jvj+139]>0)) goto l8;
x[jvj+6]=t[x[jvj+6]];
goto l5;
l8:x[jvj+9]=s[x[jvj+139]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+139];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+10)*/
x[jvj+139]=t[x[jvj+139]];
goto l7;
l9:x[jvj+140]=0 ;z[jvj+140]=0;
x[jvj+13]=x[jvj+140] ;z[jvj+13]=z[jvj+140];
goto l14;
l10:pile[v[22]]=107; pile[WZ1]=N; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,N,jvj+13)*/
goto l14;
l12:x[jvj+14]=t[x[jvj+14]];
goto l11;
l16:x[jvj+141]=t[x[jvj+141]];
l15:if((x[jvj+141]<=0)) goto l21;
x[jvj+19]=s[x[jvj+141]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+141];
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+19,V19)*/
V19=pile[WZ2]; 
if((V19!=V)) goto l16;
pile[v[22]]=jvj+21; pile[WZ2]=V; pile[WZ3]=V20; 
(*f[488])( );     /*FUSION0(jvj+21,jvj+19,V,V20)*/
l21:V254=t[V254];
l20:if((V254<=0)) goto l19;
V=s[V254];
x[jvj+141]=x[jvj+20] ;z[jvj+141]=z[jvj+20];
goto l15;
l18:x[jvj+21]=s[x[jvj+142]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+142];
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+21,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=273; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(273,jvj+21,jvj+22)*/
V254=x[jvj+22];
goto l20;
l19:x[jvj+142]=t[x[jvj+142]];
goto l17;
l23:x[jvj+23]=t[x[jvj+23]];
goto l22;
l25:x[jvj+143]=t[x[jvj+143]];
goto l24;
l27:x[jvj+27]=t[x[jvj+27]];
goto l26;
l35:pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(102,N,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(100,jvj+42,jvj+43)*/
if((x[jvj+43]!=69)) goto l64;
pile[v[22]]=108; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(108,jvj+42,jvj+44)*/
pile[v[22]]=184; pile[WZ1]=N; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(184,N,jvj+45)*/
l36:if((x[jvj+44]<=0)) goto l64;
x[jvj+46]=s[x[jvj+44]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+44];
pile[v[22]]=103; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(103,jvj+46,jvj+47)*/
pile[v[22]]=140; pile[WZ1]=jvj+47; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(140,jvj+47,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+46; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(102,jvj+46,jvj+48)*/
pile[v[22]]=101; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+48,jvj+49)*/
if((x[jvj+49]!=576)) goto l37;
V42=V66;
x[jvj+147]=x[jvj+45] ;z[jvj+147]=z[jvj+45];
l38:if((x[jvj+147]<=0)) goto l37;
x[jvj+50]=s[x[jvj+147]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+147];
pile[v[22]]=107; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(107,jvj+50,jvj+51)*/
x[jvj+148]=x[jvj+51] ;z[jvj+148]=z[jvj+51];
l39:if((x[jvj+148]>0)) goto l40;
x[jvj+147]=t[x[jvj+147]];
goto l38;
l37:x[jvj+44]=t[x[jvj+44]];
goto l36;
l40:x[jvj+52]=s[x[jvj+148]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+148];
pile[v[22]]=111; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+52,jvj+53)*/
pile[v[22]]=101; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+53,jvj+54)*/
if((x[jvj+54]!=278)) goto l41;
pile[v[22]]=102; pile[WZ1]=jvj+52; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,jvj+52,jvj+55)*/
pile[v[22]]=140; pile[WZ1]=jvj+55; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(140,jvj+55,V58)*/
V58=pile[WZ2]; 
W=V58;
if((W==V42)) goto l42;
pile[v[22]]=1088; pile[WZ1]=jvj+17; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(1088,jvj+17,jvj+33)*/
x[jvj+145]=x[jvj+33] ;z[jvj+145]=z[jvj+33];
l30:if((x[jvj+145]<=0)) goto l41;
x[jvj+34]=s[x[jvj+145]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+145];
pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+34,V51)*/
V51=pile[WZ2]; 
if((V51!=V42)) goto l31;
pile[v[22]]=273; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(273,jvj+34,jvj+35)*/
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==W) goto l42;
l31:x[jvj+145]=t[x[jvj+145]];
goto l30;
l41:x[jvj+148]=t[x[jvj+148]];
goto l39;
l42:pile[v[22]]=103; pile[WZ1]=jvj+52; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,jvj+52,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+56; 
(*f[490])( );     /*CHEROBJ0(jvj+36,jvj+56)*/
x[jvj+41]=0 ;z[jvj+41]=0;
x[jvj+146]=x[jvj+56] ;z[jvj+146]=z[jvj+56];
l32:if((x[jvj+146]<=0)) goto l43;
x[jvj+40]=s[x[jvj+146]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+146];
pile[v[22]]=118; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(118,jvj+40,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,jvj+36,jvj+37)*/
if((x[jvj+37]!=22)) goto l34;
pile[v[22]]=111; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+36,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+40]==x[jvj+39])) goto l33;
l34:pile[v[22]]=jvj+41; pile[WZ1]=jvj+40; 
(*f[68])( );     /*PLUE0(jvj+41,jvj+40)*/
l33:x[jvj+146]=t[x[jvj+146]];
goto l32;
l46:V86=s[x[jvj+59]];
pile[v[22]]=jvj+58; pile[WZ1]=V86; 
(*f[331])( );     /*PLUE3(jvj+58,V86)*/
x[jvj+59]=t[x[jvj+59]];
l45:if((x[jvj+59]>0)) goto l46;
pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(102,N,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(100,jvj+60,jvj+61)*/
if((x[jvj+61]!=69)) goto l69;
pile[v[22]]=108; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(108,jvj+60,jvj+62)*/
l47:if((x[jvj+62]<=0)) goto l69;
x[jvj+63]=s[x[jvj+62]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+62];
pile[v[22]]=103; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(103,jvj+63,jvj+64)*/
pile[v[22]]=140; pile[WZ1]=jvj+64; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(140,jvj+64,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+63; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+63,jvj+65)*/
pile[v[22]]=101; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(101,jvj+65,jvj+66)*/
F=x[jvj+66];
if(F!=576&&F!=749&&F!=758&&F!=756) goto l48;
V79=V103;
pile[v[22]]=jvj+58; pile[WZ1]=V79; 
(*f[331])( );     /*PLUE3(jvj+58,V79)*/
l48:x[jvj+62]=t[x[jvj+62]];
goto l47;
l50:x[jvj+68]=s[x[jvj+67]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+67];
pile[v[22]]=140; pile[WZ1]=jvj+68; 
(*f[44])( );if(v[102]) goto l51;     /*FNDC1(140,jvj+68,V109)*/
V109=pile[WZ2]; 
for(a=x[jvj+58];a>0;a=t[a]) if(s[a]==V109) goto l52;
l51:x[jvj+67]=t[x[jvj+67]];
l49:if((x[jvj+67]>0)) goto l50;
if((x[jvj+69]==0)) goto l70;
x[jvj+151]=x[jvj+69] ;z[jvj+151]=z[jvj+69];
l58:if((x[jvj+151]>0)) goto l59;
pile[v[22]]=N; pile[WZ1]=1088; pile[WZ2]=jvj+69; 
(*f[34])( );     /*CHGC0(N,1088,jvj+69)*/
l70:pile[v[22]]=159; pile[WZ1]=857; pile[WZ2]=jvj+105; 
(*f[33])( );     /*FNDE0(159,857,jvj+105)*/
pile[v[22]]=184; pile[WZ1]=N; pile[WZ2]=jvj+106; 
(*f[33])( );     /*FNDE0(184,N,jvj+106)*/
l71:if((x[jvj+105]>0)) goto l72;
pile[v[22]]=159; pile[WZ1]=1033; pile[WZ2]=jvj+110; 
(*f[33])( );     /*FNDE0(159,1033,jvj+110)*/
pile[v[22]]=184; pile[WZ1]=N; pile[WZ2]=jvj+111; 
(*f[33])( );     /*FNDE0(184,N,jvj+111)*/
l77:if((x[jvj+111]>0)) goto l78;
if(UR!=65&&UR!=77) goto l104;
pile[v[22]]=1088; pile[WZ1]=N; pile[WZ2]=jvj+114; 
(*f[33])( );     /*FNDE0(1088,N,jvj+114)*/
if((x[jvj+114]!=0)) goto l103;
pile[v[22]]=1183; pile[WZ2]=jvj+115; 
(*f[33])( );     /*FNDE0(1183,N,jvj+115)*/
if((x[jvj+115]!=0)) goto l103;
pile[v[22]]=1184; pile[WZ2]=jvj+116; 
(*f[33])( );     /*FNDE0(1184,N,jvj+116)*/
if((x[jvj+116]!=0)) goto l103;
l104:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l52:pile[v[22]]=jvj+69; pile[WZ1]=jvj+68; 
(*f[68])( );     /*PLUE0(jvj+69,jvj+68)*/
goto l51;
l54:x[jvj+149]=t[x[jvj+149]];
l53:if((x[jvj+149]<=0)) goto l57;
x[jvj+73]=s[x[jvj+149]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+149];
pile[v[22]]=1018; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(1018,jvj+73,jvj+74)*/
if((x[jvj+74]!=1300)) goto l54;
pile[v[22]]=145; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(145,jvj+73,jvj+75)*/
if((x[jvj+71]!=x[jvj+75])) goto l54;
pile[v[22]]=447; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(447,jvj+73,jvj+76)*/
if((x[jvj+72]!=x[jvj+76])) goto l54;
V118=x[jvj+70];
pile[v[22]]=258; pile[WZ1]=jvj+77; pile[WZ2]=V118; 
(*f[134])( );     /*OTA0(258,jvj+77,V118)*/
l57:x[jvj+150]=t[x[jvj+150]];
l55:if((x[jvj+150]>0)) goto l56;
pile[v[22]]=jvj+77; pile[WZ1]=0; pile[WZ2]=V119; pile[WZ3]=273; 
(*f[285])( );     /*ENLY0(jvj+77,0,V119,273,V88,V89)*/
V88=pile[WZ4]; V89=pile[WZ5]; 
pile[WZ1]=V89; pile[WZ2]=V88; pile[WZ3]=1275; 
(*f[285])( );     /*ENLY0(jvj+77,V89,V88,1275,V90,V91)*/
V90=pile[WZ4]; V91=pile[WZ5]; 
pile[WZ1]=V91; pile[WZ2]=V90; pile[WZ3]=1276; 
(*f[285])( );     /*ENLY0(jvj+77,V91,V90,1276,V92,V93)*/
V92=pile[WZ4]; V93=pile[WZ5]; 
x[jvj+151]=t[x[jvj+151]];
goto l58;
l56:x[jvj+70]=s[x[jvj+150]] ;z[jvj+70]=(x[jvj+70]<=sepcte) ? x[jvj+70] : z[jvj+150];
pile[v[22]]=1018; pile[WZ1]=jvj+70; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(1018,jvj+70,jvj+79)*/
if((x[jvj+79]!=1216)) goto l57;
pile[v[22]]=145; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(145,jvj+70,jvj+71)*/
pile[v[22]]=447; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(447,jvj+70,jvj+72)*/
x[jvj+149]=x[jvj+78] ;z[jvj+149]=z[jvj+78];
goto l53;
l59:x[jvj+77]=s[x[jvj+151]] ;z[jvj+77]=(x[jvj+77]<=sepcte) ? x[jvj+77] : z[jvj+151];
V119=x[jvj+77];
pile[v[22]]=258; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[33])( );     /*FNDE0(258,jvj+77,jvj+78)*/
x[jvj+150]=x[jvj+78] ;z[jvj+150]=z[jvj+78];
goto l55;
l63:x[jvj+94]=s[x[jvj+93]] ;z[jvj+94]=(x[jvj+94]<=sepcte) ? x[jvj+94] : z[jvj+93];
pile[v[22]]=jvj+94; pile[WZ1]=jvj+17; pile[WZ2]=jvj+95; 
(*f[33])( );     /*FNDE0(jvj+94,jvj+17,jvj+95)*/
if((x[jvj+95]==0)) goto l65;
pile[v[22]]=N; pile[WZ1]=jvj+94; 
(*f[34])( );     /*CHGC0(N,jvj+94,jvj+95)*/
l65:x[jvj+93]=t[x[jvj+93]];
l62:if((x[jvj+93]>0)) goto l63;
if(FM!=incon) goto l66;
l44:x[jvj+58]=0 ;z[jvj+58]=0;
pile[v[22]]=jvj+58; pile[WZ1]=(-7416); 
(*f[331])( );     /*PLUE3(jvj+58,(-7416))*/
pile[v[22]]=762; pile[WZ1]=21; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(762,21,jvj+59)*/
goto l45;
l64:x[jvj+93]=d[17];z[jvj+93]=0;
goto l62;
l66:if((FM!=(-9009))) goto l44;
pile[v[22]]=905; pile[WZ1]=N; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(905,N,V154)*/
V154=pile[WZ2]; 
if((V154!=(-9113))) goto l44;
pile[v[22]]=102; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,N,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+96,jvj+97)*/
if((x[jvj+97]!=69)) goto l44;
pile[v[22]]=108; pile[WZ2]=jvj+98; 
(*f[33])( );     /*FNDE0(108,jvj+96,jvj+98)*/
pile[v[22]]=184; pile[WZ1]=N; pile[WZ2]=jvj+92; 
(*f[33])( );     /*FNDE0(184,N,jvj+92)*/
if((x[jvj+92]<=0)) goto l44;
x[jvj+99]=s[x[jvj+92]] ;z[jvj+99]=(x[jvj+99]<=sepcte) ? x[jvj+99] : z[jvj+92];
pile[v[22]]=365; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[492])( );     /*FIGURE0(365,jvj+99,jvj+100)*/
if((x[jvj+100]==135)) goto l67;
goto l44;
l69:if((x[jvj+58]==0)) goto l70;
x[jvj+69]=0 ;z[jvj+69]=0;
pile[v[22]]=1088; pile[WZ1]=jvj+17; pile[WZ2]=jvj+67; 
(*f[33])( );     /*FNDE0(1088,jvj+17,jvj+67)*/
goto l49;
l72:x[jvj+107]=s[x[jvj+105]] ;z[jvj+107]=(x[jvj+107]<=sepcte) ? x[jvj+107] : z[jvj+105];
x[jvj+153]=x[jvj+106] ;z[jvj+153]=z[jvj+106];
l73:if((x[jvj+153]>0)) goto l74;
x[jvj+105]=t[x[jvj+105]];
goto l71;
l74:x[jvj+108]=s[x[jvj+153]] ;z[jvj+108]=(x[jvj+108]<=sepcte) ? x[jvj+108] : z[jvj+153];
pile[v[22]]=jvj+107; pile[WZ1]=jvj+108; pile[WZ2]=jvj+109; 
(*f[491])( );     /*FIGURETOTAL0(jvj+107,jvj+108,jvj+109)*/
if((x[jvj+109]==135)) goto l76;
l75:x[jvj+153]=t[x[jvj+153]];
goto l73;
l76:pile[v[22]]=N; pile[WZ1]=857; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(N,857,68)*/
goto l75;
l78:x[jvj+80]=s[x[jvj+111]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+111];
pile[v[22]]=100; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(100,jvj+80,jvj+81)*/
if((x[jvj+81]!=42)) goto l81;
pile[v[22]]=107; pile[WZ2]=jvj+82; 
(*f[33])( );     /*FNDE0(107,jvj+80,jvj+82)*/
x[jvj+152]=x[jvj+82] ;z[jvj+152]=z[jvj+82];
l60:if((x[jvj+152]<=0)) goto l81;
x[jvj+83]=s[x[jvj+152]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+152];
pile[v[22]]=100; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(100,jvj+83,jvj+84)*/
if((x[jvj+84]!=22)) goto l61;
pile[v[22]]=103; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(103,jvj+83,jvj+85)*/
pile[v[22]]=130; pile[WZ1]=jvj+85; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(130,jvj+85,V140)*/
V140=pile[WZ2]; 
if((V140!=1)) goto l61;
pile[v[22]]=111; pile[WZ1]=jvj+83; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(111,jvj+83,jvj+86)*/
pile[v[22]]=101; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(101,jvj+86,jvj+87)*/
V124=x[jvj+87];
if(V124!=25&&V124!=30) goto l61;
pile[v[22]]=102; pile[WZ1]=jvj+83; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(102,jvj+83,jvj+88)*/
pile[v[22]]=100; pile[WZ1]=jvj+88; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(100,jvj+88,jvj+89)*/
if((x[jvj+89]!=43)) goto l61;
pile[v[22]]=102; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(102,jvj+88,jvj+90)*/
pile[v[22]]=101; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(101,jvj+90,jvj+91)*/
if((x[jvj+91]==870)) goto l79;
l61:x[jvj+152]=t[x[jvj+152]];
goto l60;
l79:x[jvj+111]=t[x[jvj+111]];
goto l77;
l81:x[jvj+154]=x[jvj+110] ;z[jvj+154]=z[jvj+110];
l80:if((x[jvj+154]<=0)) goto l79;
x[jvj+112]=s[x[jvj+154]] ;z[jvj+112]=(x[jvj+112]<=sepcte) ? x[jvj+112] : z[jvj+154];
pile[v[22]]=jvj+112; pile[WZ1]=jvj+80; pile[WZ2]=jvj+113; 
(*f[491])( );     /*FIGURETOTAL0(jvj+112,jvj+80,jvj+113)*/
if((x[jvj+113]==135)) goto l83;
l82:x[jvj+154]=t[x[jvj+154]];
goto l80;
l83:pile[v[22]]=N; pile[WZ1]=1033; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(N,1033,68)*/
goto l82;
l84:V168=V169;
l96:pile[v[22]]=41; pile[WZ1]=V179; pile[WZ2]=V168; 
(*f[39])( );     /*SDX0(41,V179,V168,V215)*/
V215=pile[WZ3]; 
pile[v[22]]=V215; 
(*f[40])( );     /*SLG0(V215)*/
l97:if(x[jvj+117]!=44&&x[jvj+117]!=45) goto l93;
pile[v[22]]=1018; pile[WZ1]=jvj+127; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(1018,jvj+127,jvj+131)*/
pile[v[22]]=447; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(447,jvj+127,jvj+132)*/
V242=x[jvj+132];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+131; 
(*f[42])( );     /*SRA1(135,0,jvj+131,V234)*/
V234=pile[WZ3]; 
pile[v[22]]=V234; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V234,40,V235)*/
V235=pile[WZ2]; 
pile[v[22]]=V196; pile[WZ1]=V235; 
(*f[64])( );     /*SRA2(V196,V235,V236)*/
V236=pile[WZ2]; 
pile[v[22]]=V236; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V236,41,V237)*/
V237=pile[WZ2]; 
pile[v[22]]=V237; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V237,46,V238)*/
V238=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V238; pile[WZ2]=jvj+117; 
(*f[42])( );     /*SRA1(135,V238,jvj+117,V239)*/
V239=pile[WZ3]; 
pile[v[22]]=V239; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V239,46,V240)*/
V240=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V242; pile[WZ2]=V240; 
(*f[39])( );     /*SDX0(20,V242,V240,V241)*/
V241=pile[WZ3]; 
pile[v[22]]=V241; 
(*f[40])( );     /*SLG0(V241)*/
l93:x[jvj+156]=t[x[jvj+156]];
l92:if((x[jvj+156]<=0)) goto l102;
x[jvj+127]=s[x[jvj+156]] ;z[jvj+127]=(x[jvj+127]<=sepcte) ? x[jvj+127] : z[jvj+156];
pile[v[22]]=145; pile[WZ1]=jvj+127; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(145,jvj+127,jvj+117)*/
if(x[jvj+117]==44||x[jvj+117]==45) goto l95;
pile[v[22]]=331; pile[WZ1]=jvj+117; 
(*f[219])( );if(v[102]) goto l95;     /*FNDC2(331,jvj+117,V189)*/
V189=pile[WZ2]; 
pile[v[22]]=1018; pile[WZ1]=jvj+127; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l95;     /*FNDO0(1018,jvj+127,jvj+128)*/
pile[v[22]]=447; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l95;     /*FNDO0(447,jvj+127,jvj+129)*/
V223=x[jvj+129];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+128; 
(*f[42])( );     /*SRA1(135,0,jvj+128,V218)*/
V218=pile[WZ3]; 
pile[v[22]]=V218; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V218,40,V219)*/
V219=pile[WZ2]; 
pile[v[22]]=V196; pile[WZ1]=V219; 
(*f[64])( );     /*SRA2(V196,V219,V220)*/
V220=pile[WZ2]; 
pile[v[22]]=V220; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V220,41,V221)*/
V221=pile[WZ2]; 
pile[v[22]]=V221; pile[WZ1]=V189; 
(*f[38])( );     /*SPC0(V221,V189,V171)*/
V171=pile[WZ2]; 
V170=incon;
pile[v[22]]=332; pile[WZ1]=jvj+117; 
(*f[219])( );if(v[102]) goto l85;     /*FNDC2(332,jvj+117,V186)*/
V186=pile[WZ2]; 
V165=V186;
pile[v[22]]=V171; pile[WZ1]=V165; 
(*f[38])( );     /*SPC0(V171,V165,V170)*/
V170=pile[WZ2]; 
l94:pile[v[22]]=20; pile[WZ1]=V223; pile[WZ2]=V170; 
(*f[39])( );     /*SDX0(20,V223,V170,V222)*/
V222=pile[WZ3]; 
pile[v[22]]=V222; 
(*f[40])( );     /*SLG0(V222)*/
l95:pile[v[22]]=331; pile[WZ1]=jvj+117; 
(*f[219])( );if(v[102]) goto l97;     /*FNDC2(331,jvj+117,V180)*/
V180=pile[WZ2]; 
pile[v[22]]=117; pile[WZ1]=jvj+127; 
(*f[26])( );if(v[102]) goto l97;     /*FNDC0(117,jvj+127,V179)*/
V179=pile[WZ2]; 
pile[v[22]]=1018; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l97;     /*FNDO0(1018,jvj+127,jvj+130)*/
pile[v[22]]=135; pile[WZ1]=0; 
(*f[42])( );     /*SRA1(135,0,jvj+130,V211)*/
V211=pile[WZ3]; 
pile[v[22]]=V211; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V211,40,V212)*/
V212=pile[WZ2]; 
pile[v[22]]=V196; pile[WZ1]=V212; 
(*f[64])( );     /*SRA2(V196,V212,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=V213; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V213,41,V214)*/
V214=pile[WZ2]; 
pile[v[22]]=V214; pile[WZ1]=V180; 
(*f[38])( );     /*SPC0(V214,V180,V169)*/
V169=pile[WZ2]; 
V168=incon;
pile[v[22]]=332; pile[WZ1]=jvj+117; 
(*f[219])( );if(v[102]) goto l84;     /*FNDC2(332,jvj+117,V177)*/
V177=pile[WZ2]; 
QQ=V177;
pile[v[22]]=V169; pile[WZ1]=QQ; 
(*f[249])( );     /*SPC1(V169,QQ,V168)*/
V168=pile[WZ2]; 
goto l96;
l85:V170=V171;
goto l94;
l87:x[jvj+120]=s[x[jvj+155]] ;z[jvj+120]=(x[jvj+120]<=sepcte) ? x[jvj+120] : z[jvj+155];
pile[v[22]]=459; pile[WZ1]=jvj+120; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l88;     /*FNDO0(459,jvj+120,jvj+121)*/
pile[v[22]]=447; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l88;     /*FNDO0(447,jvj+120,jvj+122)*/
pile[v[22]]=0; pile[WZ1]=V196; 
(*f[37])( );     /*SRA0(0,V196,V224)*/
V224=pile[WZ2]; 
pile[v[22]]=V224; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V224,58,V225)*/
V225=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V225; pile[WZ2]=jvj+122; 
(*f[42])( );     /*SRA1(135,V225,jvj+122,V226)*/
V226=pile[WZ3]; 
pile[v[22]]=V226; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V226,32,V227)*/
V227=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V227; pile[WZ2]=jvj+121; 
(*f[42])( );     /*SRA1(135,V227,jvj+121,V228)*/
V228=pile[WZ3]; 
pile[v[22]]=V228; 
(*f[40])( );     /*SLG0(V228)*/
l88:x[jvj+155]=t[x[jvj+155]];
l86:if((x[jvj+155]>0)) goto l87;
x[jvj+123]=d[18];z[jvj+123]=0;
l89:if((x[jvj+123]>0)) goto l90;
pile[v[22]]=258; pile[WZ1]=jvj+118; pile[WZ2]=jvj+126; 
(*f[33])( );     /*FNDE0(258,jvj+118,jvj+126)*/
x[jvj+156]=x[jvj+126] ;z[jvj+156]=z[jvj+126];
goto l92;
l90:x[jvj+124]=s[x[jvj+123]] ;z[jvj+124]=(x[jvj+124]<=sepcte) ? x[jvj+124] : z[jvj+123];
pile[v[22]]=jvj+124; pile[WZ1]=jvj+118; pile[WZ2]=jvj+125; 
(*f[33])( );     /*FNDE0(jvj+124,jvj+118,jvj+125)*/
if((x[jvj+125]==0)) goto l91;
V233=x[jvj+125];
pile[v[22]]=0; pile[WZ1]=V196; 
(*f[37])( );     /*SRA0(0,V196,V229)*/
V229=pile[WZ2]; 
pile[v[22]]=V229; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V229,58,V230)*/
V230=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V230; pile[WZ2]=jvj+124; 
(*f[42])( );     /*SRA1(135,V230,jvj+124,V231)*/
V231=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V233; pile[WZ2]=V231; 
(*f[39])( );     /*SDX0(23,V233,V231,V232)*/
V232=pile[WZ3]; 
pile[v[22]]=V232; 
(*f[40])( );     /*SLG0(V232)*/
l91:x[jvj+123]=t[x[jvj+123]];
goto l89;
l99:x[jvj+134]=s[x[jvj+133]] ;z[jvj+134]=(x[jvj+134]<=sepcte) ? x[jvj+134] : z[jvj+133];
pile[v[22]]=jvj+134; pile[WZ1]=N; pile[WZ2]=jvj+135; 
(*f[33])( );     /*FNDE0(jvj+134,N,jvj+135)*/
if((x[jvj+135]==0)) goto l100;
V246=x[jvj+135];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+134; 
(*f[42])( );     /*SRA1(135,0,jvj+134,V243)*/
V243=pile[WZ3]; 
pile[v[22]]=V243; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V243,58,V244)*/
V244=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V246; pile[WZ2]=V244; 
(*f[39])( );     /*SDX0(23,V246,V244,V245)*/
V245=pile[WZ3]; 
pile[v[22]]=V245; 
(*f[40])( );     /*SLG0(V245)*/
l100:x[jvj+133]=t[x[jvj+133]];
l98:if((x[jvj+133]>0)) goto l99;
pile[v[22]]=1088; pile[WZ1]=N; pile[WZ2]=jvj+136; 
(*f[33])( );     /*FNDE0(1088,N,jvj+136)*/
l101:if((x[jvj+136]<=0)) goto l104;
x[jvj+118]=s[x[jvj+136]] ;z[jvj+118]=(x[jvj+118]<=sepcte) ? x[jvj+118] : z[jvj+136];
pile[v[22]]=140; pile[WZ1]=jvj+118; 
(*f[44])( );if(v[102]) goto l102;     /*FNDC1(140,jvj+118,V196)*/
V196=pile[WZ2]; 
pile[v[22]]=159; pile[WZ2]=jvj+119; 
(*f[33])( );     /*FNDE0(159,jvj+118,jvj+119)*/
x[jvj+155]=x[jvj+119] ;z[jvj+155]=z[jvj+119];
goto l86;
l102:x[jvj+136]=t[x[jvj+136]];
goto l101;
l103:V209=x[N];
pile[v[22]]=15; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(15,0,42,V207)*/
V207=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V209; pile[WZ2]=V207; 
(*f[39])( );     /*SDX0(20,V209,V207,V208)*/
V208=pile[WZ3]; 
pile[v[22]]=V208; 
(*f[40])( );     /*SLG0(V208)*/
x[jvj+133]=d[17];z[jvj+133]=0;
goto l98;
l43:if((x[jvj+41]<=0)) goto l41;
x[jvj+57]=s[x[jvj+41]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+41];
pile[v[22]]=jvj+17; pile[WZ1]=V42; pile[WZ2]=44; pile[WZ3]=jvj+57; pile[WZ4]=1300; 
(*f[489])( );     /*AJA0(jvj+17,V42,44,jvj+57,1300)*/
x[jvj+41]=t[x[jvj+41]];
goto l43;
l67:if((x[jvj+98]<=0)) goto l44;
x[jvj+101]=s[x[jvj+98]] ;z[jvj+101]=(x[jvj+101]<=sepcte) ? x[jvj+101] : z[jvj+98];
pile[v[22]]=103; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(103,jvj+101,jvj+102)*/
pile[v[22]]=140; pile[WZ1]=jvj+102; 
(*f[44])( );if(v[102]) goto l68;     /*FNDC1(140,jvj+102,V161)*/
V161=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+101; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(102,jvj+101,jvj+103)*/
pile[v[22]]=101; pile[WZ1]=jvj+103; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(101,jvj+103,jvj+104)*/
if((x[jvj+104]!=749)) goto l68;
V149=V161;
pile[v[22]]=jvj+17; pile[WZ1]=V149; pile[WZ2]=25; pile[WZ3]=68; pile[WZ4]=202; 
(*f[489])( );     /*AJA0(jvj+17,V149,25,68,202)*/
l68:x[jvj+98]=t[x[jvj+98]];
goto l67;
}
