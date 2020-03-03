#include "dx.h"
void EXAPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0,DXX=0,V7=0,V8=0,KR=0,UR=0,NR=0,NX=0,V25=0,V27=0,V18=0,V29=0,V31=0,V20=0,V40=0,V=0,V36=0,V35=0,V55=0,V45=0,V50=0,V49=0,V66=0,V60=0,V14=0,K=0,V16=0,V15=0,V61=0,V62=0,V65=0,V63=0,V116=0,V115=0,V109=0,V41=0,V110=0,V111=0,V112=0,NT=0,KK=0,V69=0,NV=0,LL=0,V70=0,NW=0,V57=0,V58=0,NRR=0,V11=0,V13=0,V12=0,JJ=0,V10=0,V99=0,V98=0,V100=0,V101=0,V102=0,V104=0,V105=0,V106=0,V83=0,V82=0,A=0,V118=0,V119=0,V84=0,B=0,V122=0,V123=0,V86=0,V91=0,V90=0,C=0,V127=0,V128=0,V88=0,V92=0,V130=0,V157=0,V156=0,V164=0,V163=0,V171=0,V170=0;
int FF;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=89;
x[jvj+1]=11128;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==155&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
FF=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=x[jvj+9]=incon;
if((FF==65)) goto l1;
if((FF!=77)) goto l6;
F=((-5963));
l5:pile[v[22]]=F; pile[WZ1]=jvj+11; 
(*f[493])( );if(v[102]) goto l6;     /*EXPPB2(F,jvj+11,DXX)*/
DXX=pile[WZ2]; 
pile[v[22]]=DXX; pile[WZ1]=jvj+9; 
(*f[494])( );     /*LICOND0(DXX,jvj+9)*/
pile[v[22]]=34; 
(*f[346])( );     /*LK1(34)*/
x[jvj+79]=x[jvj+9] ;z[jvj+79]=z[jvj+9];
l2:if((x[jvj+79]>0)) goto l3;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+59)*/
pile[WZ3]=683; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,683,jvj+66)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7886); pile[WZ4]=jvj+64; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7886),jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=103; pile[WZ2]=jvj+65; 
(*f[54])( );     /*TRI1(jvj+64,103,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+66; pile[WZ4]=jvj+65; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+66,jvj+65,jvj+63)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=3; pile[WZ4]=jvj+61; 
(*f[192])( );     /*QUADRI4(100,41,130,3,jvj+61)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; pile[WZ2]=103; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+60,jvj+61,103,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+63; pile[WZ4]=jvj+62; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+63,jvj+62,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[522])( );     /*PLUB2(jvj+9,jvj+10)*/
l6:V7=bh[v[1]][0];
V8=bh[v[1]][1];
KR=V7;
UR=V8;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+45; 
(*f[46])( );     /*TRI0(0,117,jvj+45)*/
if(x[jvj+11]!=incon) goto l38;
l71:if((KR==84)) goto l72;
if((KR!=90)) goto l85;
pile[v[22]]=FF; 
(*f[155])( );     /*EXAPB0(FF)*/
l85:if(x[jvj+11]!=incon) goto l86;
l89:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l1:F=((-9009));
goto l5;
l3:x[jvj+3]=s[x[jvj+79]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+79];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=22)) goto l4;
pile[v[22]]=102; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+3,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=43)) goto l4;
pile[v[22]]=102; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+5,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]==683)) goto l6;
l4:x[jvj+79]=t[x[jvj+79]];
goto l2;
l8:x[jvj+14]=s[x[jvj+80]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+80];
pile[v[22]]=109; pile[WZ1]=jvj+14; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(109,jvj+14,jvj+67)*/
pile[v[22]]=983; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(983,jvj+67,jvj+68)*/
pile[v[22]]=878; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(878,jvj+68,jvj+69)*/
l90:if((x[jvj+69]<=0)) goto l9;
x[jvj+70]=s[x[jvj+69]] ;z[jvj+70]=(x[jvj+70]<=sepcte) ? x[jvj+70] : z[jvj+69];
pile[v[22]]=163; pile[WZ1]=jvj+70; 
(*f[44])( );if(v[102]) goto l91;     /*FNDC1(163,jvj+70,V157)*/
V157=pile[WZ2]; 
pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l91;     /*FNDC1(163,jvj+14,V156)*/
V156=pile[WZ2]; 
if((V157==V156)) goto l91;
x[jvj+69]=t[x[jvj+69]];
goto l90;
l11:x[jvj+15]=s[x[jvj+81]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+81];
pile[v[22]]=970; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(970,jvj+15,jvj+18)*/
if((x[jvj+18]!=324)) goto l12;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(163,jvj+15,V25)*/
V25=pile[WZ2]; 
if((V25==(-7141))) goto l12;
l13:pile[v[22]]=jvj+19; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+19,117,1)*/
l12:x[jvj+81]=t[x[jvj+81]];
l10:if((x[jvj+81]>0)) goto l11;
pile[v[22]]=117; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l74;     /*FNDC0(117,jvj+19,V27)*/
V27=pile[WZ2]; 
V18=V27;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(0,117,jvj+22)*/
pile[v[22]]=878; pile[WZ1]=jvj+16; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(878,jvj+16,jvj+21)*/
x[jvj+82]=x[jvj+21] ;z[jvj+82]=z[jvj+21];
l15:if((x[jvj+82]>0)) goto l16;
pile[v[22]]=117; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l74;     /*FNDC0(117,jvj+22,V31)*/
V31=pile[WZ2]; 
V20=V31;
V99=x[jvj+16];
pile[v[22]]=20; pile[WZ1]=V99; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V99,0,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V98; pile[WZ2]=547; 
(*f[42])( );     /*SRA1(135,V98,547,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=V100; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V100,58,V101)*/
V101=pile[WZ2]; 
pile[v[22]]=V101; pile[WZ1]=V18; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V101,V18,41,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V102; pile[WZ2]=104; 
(*f[42])( );     /*SRA1(135,V102,104,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=V104; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V104,58,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=V105; pile[WZ1]=V20; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V105,V20,41,V106)*/
V106=pile[WZ3]; 
pile[v[22]]=V106; 
(*f[40])( );     /*SLG0(V106)*/
l74:x[jvj+57]=t[x[jvj+57]];
l73:if((x[jvj+57]<=0)) goto l85;
x[jvj+16]=s[x[jvj+57]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+57];
pile[v[22]]=284; pile[WZ1]=jvj+16; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(284,jvj+16,jvj+58)*/
if((x[jvj+58]!=0)) goto l74;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(0,117,jvj+19)*/
pile[v[22]]=878; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(878,jvj+16,jvj+17)*/
x[jvj+81]=x[jvj+17] ;z[jvj+81]=z[jvj+17];
goto l10;
l16:x[jvj+15]=s[x[jvj+82]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+82];
pile[v[22]]=163; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(163,jvj+15,V29)*/
V29=pile[WZ2]; 
if((V29==(-7141))) goto l17;
l14:pile[v[22]]=970; pile[WZ1]=jvj+15; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(970,jvj+15,jvj+20)*/
if((x[jvj+20]==324)) goto l17;
l18:pile[v[22]]=jvj+22; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+22,117,1)*/
l17:x[jvj+82]=t[x[jvj+82]];
goto l15;
l19:V35=V36;
l63:pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=967; 
(*f[42])( );     /*SRA1(135,V35,967,V110)*/
V110=pile[WZ3]; 
pile[v[22]]=V110; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V110,58,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=V111; pile[WZ1]=V41; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V111,V41,41,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; 
(*f[40])( );     /*SLG0(V112)*/
l61:x[jvj+89]=t[x[jvj+89]];
l60:if((x[jvj+89]<=0)) goto l59;
x[jvj+52]=s[x[jvj+89]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+89];
pile[v[22]]=860; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(860,jvj+52,jvj+53)*/
if((x[jvj+53]!=530)) goto l61;
pile[v[22]]=935; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(935,jvj+52,jvj+54)*/
if((x[jvj+54]!=547)) goto l61;
pile[v[22]]=967; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(967,jvj+52,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=jvj+52; pile[WZ1]=jvj+9; pile[WZ2]=jvj+55; 
(*f[505])( );     /*EVCOND0(jvj+52,jvj+9,jvj+55)*/
if((x[jvj+55]==135)) goto l62;
goto l61;
l20:pile[v[22]]=860; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(860,jvj+24,jvj+25)*/
if((x[jvj+25]==954)) goto l25;
l26:pile[v[22]]=jvj+24; pile[WZ1]=jvj+9; pile[WZ2]=jvj+31; 
(*f[505])( );     /*EVCOND0(jvj+24,jvj+9,jvj+31)*/
if((x[jvj+31]==135)) goto l27;
l25:x[jvj+83]=t[x[jvj+83]];
l23:if((x[jvj+83]>0)) goto l24;
x[jvj+27]=t[x[jvj+27]];
l21:if((x[jvj+27]>0)) goto l22;
if((x[jvj+32]==0)) goto l51;
pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(5,0,42,V115)*/
V115=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V116; pile[WZ2]=V115; 
(*f[39])( );     /*SDX0(20,V116,V115,V50)*/
V50=pile[WZ3]; 
V49=incon;
pile[v[22]]=163; pile[WZ1]=jvj+33; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(163,jvj+33,V55)*/
V55=pile[WZ2]; 
V45=V55;
pile[v[22]]=V50; pile[WZ1]=V45; 
(*f[37])( );     /*SRA0(V50,V45,V49)*/
V49=pile[WZ2]; 
l52:pile[v[22]]=V49; 
(*f[40])( );     /*SLG0(V49)*/
l29:if((x[jvj+32]<=0)) goto l51;
x[jvj+34]=s[x[jvj+32]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+32];
pile[v[22]]=jvj+34; pile[WZ1]=32; 
(*f[508])( );     /*LISTESSAI0(jvj+34,32)*/
x[jvj+32]=t[x[jvj+32]];
goto l29;
l22:x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(jvj+28,jvj+29,jvj+30)*/
x[jvj+83]=x[jvj+30] ;z[jvj+83]=z[jvj+30];
goto l23;
l24:x[jvj+24]=s[x[jvj+83]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+83];
if((UR==65)) goto l20;
if((UR!=75)) goto l26;
pile[v[22]]=860; pile[WZ1]=jvj+24; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(860,jvj+24,jvj+26)*/
if((x[jvj+26]!=954)) goto l25;
goto l26;
l27:pile[v[22]]=jvj+32; pile[WZ1]=jvj+24; 
(*f[68])( );     /*PLUE0(jvj+32,jvj+24)*/
goto l25;
l28:V49=V50;
goto l52;
l33:x[jvj+35]=s[x[jvj+84]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+84];
pile[v[22]]=111; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+35,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+37]!=25)) goto l35;
x[jvj+38]=d[20];z[jvj+38]=0;
l30:if((x[jvj+38]<=0)) goto l35;
x[jvj+39]=s[x[jvj+38]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+38];
pile[v[22]]=jvj+39; pile[WZ1]=jvj+35; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(jvj+39,jvj+35,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+40,jvj+41)*/
if((x[jvj+41]!=43)) goto l31;
pile[v[22]]=102; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,jvj+40,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+42,jvj+43)*/
if((x[jvj+43]==683)) goto l34;
l31:x[jvj+38]=t[x[jvj+38]];
goto l30;
l35:pile[v[22]]=jvj+44; pile[WZ1]=jvj+35; 
(*f[68])( );     /*PLUE0(jvj+44,jvj+35)*/
l34:x[jvj+84]=t[x[jvj+84]];
l32:if((x[jvj+84]>0)) goto l33;
pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,NT,KK)*/
NT=pile[WZ1]; KK=pile[WZ2]; 
V69=KK+1;
pile[v[22]]=V69; 
(*f[126])( );     /*LND2(V69,NV,LL)*/
NV=pile[WZ1]; LL=pile[WZ2]; 
V70=LL+1;
pile[v[22]]=V70; 
(*f[135])( );     /*LND3(V70,NW)*/
NW=pile[WZ1]; 
pile[v[22]]=NT; pile[WZ1]=NV; pile[WZ2]=jvj+11; pile[WZ3]=NW; pile[WZ4]=jvj+44; 
(*f[520])( );     /*ANEXPERIENCES0(NT,NV,jvj+11,NW,jvj+44)*/
l87:if(KR==83||KR==90) goto l89;
pile[v[22]]=117; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l88;     /*FNDC0(117,jvj+45,V92)*/
V92=pile[WZ2]; 
if((V92<=0)) goto l88;
pile[v[22]]=41; pile[WZ1]=V92; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V92,0,V130)*/
V130=pile[WZ3]; 
pile[v[22]]=V130; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V130,(-4670),V83)*/
V83=pile[WZ2]; 
V82=incon;
if((V92>1)) goto l75;
V82=V83;
l76:V84=incon;
pile[v[22]]=1000; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l77;     /*FNDC0(1000,jvj+45,A)*/
A=pile[WZ2]; 
if((A<=0)) goto l77;
pile[v[22]]=135; pile[WZ1]=V82; pile[WZ2]=1000; 
(*f[42])( );     /*SRA1(135,V82,1000,V118)*/
V118=pile[WZ3]; 
pile[v[22]]=V118; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V118,58,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=V119; pile[WZ1]=A; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V119,A,41,V84)*/
V84=pile[WZ3]; 
l78:V86=incon;
pile[v[22]]=1041; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l79;     /*FNDC0(1041,jvj+45,B)*/
B=pile[WZ2]; 
if((B<=0)) goto l79;
pile[v[22]]=135; pile[WZ1]=V84; pile[WZ2]=1041; 
(*f[42])( );     /*SRA1(135,V84,1041,V122)*/
V122=pile[WZ3]; 
pile[v[22]]=V122; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V122,58,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=V123; pile[WZ1]=B; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V123,B,41,V86)*/
V86=pile[WZ3]; 
l80:V88=incon;
pile[v[22]]=510; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l83;     /*FNDC0(510,jvj+45,C)*/
C=pile[WZ2]; 
if((C<=0)) goto l83;
pile[v[22]]=V86; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V86,(-9813),V127)*/
V127=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=C; pile[WZ2]=V127; 
(*f[39])( );     /*SDX0(41,C,V127,V128)*/
V128=pile[WZ3]; 
pile[v[22]]=V128; pile[WZ1]=(-8405); 
(*f[37])( );     /*SRA0(V128,(-8405),V91)*/
V91=pile[WZ2]; 
V90=incon;
if((C>1)) goto l81;
V90=V91;
l82:V88=V90;
l84:pile[v[22]]=V88; 
(*f[40])( );     /*SLG0(V88)*/
l88:pile[v[22]]=34; 
(*f[346])( );     /*LK1(34)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+9; pile[WZ2]=FF; 
(*f[521])( );     /*EXAPB1(jvj+11,jvj+9,FF)*/
goto l89;
l36:x[jvj+46]=incon;
V66=bh[v[1]][2];
if((V66==43)) goto l37;
x[jvj+46]=29 ;z[jvj+46]=29;
l43:pile[v[22]]=3; 
(*f[126])( );     /*LND2(3,V61,V62)*/
V61=pile[WZ1]; V62=pile[WZ2]; 
V65=V62+1;
pile[v[22]]=V65; 
(*f[135])( );     /*LND3(V65,V63)*/
V63=pile[WZ1]; 
pile[v[22]]=jvj+46; pile[WZ1]=UR; pile[WZ2]=V61; pile[WZ3]=V63; pile[WZ4]=jvj+11; pile[WZ5]=jvj+9; pile[v[22]+6]=jvj+45; 
(*f[517])( );     /*EXAPBV0(jvj+46,UR,V61,V63,jvj+11,jvj+9,jvj+45)*/
goto l87;
l37:x[jvj+46]=996 ;z[jvj+46]=996;
goto l43;
l38:if(x[jvj+9]!=incon) goto l39;
l64:if((KR==79)) goto l65;
if((KR==78)) goto l66;
if((KR==80)) goto l67;
if((KR==82)) goto l68;
if((KR==76)) goto l69;
if((KR==77)) goto l70;
if((KR!=67)) goto l71;
pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,NR,JJ)*/
NR=pile[WZ1]; JJ=pile[WZ2]; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(250,158,jvj+12)*/
V10=JJ+1;
pile[v[22]]=V10; 
(*f[135])( );     /*LND3(V10,NX)*/
NX=pile[WZ1]; 
x[jvj+80]=x[jvj+11] ;z[jvj+80]=z[jvj+11];
l7:if((x[jvj+80]>0)) goto l8;
pile[v[22]]=jvj+12; pile[WZ1]=2; 
(*f[498])( );     /*SORCOMPA0(jvj+12,2)*/
l86:if(x[jvj+9]!=incon) goto l87;
goto l89;
l39:if((KR==89)) goto l40;
if((KR==87)) goto l41;
if((KR==69)) goto l42;
if((KR==86)) goto l36;
if((KR==73)) goto l44;
if((KR==88)) goto l45;
if((KR==72)) goto l46;
if((KR==66)) goto l47;
if((KR==74)) goto l48;
if((KR==71)) goto l50;
if((KR==81)) goto l53;
if((KR==75)) goto l54;
if((KR==70)) goto l55;
if((KR==65)) goto l56;
if((KR==85)) goto l58;
if((KR!=68)) goto l64;
x[jvj+44]=0 ;z[jvj+44]=0;
x[jvj+84]=x[jvj+9] ;z[jvj+84]=z[jvj+9];
goto l32;
l40:pile[v[22]]=jvj+11; pile[WZ1]=jvj+9; pile[WZ2]=jvj+45; 
(*f[495])( );     /*EXAPBY0(jvj+11,jvj+9,jvj+45)*/
goto l87;
l41:pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,V60)*/
V60=pile[WZ1]; 
pile[v[22]]=V60; pile[WZ1]=jvj+11; pile[WZ2]=jvj+9; pile[WZ3]=jvj+45; 
(*f[516])( );     /*EXAPBW0(V60,jvj+11,jvj+9,jvj+45)*/
goto l87;
l42:pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,V14,K)*/
V14=pile[WZ1]; K=pile[WZ2]; 
V16=K+1;
pile[v[22]]=V16; 
(*f[135])( );     /*LND3(V16,V15)*/
V15=pile[WZ1]; 
pile[v[22]]=jvj+11; pile[WZ1]=jvj+9; pile[WZ2]=jvj+45; pile[WZ3]=V14; pile[WZ4]=V15; 
(*f[504])( );     /*EXAPBE0(jvj+11,jvj+9,jvj+45,V14,V15)*/
goto l87;
l44:pile[v[22]]=jvj+11; pile[WZ1]=jvj+9; pile[WZ2]=UR; 
(*f[499])( );     /*EXAPBI0(jvj+11,jvj+9,UR)*/
goto l87;
l45:pile[v[22]]=UR; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[510])( );     /*EXAPBX0(UR,jvj+9,jvj+11)*/
goto l87;
l46:pile[v[22]]=jvj+11; pile[WZ1]=jvj+9; pile[WZ2]=UR; 
(*f[512])( );     /*EXAPBH0(jvj+11,jvj+9,UR)*/
goto l87;
l47:pile[v[22]]=jvj+11; pile[WZ1]=jvj+9; pile[WZ2]=UR; 
(*f[514])( );     /*EXAPBB0(jvj+11,jvj+9,UR)*/
goto l87;
l48:pile[v[22]]=jvj+11; pile[WZ1]=jvj+9; pile[WZ2]=UR; 
(*f[515])( );     /*EXAPBJ0(jvj+11,jvj+9,UR)*/
goto l87;
l50:x[jvj+85]=x[jvj+11] ;z[jvj+85]=z[jvj+11];
l49:if((x[jvj+85]<=0)) goto l87;
x[jvj+33]=s[x[jvj+85]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+85];
pile[v[22]]=109; pile[WZ1]=jvj+33; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(109,jvj+33,jvj+71)*/
pile[v[22]]=983; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(983,jvj+71,jvj+72)*/
pile[v[22]]=878; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[33])( );     /*FNDE0(878,jvj+72,jvj+73)*/
l92:if((x[jvj+73]<=0)) goto l51;
x[jvj+74]=s[x[jvj+73]] ;z[jvj+74]=(x[jvj+74]<=sepcte) ? x[jvj+74] : z[jvj+73];
pile[v[22]]=163; pile[WZ1]=jvj+74; 
(*f[44])( );if(v[102]) goto l93;     /*FNDC1(163,jvj+74,V164)*/
V164=pile[WZ2]; 
pile[WZ1]=jvj+33; 
(*f[44])( );if(v[102]) goto l93;     /*FNDC1(163,jvj+33,V163)*/
V163=pile[WZ2]; 
if((V164==V163)) goto l93;
x[jvj+73]=t[x[jvj+73]];
goto l92;
l51:x[jvj+85]=t[x[jvj+85]];
goto l49;
l53:pile[v[22]]=jvj+48; 
(*f[500])( );if(v[102]) goto l87;     /*QUESLIRE0(jvj+48)*/
pile[WZ1]=jvj+11; pile[WZ2]=jvj+9; 
(*f[501])( );     /*QUESPB0(jvj+48,jvj+11,jvj+9)*/
goto l87;
l54:pile[v[22]]=jvj+11; pile[WZ1]=jvj+9; 
(*f[503])( );     /*EXAPBK0(jvj+11,jvj+9)*/
goto l87;
l55:pile[v[22]]=jvj+11; pile[WZ1]=jvj+9; 
(*f[506])( );     /*EXAPBF0(jvj+11,jvj+9)*/
goto l87;
l56:pile[v[22]]=jvj+11; pile[WZ1]=jvj+9; 
(*f[518])( );     /*EXAPBA0(jvj+11,jvj+9)*/
goto l87;
l58:x[jvj+87]=x[jvj+11] ;z[jvj+87]=z[jvj+11];
l57:if((x[jvj+87]<=0)) goto l87;
x[jvj+49]=s[x[jvj+87]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+87];
pile[v[22]]=109; pile[WZ1]=jvj+49; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(109,jvj+49,jvj+75)*/
pile[v[22]]=983; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(983,jvj+75,jvj+76)*/
pile[v[22]]=878; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(878,jvj+76,jvj+77)*/
l94:if((x[jvj+77]<=0)) goto l59;
x[jvj+78]=s[x[jvj+77]] ;z[jvj+78]=(x[jvj+78]<=sepcte) ? x[jvj+78] : z[jvj+77];
pile[v[22]]=163; pile[WZ1]=jvj+78; 
(*f[44])( );if(v[102]) goto l95;     /*FNDC1(163,jvj+78,V171)*/
V171=pile[WZ2]; 
pile[WZ1]=jvj+49; 
(*f[44])( );if(v[102]) goto l95;     /*FNDC1(163,jvj+49,V170)*/
V170=pile[WZ2]; 
if((V171==V170)) goto l95;
x[jvj+77]=t[x[jvj+77]];
goto l94;
l59:x[jvj+87]=t[x[jvj+87]];
goto l57;
l62:pile[v[22]]=20; pile[WZ1]=V109; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V109,0,V36)*/
V36=pile[WZ3]; 
V35=incon;
pile[v[22]]=163; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(163,jvj+23,V40)*/
V40=pile[WZ2]; 
V=V40;
pile[v[22]]=V36; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V36,V,V35)*/
V35=pile[WZ2]; 
goto l63;
l65:pile[v[22]]=jvj+11; 
(*f[507])( );     /*EXAPBO0(jvj+11)*/
goto l86;
l66:pile[v[22]]=UR; pile[WZ1]=jvj+11; pile[WZ2]=jvj+45; 
(*f[511])( );     /*EXAPBN0(UR,jvj+11,jvj+45)*/
goto l86;
l67:pile[v[22]]=jvj+11; 
(*f[513])( );     /*EXAPBP0(jvj+11)*/
goto l86;
l68:pile[v[22]]=jvj+11; 
(*f[519])( );     /*EXAPBR0(jvj+11)*/
goto l86;
l69:pile[v[22]]=1; 
(*f[126])( );     /*LND2(1,V57,V58)*/
V57=pile[WZ1]; V58=pile[WZ2]; 
pile[v[22]]=V58; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+56; 
(*f[78])( );if(v[102]) goto l86;     /*SMA0(V58,36,67,jvj+56)*/
pile[v[22]]=85; pile[WZ1]=V57; pile[WZ2]=jvj+11; 
(*f[509])( );     /*ETUTILISE1(85,V57,jvj+11,jvj+56)*/
goto l86;
l70:pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,NRR,V11)*/
NRR=pile[WZ1]; V11=pile[WZ2]; 
V13=V11+1;
pile[v[22]]=V13; 
(*f[135])( );     /*LND3(V13,V12)*/
V12=pile[WZ1]; 
pile[v[22]]=jvj+11; pile[WZ1]=NRR; pile[WZ2]=V12; 
(*f[502])( );     /*EXAPBM0(jvj+11,NRR,V12)*/
goto l86;
l72:pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+57; 
(*f[33])( );     /*FNDE0(457,324,jvj+57)*/
goto l73;
l75:pile[v[22]]=V83; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V83,83,V82)*/
V82=pile[WZ2]; 
goto l76;
l77:V84=V82;
goto l78;
l79:V86=V84;
goto l80;
l81:pile[v[22]]=V91; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V91,83,V90)*/
V90=pile[WZ2]; 
goto l82;
l83:V88=V86;
goto l84;
l91:x[jvj+13]=x[jvj+70] ;z[jvj+13]=z[jvj+70];
pile[v[22]]=NR; pile[WZ1]=NX; pile[WZ2]=jvj+12; pile[WZ3]=167; pile[WZ4]=jvj+13; pile[WZ5]=jvj+14; 
(*f[497])( );     /*COMPNORD0(NR,NX,jvj+12,167,jvj+13,jvj+14)*/
l9:x[jvj+80]=t[x[jvj+80]];
goto l7;
l93:x[jvj+86]=x[jvj+74] ;z[jvj+86]=z[jvj+74];
pile[v[22]]=109; pile[WZ1]=jvj+33; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(109,jvj+33,jvj+47)*/
V116=x[jvj+47];
x[jvj+29]=x[jvj+86] ;z[jvj+29]=z[jvj+86];
x[jvj+32]=0 ;z[jvj+32]=0;
x[jvj+27]=d[19];z[jvj+27]=0;
goto l21;
l95:x[jvj+88]=x[jvj+78] ;z[jvj+88]=z[jvj+78];
pile[v[22]]=109; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(109,jvj+49,jvj+50)*/
x[jvj+23]=x[jvj+88] ;z[jvj+23]=z[jvj+88];
pile[v[22]]=944; pile[WZ1]=jvj+23; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(944,jvj+23,jvj+51)*/
V109=x[jvj+50];
x[jvj+89]=x[jvj+51] ;z[jvj+89]=z[jvj+51];
goto l60;
}
