#include "dx.h"
void COMPLETER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V9=0,V12=0,V30=0,V31=0,V35=0,V18=0,V25=0,V34=0,V33=0,V24=0,K=0,V29=0,V28=0,V27=0,V10=0,V11=0,V51=0,V52=0,V53=0,V54=0,V55=0,V56=0,V57=0,V58=0,V59=0,V60=0,V61=0,V62=0,V63=0,V64=0,V65=0,V66=0,V67=0,V68=0,V69=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=11202;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1191&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1163; pile[WZ1]=1005; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(1163,1005,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=945; pile[WZ1]=493; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(945,493,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(457,324,jvj+7)*/
l9:if((x[jvj+7]<=0)) goto l16;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=983; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(983,jvj+8,jvj+9)*/
x[jvj+10]=x[jvj+9] ;z[jvj+10]=z[jvj+9];
pile[v[22]]=878; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(878,jvj+10,jvj+11)*/
x[jvj+34]=x[jvj+11] ;z[jvj+34]=z[jvj+11];
l11:if((x[jvj+34]<=0)) goto l10;
x[jvj+12]=s[x[jvj+34]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+34];
pile[v[22]]=944; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(944,jvj+12,jvj+13)*/
x[jvj+35]=x[jvj+13] ;z[jvj+35]=z[jvj+13];
l12:if((x[jvj+35]>0)) goto l13;
x[jvj+34]=t[x[jvj+34]];
goto l11;
l3:x[jvj+4]=s[x[jvj+33]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+33];
pile[v[22]]=935; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(935,jvj+4,jvj+5)*/
if((x[jvj+5]==325)) goto l20;
l4:x[jvj+33]=t[x[jvj+33]];
l2:if((x[jvj+33]>0)) goto l3;
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(163,jvj+2,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=jvj+6; pile[WZ1]=163; pile[WZ2]=V12; 
(*f[177])( );     /*CHGC4(jvj+6,163,V12)*/
l21:pile[v[22]]=jvj+6; 
(*f[554])( );     /*AJEXP1(jvj+6)*/
l20:x[jvj+36]=t[x[jvj+36]];
l19:if((x[jvj+36]<=0)) goto l18;
x[jvj+2]=s[x[jvj+36]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+36];
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+2,V7)*/
V7=pile[WZ2]; 
if((V7==(-7141))) goto l20;
l5:pile[v[22]]=876; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(876,jvj+2,V9)*/
V9=pile[WZ2]; 
if((V9==0)) goto l20;
l1:pile[v[22]]=944; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(944,jvj+2,jvj+3)*/
x[jvj+33]=x[jvj+3] ;z[jvj+33]=z[jvj+3];
goto l2;
l7:V18=V35;
l15:x[jvj+32]=x[jvj+17] ;z[jvj+32]=z[jvj+17];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+18; 
(*f[378])( );     /*CPI0(jvj+32,jvj+18)*/
V51=x[jvj+18];
pile[v[22]]=jvj+18; pile[WZ1]=0; pile[WZ2]=V51; pile[WZ3]=117; 
(*f[285])( );     /*ENLY0(jvj+18,0,V51,117,V52,V53)*/
V52=pile[WZ4]; V53=pile[WZ5]; 
pile[WZ1]=V53; pile[WZ2]=V52; pile[WZ3]=978; 
(*f[285])( );     /*ENLY0(jvj+18,V53,V52,978,V54,V55)*/
V54=pile[WZ4]; V55=pile[WZ5]; 
pile[WZ1]=V55; pile[WZ2]=V54; pile[WZ3]=999; 
(*f[285])( );     /*ENLY0(jvj+18,V55,V54,999,V56,V57)*/
V56=pile[WZ4]; V57=pile[WZ5]; 
pile[WZ1]=V57; pile[WZ2]=V56; pile[WZ3]=1002; 
(*f[285])( );     /*ENLY0(jvj+18,V57,V56,1002,V58,V59)*/
V58=pile[WZ4]; V59=pile[WZ5]; 
pile[WZ1]=V59; pile[WZ2]=V58; pile[WZ3]=1025; 
(*f[285])( );     /*ENLY0(jvj+18,V59,V58,1025,V60,V61)*/
V60=pile[WZ4]; V61=pile[WZ5]; 
pile[WZ1]=V61; pile[WZ2]=V60; pile[WZ3]=1042; 
(*f[285])( );     /*ENLY0(jvj+18,V61,V60,1042,V62,V63)*/
V62=pile[WZ4]; V63=pile[WZ5]; 
pile[WZ1]=V63; pile[WZ2]=V62; pile[WZ3]=1080; 
(*f[285])( );     /*ENLY0(jvj+18,V63,V62,1080,V64,V65)*/
V64=pile[WZ4]; V65=pile[WZ5]; 
pile[WZ1]=V65; pile[WZ2]=V64; pile[WZ3]=1104; 
(*f[285])( );     /*ENLY0(jvj+18,V65,V64,1104,V66,V67)*/
V66=pile[WZ4]; V67=pile[WZ5]; 
pile[WZ1]=V67; pile[WZ2]=V66; pile[WZ3]=1121; 
(*f[285])( );     /*ENLY0(jvj+18,V67,V66,1121,V68,V69)*/
V68=pile[WZ4]; V69=pile[WZ5]; 
pile[WZ1]=1161; pile[WZ2]=924; 
(*f[35])( );     /*CHGC1(jvj+18,1161,924)*/
pile[WZ1]=936; pile[WZ2]=V18; 
(*f[43])( );     /*CHGC2(jvj+18,936,V18)*/
pile[WZ1]=493; pile[WZ2]=V34; 
(*f[43])( );     /*CHGC2(jvj+18,493,V34)*/
(*f[554])( );     /*AJEXP1(jvj+18)*/
l14:x[jvj+35]=t[x[jvj+35]];
goto l12;
l10:x[jvj+7]=t[x[jvj+7]];
goto l9;
l13:x[jvj+14]=s[x[jvj+35]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+35];
pile[v[22]]=860; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(860,jvj+14,jvj+15)*/
if(x[jvj+15]!=530&&x[jvj+15]!=954) goto l14;
pile[v[22]]=935; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(935,jvj+14,jvj+16)*/
if(x[jvj+16]!=936&&x[jvj+16]!=493) goto l14;
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(493,jvj+14,V33)*/
V33=pile[WZ2]; 
if((V33>=V34)) goto l14;
pile[v[22]]=1005; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1005,jvj+14,V24)*/
V24=pile[WZ2]; 
K=V24;
if((K>=1000)) goto l14;
if((K<=V25)) goto l14;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(936,jvj+14,V29)*/
V29=pile[WZ2]; 
V28=V29*1400;
V27=V28/K;
pile[v[22]]=1078; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1078,jvj+14,jvj+17)*/
pile[v[22]]=945; pile[WZ1]=1005; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(945,1005,V30)*/
V30=pile[WZ2]; 
if((K<=V30)) goto l6;
pile[v[22]]=1163; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1163,936,V31)*/
V31=pile[WZ2]; 
if(V27>((V31*11)/10)+2) goto l14;
l6:V18=incon;
pile[v[22]]=1163; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(1163,936,V35)*/
V35=pile[WZ2]; 
if(V27>((V35*11)/10)+2) goto l7;
l8:V18=V27;
goto l15;
l16:pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(457,324,jvj+19)*/
pile[v[22]]=1038; pile[WZ1]=1058; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(1038,1058,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=945; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(945,936,V11)*/
V11=pile[WZ2]; 
l17:if((x[jvj+19]<=0)) goto l22;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=896; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(896,jvj+20,jvj+21)*/
if((x[jvj+21]!=0)) goto l18;
pile[v[22]]=983; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(983,jvj+20,jvj+22)*/
x[jvj+23]=x[jvj+22] ;z[jvj+23]=z[jvj+22];
pile[v[22]]=878; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(878,jvj+23,jvj+24)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+25; 
(*f[430])( );     /*POSPROG0(jvj+20,jvj+25)*/
if((x[jvj+25]==68)) goto l23;
l18:x[jvj+19]=t[x[jvj+19]];
goto l17;
l22:x[jvj+1]=incon; v[0]=jvj; return;
l23:pile[v[22]]=924; pile[WZ1]=1161; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(924,1161,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=V10; pile[WZ2]=1058; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,V10,1058,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=68; pile[WZ2]=948; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+27,68,948,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=V11; pile[WZ2]=936; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,V11,936,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=954; pile[WZ2]=860; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+29,954,860,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=3; pile[WZ2]=683; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,3,683,jvj+31)*/
pile[v[22]]=109; pile[WZ1]=jvj+20; pile[WZ2]=493; pile[WZ3]=100; pile[WZ4]=jvj+31; pile[WZ5]=jvj+6; 
(*f[47])( );     /*QUADRI0(109,jvj+20,493,100,jvj+31,jvj+6)*/
x[jvj+36]=x[jvj+24] ;z[jvj+36]=z[jvj+24];
goto l19;
}
