#include "dx.h"
void STOLAV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V51=0,V7=0,M=0,V2=0,V50=0,NT=0,V4=0,V8=0,V10=0,V12=0,V13=0,V17=0,V18=0,V30=0,V31=0,V33=0,V34=0,V23=0,V24=0,V25=0,V39=0,V40=0,V41=0,V46=0,V47=0,V48=0,V55=0,V56=0,V62=0,V63=0,V69=0,V70=0,V76=0,V77=0,V83=0,V84=0,V90=0,V91=0;
int K,BB;
int R,S;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
if(v[0]>99700) (*f[6])( );

K=pile[v[22]]; BB=pile[v[22]+1]; R=pile[v[22]+2]; S=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[S]=incon;
V6=tt[K];
x[jvj+29]=V6 ;z[jvj+29]=(V6<=sepcte) ? V6 : 0;
x[jvj+2]=x[jvj+29] ;z[jvj+2]=z[jvj+29];
V7=tm[K];
M=V7;
if((M>0)) goto l1;
x[jvj+15]=250 ;z[jvj+15]=250;
l2:pile[v[22]]=117; pile[WZ1]=BB; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,BB,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,BB,jvj+1)*/
pile[v[22]]=jvj+2; pile[WZ1]=218; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+2,218,jvj+12)*/
pile[v[22]]=109; pile[WZ1]=jvj+1; pile[WZ2]=117; pile[WZ3]=V50; pile[WZ4]=jvj+12; pile[WZ5]=S; 
(*f[47])( );     /*QUADRI0(109,jvj+1,117,V50,jvj+12,S)*/
pile[v[22]]=163; pile[WZ1]=BB; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,BB,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=S; pile[WZ1]=163; pile[WZ2]=V51; 
(*f[177])( );     /*CHGC4(S,163,V51)*/
l3:if((M!=0)) goto l4;
pile[v[22]]=855; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(855,jvj+2,NT)*/
NT=pile[WZ2]; 
l20:pile[v[22]]=jvj+2; pile[WZ1]=218; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+2,218,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=NT; pile[WZ2]=130; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,NT,130,jvj+14)*/
pile[v[22]]=109; pile[WZ1]=jvj+15; pile[WZ2]=117; pile[WZ3]=M; pile[WZ4]=jvj+14; pile[WZ5]=R; 
(*f[47])( );     /*QUADRI0(109,jvj+15,117,M,jvj+14,R)*/
V8=tp[K];
if((V8<=0)) goto l5;
x[jvj+3]=V8 ;z[jvj+3]=(V8<=sepcte) ? V8 : 0;
pile[v[22]]=R; pile[WZ1]=715; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(R,715,jvj+3)*/
l5:V10=tn[K];
pile[v[22]]=R; pile[WZ1]=405; pile[WZ2]=V10; 
(*f[43])( );     /*CHGC2(R,405,V10)*/
if(x[S]!=incon) goto l6;
x[R]=x[S]=incon;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l1:V2=vbl[M];
x[jvj+30]=V2 ;z[jvj+30]=(V2<=sepcte) ? V2 : 0;
x[jvj+15]=x[jvj+30] ;z[jvj+15]=z[jvj+30];
goto l2;
l4:V4=knd[M];
NT=V4;
goto l20;
l6:if((M==0)) goto l7;
if((M<=0)) goto l19;
if((NT>1)) goto l11;
if((NT>0)) goto l13;
l19:v[0]=jvj; v[22]-=4; v[102]=0;return;
l7:if((NT<=0)) goto l19;
V12=ta1[K];
pile[v[22]]=849; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(849,jvj+2,jvj+4)*/
V13=x[jvj+4];
V55=V13;
V56=V55;
if((V56==89)) goto l21;
if((V56==41)) goto l22;
if((V56==96)) goto l23;
if((V56==23)) goto l24;
if((V56!=20)) goto l9;
if((V12<=sepcte)) goto l25;
if((V12<=sepcte)) goto l9;
x[jvj+16]=V12 ;z[jvj+16]=(V12<=sepcte) ? V12 : 0;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+5)*/
l8:pile[v[22]]=R; pile[WZ1]=447; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(R,447,jvj+5)*/
pile[v[22]]=S; 
(*f[35])( );     /*CHGC1(S,447,jvj+5)*/
l9:if((NT<=1)) goto l19;
V17=ta2[K];
pile[v[22]]=852; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(852,jvj+2,jvj+6)*/
V18=x[jvj+6];
V62=V18;
V63=V62;
if((V63==89)) goto l26;
if((V63==41)) goto l27;
if((V63==96)) goto l28;
if((V63==23)) goto l29;
if((V63!=20)) goto l19;
if((V17<=sepcte)) goto l30;
if((V17<=sepcte)) goto l19;
x[jvj+18]=V17 ;z[jvj+18]=(V17<=sepcte) ? V17 : 0;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+7)*/
l10:pile[v[22]]=R; pile[WZ1]=459; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(R,459,jvj+7)*/
pile[v[22]]=S; 
(*f[35])( );     /*CHGC1(S,459,jvj+7)*/
goto l19;
l11:V30=vnd[M][1];
pile[v[22]]=747; pile[WZ1]=S; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(747,S,V31)*/
V31=pile[WZ2]; 
if((V31!=V30)) goto l13;
pile[v[22]]=459; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(459,S,jvj+8)*/
V33=ta2[K];
V34=tnd[M][0];
V69=V34;
V70=V69;
if((V70==89)) goto l31;
if((V70==41)) goto l32;
if((V70==96)) goto l33;
if((V70==23)) goto l34;
if((V70!=20)) goto l13;
if((V33<=sepcte)) goto l35;
if((V33<=sepcte)) goto l13;
x[jvj+20]=V33 ;z[jvj+20]=(V33<=sepcte) ? V33 : 0;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+21)*/
l12:if((x[jvj+8]!=x[jvj+21])) goto l13;
pile[v[22]]=R; pile[WZ1]=747; pile[WZ2]=V30; 
(*f[177])( );     /*CHGC4(R,747,V30)*/
pile[WZ1]=459; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(R,459,jvj+8)*/
l13:V23=vnd[M][0];
V24=ta1[K];
V25=tnd[M][0];
V76=V25;
V77=V76;
if((V77==89)) goto l36;
if((V77==41)) goto l37;
if((V77==96)) goto l38;
if((V77==23)) goto l39;
if((V77!=20)) goto l15;
if((V24<=sepcte)) goto l40;
if((V24<=sepcte)) goto l15;
x[jvj+23]=V24 ;z[jvj+23]=(V24<=sepcte) ? V24 : 0;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+9)*/
l14:pile[v[22]]=R; pile[WZ1]=391; pile[WZ2]=V23; 
(*f[177])( );     /*CHGC4(R,391,V23)*/
pile[WZ1]=447; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(R,447,jvj+9)*/
pile[v[22]]=S; pile[WZ1]=391; pile[WZ2]=V23; 
(*f[177])( );     /*CHGC4(S,391,V23)*/
pile[WZ1]=447; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(S,447,jvj+9)*/
l15:if((NT<=2)) goto l19;
V39=vnd[M][2];
V40=ta3[K];
V41=tnd[M][0];
V83=V41;
V84=V83;
if((V84==89)) goto l41;
if((V84==41)) goto l42;
if((V84==96)) goto l43;
if((V84==23)) goto l44;
if((V84!=20)) goto l17;
if((V40<=sepcte)) goto l45;
if((V40<=sepcte)) goto l17;
x[jvj+25]=V40 ;z[jvj+25]=(V40<=sepcte) ? V40 : 0;
pile[v[22]]=jvj+25; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+25,jvj+10)*/
l16:pile[v[22]]=R; pile[WZ1]=1128; pile[WZ2]=V39; 
(*f[177])( );     /*CHGC4(R,1128,V39)*/
pile[WZ1]=475; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(R,475,jvj+10)*/
pile[v[22]]=S; pile[WZ1]=1128; pile[WZ2]=V39; 
(*f[177])( );     /*CHGC4(S,1128,V39)*/
pile[WZ1]=475; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(S,475,jvj+10)*/
l17:if((NT<=3)) goto l19;
V46=vnd[M][3];
V47=ta4[K];
V48=tnd[M][0];
V90=V48;
V91=V90;
if((V91==89)) goto l46;
if((V91==41)) goto l47;
if((V91==96)) goto l48;
if((V91==23)) goto l49;
if((V91!=20)) goto l19;
if((V47<=sepcte)) goto l50;
if((V47<=sepcte)) goto l19;
x[jvj+27]=V47 ;z[jvj+27]=(V47<=sepcte) ? V47 : 0;
pile[v[22]]=jvj+27; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+11)*/
l18:pile[v[22]]=R; pile[WZ1]=1129; pile[WZ2]=V46; 
(*f[177])( );     /*CHGC4(R,1129,V46)*/
pile[WZ1]=502; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(R,502,jvj+11)*/
pile[v[22]]=S; pile[WZ1]=1129; pile[WZ2]=V46; 
(*f[177])( );     /*CHGC4(S,1129,V46)*/
pile[WZ1]=502; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(S,502,jvj+11)*/
goto l19;
l21:pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V12; pile[WZ4]=jvj+5; 
(*f[272])( );     /*QUADRI9(100,89,162,V12,jvj+5)*/
goto l8;
l22:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V12; pile[WZ4]=jvj+5; 
(*f[192])( );     /*QUADRI4(100,41,130,V12,jvj+5)*/
goto l8;
l23:pile[v[22]]=100; pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V12; pile[WZ4]=jvj+5; 
(*f[270])( );     /*QUADRI7(100,96,163,V12,jvj+5)*/
goto l8;
l24:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=23; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,20,101,23,jvj+5)*/
goto l8;
l25:x[jvj+17]=V12 ;z[jvj+17]=(V12<=sepcte) ? V12 : 0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+17; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+17,jvj+5)*/
goto l8;
l26:pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V17; pile[WZ4]=jvj+7; 
(*f[272])( );     /*QUADRI9(100,89,162,V17,jvj+7)*/
goto l10;
l27:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V17; pile[WZ4]=jvj+7; 
(*f[192])( );     /*QUADRI4(100,41,130,V17,jvj+7)*/
goto l10;
l28:pile[v[22]]=100; pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V17; pile[WZ4]=jvj+7; 
(*f[270])( );     /*QUADRI7(100,96,163,V17,jvj+7)*/
goto l10;
l29:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=23; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,23,jvj+7)*/
goto l10;
l30:x[jvj+19]=V17 ;z[jvj+19]=(V17<=sepcte) ? V17 : 0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+19; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+19,jvj+7)*/
goto l10;
l31:pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V33; pile[WZ4]=jvj+21; 
(*f[272])( );     /*QUADRI9(100,89,162,V33,jvj+21)*/
goto l12;
l32:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V33; pile[WZ4]=jvj+21; 
(*f[192])( );     /*QUADRI4(100,41,130,V33,jvj+21)*/
goto l12;
l33:pile[v[22]]=100; pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V33; pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,96,163,V33,jvj+21)*/
goto l12;
l34:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=23; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,23,jvj+21)*/
goto l12;
l35:x[jvj+22]=V33 ;z[jvj+22]=(V33<=sepcte) ? V33 : 0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+22,jvj+21)*/
goto l12;
l36:pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V24; pile[WZ4]=jvj+9; 
(*f[272])( );     /*QUADRI9(100,89,162,V24,jvj+9)*/
goto l14;
l37:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V24; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(100,41,130,V24,jvj+9)*/
goto l14;
l38:pile[v[22]]=100; pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V24; pile[WZ4]=jvj+9; 
(*f[270])( );     /*QUADRI7(100,96,163,V24,jvj+9)*/
goto l14;
l39:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=23; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,23,jvj+9)*/
goto l14;
l40:x[jvj+24]=V24 ;z[jvj+24]=(V24<=sepcte) ? V24 : 0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+24; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+24,jvj+9)*/
goto l14;
l41:pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V40; pile[WZ4]=jvj+10; 
(*f[272])( );     /*QUADRI9(100,89,162,V40,jvj+10)*/
goto l16;
l42:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V40; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,V40,jvj+10)*/
goto l16;
l43:pile[v[22]]=100; pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V40; pile[WZ4]=jvj+10; 
(*f[270])( );     /*QUADRI7(100,96,163,V40,jvj+10)*/
goto l16;
l44:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=23; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,23,jvj+10)*/
goto l16;
l45:x[jvj+26]=V40 ;z[jvj+26]=(V40<=sepcte) ? V40 : 0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+26; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+26,jvj+10)*/
goto l16;
l46:pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V47; pile[WZ4]=jvj+11; 
(*f[272])( );     /*QUADRI9(100,89,162,V47,jvj+11)*/
goto l18;
l47:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V47; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,V47,jvj+11)*/
goto l18;
l48:pile[v[22]]=100; pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V47; pile[WZ4]=jvj+11; 
(*f[270])( );     /*QUADRI7(100,96,163,V47,jvj+11)*/
goto l18;
l49:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=23; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,23,jvj+11)*/
goto l18;
l50:x[jvj+28]=V47 ;z[jvj+28]=(V47<=sepcte) ? V47 : 0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+28; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+28,jvj+11)*/
goto l18;
}
