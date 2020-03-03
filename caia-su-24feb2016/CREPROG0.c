#include "dx.h"
void CREPROG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0,V1=0,V2=0,V6=0,V10=0,V9=0,V15=0,V14=0,V46=0,V47=0,V48=0,V49=0,V50=0,V51=0,V11=0,I=0,RES=0,V58=0,V53=0,V57=0,V23=0,V54=0,V55=0,V56=0,V37=0,V41=0,W=0,A=0,V31=0,V=0,RR=0,V44=0,V77=0,V76=0,V75=0,V78=0;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=10956;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1316&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[12];z[jvj+2]=vz[12];
pile[v[22]]=936; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(936,jvj+2,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(493,jvj+2,V6)*/
V6=pile[WZ2]; 
V1=incon;
pile[v[22]]=947; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(947,jvj+2,F)*/
F=pile[WZ2]; 
V1=F;
l2:v[70]=V6;
v[71]=0;
v[74]=0;
v[75]=0;
v[72]=0;
v[77]=0;
v[84]=V1;
vv[15]=3;
pile[v[22]]=248; pile[WZ1]=158; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(248,158,jvj+3)*/
pile[v[22]]=jvj+3; 
(*f[191])( );     /*MANAGER0(jvj+3)*/
v[73]=0;
l7:x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=jvj+6; pile[WZ1]=948; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+6,948,68)*/
pile[v[22]]=10290; 
(*f[1562])( );     /*QZZ0(10290)*/
if((v[245]<=0)) goto l5;
V11=(time(tzt)-inccc);
pile[WZ1]=0; 
(*f[185])( );     /*QXX0(10290,0)*/
V15=(time(tzt)-inccc);
V14=V15-V11;
pile[v[22]]=0; pile[WZ1]=(-9722); 
(*f[37])( );     /*SRA0(0,(-9722),V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V46,(-9543),V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=(-9952); 
(*f[37])( );     /*SRA0(V47,(-9952),V48)*/
V48=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=10290; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(20,10290,V48,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V49,58,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V14; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(41,V14,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; pile[WZ1]=(-9522); 
(*f[37])( );     /*SRA0(V51,(-9522),V10)*/
V10=pile[WZ2]; 
V9=incon;
if((V14>1)) goto l3;
V9=V10;
l4:pile[v[22]]=V9; 
(*f[40])( );     /*SLG0(V9)*/
l5:x[jvj+4]=vo[12];z[jvj+4]=vz[12];
pile[v[22]]=1257; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1257,jvj+4,jvj+5)*/
if((x[jvj+5]!=68)) goto l8;
I=1;
l6:if((I>v[71])) goto l8;
x[jvj+15]=vo[14];z[jvj+15]=vz[14];
pile[v[22]]=I; pile[WZ1]=493; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(I,493,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=1258; 
(*f[36])( );     /*PLUSC0(jvj+15,1258,jvj+16)*/
x[jvj+17]=vo[16];z[jvj+17]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(454,jvj+17,jvj+18)*/
l18:if((x[jvj+18]>0)) goto l19;
I++;
goto l6;
l1:V1=1;
goto l2;
l3:pile[v[22]]=V10; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V10,83,V9)*/
V9=pile[WZ2]; 
goto l4;
l8:if((v[131]!=0)) goto l9;
if((v[132]!=0)) goto l9;
RES=68;
l10:depuis=vv[52]+600-(time(tzt)-inccc);ensuite=depuis+600;alarm((depuis>=0) ? 1 : (ensuite>0) ? ensuite : 600);
vv[15]=2;
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=jvj+7; pile[WZ1]=893; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+7,893,12)*/
if((RES!=68)) goto l17;
if((v[71]<0)) goto l11;
V53=v[71];
pile[WZ1]=493; pile[WZ2]=V53; 
(*f[43])( );     /*CHGC2(jvj+7,493,V53)*/
pile[WZ1]=935; pile[WZ2]=325; 
(*f[35])( );     /*CHGC1(jvj+7,935,325)*/
l11:V57=v[77];
if((v[78]<=0)) goto l12;
V58=v[78];
pile[v[22]]=jvj+7; pile[WZ1]=1015; pile[WZ2]=V58; 
(*f[43])( );     /*CHGC2(jvj+7,1015,V58)*/
l12:pile[v[22]]=jvj+7; pile[WZ1]=695; pile[WZ2]=V57; 
(*f[43])( );     /*CHGC2(jvj+7,695,V57)*/
if((v[71]>=0)) goto l13;
x[jvj+8]=vo[12];z[jvj+8]=vz[12];
pile[v[22]]=493; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(493,jvj+8,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=935; pile[WZ2]=493; 
(*f[35])( );     /*CHGC1(jvj+7,935,493)*/
pile[WZ1]=493; pile[WZ2]=V23; 
(*f[43])( );     /*CHGC2(jvj+7,493,V23)*/
l13:if((v[75]==0)) goto l14;
V54=v[74];
V55=v[75];
V56=v[71];
pile[v[22]]=jvj+7; pile[WZ1]=949; pile[WZ2]=V54; 
(*f[43])( );     /*CHGC2(jvj+7,949,V54)*/
pile[WZ1]=238; pile[WZ2]=V55; 
(*f[43])( );     /*CHGC2(jvj+7,238,V55)*/
pile[WZ1]=935; pile[WZ2]=936; 
(*f[35])( );     /*CHGC1(jvj+7,935,936)*/
pile[WZ1]=493; pile[WZ2]=V56; 
(*f[43])( );     /*CHGC2(jvj+7,493,V56)*/
l14:x[jvj+9]=vo[16];z[jvj+9]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(454,jvj+9,jvj+10)*/
l15:if((x[jvj+10]<=0)) goto l17;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=454)) goto l16;
pile[v[22]]=102; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+11,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+13,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+11,jvj+14)*/
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+14,V41)*/
V41=pile[WZ2]; 
W=V41;
pile[v[22]]=W; 
(*f[817])( );if(v[102]) goto l16;     /*CARDENS1(W,A)*/
A=pile[WZ1]; 
pile[v[22]]=A; 
(*f[850])( );if(v[102]) goto l16;     /*LOG0(A,V31)*/
V31=pile[WZ1]; 
V=V37;
pile[v[22]]=V; 
(*f[817])( );if(v[102]) goto l16;     /*CARDENS1(V,RR)*/
RR=pile[WZ1]; 
V44=V31*RR;
pile[v[22]]=jvj+7; pile[WZ1]=956; pile[WZ2]=V44; 
(*f[186])( );     /*BTC0(jvj+7,956,V44)*/
l16:x[jvj+10]=t[x[jvj+10]];
goto l15;
l9:RES=67;
goto l10;
l17:x[jvj+1]=incon; v[0]=jvj; return;
l19:x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=481; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(481,jvj+19,jvj+20)*/
if((x[jvj+20]<=0)) goto l22;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=158; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(158,jvj+21,jvj+22)*/
pile[v[22]]=480; pile[WZ1]=jvj+19; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(480,jvj+19,jvj+23)*/
x[jvj+25]=x[jvj+22] ;z[jvj+25]=z[jvj+22];
x[jvj+30]=x[jvj+23] ;z[jvj+30]=z[jvj+23];
l20:if((x[jvj+30]<=0)) goto l22;
x[jvj+24]=s[x[jvj+30]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+30];
pile[v[22]]=642; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(642,jvj+24,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=jvj+25; pile[WZ1]=100; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,100,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+27; 
(*f[1290])( );if(v[102]) goto l21;     /*DEPEXP0(jvj+24,jvj+27)*/
V76=sk[I][V77];
V75=V76;
if((x[jvj+29]=w[x[jvj+25]][3])==incon) goto l21;
V78=V75;
pile[v[22]]=111; pile[WZ1]=jvj+26; pile[WZ2]=436; pile[WZ3]=jvj+27; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(111,jvj+26,436,jvj+27,jvj+28)*/
pile[v[22]]=jvj+16; pile[WZ1]=256; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+16,256,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+29; pile[WZ2]=V78; 
(*f[43])( );     /*CHGC2(jvj+26,jvj+29,V78)*/
l21:x[jvj+30]=t[x[jvj+30]];
goto l20;
l22:x[jvj+18]=t[x[jvj+18]];
goto l18;
}
