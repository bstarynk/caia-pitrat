#include "dx.h"
void ETUCONTR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V65=0,V58=0,V63=0,V=0,V153=0,V210=0,V211=0,V255=0,PP=0,V257=0,V267=0,P=0,V269=0,V43=0,V113=0,NN=0,V214=0,V209=0,V236=0,C=0,V237=0,D=0,V238=0,I=0,V121=0,V334=0,V293=0,V104=0,V105=0,V106=0,V87=0,V88=0,V364=0,V468=0,V431=0,V433=0,V349=0,V357=0,V362=0,V415=0,V385=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=292;
x[jvj+1]=11161;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==543&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=R; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(R,jvj+2)*/
for(i=x[jvj+2],V2=0;i>0;i=t[i],V2++)  ;
pile[WZ1]=870; pile[WZ2]=V2; 
(*f[43])( );     /*CHGC2(R,870,V2)*/
x[jvj+150]=vo[16];z[jvj+150]=vz[16];
pile[v[22]]=872; pile[WZ1]=jvj+150; pile[WZ2]=jvj+151; 
(*f[32])( );if(v[102]) goto l72;     /*FNDO0(872,jvj+150,jvj+151)*/
if((x[jvj+151]!=68)) goto l72;
pile[v[22]]=R; pile[WZ1]=jvj+152; 
(*f[889])( );     /*Z216Z0(R,jvj+152)*/
if((x[jvj+152]!=135)) goto l72;
pile[WZ1]=872; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,872,68)*/
l72:pile[v[22]]=1023; pile[WZ1]=jvj+150; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(1023,jvj+150,jvj+153)*/
if((x[jvj+153]!=68)) goto l73;
pile[v[22]]=R; pile[WZ1]=jvj+154; 
(*f[890])( );     /*Z220Z0(R,jvj+154)*/
if((x[jvj+154]!=135)) goto l73;
pile[WZ1]=1023; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,1023,68)*/
l73:pile[v[22]]=1070; pile[WZ1]=R; pile[WZ2]=jvj+155; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(1070,R,jvj+155)*/
if((x[jvj+155]!=68)) goto l74;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l74;     /*FNDC0(870,R,V43)*/
V43=pile[WZ2]; 
if((V43<=1)) goto l74;
pile[v[22]]=jvj+150; pile[WZ1]=1035; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+150,1035,1)*/
l74:pile[v[22]]=498; pile[WZ1]=jvj+150; pile[WZ2]=jvj+156; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(498,jvj+150,jvj+156)*/
pile[v[22]]=1274; pile[WZ1]=jvj+156; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(1274,jvj+156,V113)*/
V113=pile[WZ2]; 
if((V113<=0)) goto l75;
pile[v[22]]=R; 
(*f[691])( );if(v[102]) goto l75;     /*DETRECUR0(R,NN)*/
NN=pile[WZ1]; 
pile[WZ1]=1274; pile[WZ2]=NN; 
(*f[43])( );     /*CHGC2(R,1274,NN)*/
l75:pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+157; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(111,R,jvj+157)*/
pile[v[22]]=101; pile[WZ1]=jvj+157; pile[WZ2]=jvj+158; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(101,jvj+157,jvj+158)*/
if((x[jvj+158]!=55)) goto l79;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+159; 
(*f[33])( );     /*FNDE0(107,R,jvj+159)*/
x[jvj+163]=incon;
x[jvj+277]=x[jvj+159] ;z[jvj+277]=z[jvj+159];
l28:if((x[jvj+277]>0)) goto l29;
pile[v[22]]=1280; pile[WZ1]=R; pile[WZ2]=jvj+64; 
(*f[492])( );     /*FIGURE0(1280,R,jvj+64)*/
if((x[jvj+64]==135)) goto l30;
l31:x[jvj+163]=1291 ;z[jvj+163]=1291;
l77:x[jvj+285]=x[jvj+159] ;z[jvj+285]=z[jvj+159];
l76:if((x[jvj+285]<=0)) goto l25;
x[jvj+160]=s[x[jvj+285]] ;z[jvj+160]=(x[jvj+160]<=sepcte) ? x[jvj+160] : z[jvj+285];
pile[v[22]]=111; pile[WZ1]=jvj+160; pile[WZ2]=jvj+161; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(111,jvj+160,jvj+161)*/
pile[v[22]]=101; pile[WZ1]=jvj+161; pile[WZ2]=jvj+162; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(101,jvj+161,jvj+162)*/
if((x[jvj+162]!=48)) goto l78;
pile[v[22]]=R; pile[WZ1]=1294; pile[WZ2]=jvj+163; 
(*f[36])( );     /*PLUSC0(R,1294,jvj+163)*/
pile[v[22]]=jvj+156; pile[WZ1]=1216; 
(*f[36])( );     /*PLUSC0(jvj+156,1216,jvj+163)*/
l78:x[jvj+285]=t[x[jvj+285]];
goto l76;
l2:x[jvj+6]=s[x[jvj+272]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+272];
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=22)) goto l91;
pile[v[22]]=111; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(111,jvj+6,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+274]!=x[jvj+9])) goto l91;
x[jvj+272]=t[x[jvj+272]];
l1:if((x[jvj+272]>0)) goto l2;
x[jvj+184]=incon;
if((x[jvj+274]!=25)) goto l7;
x[jvj+273]=x[jvj+171] ;z[jvj+273]=z[jvj+171];
l5:if((x[jvj+273]>0)) goto l6;
x[jvj+184]=484 ;z[jvj+184]=484;
l97:pile[v[22]]=R; pile[WZ1]=869; pile[WZ2]=jvj+184; 
(*f[35])( );     /*CHGC1(R,869,jvj+184)*/
l91:x[jvj+286]=t[x[jvj+286]];
l89:if((x[jvj+286]>0)) goto l90;
pile[v[22]]=jvj+171; pile[WZ1]=R; pile[WZ2]=jvj+44; pile[WZ3]=jvj+185; pile[WZ4]=jvj+45; 
(*f[895])( );if(v[102]) goto l99;     /*CONCOM0(jvj+171,R,jvj+44,jvj+185,jvj+45)*/
if((x[jvj+44]==250)) goto l23;
pile[v[22]]=R; pile[WZ1]=1228; 
(*f[35])( );     /*CHGC1(R,1228,jvj+44)*/
l23:if((x[jvj+45]==0)) goto l98;
pile[v[22]]=R; pile[WZ1]=1581; pile[WZ2]=jvj+45; 
(*f[34])( );     /*CHGC0(R,1581,jvj+45)*/
l98:pile[v[22]]=R; pile[WZ1]=1191; pile[WZ2]=jvj+185; 
(*f[35])( );     /*CHGC1(R,1191,jvj+185)*/
l99:pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(870,R,V334)*/
V334=pile[WZ2]; 
if((V334!=1)) goto l48;
x[jvj+284]=x[jvj+171] ;z[jvj+284]=z[jvj+171];
l70:if((x[jvj+284]>0)) goto l71;
pile[v[22]]=R; pile[WZ1]=1294; pile[WZ2]=1598; 
(*f[36])( );     /*PLUSC0(R,1294,1598)*/
l48:x[jvj+280]=x[jvj+171] ;z[jvj+280]=z[jvj+171];
l47:if((x[jvj+280]<=0)) goto l51;
x[jvj+95]=s[x[jvj+280]] ;z[jvj+95]=(x[jvj+95]<=sepcte) ? x[jvj+95] : z[jvj+280];
pile[v[22]]=111; pile[WZ1]=jvj+95; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+95,jvj+99)*/
pile[v[22]]=100; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(100,jvj+95,jvj+100)*/
pile[v[22]]=101; pile[WZ1]=jvj+99; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+99,jvj+101)*/
if((x[jvj+100]!=22)) goto l49;
if((x[jvj+101]==1280)) goto l46;
if((x[jvj+101]!=48)) goto l49;
pile[v[22]]=107; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[33])( );     /*FNDE0(107,jvj+95,jvj+96)*/
x[jvj+279]=x[jvj+96] ;z[jvj+279]=z[jvj+96];
l45:if((x[jvj+279]<=0)) goto l100;
x[jvj+90]=s[x[jvj+279]] ;z[jvj+90]=(x[jvj+90]<=sepcte) ? x[jvj+90] : z[jvj+279];
pile[v[22]]=111; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+90,jvj+91)*/
pile[v[22]]=101; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+91,jvj+92)*/
if((x[jvj+92]!=1280)) goto l49;
pile[v[22]]=103; pile[WZ1]=jvj+90; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(103,jvj+90,jvj+93)*/
pile[v[22]]=130; pile[WZ1]=jvj+93; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(130,jvj+93,V255)*/
V255=pile[WZ2]; 
PP=V255;
if((PP==2)) goto l49;
pile[v[22]]=160; pile[WZ1]=jvj+90; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(160,jvj+90,jvj+94)*/
pile[v[22]]=130; pile[WZ1]=jvj+94; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(130,jvj+94,V257)*/
V257=pile[WZ2]; 
if((V257!=0)) goto l49;
x[jvj+279]=t[x[jvj+279]];
goto l45;
l4:x[jvj+13]=t[x[jvj+13]];
l3:if((x[jvj+13]<=0)) goto l7;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+14,jvj+10,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=484)) goto l4;
x[jvj+273]=t[x[jvj+273]];
goto l5;
l6:x[jvj+10]=s[x[jvj+273]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+273];
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=25)) goto l7;
x[jvj+13]=d[20];z[jvj+13]=0;
goto l3;
l7:x[jvj+184]=x[jvj+274] ;z[jvj+184]=z[jvj+274];
goto l97;
l8:pile[v[22]]=486; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[492])( );     /*FIGURE0(486,R,jvj+17)*/
if((x[jvj+17]==134)) goto l9;
l84:pile[v[22]]=R; pile[WZ1]=869; pile[WZ2]=769; 
(*f[35])( );     /*CHGC1(R,869,769)*/
l85:pile[v[22]]=R; 
(*f[899])( );if(v[102]) goto l87;     /*COMPTELT0(R,V236,C,V237,D)*/
V236=pile[WZ1]; C=pile[WZ2]; V237=pile[WZ3]; D=pile[WZ4]; 
V238=V236+V237;
if((D<=0)) goto l86;
pile[WZ1]=1188; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,1188,68)*/
l86:pile[v[22]]=R; pile[WZ1]=1370; pile[WZ2]=V238; 
(*f[43])( );     /*CHGC2(R,1370,V238)*/
l87:pile[v[22]]=1300; pile[WZ1]=22; pile[WZ2]=jvj+168; 
(*f[33])( );     /*FNDE0(1300,22,jvj+168)*/
pile[v[22]]=R; pile[WZ1]=1358; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,1358,68)*/
pile[v[22]]=jvj+168; pile[WZ1]=R; pile[WZ2]=R; pile[WZ3]=1300; 
(*f[690])( );     /*FIGURENS0(jvj+168,R,R,1300)*/
pile[v[22]]=111; pile[WZ2]=jvj+169; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,R,jvj+169)*/
pile[v[22]]=101; pile[WZ1]=jvj+169; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+169,jvj+3)*/
if((x[jvj+3]==625)) goto l88;
if((x[jvj+3]!=55)) goto l101;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+171; 
(*f[33])( );     /*FNDE0(107,R,jvj+171)*/
x[jvj+286]=x[jvj+171] ;z[jvj+286]=z[jvj+171];
goto l89;
l9:pile[v[22]]=R; pile[WZ1]=1142; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,1142,68)*/
goto l84;
l12:x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=498; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(498,jvj+19,jvj+20)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+20; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+20)*/
l13:x[jvj+18]=t[x[jvj+18]];
l11:if((x[jvj+18]>0)) goto l12;
x[jvj+288]=x[jvj+21] ;z[jvj+288]=z[jvj+21];
l111:x[jvj+208]=x[jvj+288] ;z[jvj+208]=z[jvj+288];
pile[v[22]]=R; pile[WZ1]=678; pile[WZ2]=jvj+208; 
(*f[34])( );     /*CHGC0(R,678,jvj+208)*/
pile[v[22]]=1101; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l129;     /*FNDC0(1101,R,V431)*/
V431=pile[WZ2]; 
if((V431!=2)) goto l129;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l129;     /*FNDC0(870,R,V433)*/
V433=pile[WZ2]; 
if((V433!=3)) goto l129;
pile[v[22]]=1105; pile[WZ2]=jvj+239; 
(*f[32])( );if(v[102]) goto l129;     /*FNDO0(1105,R,jvj+239)*/
if((x[jvj+239]!=68)) goto l129;
pile[v[22]]=868; pile[WZ2]=jvj+240; 
(*f[32])( );if(v[102]) goto l129;     /*FNDO0(868,R,jvj+240)*/
if((x[jvj+240]!=25)) goto l129;
pile[v[22]]=R; 
(*f[901])( );     /*PYTH0(R)*/
l129:pile[v[22]]=1142; pile[WZ1]=R; pile[WZ2]=jvj+241; 
(*f[32])( );if(v[102]) goto l130;     /*FNDO0(1142,R,jvj+241)*/
if((x[jvj+241]!=68)) goto l130;
pile[v[22]]=868; pile[WZ2]=jvj+242; 
(*f[32])( );if(v[102]) goto l130;     /*FNDO0(868,R,jvj+242)*/
if((x[jvj+242]!=25)) goto l130;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l130;     /*FNDC0(870,R,V349)*/
V349=pile[WZ2]; 
if((V349<=5)) goto l130;
pile[v[22]]=R; pile[WZ1]=301; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,301,68)*/
l130:pile[v[22]]=R; pile[WZ1]=jvj+243; 
(*f[900])( );     /*Z221Z0(R,jvj+243)*/
if((x[jvj+243]!=135)) goto l132;
x[jvj+244]=vo[16];z[jvj+244]=vz[16];
pile[v[22]]=1300; pile[WZ1]=R; pile[WZ2]=jvj+245; 
(*f[33])( );     /*FNDE0(1300,R,jvj+245)*/
for(a=x[jvj+245];a>0;a=t[a]) if(s[a]==596) goto l131;
l132:pile[v[22]]=1300; pile[WZ1]=R; pile[WZ2]=jvj+246; 
(*f[33])( );     /*FNDE0(1300,R,jvj+246)*/
V468=x[jvj+246];
l115:if((V468>0)) goto l116;
for(a=x[jvj+246];a>0;a=t[a]) if(s[a]==486) goto l133;
l136:pile[v[22]]=869; pile[WZ1]=R; pile[WZ2]=jvj+247; 
(*f[32])( );if(v[102]) goto l140;     /*FNDO0(869,R,jvj+247)*/
if((x[jvj+247]!=769)) goto l140;
pile[v[22]]=868; pile[WZ2]=jvj+248; 
(*f[32])( );if(v[102]) goto l138;     /*FNDO0(868,R,jvj+248)*/
if((x[jvj+248]!=25)) goto l138;
pile[v[22]]=1231; pile[WZ2]=jvj+249; 
(*f[33])( );     /*FNDE0(1231,R,jvj+249)*/
if((x[jvj+249]!=0)) goto l138;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l138;     /*FNDC0(870,R,V357)*/
V357=pile[WZ2]; 
if((V357>4)) goto l138;
pile[v[22]]=R; pile[WZ1]=jvj+250; 
(*f[887])( );     /*VARND0(R,jvj+250)*/
V362=V357-1;
l137:if((x[jvj+250]<=0)) goto l138;
x[jvj+251]=s[x[jvj+250]] ;z[jvj+251]=(x[jvj+251]<=sepcte) ? x[jvj+251] : z[jvj+250];
x[jvj+210]=0 ;z[jvj+210]=0;
pile[v[22]]=R; pile[WZ1]=jvj+209; 
(*f[887])( );     /*VARND0(R,jvj+209)*/
x[jvj+289]=x[jvj+209] ;z[jvj+289]=z[jvj+209];
l112:if((x[jvj+289]>0)) goto l113;
pile[v[22]]=20; pile[WZ1]=jvj+251; pile[WZ2]=jvj+252; 
(*f[409])( );     /*TRI14(20,jvj+251,jvj+252)*/
pile[v[22]]=jvj+252; pile[WZ1]=1261; pile[WZ2]=jvj+268; 
(*f[300])( );     /*TRI10(jvj+252,1261,jvj+268)*/
pile[v[22]]=jvj+268; pile[WZ1]=jvj+210; pile[WZ2]=1260; pile[WZ3]=jvj+269; 
(*f[301])( );     /*TRI11(jvj+268,jvj+210,1260,jvj+269)*/
pile[v[22]]=510; pile[WZ1]=V362; pile[WZ2]=515; pile[WZ3]=1; pile[WZ4]=jvj+269; pile[WZ5]=jvj+253; 
(*f[190])( );     /*QUADRI3(510,V362,515,1,jvj+269,jvj+253)*/
pile[v[22]]=R; pile[WZ1]=1231; pile[WZ2]=jvj+253; 
(*f[36])( );     /*PLUSC0(R,1231,jvj+253)*/
x[jvj+250]=t[x[jvj+250]];
goto l137;
l14:x[jvj+31]=0 ;z[jvj+31]=0;
pile[v[22]]=R; pile[WZ1]=jvj+27; 
(*f[891])( );     /*VAREXP0(R,jvj+27)*/
l17:if((x[jvj+27]>0)) goto l18;
x[jvj+288]=x[jvj+31] ;z[jvj+288]=z[jvj+31];
goto l111;
l16:x[jvj+275]=t[x[jvj+275]];
l15:if((x[jvj+275]<=0)) goto l19;
x[jvj+24]=s[x[jvj+275]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+275];
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=454)) goto l16;
pile[v[22]]=436; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(436,jvj+24,jvj+26)*/
pile[v[22]]=140; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+26,V58)*/
V58=pile[WZ2]; 
if((V!=V58)) goto l16;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+24; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+24)*/
l19:x[jvj+27]=t[x[jvj+27]];
goto l17;
l18:x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=484)) goto l19;
pile[v[22]]=111; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+28,jvj+30)*/
pile[v[22]]=140; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+30,V63)*/
V63=pile[WZ2]; 
V=V63;
x[jvj+22]=vo[16];z[jvj+22]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(454,jvj+22,jvj+23)*/
x[jvj+275]=x[jvj+23] ;z[jvj+275]=z[jvj+23];
goto l15;
l21:x[jvj+32]=s[x[jvj+276]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+276];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[887])( );     /*VARND0(jvj+32,jvj+33)*/
if((x[jvj+33]<=0)) goto l22;
x[jvj+35]=s[x[jvj+33]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+33];
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[68])( );     /*PLUE0(jvj+34,jvj+35)*/
l22:x[jvj+276]=t[x[jvj+276]];
l20:if((x[jvj+276]>0)) goto l21;
for(i=x[jvj+206],V88=0;i>0;i=t[i],V88++)  ;
pile[v[22]]=jvj+34; pile[WZ1]=1261; pile[WZ2]=jvj+266; 
(*f[300])( );     /*TRI10(jvj+34,1261,jvj+266)*/
pile[v[22]]=jvj+266; pile[WZ1]=jvj+204; pile[WZ2]=1260; pile[WZ3]=jvj+267; 
(*f[301])( );     /*TRI11(jvj+266,jvj+204,1260,jvj+267)*/
pile[v[22]]=510; pile[WZ1]=V87; pile[WZ2]=515; pile[WZ3]=V88; pile[WZ4]=jvj+267; pile[WZ5]=jvj+207; 
(*f[190])( );     /*QUADRI3(510,V87,515,V88,jvj+267,jvj+207)*/
pile[v[22]]=R; pile[WZ1]=1231; pile[WZ2]=jvj+207; 
(*f[36])( );     /*PLUSC0(R,1231,jvj+207)*/
l110:x[jvj+197]=t[x[jvj+197]];
l107:if((x[jvj+197]>0)) goto l108;
x[jvj+87]=d[20];z[jvj+87]=0;
l42:if((x[jvj+87]>0)) goto l43;
pile[v[22]]=R; pile[WZ1]=1294; pile[WZ2]=1340; 
(*f[36])( );     /*PLUSC0(R,1294,1340)*/
l10:x[jvj+288]=incon;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(870,R,V65)*/
V65=pile[WZ2]; 
if((V65<=0)) goto l14;
x[jvj+21]=0 ;z[jvj+21]=0;
pile[v[22]]=R; pile[WZ1]=jvj+18; 
(*f[887])( );     /*VARND0(R,jvj+18)*/
goto l11;
l26:x[jvj+46]=s[x[jvj+159]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+159];
pile[v[22]]=100; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+46,jvj+47)*/
if((x[jvj+47]!=22)) goto l24;
pile[v[22]]=111; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+46,jvj+48)*/
pile[v[22]]=101; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+48,jvj+49)*/
V153=x[jvj+49];
if(V153!=25&&V153!=26&&V153!=27&&V153!=28&&V153!=29&&V153!=30) goto l24;
pile[v[22]]=102; pile[WZ1]=jvj+46; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,jvj+46,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+50,jvj+51)*/
if((x[jvj+51]!=484)) goto l24;
pile[v[22]]=103; pile[WZ1]=jvj+46; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(103,jvj+46,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+52,jvj+53)*/
if(x[jvj+53]==96||x[jvj+53]==89||x[jvj+53]==41||x[jvj+53]==20||x[jvj+53]==128||x[jvj+53]==570||x[jvj+53]==1317) goto l27;
l24:pile[v[22]]=100; pile[WZ1]=jvj+46; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(100,jvj+46,jvj+54)*/
if((x[jvj+54]!=22)) goto l79;
pile[v[22]]=111; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(111,jvj+46,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(101,jvj+55,jvj+56)*/
if(x[jvj+56]!=25&&x[jvj+56]!=26&&x[jvj+56]!=27&&x[jvj+56]!=28&&x[jvj+56]!=29&&x[jvj+56]!=30) goto l79;
pile[v[22]]=103; pile[WZ1]=jvj+46; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(103,jvj+46,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(100,jvj+57,jvj+58)*/
if((x[jvj+58]!=484)) goto l79;
pile[v[22]]=102; pile[WZ1]=jvj+46; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(102,jvj+46,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(100,jvj+59,jvj+60)*/
if(x[jvj+60]==96||x[jvj+60]==89||x[jvj+60]==41||x[jvj+60]==20||x[jvj+60]==128||x[jvj+60]==570||x[jvj+60]==1317) goto l27;
l79:pile[v[22]]=905; pile[WZ1]=jvj+150; 
(*f[44])( );if(v[102]) goto l83;     /*FNDC1(905,jvj+150,V214)*/
V214=pile[WZ2]; 
if((V214!=(-9009))) goto l83;
pile[v[22]]=R; 
(*f[897])( );if(v[102]) goto l81;     /*DGR0(R,V209)*/
V209=pile[WZ1]; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(111,R,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(101,jvj+69,jvj+70)*/
if((x[jvj+70]!=25)) goto l80;
x[jvj+71]=d[20];z[jvj+71]=0;
l33:if((x[jvj+71]<=0)) goto l80;
x[jvj+72]=s[x[jvj+71]] ;z[jvj+72]=(x[jvj+72]<=sepcte) ? x[jvj+72] : z[jvj+71];
pile[v[22]]=268; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(268,jvj+72,jvj+73)*/
pile[v[22]]=jvj+72; pile[WZ1]=R; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+72,R,jvj+74)*/
pile[v[22]]=jvj+73; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+73,R,jvj+75)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+76; 
(*f[898])( );if(v[102]) goto l34;     /*DEPH0(jvj+74,jvj+76)*/
if((x[jvj+76]==135)) goto l35;
l34:x[jvj+71]=t[x[jvj+71]];
goto l33;
l27:x[jvj+159]=t[x[jvj+159]];
l25:if((x[jvj+159]>0)) goto l26;
pile[v[22]]=R; pile[WZ1]=1294; pile[WZ2]=1301; 
(*f[36])( );     /*PLUSC0(R,1294,1301)*/
pile[v[22]]=jvj+156; pile[WZ1]=1216; 
(*f[36])( );     /*PLUSC0(jvj+156,1216,1301)*/
goto l79;
l29:x[jvj+61]=s[x[jvj+277]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+277];
pile[v[22]]=111; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+61,jvj+62)*/
pile[v[22]]=101; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+62,jvj+63)*/
if((x[jvj+63]!=48)) goto l31;
x[jvj+277]=t[x[jvj+277]];
goto l28;
l30:x[jvj+163]=1311 ;z[jvj+163]=1311;
goto l77;
l35:pile[v[22]]=jvj+75; pile[WZ1]=jvj+77; 
(*f[898])( );if(v[102]) goto l34;     /*DEPH0(jvj+75,jvj+77)*/
if((x[jvj+77]==135)) goto l36;
goto l34;
l36:pile[v[22]]=jvj+74; 
(*f[897])( );if(v[102]) goto l34;     /*DGR0(jvj+74,V210)*/
V210=pile[WZ1]; 
pile[v[22]]=jvj+75; 
(*f[897])( );if(v[102]) goto l34;     /*DGR0(jvj+75,V211)*/
V211=pile[WZ1]; 
if((V210!=V211)) goto l34;
pile[v[22]]=R; pile[WZ1]=1105; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,1105,68)*/
goto l34;
l40:x[jvj+278]=t[x[jvj+278]];
l39:if((x[jvj+278]<=0)) goto l44;
x[jvj+81]=s[x[jvj+278]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+278];
pile[v[22]]=100; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+81,jvj+82)*/
if((x[jvj+82]==41)) goto l40;
l38:pile[v[22]]=100; pile[WZ1]=jvj+81; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+81,jvj+83)*/
if((x[jvj+83]==484)) goto l40;
goto l10;
l43:x[jvj+88]=s[x[jvj+87]] ;z[jvj+88]=(x[jvj+88]<=sepcte) ? x[jvj+88] : z[jvj+87];
pile[v[22]]=jvj+88; pile[WZ1]=R; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(jvj+88,R,jvj+89)*/
x[jvj+78]=x[jvj+89] ;z[jvj+78]=z[jvj+89];
pile[v[22]]=100; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(100,jvj+78,jvj+79)*/
if((x[jvj+79]==41)) goto l44;
l37:pile[v[22]]=100; pile[WZ1]=jvj+78; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+78,jvj+80)*/
if((x[jvj+80]==484)) goto l44;
l41:pile[v[22]]=111; pile[WZ1]=jvj+78; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+78,jvj+84)*/
pile[v[22]]=101; pile[WZ1]=jvj+84; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+84,jvj+85)*/
if((x[jvj+85]!=486)) goto l10;
pile[v[22]]=107; pile[WZ1]=jvj+78; pile[WZ2]=jvj+86; 
(*f[33])( );     /*FNDE0(107,jvj+78,jvj+86)*/
x[jvj+278]=x[jvj+86] ;z[jvj+278]=z[jvj+86];
goto l39;
l44:x[jvj+87]=t[x[jvj+87]];
goto l42;
l46:pile[v[22]]=103; pile[WZ1]=jvj+95; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(103,jvj+95,jvj+97)*/
pile[v[22]]=130; pile[WZ1]=jvj+97; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(130,jvj+97,V267)*/
V267=pile[WZ2]; 
P=V267;
if((P==2)) goto l49;
pile[v[22]]=160; pile[WZ1]=jvj+95; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(160,jvj+95,jvj+98)*/
pile[v[22]]=130; pile[WZ1]=jvj+98; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(130,jvj+98,V269)*/
V269=pile[WZ2]; 
if((V269==0)) goto l100;
l49:x[jvj+280]=t[x[jvj+280]];
goto l47;
l52:x[jvj+281]=t[x[jvj+281]];
l50:if((x[jvj+281]<=0)) goto l101;
x[jvj+102]=s[x[jvj+281]] ;z[jvj+102]=(x[jvj+102]<=sepcte) ? x[jvj+102] : z[jvj+281];
pile[v[22]]=111; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(111,jvj+102,jvj+103)*/
pile[v[22]]=101; pile[WZ1]=jvj+103; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(101,jvj+103,jvj+104)*/
if((x[jvj+104]!=48)) goto l52;
pile[v[22]]=111; pile[WZ1]=jvj+102; pile[WZ2]=jvj+186; 
(*f[32])( );if(v[102]) goto l101;     /*FNDO0(111,jvj+102,jvj+186)*/
pile[v[22]]=101; pile[WZ1]=jvj+186; pile[WZ2]=jvj+187; 
(*f[32])( );if(v[102]) goto l101;     /*FNDO0(101,jvj+186,jvj+187)*/
if((x[jvj+187]!=48)) goto l101;
pile[v[22]]=107; pile[WZ1]=jvj+102; pile[WZ2]=jvj+188; 
(*f[33])( );     /*FNDE0(107,jvj+102,jvj+188)*/
x[jvj+139]=0 ;z[jvj+139]=0;
l63:if((x[jvj+188]>0)) goto l64;
for(i=x[jvj+139],V293=0;i>0;i=t[i],V293++)  ;
if((V293<=1)) goto l101;
pile[v[22]]=R; pile[WZ1]=1232; pile[WZ2]=jvj+139; 
(*f[34])( );     /*CHGC0(R,1232,jvj+139)*/
l101:pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+189; 
(*f[32])( );if(v[102]) goto l104;     /*FNDO0(100,R,jvj+189)*/
if((x[jvj+189]!=22)) goto l104;
if(x[jvj+3]!=55&&x[jvj+3]!=1171) goto l102;
pile[v[22]]=297; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l102;     /*FNDO0(297,jvj+3,jvj+4)*/
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+5,jvj+4,68)*/
l102:pile[v[22]]=R; pile[WZ1]=868; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(R,868,jvj+3)*/
if(x[jvj+3]!=25&&x[jvj+3]!=30) goto l104;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l104;     /*FNDO0(102,R,jvj+36)*/
pile[v[22]]=103; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l104;     /*FNDO0(103,R,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[893])( );     /*SM0(jvj+36,jvj+37)*/
if((x[jvj+37]!=0)) goto l103;
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[893])( );     /*SM0(jvj+38,jvj+39)*/
if((x[jvj+39]!=0)) goto l103;
l104:if((x[jvj+3]!=25)) goto l10;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l109;     /*FNDC0(870,R,V104)*/
V104=pile[WZ2]; 
if((V104!=2)) goto l109;
x[jvj+190]=d[20];z[jvj+190]=0;
l105:if((x[jvj+190]<=0)) goto l109;
x[jvj+191]=s[x[jvj+190]] ;z[jvj+191]=(x[jvj+191]<=sepcte) ? x[jvj+191] : z[jvj+190];
pile[v[22]]=jvj+191; pile[WZ1]=R; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l106;     /*FNDO0(jvj+191,R,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+192; 
(*f[887])( );     /*VARND0(jvj+40,jvj+192)*/
for(i=x[jvj+192],V105=0;i>0;i=t[i],V105++)  ;
if((V105!=1)) goto l106;
pile[v[22]]=268; pile[WZ1]=jvj+191; pile[WZ2]=jvj+193; 
(*f[32])( );if(v[102]) goto l106;     /*FNDO0(268,jvj+191,jvj+193)*/
pile[v[22]]=jvj+193; pile[WZ1]=R; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l106;     /*FNDO0(jvj+193,R,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+194; 
(*f[887])( );     /*VARND0(jvj+42,jvj+194)*/
for(i=x[jvj+194],V106=0;i>0;i=t[i],V106++)  ;
if((V106!=1)) goto l106;
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[887])( );     /*VARND0(jvj+40,jvj+41)*/
if((x[jvj+41]<=0)) goto l106;
x[jvj+264]=s[x[jvj+41]] ;z[jvj+264]=(x[jvj+264]<=sepcte) ? x[jvj+264] : z[jvj+41];
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[887])( );     /*VARND0(jvj+42,jvj+43)*/
if((x[jvj+43]<=0)) goto l106;
x[jvj+265]=s[x[jvj+43]] ;z[jvj+265]=(x[jvj+265]<=sepcte) ? x[jvj+265] : z[jvj+43];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+195; 
(*f[888])( );     /*LINEAIRE0(jvj+40,jvj+195)*/
if((x[jvj+195]==135)) goto l144;
l106:x[jvj+190]=t[x[jvj+190]];
goto l105;
l54:x[jvj+282]=t[x[jvj+282]];
l53:if((x[jvj+282]<=0)) goto l57;
x[jvj+109]=s[x[jvj+282]] ;z[jvj+109]=(x[jvj+109]<=sepcte) ? x[jvj+109] : z[jvj+282];
pile[v[22]]=111; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(111,jvj+109,jvj+110)*/
pile[v[22]]=101; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(101,jvj+110,jvj+111)*/
if((x[jvj+111]!=25)) goto l54;
x[jvj+112]=d[20];z[jvj+112]=0;
l55:if((x[jvj+112]<=0)) goto l54;
x[jvj+113]=s[x[jvj+112]] ;z[jvj+113]=(x[jvj+113]<=sepcte) ? x[jvj+113] : z[jvj+112];
pile[v[22]]=268; pile[WZ1]=jvj+113; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(268,jvj+113,jvj+114)*/
pile[v[22]]=jvj+114; pile[WZ1]=jvj+109; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(jvj+114,jvj+109,jvj+115)*/
pile[v[22]]=100; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(100,jvj+115,jvj+116)*/
if(x[jvj+116]!=96&&x[jvj+116]!=89&&x[jvj+116]!=41&&x[jvj+116]!=20&&x[jvj+116]!=128&&x[jvj+116]!=570&&x[jvj+116]!=1317) goto l56;
pile[v[22]]=jvj+113; pile[WZ1]=jvj+109; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(jvj+113,jvj+109,jvj+117)*/
pile[v[22]]=jvj+118; pile[WZ1]=jvj+117; pile[WZ2]=jvj+119; 
(*f[760])( );     /*MEMEX0(jvj+118,jvj+117,jvj+119)*/
if((x[jvj+119]==135)) goto l62;
l56:x[jvj+112]=t[x[jvj+112]];
goto l55;
l57:pile[v[22]]=111; pile[WZ1]=jvj+105; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(111,jvj+105,jvj+120)*/
pile[v[22]]=101; pile[WZ1]=jvj+120; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(101,jvj+120,jvj+121)*/
if((x[jvj+121]!=25)) goto l67;
x[jvj+122]=d[20];z[jvj+122]=0;
l58:if((x[jvj+122]<=0)) goto l67;
x[jvj+123]=s[x[jvj+122]] ;z[jvj+123]=(x[jvj+123]<=sepcte) ? x[jvj+123] : z[jvj+122];
pile[v[22]]=268; pile[WZ1]=jvj+123; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(268,jvj+123,jvj+124)*/
pile[v[22]]=jvj+124; pile[WZ1]=jvj+105; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(jvj+124,jvj+105,jvj+125)*/
pile[v[22]]=100; pile[WZ1]=jvj+125; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(100,jvj+125,jvj+126)*/
if(x[jvj+126]!=96&&x[jvj+126]!=89&&x[jvj+126]!=41&&x[jvj+126]!=20&&x[jvj+126]!=128&&x[jvj+126]!=570&&x[jvj+126]!=1317) goto l59;
pile[v[22]]=jvj+123; pile[WZ1]=jvj+105; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(jvj+123,jvj+105,jvj+127)*/
pile[v[22]]=jvj+118; pile[WZ1]=jvj+127; pile[WZ2]=jvj+128; 
(*f[760])( );     /*MEMEX0(jvj+118,jvj+127,jvj+128)*/
if((x[jvj+128]==135)) goto l62;
l59:x[jvj+122]=t[x[jvj+122]];
goto l58;
l61:x[jvj+105]=s[x[jvj+283]] ;z[jvj+105]=(x[jvj+105]<=sepcte) ? x[jvj+105] : z[jvj+283];
pile[v[22]]=111; pile[WZ1]=jvj+105; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(111,jvj+105,jvj+106)*/
pile[v[22]]=101; pile[WZ1]=jvj+106; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(101,jvj+106,jvj+107)*/
if((x[jvj+107]!=48)) goto l57;
pile[v[22]]=107; pile[WZ1]=jvj+105; pile[WZ2]=jvj+108; 
(*f[33])( );     /*FNDE0(107,jvj+105,jvj+108)*/
x[jvj+282]=x[jvj+108] ;z[jvj+282]=z[jvj+108];
goto l53;
l62:x[jvj+283]=t[x[jvj+283]];
l60:if((x[jvj+283]>0)) goto l61;
pile[v[22]]=jvj+139; pile[WZ1]=jvj+138; 
(*f[68])( );     /*PLUE0(jvj+139,jvj+138)*/
l67:x[jvj+132]=t[x[jvj+132]];
l66:if((x[jvj+132]<=0)) goto l65;
x[jvj+133]=s[x[jvj+132]] ;z[jvj+133]=(x[jvj+133]<=sepcte) ? x[jvj+133] : z[jvj+132];
pile[v[22]]=jvj+133; pile[WZ1]=jvj+129; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(jvj+133,jvj+129,jvj+118)*/
pile[v[22]]=100; pile[WZ1]=jvj+118; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(100,jvj+118,jvj+134)*/
if((x[jvj+134]!=484)) goto l67;
pile[v[22]]=268; pile[WZ1]=jvj+133; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(268,jvj+133,jvj+135)*/
pile[v[22]]=jvj+135; pile[WZ1]=jvj+129; pile[WZ2]=jvj+136; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(jvj+135,jvj+129,jvj+136)*/
pile[v[22]]=100; pile[WZ1]=jvj+136; pile[WZ2]=jvj+137; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(100,jvj+136,jvj+137)*/
if(x[jvj+137]!=96&&x[jvj+137]!=89&&x[jvj+137]!=41&&x[jvj+137]!=20&&x[jvj+137]!=128&&x[jvj+137]!=570&&x[jvj+137]!=1317) goto l67;
pile[v[22]]=jvj+118; pile[WZ1]=jvj+138; 
(*f[200])( );if(v[102]) goto l67;     /*NDD0(jvj+118,jvj+138)*/
x[jvj+283]=x[jvj+171] ;z[jvj+283]=z[jvj+171];
goto l60;
l64:x[jvj+129]=s[x[jvj+188]] ;z[jvj+129]=(x[jvj+129]<=sepcte) ? x[jvj+129] : z[jvj+188];
pile[v[22]]=111; pile[WZ1]=jvj+129; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(111,jvj+129,jvj+130)*/
pile[v[22]]=101; pile[WZ1]=jvj+130; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(101,jvj+130,jvj+131)*/
if((x[jvj+131]!=25)) goto l65;
x[jvj+132]=d[20];z[jvj+132]=0;
goto l66;
l65:x[jvj+188]=t[x[jvj+188]];
goto l63;
l69:x[jvj+143]=t[x[jvj+143]];
l68:if((x[jvj+143]<=0)) goto l48;
x[jvj+144]=s[x[jvj+143]] ;z[jvj+144]=(x[jvj+144]<=sepcte) ? x[jvj+144] : z[jvj+143];
pile[v[22]]=jvj+144; pile[WZ1]=jvj+140; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(jvj+144,jvj+140,jvj+145)*/
pile[v[22]]=100; pile[WZ1]=jvj+145; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(100,jvj+145,jvj+146)*/
if((x[jvj+146]!=484)) goto l69;
pile[v[22]]=268; pile[WZ1]=jvj+144; pile[WZ2]=jvj+147; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(268,jvj+144,jvj+147)*/
pile[v[22]]=jvj+147; pile[WZ1]=jvj+140; pile[WZ2]=jvj+148; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(jvj+147,jvj+140,jvj+148)*/
pile[v[22]]=100; pile[WZ1]=jvj+148; pile[WZ2]=jvj+149; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(100,jvj+148,jvj+149)*/
if(x[jvj+149]!=96&&x[jvj+149]!=89&&x[jvj+149]!=41&&x[jvj+149]!=20&&x[jvj+149]!=128&&x[jvj+149]!=570&&x[jvj+149]!=1317) goto l69;
x[jvj+284]=t[x[jvj+284]];
goto l70;
l71:x[jvj+140]=s[x[jvj+284]] ;z[jvj+140]=(x[jvj+140]<=sepcte) ? x[jvj+140] : z[jvj+284];
pile[v[22]]=111; pile[WZ1]=jvj+140; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(111,jvj+140,jvj+141)*/
pile[v[22]]=101; pile[WZ1]=jvj+141; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(101,jvj+141,jvj+142)*/
if((x[jvj+142]!=25)) goto l48;
x[jvj+143]=d[20];z[jvj+143]=0;
goto l68;
l80:pile[v[22]]=R; pile[WZ1]=1101; pile[WZ2]=V209; 
(*f[43])( );     /*CHGC2(R,1101,V209)*/
l81:pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+164; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(100,R,jvj+164)*/
if((x[jvj+164]!=22)) goto l83;
pile[v[22]]=111; pile[WZ2]=jvj+165; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(111,R,jvj+165)*/
pile[v[22]]=101; pile[WZ1]=jvj+165; pile[WZ2]=jvj+166; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(101,jvj+165,jvj+166)*/
if(x[jvj+166]!=25&&x[jvj+166]!=29&&x[jvj+166]!=30) goto l83;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(102,R,jvj+65)*/
pile[v[22]]=103; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(103,R,jvj+67)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; 
(*f[896])( );if(v[102]) goto l32;     /*POSFACT0(jvj+65,jvj+66)*/
if((x[jvj+66]==68)) goto l82;
l32:pile[v[22]]=jvj+67; pile[WZ1]=jvj+68; 
(*f[896])( );if(v[102]) goto l83;     /*POSFACT0(jvj+67,jvj+68)*/
if((x[jvj+68]==68)) goto l82;
l83:pile[v[22]]=R; pile[WZ1]=jvj+167; 
(*f[888])( );     /*LINEAIRE0(R,jvj+167)*/
if((x[jvj+167]==135)) goto l8;
goto l85;
l82:pile[v[22]]=R; pile[WZ1]=1328; pile[WZ2]=169; 
(*f[36])( );     /*PLUSC0(R,1328,169)*/
goto l83;
l88:pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+170; 
(*f[32])( );if(v[102]) goto l101;     /*FNDO0(160,R,jvj+170)*/
pile[v[22]]=130; pile[WZ1]=jvj+170; 
(*f[26])( );if(v[102]) goto l101;     /*FNDC0(130,jvj+170,I)*/
I=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=1181; pile[WZ2]=I; 
(*f[43])( );     /*CHGC2(R,1181,I)*/
goto l101;
l90:x[jvj+172]=s[x[jvj+286]] ;z[jvj+172]=(x[jvj+172]<=sepcte) ? x[jvj+172] : z[jvj+286];
pile[v[22]]=111; pile[WZ1]=jvj+172; pile[WZ2]=jvj+173; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(111,jvj+172,jvj+173)*/
pile[v[22]]=101; pile[WZ1]=jvj+173; pile[WZ2]=jvj+174; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(101,jvj+173,jvj+174)*/
if((x[jvj+174]!=26)) goto l96;
pile[v[22]]=R; pile[WZ1]=1412; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,1412,68)*/
for(i=x[jvj+171],V121=0;i>0;i=t[i],V121++)  ;
if((V121!=2)) goto l96;
x[jvj+175]=d[20];z[jvj+175]=0;
l92:if((x[jvj+175]<=0)) goto l96;
x[jvj+176]=s[x[jvj+175]] ;z[jvj+176]=(x[jvj+176]<=sepcte) ? x[jvj+176] : z[jvj+175];
pile[v[22]]=jvj+176; pile[WZ1]=jvj+172; pile[WZ2]=jvj+177; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(jvj+176,jvj+172,jvj+177)*/
pile[v[22]]=100; pile[WZ1]=jvj+177; pile[WZ2]=jvj+178; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(100,jvj+177,jvj+178)*/
if((x[jvj+178]!=484)) goto l93;
pile[v[22]]=268; pile[WZ1]=jvj+176; pile[WZ2]=jvj+179; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(268,jvj+176,jvj+179)*/
pile[v[22]]=jvj+179; pile[WZ1]=jvj+172; pile[WZ2]=jvj+180; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(jvj+179,jvj+172,jvj+180)*/
pile[v[22]]=100; pile[WZ1]=jvj+180; pile[WZ2]=jvj+181; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(100,jvj+180,jvj+181)*/
if(x[jvj+181]!=96&&x[jvj+181]!=89&&x[jvj+181]!=41&&x[jvj+181]!=20&&x[jvj+181]!=128&&x[jvj+181]!=570&&x[jvj+181]!=1317) goto l93;
x[jvj+287]=x[jvj+171] ;z[jvj+287]=z[jvj+171];
l94:if((x[jvj+287]<=0)) goto l93;
x[jvj+182]=s[x[jvj+287]] ;z[jvj+182]=(x[jvj+182]<=sepcte) ? x[jvj+182] : z[jvj+287];
if((x[jvj+172]==x[jvj+182])) goto l95;
pile[v[22]]=R; pile[WZ1]=jvj+177; pile[WZ2]=jvj+182; 
(*f[894])( );     /*ETIMP0(R,jvj+177,jvj+182)*/
l95:x[jvj+287]=t[x[jvj+287]];
goto l94;
l93:x[jvj+175]=t[x[jvj+175]];
goto l92;
l96:pile[v[22]]=100; pile[WZ1]=jvj+172; pile[WZ2]=jvj+183; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(100,jvj+172,jvj+183)*/
if((x[jvj+183]!=22)) goto l91;
x[jvj+274]=x[jvj+174] ;z[jvj+274]=z[jvj+174];
x[jvj+272]=x[jvj+171] ;z[jvj+272]=z[jvj+171];
goto l1;
l100:pile[v[22]]=R; pile[WZ1]=1594; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,1594,68)*/
l51:x[jvj+281]=x[jvj+171] ;z[jvj+281]=z[jvj+171];
goto l50;
l103:pile[v[22]]=R; pile[WZ1]=1294; pile[WZ2]=1492; 
(*f[36])( );     /*PLUSC0(R,1294,1492)*/
goto l104;
l108:x[jvj+198]=s[x[jvj+197]] ;z[jvj+198]=(x[jvj+198]<=sepcte) ? x[jvj+198] : z[jvj+197];
pile[v[22]]=jvj+198; pile[WZ1]=R; pile[WZ2]=jvj+199; 
(*f[32])( );if(v[102]) goto l110;     /*FNDO0(jvj+198,R,jvj+199)*/
pile[v[22]]=111; pile[WZ1]=jvj+199; pile[WZ2]=jvj+200; 
(*f[32])( );if(v[102]) goto l110;     /*FNDO0(111,jvj+199,jvj+200)*/
pile[v[22]]=101; pile[WZ1]=jvj+200; pile[WZ2]=jvj+201; 
(*f[32])( );if(v[102]) goto l110;     /*FNDO0(101,jvj+200,jvj+201)*/
if((x[jvj+201]!=485)) goto l110;
pile[v[22]]=268; pile[WZ1]=jvj+198; pile[WZ2]=jvj+202; 
(*f[32])( );if(v[102]) goto l110;     /*FNDO0(268,jvj+198,jvj+202)*/
pile[v[22]]=jvj+202; pile[WZ1]=R; pile[WZ2]=jvj+203; 
(*f[32])( );if(v[102]) goto l110;     /*FNDO0(jvj+202,R,jvj+203)*/
pile[v[22]]=jvj+203; pile[WZ1]=jvj+204; 
(*f[887])( );     /*VARND0(jvj+203,jvj+204)*/
for(i=x[jvj+204],V87=0;i>0;i=t[i],V87++)  ;
pile[v[22]]=107; pile[WZ1]=jvj+199; pile[WZ2]=jvj+205; 
(*f[33])( );     /*FNDE0(107,jvj+199,jvj+205)*/
pile[v[22]]=jvj+205; pile[WZ1]=jvj+206; 
(*f[892])( );     /*CALDETVAR0(jvj+205,jvj+206)*/
if((x[jvj+206]==0)) goto l110;
x[jvj+34]=0 ;z[jvj+34]=0;
x[jvj+276]=x[jvj+206] ;z[jvj+276]=z[jvj+206];
goto l20;
l109:x[jvj+197]=d[20];z[jvj+197]=0;
goto l107;
l113:x[jvj+211]=s[x[jvj+289]] ;z[jvj+211]=(x[jvj+211]<=sepcte) ? x[jvj+211] : z[jvj+289];
if((x[jvj+211]==x[jvj+251])) goto l114;
pile[v[22]]=jvj+210; pile[WZ1]=jvj+211; 
(*f[68])( );     /*PLUE0(jvj+210,jvj+211)*/
l114:x[jvj+289]=t[x[jvj+289]];
goto l112;
l116:V364=s[V468];
if(V364!=25&&V364!=485&&V364!=486&&V364!=52) goto l136;
V468=t[V468];
goto l115;
l117:if((x[jvj+261]!=22)) goto l142;
if((x[jvj+262]!=25)) goto l142;
x[jvj+212]=d[20];z[jvj+212]=0;
l118:if((x[jvj+212]>0)) goto l119;
x[jvj+222]=d[20];z[jvj+222]=0;
l123:if((x[jvj+222]<=0)) goto l142;
x[jvj+223]=s[x[jvj+222]] ;z[jvj+223]=(x[jvj+223]<=sepcte) ? x[jvj+223] : z[jvj+222];
pile[v[22]]=jvj+223; pile[WZ1]=R; pile[WZ2]=jvj+224; 
(*f[32])( );if(v[102]) goto l124;     /*FNDO0(jvj+223,R,jvj+224)*/
pile[v[22]]=111; pile[WZ1]=jvj+224; pile[WZ2]=jvj+225; 
(*f[32])( );if(v[102]) goto l124;     /*FNDO0(111,jvj+224,jvj+225)*/
pile[v[22]]=101; pile[WZ1]=jvj+225; pile[WZ2]=jvj+226; 
(*f[32])( );if(v[102]) goto l124;     /*FNDO0(101,jvj+225,jvj+226)*/
if((x[jvj+226]!=485)) goto l124;
pile[v[22]]=107; pile[WZ1]=jvj+224; pile[WZ2]=jvj+227; 
(*f[33])( );     /*FNDE0(107,jvj+224,jvj+227)*/
pile[v[22]]=268; pile[WZ1]=jvj+223; pile[WZ2]=jvj+228; 
(*f[32])( );if(v[102]) goto l124;     /*FNDO0(268,jvj+223,jvj+228)*/
pile[v[22]]=jvj+228; pile[WZ1]=R; pile[WZ2]=jvj+229; 
(*f[32])( );if(v[102]) goto l124;     /*FNDO0(jvj+228,R,jvj+229)*/
pile[v[22]]=jvj+229; pile[WZ1]=jvj+230; 
(*f[887])( );     /*VARND0(jvj+229,jvj+230)*/
for(a=x[jvj+230];a>0;a=t[a]) if(s[a]==x[jvj+270]) goto l124;
x[jvj+291]=x[jvj+227] ;z[jvj+291]=z[jvj+227];
l125:if((x[jvj+291]<=0)) goto l124;
x[jvj+231]=s[x[jvj+291]] ;z[jvj+231]=(x[jvj+231]<=sepcte) ? x[jvj+231] : z[jvj+291];
pile[v[22]]=100; pile[WZ1]=jvj+231; pile[WZ2]=jvj+232; 
(*f[32])( );if(v[102]) goto l126;     /*FNDO0(100,jvj+231,jvj+232)*/
if((x[jvj+232]!=484)) goto l126;
pile[v[22]]=jvj+231; pile[WZ1]=jvj+233; 
(*f[200])( );if(v[102]) goto l126;     /*NDD0(jvj+231,jvj+233)*/
if((x[jvj+233]!=x[jvj+270])) goto l126;
x[jvj+290]=x[jvj+227] ;z[jvj+290]=z[jvj+227];
l121:if((x[jvj+290]<=0)) goto l145;
x[jvj+220]=s[x[jvj+290]] ;z[jvj+220]=(x[jvj+220]<=sepcte) ? x[jvj+220] : z[jvj+290];
if((x[jvj+220]==x[jvj+231])) goto l122;
pile[v[22]]=jvj+220; pile[WZ1]=jvj+221; 
(*f[887])( );     /*VARND0(jvj+220,jvj+221)*/
for(a=x[jvj+221];a>0;a=t[a]) if(s[a]==x[jvj+270]) goto l126;
l122:x[jvj+290]=t[x[jvj+290]];
goto l121;
l119:x[jvj+213]=s[x[jvj+212]] ;z[jvj+213]=(x[jvj+213]<=sepcte) ? x[jvj+213] : z[jvj+212];
pile[v[22]]=jvj+213; pile[WZ1]=R; pile[WZ2]=jvj+214; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(jvj+213,R,jvj+214)*/
pile[v[22]]=100; pile[WZ1]=jvj+214; pile[WZ2]=jvj+215; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(100,jvj+214,jvj+215)*/
if((x[jvj+215]!=484)) goto l120;
pile[v[22]]=jvj+214; pile[WZ1]=jvj+216; 
(*f[200])( );if(v[102]) goto l120;     /*NDD0(jvj+214,jvj+216)*/
if((x[jvj+216]!=x[jvj+270])) goto l120;
pile[v[22]]=268; pile[WZ1]=jvj+213; pile[WZ2]=jvj+217; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(268,jvj+213,jvj+217)*/
pile[v[22]]=jvj+217; pile[WZ1]=R; pile[WZ2]=jvj+218; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(jvj+217,R,jvj+218)*/
pile[v[22]]=jvj+218; pile[WZ1]=jvj+219; 
(*f[887])( );     /*VARND0(jvj+218,jvj+219)*/
for(a=x[jvj+219];a>0;a=t[a]) if(s[a]==x[jvj+270]) goto l120;
l145:pile[v[22]]=447; pile[WZ1]=jvj+270; pile[WZ2]=459; pile[WZ3]=jvj+271; pile[WZ4]=jvj+263; 
(*f[181])( );     /*QUADRI2(447,jvj+270,459,jvj+271,jvj+263)*/
pile[v[22]]=R; pile[WZ1]=1349; pile[WZ2]=jvj+263; 
(*f[36])( );     /*PLUSC0(R,1349,jvj+263)*/
pile[WZ1]=1294; pile[WZ2]=1348; 
(*f[36])( );     /*PLUSC0(R,1294,1348)*/
l142:x[jvj+259]=t[x[jvj+259]];
l141:if((x[jvj+259]<=0)) goto l143;
x[jvj+270]=s[x[jvj+259]] ;z[jvj+270]=(x[jvj+270]<=sepcte) ? x[jvj+270] : z[jvj+259];
pile[v[22]]=R; pile[WZ1]=jvj+234; 
(*f[887])( );     /*VARND0(R,jvj+234)*/
x[jvj+292]=x[jvj+234] ;z[jvj+292]=z[jvj+234];
l127:if((x[jvj+292]<=0)) goto l142;
x[jvj+271]=s[x[jvj+292]] ;z[jvj+271]=(x[jvj+271]<=sepcte) ? x[jvj+271] : z[jvj+292];
if((x[jvj+271]!=x[jvj+270])) goto l117;
x[jvj+292]=t[x[jvj+292]];
goto l127;
l120:x[jvj+212]=t[x[jvj+212]];
goto l118;
l124:x[jvj+222]=t[x[jvj+222]];
goto l123;
l126:x[jvj+291]=t[x[jvj+291]];
goto l125;
l131:pile[v[22]]=R; pile[WZ1]=1294; pile[WZ2]=1483; 
(*f[36])( );     /*PLUSC0(R,1294,1483)*/
pile[v[22]]=jvj+244; pile[WZ1]=1353; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+244,1353,68)*/
goto l132;
l133:for(a=x[jvj+246];a>0;a=t[a]) if(s[a]==485) goto l134;
goto l136;
l134:for(a=x[jvj+246];a>0;a=t[a]) if(s[a]==25) goto l135;
goto l136;
l135:pile[v[22]]=R; pile[WZ1]=1294; pile[WZ2]=1327; 
(*f[36])( );     /*PLUSC0(R,1294,1327)*/
goto l136;
l138:pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l140;     /*FNDC0(870,R,V415)*/
V415=pile[WZ2]; 
if((V415!=2)) goto l140;
pile[v[22]]=111; pile[WZ2]=jvj+254; 
(*f[32])( );if(v[102]) goto l140;     /*FNDO0(111,R,jvj+254)*/
pile[v[22]]=100; pile[WZ2]=jvj+255; 
(*f[32])( );if(v[102]) goto l140;     /*FNDO0(100,R,jvj+255)*/
pile[v[22]]=101; pile[WZ1]=jvj+254; pile[WZ2]=jvj+256; 
(*f[32])( );if(v[102]) goto l140;     /*FNDO0(101,jvj+254,jvj+256)*/
pile[v[22]]=100; pile[WZ2]=jvj+257; 
(*f[32])( );if(v[102]) goto l140;     /*FNDO0(100,jvj+254,jvj+257)*/
if((x[jvj+255]!=22)) goto l140;
if((x[jvj+257]!=20)) goto l140;
if(x[jvj+256]!=25&&x[jvj+256]!=29&&x[jvj+256]!=30) goto l128;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+235; 
(*f[32])( );if(v[102]) goto l128;     /*FNDO0(102,R,jvj+235)*/
pile[v[22]]=100; pile[WZ1]=jvj+235; pile[WZ2]=jvj+236; 
(*f[32])( );if(v[102]) goto l128;     /*FNDO0(100,jvj+235,jvj+236)*/
if((x[jvj+236]==484)) goto l139;
l128:if(x[jvj+256]!=25&&x[jvj+256]!=29&&x[jvj+256]!=30) goto l140;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+237; 
(*f[32])( );if(v[102]) goto l140;     /*FNDO0(103,R,jvj+237)*/
pile[v[22]]=100; pile[WZ1]=jvj+237; pile[WZ2]=jvj+238; 
(*f[32])( );if(v[102]) goto l140;     /*FNDO0(100,jvj+237,jvj+238)*/
if((x[jvj+238]==484)) goto l139;
l140:pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l143;     /*FNDC0(870,R,V385)*/
V385=pile[WZ2]; 
if((V385!=2)) goto l143;
pile[v[22]]=868; pile[WZ2]=jvj+258; 
(*f[32])( );if(v[102]) goto l143;     /*FNDO0(868,R,jvj+258)*/
if((x[jvj+258]!=25)) goto l143;
pile[v[22]]=R; pile[WZ1]=jvj+259; 
(*f[887])( );     /*VARND0(R,jvj+259)*/
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+260; 
(*f[32])( );if(v[102]) goto l143;     /*FNDO0(111,R,jvj+260)*/
pile[v[22]]=100; pile[WZ2]=jvj+261; 
(*f[32])( );if(v[102]) goto l143;     /*FNDO0(100,R,jvj+261)*/
pile[v[22]]=101; pile[WZ1]=jvj+260; pile[WZ2]=jvj+262; 
(*f[32])( );if(v[102]) goto l143;     /*FNDO0(101,jvj+260,jvj+262)*/
goto l141;
l139:pile[v[22]]=R; pile[WZ1]=1439; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,1439,68)*/
goto l140;
l143:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l144:pile[v[22]]=447; pile[WZ1]=jvj+264; pile[WZ2]=459; pile[WZ3]=jvj+265; pile[WZ4]=jvj+196; 
(*f[181])( );     /*QUADRI2(447,jvj+264,459,jvj+265,jvj+196)*/
pile[v[22]]=R; pile[WZ1]=1068; pile[WZ2]=jvj+196; 
(*f[36])( );     /*PLUSC0(R,1068,jvj+196)*/
goto l106;
}
