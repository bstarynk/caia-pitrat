#include "dx.h"
void EXAPBV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V20=0,V=0,V5=0,V4=0,V7=0,V6=0,V24=0,V23=0,V30=0,V25=0,V26=0,V21=0,V31=0,V33=0,V34=0,V35=0,V36=0,V37=0,V39=0,V40=0,V41=0,V43=0,V44=0,V45=0,V46=0,V48=0,V49=0,V50=0,V51=0,V52=0,V53=0,V55=0,V62=0,V61=0;
int J,UR,NX,NRR,E,EC,G;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=11218;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==517&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
J=pile[v[22]]; UR=pile[v[22]+1]; NX=pile[v[22]+2]; NRR=pile[v[22]+3]; E=pile[v[22]+4]; EC=pile[v[22]+5]; G=pile[v[22]+6]; v[22]+=7; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((UR==83)) goto l1;
if((UR==65)) goto l2;
if((UR==84)) goto l3;
if((UR!=69)) goto l22;
x[jvj+12]=876 ;z[jvj+12]=876;
l12:x[jvj+20]=x[E] ;z[jvj+20]=z[E];
l11:if((x[jvj+20]<=0)) goto l22;
x[jvj+8]=s[x[jvj+20]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+20];
pile[v[22]]=109; pile[WZ1]=jvj+8; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(109,jvj+8,jvj+15)*/
pile[v[22]]=983; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(983,jvj+15,jvj+16)*/
pile[v[22]]=878; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(878,jvj+16,jvj+17)*/
l23:if((x[jvj+17]<=0)) goto l13;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=163; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(163,jvj+18,V62)*/
V62=pile[WZ2]; 
pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(163,jvj+8,V61)*/
V61=pile[WZ2]; 
if((V62==V61)) goto l24;
x[jvj+17]=t[x[jvj+17]];
goto l23;
l1:x[jvj+12]=493 ;z[jvj+12]=493;
goto l12;
l2:x[jvj+12]=1005 ;z[jvj+12]=1005;
goto l12;
l3:x[jvj+12]=936 ;z[jvj+12]=936;
goto l12;
l6:pile[v[22]]=jvj+2; pile[WZ1]=EC; pile[WZ2]=683; pile[WZ3]=jvj+5; 
(*f[849])( );     /*EVCOND1(jvj+2,EC,683,jvj+5)*/
if((x[jvj+5]==135)) goto l14;
l5:x[jvj+19]=t[x[jvj+19]];
l4:if((x[jvj+19]<=0)) goto l13;
x[jvj+2]=s[x[jvj+19]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+19];
pile[v[22]]=683; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(683,jvj+2,V10)*/
V10=pile[WZ2]; 
if((V10!=NX)) goto l5;
pile[v[22]]=860; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(860,jvj+2,jvj+4)*/
if((x[jvj+4]!=530)) goto l5;
if(x[jvj+12]==493||x[jvj+12]==1005) goto l6;
pile[v[22]]=935; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(935,jvj+2,jvj+3)*/
if((x[jvj+3]==547)) goto l6;
goto l5;
l7:if((V26<V24)) goto l8;
l16:x[jvj+22]=t[x[jvj+22]];
l15:if((x[jvj+22]<=0)) goto l13;
x[jvj+6]=s[x[jvj+22]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+22];
pile[v[22]]=860; pile[WZ1]=jvj+6; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(860,jvj+6,jvj+13)*/
if((x[jvj+13]!=530)) goto l16;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(683,jvj+6,V25)*/
V25=pile[WZ2]; 
if((V25==NRR)) goto l17;
if((NRR==0)) goto l17;
goto l16;
l8:if(x[jvj+12]==1005||x[jvj+12]==493) goto l18;
pile[v[22]]=935; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(935,jvj+6,jvj+7)*/
if((x[jvj+7]==547)) goto l18;
goto l16;
l9:V4=V5;
l20:pile[v[22]]=41; pile[WZ1]=V26; pile[WZ2]=V4; 
(*f[39])( );     /*SDX0(41,V26,V4,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=V31; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V31,40,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=(-9543); pile[WZ1]=V33; 
(*f[64])( );     /*SRA2((-9543),V33,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V34; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V34,683,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=V35; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V35,58,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=V25; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V36,V25,41,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V37,41,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V39,32,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=60; 
(*f[38])( );     /*SPC0(V40,60,V7)*/
V7=pile[WZ2]; 
V6=incon;
if((x[J]==996)) goto l10;
V6=V7;
l21:pile[v[22]]=V6; pile[WZ1]=V24; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V6,V24,41,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V41,(-9543),V43)*/
V43=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V43,683,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V44,58,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=V23; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V45,V23,41,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=V46; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V46,44,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V48; pile[WZ2]=860; 
(*f[42])( );     /*SRA1(135,V48,860,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V49,58,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V50; pile[WZ2]=jvj+13; 
(*f[42])( );     /*SRA1(135,V50,jvj+13,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V51,40,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V52; pile[WZ1]=V21; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V52,V21,41,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V53,41,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=V55; 
(*f[40])( );     /*SLG0(V55)*/
pile[v[22]]=G; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(G,117,1)*/
goto l16;
l10:pile[v[22]]=V7; pile[WZ1]=60; 
(*f[38])( );     /*SPC0(V7,60,V6)*/
V6=pile[WZ2]; 
goto l21;
l13:x[jvj+20]=t[x[jvj+20]];
goto l11;
l14:pile[v[22]]=jvj+12; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(jvj+12,jvj+2,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(683,jvj+2,V23)*/
V23=pile[WZ2]; 
V30=x[jvj+9];
x[jvj+22]=x[jvj+11] ;z[jvj+22]=z[jvj+11];
goto l15;
l17:pile[v[22]]=jvj+12; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(jvj+12,jvj+6,V26)*/
V26=pile[WZ2]; 
if((x[J]==29)) goto l7;
if((x[J]!=996)) goto l16;
if(V26<((V24*9)/10)-2) goto l8;
goto l16;
l18:pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+6,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=jvj+6; pile[WZ1]=EC; pile[WZ2]=683; pile[WZ3]=jvj+14; 
(*f[849])( );     /*EVCOND1(jvj+6,EC,683,jvj+14)*/
if((x[jvj+14]==135)) goto l19;
goto l16;
l19:pile[v[22]]=20; pile[WZ1]=V30; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V30,0,V5)*/
V5=pile[WZ3]; 
V4=incon;
pile[v[22]]=163; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+8,V20)*/
V20=pile[WZ2]; 
V=V20;
pile[v[22]]=V5; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V5,V,V4)*/
V4=pile[WZ2]; 
goto l20;
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; return;
l24:x[jvj+21]=x[jvj+18] ;z[jvj+21]=z[jvj+18];
pile[v[22]]=109; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(109,jvj+8,jvj+9)*/
x[jvj+10]=x[jvj+21] ;z[jvj+10]=z[jvj+21];
pile[v[22]]=944; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(944,jvj+10,jvj+11)*/
x[jvj+19]=x[jvj+11] ;z[jvj+19]=z[jvj+11];
goto l4;
}
