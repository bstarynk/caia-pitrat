#include "dx.h"
void AGIR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Q=0,V31=0,V1=0,V33=0,AA=0,V2=0,V34=0,BB=0,V3=0,V37=0,V4=0,V40=0,V41=0,V6=0,V46=0,V42=0,V44=0,V22=0,V24=0,V54=0,V57=0,V60=0,V62=0,V105=0,V109=0,V111=0,V113=0,V100=0,V102=0,V104=0,V106=0,V108=0,V110=0,V112=0,V114=0,V16=0,V53=0,V66=0,V65=0,NV=0,V88=0,B=0,V75=0,V73=0,V80=0,V81=0,V79=0,V78=0,V84=0,V85=0,V77=0,V76=0,I=0,V71=0,V68=0,V90=0,V95=0,V116=0,V94=0;
int S;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=54;
x[jvj+1]=10157;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==545&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
NV=Q=incon;
pile[v[22]]=246; pile[WZ1]=S; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(246,S,Q)*/
Q=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(218,S,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=Q; pile[WZ2]=jvj+30; 
(*f[28])( );if(v[102]) goto l36;     /*TLDEBL0(jvj+21,Q,jvj+30)*/
V66=vv[180];
V65=V66+1;
NV=30;
pile[v[22]]=Q; pile[WZ1]=jvj+30; 
(*f[27])( );     /*CRETND0(Q,jvj+30)*/
if((v[111]!=0)) goto l25;
pile[v[22]]=288; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(288,jvj+30,jvj+35)*/
pile[v[22]]=S; pile[WZ1]=jvj+35; 
(*f[903])( );     /*ARCHIVE0(S,jvj+35)*/
l25:if((v[93]<=0)) goto l28;
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=1201; pile[WZ1]=jvj+16; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(1201,jvj+16,jvj+36)*/
if((x[jvj+36]!=206)) goto l28;
pile[v[22]]=1458; pile[WZ1]=1447; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(1458,1447,jvj+37)*/
if((x[jvj+37]==324)) goto l26;
if((x[jvj+37]==x[jvj+21])) goto l26;
l28:V53=g[294];
if((V53<=0)) goto l29;
V54=vg[294];
if((V54!=0)) goto l21;
if((V53<3)) goto l23;
l21:pile[v[22]]=294; pile[WZ1]=10157; pile[WZ2]=0; pile[WZ3]=(-1919); pile[WZ4]=jvj+30; pile[WZ5]=(-657); pile[v[22]+6]=S; pile[v[22]+7]=jvj+31; 
(*f[187])( );     /*INTERP0(294,10157,0,(-1919),jvj+30,(-657),S,jvj+31)*/
if((x[jvj+31]==135)) goto l22;
l29:vv[180]=V65;
V88=com+NV;
B=V88;
V77=knd[Q];
V76=V77-1;
I=0;
l34:if((I>V76)) goto l36;
V71=tnd[Q][I];
V75=vnd[Q][I];
pile[v[22]]=159; pile[WZ1]=S; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(159,S,jvj+39)*/
x[jvj+54]=x[jvj+39] ;z[jvj+54]=z[jvj+39];
l30:if((x[jvj+54]<=0)) goto l35;
x[jvj+40]=s[x[jvj+54]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+54];
pile[v[22]]=110; pile[WZ1]=jvj+40; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(110,jvj+40,V73)*/
V73=pile[WZ2]; 
if((V73!=V75)) goto l31;
if((V71==20)) goto l32;
if((V71==41)) goto l33;
if((V71!=23)) goto l35;
V84=NV+I;
V85=B+I;
pile[v[22]]=128; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(128,jvj+40,jvj+42)*/
prov[V84]=V85;
x[V85]=x[jvj+42];z[V85]=0;
l35:I++;
goto l34;
l2:V1=(-8888888);
l13:pile[v[22]]=509; pile[WZ1]=jvj+2; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(509,jvj+2,jvj+15)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(0,117,jvj+7)*/
x[jvj+51]=x[jvj+15] ;z[jvj+51]=z[jvj+15];
l6:if((x[jvj+51]>0)) goto l7;
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+7,V37)*/
V37=pile[WZ2]; 
V4=V37;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(0,117,jvj+10)*/
x[jvj+52]=x[jvj+15] ;z[jvj+52]=z[jvj+15];
l9:if((x[jvj+52]>0)) goto l10;
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+10,V41)*/
V41=pile[WZ2]; 
V6=V41;
for(i=x[jvj+15],V44=0;i>0;i=t[i],V44++)  ;
pile[v[22]]=jvj+13; pile[WZ1]=1446; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(jvj+13,1446,V1)*/
pile[WZ1]=280; pile[WZ2]=V2; 
(*f[43])( );     /*CHGC2(jvj+13,280,V2)*/
pile[WZ1]=164; pile[WZ2]=V3; 
(*f[43])( );     /*CHGC2(jvj+13,164,V3)*/
pile[WZ1]=688; pile[WZ2]=V42; 
(*f[43])( );     /*CHGC2(jvj+13,688,V42)*/
pile[WZ1]=929; pile[WZ2]=V44; 
(*f[43])( );     /*CHGC2(jvj+13,929,V44)*/
pile[WZ1]=1495; pile[WZ2]=V4; 
(*f[43])( );     /*CHGC2(jvj+13,1495,V4)*/
pile[WZ1]=1496; pile[WZ2]=V6; 
(*f[43])( );     /*CHGC2(jvj+13,1496,V6)*/
l20:pile[v[22]]=jvj+13; pile[WZ1]=158; pile[WZ2]=jvj+29; 
(*f[35])( );     /*CHGC1(jvj+13,158,jvj+29)*/
pile[v[22]]=jvj+18; pile[WZ1]=159; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+13)*/
l19:x[jvj+53]=t[x[jvj+53]];
l18:if((x[jvj+53]<=0)) goto l17;
x[jvj+28]=s[x[jvj+53]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+53];
pile[v[22]]=110; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(110,jvj+28,V24)*/
V24=pile[WZ2]; 
if((V22!=V24)) goto l19;
pile[v[22]]=101; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+28,jvj+11)*/
pile[WZ1]=jvj+11; pile[WZ2]=110; pile[WZ3]=V24; pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(101,jvj+11,110,V24,jvj+13)*/
if((x[jvj+29]==756)) goto l12;
if((x[jvj+29]!=749)) goto l20;
x[jvj+2]=x[jvj+11] ;z[jvj+2]=z[jvj+11];
pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(498,jvj+2,jvj+14)*/
pile[v[22]]=688; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(688,jvj+14,V42)*/
V42=pile[WZ2]; 
V2=incon;
pile[v[22]]=280; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(280,jvj+2,V33)*/
V33=pile[WZ2]; 
AA=V33;
V2=AA;
l4:V3=incon;
pile[v[22]]=164; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(164,jvj+2,V34)*/
V34=pile[WZ2]; 
BB=V34;
V3=BB;
l1:V1=incon;
pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(202,jvj+2,jvj+3)*/
if((x[jvj+3]!=68)) goto l2;
pile[v[22]]=365; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+4)*/
for(i=x[jvj+4],V31=0;i>0;i=t[i],V31++)  ;
V1=V31;
goto l13;
l3:V2=(-8888888);
goto l4;
l5:V3=(-8888888);
goto l1;
l7:x[jvj+5]=s[x[jvj+51]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+51];
pile[v[22]]=868; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(868,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l8;
pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+7,117,1)*/
l8:x[jvj+51]=t[x[jvj+51]];
goto l6;
l10:x[jvj+8]=s[x[jvj+52]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+52];
pile[v[22]]=868; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(868,jvj+8,jvj+9)*/
if(x[jvj+9]!=25&&x[jvj+9]!=625) goto l11;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(870,jvj+8,V40)*/
V40=pile[WZ2]; 
if((V40>3)) goto l11;
pile[v[22]]=jvj+10; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+10,117,1)*/
l11:x[jvj+52]=t[x[jvj+52]];
goto l9;
l12:pile[v[22]]=365; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(365,jvj+11,jvj+12)*/
for(i=x[jvj+12],V46=0;i>0;i=t[i],V46++)  ;
pile[v[22]]=jvj+13; pile[WZ1]=1446; pile[WZ2]=V46; 
(*f[43])( );     /*CHGC2(jvj+13,1446,V46)*/
goto l20;
l17:x[jvj+23]=t[x[jvj+23]];
l16:if((x[jvj+23]<=0)) goto l27;
x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=103; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,jvj+24,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+25,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+24,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+26,jvj+27)*/
x[jvj+29]=x[jvj+27] ;z[jvj+29]=z[jvj+27];
x[jvj+53]=x[jvj+20] ;z[jvj+53]=z[jvj+20];
goto l18;
l22:if((V53<4)) goto l23;
goto l29;
l23:x[jvj+32]=vo[16];z[jvj+32]=vz[16];
pile[v[22]]=244; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(244,jvj+32,V57)*/
V57=pile[WZ2]; 
x[jvj+33]=vo[14];z[jvj+33]=vz[14];
pile[v[22]]=220; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(220,jvj+33,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=642; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(642,jvj+33,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=288; pile[WZ1]=jvj+30; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(288,jvj+30,jvj+34)*/
V105=x[jvj+34];
V109=v[0];
V111=v[14];
V113=v[22];
pile[v[22]]=41; pile[WZ1]=V62; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V62,0,V100)*/
V100=pile[WZ3]; 
pile[WZ1]=V60; pile[WZ2]=V100; 
(*f[39])( );     /*SDX0(41,V60,V100,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V105; pile[WZ2]=V102; 
(*f[39])( );     /*SDX0(20,V105,V102,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V57; pile[WZ2]=V104; 
(*f[39])( );     /*SDX0(41,V57,V104,V106)*/
V106=pile[WZ3]; 
pile[WZ1]=V109; pile[WZ2]=V106; 
(*f[39])( );     /*SDX0(41,V109,V106,V108)*/
V108=pile[WZ3]; 
pile[WZ1]=V111; pile[WZ2]=V108; 
(*f[39])( );     /*SDX0(41,V111,V108,V110)*/
V110=pile[WZ3]; 
pile[WZ1]=V113; pile[WZ2]=V110; 
(*f[39])( );     /*SDX0(41,V113,V110,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; pile[WZ1]=S; 
(*f[907])( );if(v[102]) goto l24;     /*SORHIST1(V112,S,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=V114; 
(*f[40])( );     /*SLG0(V114)*/
l24:if((V53!=2)) goto l29;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l29;
l26:pile[v[22]]=288; pile[WZ1]=jvj+30; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(288,jvj+30,jvj+38)*/
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(642,jvj+16,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=642; pile[WZ2]=jvj+49; 
(*f[46])( );     /*TRI0(V16,642,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+38; pile[WZ2]=288; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+49,jvj+38,288,jvj+50)*/
pile[v[22]]=130; pile[WZ1]=Q; pile[WZ2]=218; pile[WZ3]=jvj+21; pile[WZ4]=jvj+50; pile[WZ5]=jvj+18; 
(*f[725])( );     /*QUADRI14(130,Q,218,jvj+21,jvj+50,jvj+18)*/
pile[v[22]]=1415; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1415,jvj+16,jvj+17)*/
pile[v[22]]=jvj+18; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+18,120,jvj+17)*/
l14:pile[v[22]]=1525; pile[WZ1]=S; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1525,S,jvj+19)*/
pile[v[22]]=jvj+18; pile[WZ1]=1525; 
(*f[35])( );     /*CHGC1(jvj+18,1525,jvj+19)*/
l15:pile[v[22]]=159; pile[WZ1]=S; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(159,S,jvj+20)*/
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,jvj+21,jvj+22)*/
pile[v[22]]=108; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(108,jvj+22,jvj+23)*/
goto l16;
l27:pile[v[22]]=jvj+16; pile[WZ1]=1415; pile[WZ2]=jvj+18; 
(*f[35])( );     /*CHGC1(jvj+16,1415,jvj+18)*/
goto l28;
l31:x[jvj+54]=t[x[jvj+54]];
goto l30;
l32:pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+40,jvj+41)*/
V80=NV+I;
V81=B+I;
prov[V80]=V81;
x[V81]=x[jvj+41];z[V81]=0;
goto l35;
l33:pile[v[22]]=130; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(130,jvj+40,V79)*/
V79=pile[WZ2]; 
V78=NV+I;
prov[V78]=V79;
goto l35;
l36:if((v[247]<=0)) goto l37;
pile[v[22]]=218; pile[WZ1]=S; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(218,S,jvj+43)*/
pile[v[22]]=jvj+43; 
(*f[904])( );     /*AJMEM0(jvj+43)*/
l37:pile[v[22]]=858; pile[WZ1]=S; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(858,S,V68)*/
V68=pile[WZ2]; 
v[13]=V68;
l39:if(NV!=incon) goto l40;
l46:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l38:
(*f[170])( );     /*SURVEILLE0()*/
l45:if((x[jvj+47]!=135)) goto l46;
V94=g[282];
if((V94<=0)) goto l46;
V95=vg[282];
if((V95!=0)) goto l42;
if((V94<3)) goto l44;
l42:pile[v[22]]=282; pile[WZ1]=10157; pile[WZ2]=0; pile[WZ3]=jvj+48; 
(*f[291])( );     /*INTERP4(282,10157,0,jvj+48)*/
if((x[jvj+48]==135)) goto l43;
goto l46;
l40:if(Q!=incon) goto l41;
goto l46;
l41:pile[v[22]]=Q; pile[WZ1]=NV; pile[WZ2]=jvj+47; 
(*f[905])( );     /*EVLGG0(Q,NV,jvj+47)*/
if((v[93]<=0)) goto l45;
x[jvj+44]=vo[14];z[jvj+44]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(642,jvj+44,V90)*/
V90=pile[WZ2]; 
if((V90<v[93])) goto l45;
x[jvj+45]=vo[12];z[jvj+45]=vz[12];
pile[v[22]]=1383; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(1383,jvj+45,jvj+46)*/
if((x[jvj+46]==1385)) goto l38;
if((x[jvj+46]!=1384)) goto l45;
(*f[906])( );     /*ANAVEILLE0()*/
goto l45;
l43:if((V94<4)) goto l44;
goto l46;
l44:pile[v[22]]=0; pile[WZ1]=(-5994); 
(*f[37])( );     /*SRA0(0,(-5994),V116)*/
V116=pile[WZ2]; 
pile[v[22]]=V116; 
(*f[40])( );     /*SLG0(V116)*/
if((V94!=2)) goto l46;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l46;
}
