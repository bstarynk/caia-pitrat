#include "dx.h"
void ENVIDOUBLE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V25=0,V26=0,V31=0,NN=0,V7=0,V33=0,V32=0,R=0,V23=0,V22=0,V16=0,V10=0,V9=0,V13=0,V14=0,V43=0,V44=0,V48=0,V46=0,V50=0;
int N,EE,B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=35;
x[jvj+1]=10797;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1721&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; EE=pile[v[22]+1]; B=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
NN=R=x[jvj+20]=incon;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(645,597,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l6;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=1092; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1092,jvj+5,jvj+6)*/
if((x[jvj+6]!=255)) goto l2;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+5,V31)*/
V31=pile[WZ2]; 
NN=V31;
x[jvj+11]=vo[12];z[jvj+11]=vz[12];
pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(683,jvj+11,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=N; pile[WZ1]=jvj+12; 
(*f[1292])( );if(v[102]) goto l6;     /*STOCKECHOIX0(N,jvj+12)*/
pile[v[22]]=1081; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1081,jvj+12,jvj+13)*/
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+35]=x[EE] ;z[jvj+35]=z[EE];
l3:if((x[jvj+35]>0)) goto l4;
x[jvj+26]=vo[12];z[jvj+26]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(683,jvj+26,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,jvj+26,jvj+27)*/
pile[v[22]]=6; pile[WZ1]=1102; pile[WZ2]=jvj+28; 
(*f[46])( );     /*TRI0(6,1102,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+13; pile[WZ2]=1081; pile[WZ3]=jvj+29; 
(*f[301])( );     /*TRI11(jvj+28,jvj+13,1081,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=616; pile[WZ2]=1062; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+29,616,1062,jvj+30)*/
pile[v[22]]=1060; pile[WZ1]=(-20); pile[WZ2]=jvj+30; pile[WZ3]=1056; pile[WZ4]=jvj+31; 
(*f[298])( );     /*TRIENS1(1060,(-20),jvj+30,1056,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=V43; pile[WZ2]=683; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,V43,683,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+10; pile[WZ2]=658; pile[WZ3]=jvj+33; 
(*f[301])( );     /*TRI11(jvj+32,jvj+10,658,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+27; pile[WZ2]=109; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+33,jvj+27,109,jvj+14)*/
pile[v[22]]=jvj+14; 
(*f[429])( );     /*NOUVSAUVE0(jvj+14)*/
pile[v[22]]=163; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(163,jvj+26,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=163; pile[WZ2]=V44; 
(*f[177])( );     /*CHGC4(jvj+14,163,V44)*/
l17:V46=incon;
x[jvj+34]=vo[14];z[jvj+34]=vz[14];
pile[v[22]]=1122; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(1122,jvj+34,V48)*/
V48=pile[WZ2]; 
V46=V48;
l18:V50=V46+10;
pile[v[22]]=jvj+14; pile[WZ1]=936; pile[WZ2]=V50; 
(*f[43])( );     /*CHGC2(jvj+14,936,V50)*/
V33=x[jvj+13];
pile[v[22]]=23; pile[WZ1]=V33; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(23,V33,0,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
pile[v[22]]=jvj+14; pile[WZ1]=860; pile[WZ2]=336; 
(*f[35])( );     /*CHGC1(jvj+14,860,336)*/
pile[WZ1]=1062; pile[WZ2]=616; 
(*f[35])( );     /*CHGC1(jvj+14,1062,616)*/
pile[WZ1]=1121; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+14,1121,1)*/
pile[WZ1]=359; pile[WZ2]=V7; 
(*f[43])( );     /*CHGC2(jvj+14,359,V7)*/
pile[WZ1]=683; pile[WZ2]=NN; 
(*f[43])( );     /*CHGC2(jvj+14,683,NN)*/
pile[WZ1]=1161; pile[WZ2]=978; 
(*f[35])( );     /*CHGC1(jvj+14,1161,978)*/
(*f[1262])( );if(v[102]) goto l6;     /*AJEXP2(jvj+14,R)*/
R=pile[WZ1]; 
l6:x[jvj+3]=vo[12];z[jvj+3]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(683,jvj+3,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(109,jvj+3,jvj+15)*/
pile[v[22]]=1109; pile[WZ1]=924; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1109,924,jvj+16)*/
l7:if((x[jvj+16]<=0)) goto l10;
x[jvj+2]=s[x[jvj+16]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+16];
pile[v[22]]=683; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(683,jvj+2,V22)*/
V22=pile[WZ2]; 
if((V22!=V23)) goto l8;
pile[v[22]]=109; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+2,jvj+17)*/
if((x[jvj+17]!=x[jvj+15])) goto l8;
pile[v[22]]=860; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(860,jvj+2,jvj+18)*/
if((x[jvj+18]!=336)) goto l8;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+2,V25)*/
V25=pile[WZ2]; 
pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+3,V26)*/
V26=pile[WZ2]; 
if((V25!=V26)) goto l8;
l9:x[jvj+20]=x[jvj+2] ;z[jvj+20]=z[jvj+2];
l13:if(R!=incon) goto l14;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l4:x[jvj+7]=s[x[jvj+35]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+35];
pile[v[22]]=287; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(287,jvj+7,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[1290])( );if(v[102]) goto l5;     /*DEPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+9)*/
l5:x[jvj+35]=t[x[jvj+35]];
goto l3;
l8:x[jvj+16]=t[x[jvj+16]];
goto l7;
l10:if(NN!=incon) goto l11;
goto l13;
l11:pile[v[22]]=1076; pile[WZ1]=966; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(1076,966,V10)*/
V10=pile[WZ2]; 
V9=V10+1;
pile[v[22]]=117; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,B,V13)*/
V13=pile[WZ2]; 
x[jvj+19]=vo[12];z[jvj+19]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(683,jvj+19,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(109,jvj+19,jvj+21)*/
pile[v[22]]=V13; pile[WZ1]=1114; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(V13,1114,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=V9; pile[WZ2]=1076; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,V9,1076,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=336; pile[WZ2]=860; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+23,336,860,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=NN; pile[WZ2]=683; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,NN,683,jvj+25)*/
pile[v[22]]=109; pile[WZ1]=jvj+21; pile[WZ2]=359; pile[WZ3]=V14; pile[WZ4]=jvj+25; pile[WZ5]=jvj+20; 
(*f[47])( );     /*QUADRI0(109,jvj+21,359,V14,jvj+25,jvj+20)*/
pile[v[22]]=163; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(163,jvj+19,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=jvj+20; pile[WZ1]=163; pile[WZ2]=V16; 
(*f[177])( );     /*CHGC4(jvj+20,163,V16)*/
l12:pile[v[22]]=966; pile[WZ1]=1076; pile[WZ2]=V9; 
(*f[43])( );     /*CHGC2(966,1076,V9)*/
goto l13;
l14:if(x[jvj+20]!=incon) goto l15;
goto l16;
l15:pile[v[22]]=924; pile[WZ1]=1109; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(924,1109,jvj+20)*/
pile[v[22]]=R; pile[WZ1]=1104; 
(*f[235])( );     /*PLUSC2(R,1104,jvj+20)*/
goto l16;
l19:V46=3;
goto l18;
}
