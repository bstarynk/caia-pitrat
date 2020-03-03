#include "dx.h"
void EDITOUTPB1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V17=0,V=0,V2=0,V1=0,V18=0,C=0,V175=0,V176=0,V177=0,V3=0,V34=0,V23=0,V26=0,V25=0,V35=0,NN=0,V28=0,V189=0,V190=0,V27=0,V36=0,V24=0,V193=0,V194=0,V29=0,V198=0,V31=0,V136=0,V160=0,V165=0,V163=0,V150=0,V167=0,V170=0,BL=0,V173=0,B=0,V49=0,V50=0,V68=0,V56=0,V58=0,V57=0,V69=0,V71=0,V211=0,V60=0,V59=0,V215=0,V212=0,V213=0,V61=0,V220=0,V216=0,V217=0,V218=0,V63=0,V76=0,V80=0,V226=0,V228=0,V229=0,V221=0,V222=0,V224=0,V225=0,V227=0,V83=0,V232=0,V86=0,V85=0,V94=0,V84=0,V88=0,V87=0,V95=0,NT=0,V90=0,V234=0,V235=0,V89=0,V96=0,V99=0,V242=0,V243=0,V238=0,V239=0,V241=0,V110=0,V102=0,V105=0,V104=0,V103=0,V107=0,V246=0,V247=0,V106=0,V112=0,V115=0,V254=0,V255=0,V249=0,V250=0,V252=0,V253=0,NR=0,V44=0,V54=0,V205=0,V206=0,V208=0,V142=0,V140=0,V258=0,V261=0,V257=0,V259=0,V260=0,V262=0,V131=0,V38=0,V41=0,V202=0,V203=0,V199=0,V201=0,K=0,H=0,V5=0,KK=0,J=0,V6=0,L=0,M=0,V7=0,A=0,V179=0,V19=0,V20=0,V21=0,V180=0,V182=0,V183=0,V185=0,V186=0,DX=0,V290=0,V289=0;
int KR,UR,F;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=104;
x[jvj+1]=10905;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==408&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
KR=pile[v[22]]; UR=pile[v[22]+1]; F=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=x[jvj+15]=x[jvj+27]=B=incon;
if((KR!=80)) goto l44;
pile[v[22]]=68; 
(*f[524])( );     /*ETATCREE0(68)*/
l44:pile[v[22]]=KR; pile[WZ1]=UR; 
(*f[532])( );     /*Z238Z0(KR,UR)*/
if((KR==87)) goto l45;
if((KR!=86)) goto l47;
pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+29; 
(*f[78])( );if(v[102]) goto l47;     /*SMA0(1,64,67,jvj+29)*/
pile[v[22]]=jvj+29; 
(*f[530])( );     /*EDIPBA0(jvj+29)*/
l47:if(KR!=67&&KR!=76&&KR!=84&&KR!=82&&KR!=65&&KR!=88) goto l96;
x[jvj+6]=incon;
if((F==32)) goto l16;
pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+6; 
(*f[78])( );if(v[102]) goto l16;     /*SMA0(1,36,67,jvj+6)*/
l48:B=x[jvj+6];
l96:if((KR==78)) goto l97;
if((KR!=70)) goto l104;
pile[v[22]]=1; 
(*f[102])( );     /*LND0(1,NR)*/
NR=pile[WZ1]; 
x[jvj+60]=d[24];z[jvj+60]=0;
l100:if((x[jvj+60]<=0)) goto l104;
x[jvj+65]=s[x[jvj+60]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+60];
x[jvj+61]=x[jvj+65] ;z[jvj+61]=z[jvj+65];
l102:pile[v[22]]=120; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l101;     /*FNDO0(120,jvj+61,jvj+62)*/
pile[v[22]]=698; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l103;     /*FNDO0(698,jvj+62,jvj+63)*/
x[jvj+64]=x[jvj+63] ;z[jvj+64]=z[jvj+63];
pile[v[22]]=117; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l103;     /*FNDC0(117,jvj+64,V44)*/
V44=pile[WZ2]; 
if((V44!=NR)) goto l103;
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; 
(*f[525])( );     /*SOREXP0(jvj+64,jvj+65)*/
l103:x[jvj+61]=x[jvj+62] ;z[jvj+61]=z[jvj+62];
goto l102;
l2:V1=V2;
l149:if(V1!=incon) goto l3;
l147:x[jvj+104]=t[x[jvj+104]];
l145:if((x[jvj+104]>0)) goto l146;
x[jvj+88]=t[x[jvj+88]];
l144:if((x[jvj+88]<=0)) goto l152;
x[jvj+89]=s[x[jvj+88]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+88];
pile[v[22]]=878; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[33])( );     /*FNDE0(878,jvj+89,jvj+90)*/
V179=x[jvj+89];
x[jvj+104]=x[jvj+90] ;z[jvj+104]=z[jvj+90];
goto l145;
l3:V3=incon;
pile[v[22]]=897; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(897,jvj+3,V18)*/
V18=pile[WZ2]; 
C=V18;
pile[v[22]]=V1; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V1,32,V175)*/
V175=pile[WZ2]; 
pile[v[22]]=V175; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V175,40,V176)*/
V176=pile[WZ2]; 
pile[v[22]]=C; pile[WZ1]=V176; 
(*f[64])( );     /*SRA2(C,V176,V177)*/
V177=pile[WZ2]; 
pile[v[22]]=V177; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V177,41,V3)*/
V3=pile[WZ2]; 
l4:if(V3==incon) goto l5;
l150:if(V3!=incon) goto l151;
goto l147;
l5:V3=V1;
goto l150;
l7:V25=V26;
l133:if(V25!=incon) goto l134;
l132:x[jvj+85]=t[x[jvj+85]];
l131:if((x[jvj+85]<=0)) goto l139;
x[jvj+4]=s[x[jvj+85]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+85];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l132;     /*FNDC0(683,jvj+4,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=1076; 
(*f[26])( );if(v[102]) goto l132;     /*FNDC0(1076,jvj+4,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l132;     /*FNDO0(109,jvj+4,jvj+86)*/
pile[v[22]]=860; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l132;     /*FNDO0(860,jvj+4,jvj+87)*/
V202=x[jvj+87];
V203=x[jvj+86];
pile[v[22]]=41; pile[WZ1]=V41; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V41,0,V199)*/
V199=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V202; pile[WZ2]=V199; 
(*f[39])( );     /*SDX0(20,V202,V199,V201)*/
V201=pile[WZ3]; 
pile[WZ1]=V203; pile[WZ2]=V201; 
(*f[39])( );     /*SDX0(20,V203,V201,V26)*/
V26=pile[WZ3]; 
V25=incon;
pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(163,jvj+4,V34)*/
V34=pile[WZ2]; 
V23=V34;
pile[v[22]]=V26; pile[WZ1]=V23; 
(*f[37])( );     /*SRA0(V26,V23,V25)*/
V25=pile[WZ2]; 
l6:if(V25==incon) goto l7;
goto l133;
l9:V27=V28;
l135:if(V27!=incon) goto l10;
goto l132;
l10:V29=incon;
pile[v[22]]=1114; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(1114,jvj+4,V36)*/
V36=pile[WZ2]; 
V24=V36;
pile[v[22]]=135; pile[WZ1]=V27; pile[WZ2]=1114; 
(*f[42])( );     /*SRA1(135,V27,1114,V193)*/
V193=pile[WZ3]; 
pile[v[22]]=V193; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V193,58,V194)*/
V194=pile[WZ2]; 
pile[v[22]]=V194; pile[WZ1]=V24; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V194,V24,41,V29)*/
V29=pile[WZ3]; 
l11:if(V29==incon) goto l12;
l136:if(V29!=incon) goto l13;
goto l132;
l12:V29=V27;
goto l136;
l13:V31=incon;
pile[v[22]]=1104; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1104,jvj+4,jvj+5)*/
if((x[jvj+5]==0)) goto l14;
V198=x[jvj+5];
pile[v[22]]=23; pile[WZ1]=V198; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(23,V198,V29,V31)*/
V31=pile[WZ3]; 
l14:if(V31==incon) goto l15;
l137:if(V31!=incon) goto l138;
goto l132;
l15:V31=V29;
goto l137;
l16:x[jvj+6]=250 ;z[jvj+6]=250;
goto l48;
l17:pile[v[22]]=878; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(878,jvj+7,jvj+8)*/
x[jvj+98]=x[jvj+8] ;z[jvj+98]=z[jvj+8];
l18:if((x[jvj+98]<=0)) goto l128;
x[jvj+9]=s[x[jvj+98]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+98];
pile[v[22]]=897; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(897,jvj+9,V136)*/
V136=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=V136; 
(*f[331])( );     /*PLUE3(jvj+10,V136)*/
l19:x[jvj+98]=t[x[jvj+98]];
goto l18;
l21:x[jvj+11]=250 ;z[jvj+11]=250;
l140:if(x[jvj+11]!=incon) goto l22;
l143:if((KR!=68)) goto l152;
pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,H,K)*/
H=pile[WZ1]; K=pile[WZ2]; 
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+88; 
(*f[33])( );     /*FNDE0(457,324,jvj+88)*/
V5=K+1;
pile[v[22]]=V5; 
(*f[126])( );     /*LND2(V5,J,KK)*/
J=pile[WZ1]; KK=pile[WZ2]; 
V6=KK+1;
pile[v[22]]=V6; 
(*f[126])( );     /*LND2(V6,M,L)*/
M=pile[WZ1]; L=pile[WZ2]; 
V7=L+1;
pile[v[22]]=V7; 
(*f[135])( );     /*LND3(V7,A)*/
A=pile[WZ1]; 
goto l144;
l22:x[jvj+15]=0 ;z[jvj+15]=0;
if(x[jvj+15]!=incon) goto l23;
l141:if(x[jvj+15]!=incon) goto l142;
goto l143;
l23:pile[v[22]]=345; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l141;     /*FNDO0(345,jvj+11,jvj+12)*/
pile[v[22]]=365; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(365,jvj+12,jvj+13)*/
l24:if((x[jvj+13]<=0)) goto l141;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=246; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(246,jvj+14,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=jvj+15; pile[WZ1]=V160; 
(*f[207])( );     /*PLUE2(jvj+15,V160)*/
l25:x[jvj+13]=t[x[jvj+13]];
goto l24;
l27:x[jvj+22]=s[x[jvj+16]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+16];
x[jvj+99]=x[jvj+28] ;z[jvj+99]=z[jvj+28];
l28:if((x[jvj+99]>0)) goto l29;
x[jvj+16]=t[x[jvj+16]];
l26:if((x[jvj+16]>0)) goto l27;
x[jvj+27]=0 ;z[jvj+27]=0;
if(x[jvj+27]!=incon) goto l36;
l39:if(x[jvj+27]!=incon) goto l40;
goto l143;
l29:x[jvj+93]=s[x[jvj+99]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+99];
pile[v[22]]=109; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(109,jvj+93,jvj+94)*/
pile[v[22]]=983; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(983,jvj+94,jvj+95)*/
pile[v[22]]=878; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[33])( );     /*FNDE0(878,jvj+95,jvj+96)*/
l155:if((x[jvj+96]<=0)) goto l30;
x[jvj+97]=s[x[jvj+96]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+96];
pile[v[22]]=163; pile[WZ1]=jvj+97; 
(*f[44])( );if(v[102]) goto l156;     /*FNDC1(163,jvj+97,V290)*/
V290=pile[WZ2]; 
pile[WZ1]=jvj+93; 
(*f[44])( );if(v[102]) goto l156;     /*FNDC1(163,jvj+93,V289)*/
V289=pile[WZ2]; 
if((V290==V289)) goto l156;
x[jvj+96]=t[x[jvj+96]];
goto l155;
l30:x[jvj+99]=t[x[jvj+99]];
goto l28;
l33:pile[v[22]]=763; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(763,jvj+19,jvj+20)*/
pile[v[22]]=218; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(218,jvj+19,jvj+21)*/
x[jvj+102]=x[jvj+20] ;z[jvj+102]=z[jvj+20];
l34:if((x[jvj+102]<=0)) goto l32;
x[jvj+23]=s[x[jvj+102]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+102];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(jvj+22,jvj+23,V163)*/
V163=pile[WZ2]; 
V150=V163;
if((V150<=0)) goto l35;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(117,jvj+23,V167)*/
V167=pile[WZ2]; 
pile[v[22]]=jvj+24; pile[WZ1]=V165; pile[WZ2]=jvj+21; pile[WZ3]=jvj+22; pile[WZ4]=V150; pile[WZ5]=V167; 
(*f[527])( );     /*REGROUPE0(jvj+24,V165,jvj+21,jvj+22,V150,V167)*/
l35:x[jvj+102]=t[x[jvj+102]];
goto l34;
l36:pile[v[22]]=1288; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(1288,jvj+24,jvj+25)*/
l37:if((x[jvj+25]<=0)) goto l39;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=246; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(246,jvj+26,V170)*/
V170=pile[WZ2]; 
pile[v[22]]=jvj+27; pile[WZ1]=V170; 
(*f[207])( );     /*PLUE2(jvj+27,V170)*/
l38:x[jvj+25]=t[x[jvj+25]];
goto l37;
l42:pile[v[22]]=BL; pile[WZ1]=jvj+24; pile[WZ2]=jvj+28; pile[WZ3]=UR; 
(*f[528])( );     /*CMLIS0(BL,jvj+24,jvj+28,UR)*/
l41:x[jvj+27]=t[x[jvj+27]];
l40:if((x[jvj+27]<=0)) goto l143;
BL=s[x[jvj+27]];
if((x[jvj+11]==250)) goto l42;
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==BL) goto l42;
goto l41;
l43:V173=((-9009));
l46:pile[v[22]]=V173; 
(*f[531])( );     /*MATCHDANSATOME0(V173)*/
goto l47;
l45:if((UR!=77)) goto l47;
V173=incon;
if((F==65)) goto l43;
if((F!=77)) goto l47;
V173=((-5963));
goto l46;
l50:if(x[jvj+33]==incon) goto l109;
if((x[jvj+33]!=(-99999998))) goto l107;
l109:if((KR!=82)) goto l112;
pile[v[22]]=1051; pile[WZ1]=994; pile[WZ2]=jvj+67; 
(*f[33])( );     /*FNDE0(1051,994,jvj+67)*/
l110:if((x[jvj+67]<=0)) goto l112;
x[jvj+53]=s[x[jvj+67]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+67];
pile[v[22]]=1078; pile[WZ1]=jvj+53; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(1078,jvj+53,jvj+51)*/
if((B==250)) goto l91;
pile[v[22]]=109; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(109,jvj+51,jvj+52)*/
if((B==x[jvj+52])) goto l91;
l111:x[jvj+67]=t[x[jvj+67]];
goto l110;
l51:pile[v[22]]=jvj+30; pile[WZ1]=jvj+33; 
(*f[525])( );     /*SOREXP0(jvj+30,jvj+33)*/
l108:x[jvj+66]=x[jvj+32] ;z[jvj+66]=z[jvj+32];
l106:pile[v[22]]=120; pile[WZ1]=jvj+66; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l109;     /*FNDO0(120,jvj+66,jvj+32)*/
pile[v[22]]=698; pile[WZ1]=jvj+32; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(698,jvj+32,jvj+30)*/
if((B==250)) goto l51;
pile[v[22]]=109; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(109,jvj+30,jvj+31)*/
if((B==x[jvj+31])) goto l51;
goto l108;
l53:V57=V58;
l63:if(V57!=incon) goto l64;
l120:x[jvj+74]=x[jvj+75] ;z[jvj+74]=z[jvj+75];
l119:pile[v[22]]=120; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l121;     /*FNDO0(120,jvj+74,jvj+75)*/
pile[v[22]]=698; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(698,jvj+75,jvj+76)*/
x[jvj+35]=x[jvj+76] ;z[jvj+35]=z[jvj+76];
pile[v[22]]=1078; pile[WZ1]=jvj+35; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(1078,jvj+35,jvj+77)*/
x[jvj+34]=x[jvj+77] ;z[jvj+34]=z[jvj+77];
pile[v[22]]=109; pile[WZ1]=jvj+34; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(109,jvj+34,jvj+40)*/
if((B==250)) goto l62;
if((B==x[jvj+40])) goto l62;
goto l120;
l55:V59=V60;
l65:if(V59!=incon) goto l56;
goto l120;
l56:V61=incon;
pile[v[22]]=1260; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(1260,jvj+35,jvj+36)*/
if((x[jvj+36]==0)) goto l57;
V215=x[jvj+36];
pile[v[22]]=135; pile[WZ1]=V59; pile[WZ2]=1260; 
(*f[42])( );     /*SRA1(135,V59,1260,V212)*/
V212=pile[WZ3]; 
pile[v[22]]=V212; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V212,58,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V215; pile[WZ2]=V213; 
(*f[39])( );     /*SDX0(23,V215,V213,V61)*/
V61=pile[WZ3]; 
l57:if(V61==incon) goto l58;
l66:if(V61!=incon) goto l59;
goto l120;
l58:V61=V59;
goto l66;
l59:V63=incon;
pile[v[22]]=1025; pile[WZ1]=jvj+34; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(1025,jvj+34,jvj+37)*/
if((x[jvj+37]<=0)) goto l60;
x[jvj+38]=s[x[jvj+37]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+37];
pile[v[22]]=698; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(698,jvj+38,jvj+39)*/
V220=x[jvj+39];
pile[v[22]]=V61; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V61,44,V216)*/
V216=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V216; pile[WZ2]=528; 
(*f[42])( );     /*SRA1(135,V216,528,V217)*/
V217=pile[WZ3]; 
pile[v[22]]=V217; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V217,58,V218)*/
V218=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V220; pile[WZ2]=V218; 
(*f[39])( );     /*SDX0(20,V220,V218,V63)*/
V63=pile[WZ3]; 
l60:if(V63==incon) goto l61;
l67:if(V63!=incon) goto l68;
goto l120;
l61:V63=V61;
goto l67;
l62:pile[v[22]]=683; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l120;     /*FNDC0(683,jvj+34,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=117; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l120;     /*FNDC0(117,jvj+35,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=913; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(913,jvj+35,jvj+41)*/
pile[v[22]]=935; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(935,jvj+35,jvj+42)*/
V226=x[jvj+42];
V228=x[jvj+41];
V229=x[jvj+40];
pile[v[22]]=0; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(0,91,V221)*/
V221=pile[WZ2]; 
pile[v[22]]=V221; pile[WZ1]=V80; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V221,V80,41,V222)*/
V222=pile[WZ3]; 
pile[v[22]]=V222; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V222,93,V224)*/
V224=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V226; pile[WZ2]=V224; 
(*f[39])( );     /*SDX0(20,V226,V224,V225)*/
V225=pile[WZ3]; 
pile[WZ1]=V228; pile[WZ2]=V225; 
(*f[39])( );     /*SDX0(20,V228,V225,V227)*/
V227=pile[WZ3]; 
pile[WZ1]=V229; pile[WZ2]=V227; 
(*f[39])( );     /*SDX0(20,V229,V227,V58)*/
V58=pile[WZ3]; 
V57=incon;
pile[v[22]]=163; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l52;     /*FNDC1(163,jvj+34,V68)*/
V68=pile[WZ2]; 
V56=V68;
pile[v[22]]=V58; pile[WZ1]=V56; 
(*f[37])( );     /*SRA0(V58,V56,V57)*/
V57=pile[WZ2]; 
l52:if(V57==incon) goto l53;
goto l63;
l64:pile[v[22]]=41; pile[WZ1]=V76; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(41,V76,V57,V60)*/
V60=pile[WZ3]; 
V59=incon;
pile[v[22]]=515; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(515,jvj+35,V69)*/
V69=pile[WZ2]; 
if((V69<=sepbase)) goto l54;
if((V69>sepnouv)) goto l54;
V71=V69;
V211=V71;
pile[v[22]]=20; pile[WZ1]=V211; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(20,V211,V60,V59)*/
V59=pile[WZ3]; 
l54:if(V59==incon) goto l55;
goto l65;
l68:pile[v[22]]=V63; 
(*f[40])( );     /*SLG0(V63)*/
goto l120;
l70:V85=V86;
l76:if(V85!=incon) goto l77;
l117:x[jvj+71]=x[jvj+72] ;z[jvj+71]=z[jvj+72];
l116:pile[v[22]]=120; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l118;     /*FNDO0(120,jvj+71,jvj+72)*/
pile[v[22]]=698; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l117;     /*FNDO0(698,jvj+72,jvj+73)*/
x[jvj+43]=x[jvj+73] ;z[jvj+43]=z[jvj+73];
pile[v[22]]=109; pile[WZ1]=jvj+43; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l117;     /*FNDO0(109,jvj+43,jvj+45)*/
if((B==250)) goto l75;
if((B==x[jvj+45])) goto l75;
goto l117;
l72:V87=V88;
l78:if(V87!=incon) goto l79;
goto l117;
l74:V89=V90;
l80:if(V89!=incon) goto l81;
goto l117;
l75:pile[v[22]]=683; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l117;     /*FNDC0(683,jvj+43,V96)*/
V96=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l117;     /*FNDC0(117,jvj+43,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=860; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l117;     /*FNDO0(860,jvj+43,jvj+46)*/
V242=x[jvj+46];
V243=x[jvj+45];
pile[v[22]]=0; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(0,91,V238)*/
V238=pile[WZ2]; 
pile[v[22]]=V238; pile[WZ1]=V99; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V238,V99,41,V239)*/
V239=pile[WZ3]; 
pile[v[22]]=V239; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V239,93,V241)*/
V241=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V242; pile[WZ2]=V241; 
(*f[39])( );     /*SDX0(20,V242,V241,V86)*/
V86=pile[WZ3]; 
V85=incon;
pile[v[22]]=122; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(122,jvj+43,jvj+44)*/
V83=x[jvj+44];
V232=V83;
pile[v[22]]=20; pile[WZ1]=V232; pile[WZ2]=V86; 
(*f[39])( );     /*SDX0(20,V232,V86,V85)*/
V85=pile[WZ3]; 
l69:if(V85==incon) goto l70;
goto l76;
l77:pile[v[22]]=20; pile[WZ1]=V243; pile[WZ2]=V85; 
(*f[39])( );     /*SDX0(20,V243,V85,V88)*/
V88=pile[WZ3]; 
V87=incon;
pile[v[22]]=163; pile[WZ1]=jvj+43; 
(*f[44])( );if(v[102]) goto l71;     /*FNDC1(163,jvj+43,V94)*/
V94=pile[WZ2]; 
V84=V94;
pile[v[22]]=V88; pile[WZ1]=V84; 
(*f[37])( );     /*SRA0(V88,V84,V87)*/
V87=pile[WZ2]; 
l71:if(V87==incon) goto l72;
goto l78;
l79:pile[v[22]]=41; pile[WZ1]=V96; pile[WZ2]=V87; 
(*f[39])( );     /*SDX0(41,V96,V87,V90)*/
V90=pile[WZ3]; 
V89=incon;
pile[v[22]]=359; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l73;     /*FNDC0(359,jvj+43,V95)*/
V95=pile[WZ2]; 
NT=V95;
pile[v[22]]=V90; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V90,40,V234)*/
V234=pile[WZ2]; 
pile[v[22]]=V234; pile[WZ1]=NT; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V234,NT,41,V235)*/
V235=pile[WZ3]; 
pile[v[22]]=V235; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V235,41,V89)*/
V89=pile[WZ2]; 
l73:if(V89==incon) goto l74;
goto l80;
l81:pile[v[22]]=V89; 
(*f[40])( );     /*SLG0(V89)*/
goto l117;
l83:V104=V105;
l87:if(V104!=incon) goto l88;
l114:x[jvj+68]=x[jvj+69] ;z[jvj+68]=z[jvj+69];
l113:pile[v[22]]=120; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l115;     /*FNDO0(120,jvj+68,jvj+69)*/
pile[v[22]]=698; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(698,jvj+69,jvj+70)*/
x[jvj+47]=x[jvj+70] ;z[jvj+47]=z[jvj+70];
pile[v[22]]=109; pile[WZ1]=jvj+47; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(109,jvj+47,jvj+49)*/
if((B==250)) goto l86;
if((B==x[jvj+49])) goto l86;
goto l114;
l85:V106=V107;
l89:if(V106!=incon) goto l90;
goto l114;
l86:pile[v[22]]=683; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l114;     /*FNDC0(683,jvj+47,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l114;     /*FNDC0(117,jvj+47,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=860; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(860,jvj+47,jvj+50)*/
V254=x[jvj+50];
V255=x[jvj+49];
pile[v[22]]=0; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(0,91,V249)*/
V249=pile[WZ2]; 
pile[v[22]]=V249; pile[WZ1]=V115; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V249,V115,41,V250)*/
V250=pile[WZ3]; 
pile[v[22]]=V250; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V250,93,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V254; pile[WZ2]=V252; 
(*f[39])( );     /*SDX0(20,V254,V252,V253)*/
V253=pile[WZ3]; 
pile[WZ1]=V255; pile[WZ2]=V253; 
(*f[39])( );     /*SDX0(20,V255,V253,V105)*/
V105=pile[WZ3]; 
V104=incon;
pile[v[22]]=163; pile[WZ1]=jvj+47; 
(*f[44])( );if(v[102]) goto l82;     /*FNDC1(163,jvj+47,V110)*/
V110=pile[WZ2]; 
V102=V110;
pile[v[22]]=V105; pile[WZ1]=V102; 
(*f[37])( );     /*SRA0(V105,V102,V104)*/
V104=pile[WZ2]; 
l82:if(V104==incon) goto l83;
goto l87;
l88:pile[v[22]]=41; pile[WZ1]=V112; pile[WZ2]=V104; 
(*f[39])( );     /*SDX0(41,V112,V104,V107)*/
V107=pile[WZ3]; 
V106=incon;
pile[v[22]]=948; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(948,jvj+47,jvj+48)*/
V103=68;
if((V103!=x[jvj+48])) goto l84;
pile[v[22]]=135; pile[WZ1]=V107; pile[WZ2]=948; 
(*f[42])( );     /*SRA1(135,V107,948,V246)*/
V246=pile[WZ3]; 
pile[v[22]]=V246; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V246,58,V247)*/
V247=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V247; pile[WZ2]=68; 
(*f[42])( );     /*SRA1(135,V247,68,V106)*/
V106=pile[WZ3]; 
l84:if(V106==incon) goto l85;
goto l89;
l90:pile[v[22]]=V106; 
(*f[40])( );     /*SLG0(V106)*/
goto l114;
l91:x[jvj+55]=incon;
pile[v[22]]=860; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l92;     /*FNDO0(860,jvj+53,jvj+54)*/
x[jvj+103]=x[jvj+54] ;z[jvj+103]=z[jvj+54];
x[jvj+55]=x[jvj+103] ;z[jvj+55]=z[jvj+103];
l92:if(x[jvj+55]==incon) goto l93;
l94:if(x[jvj+55]!=incon) goto l95;
goto l111;
l93:x[jvj+55]=250 ;z[jvj+55]=250;
goto l94;
l95:pile[v[22]]=jvj+51; pile[WZ1]=jvj+55; 
(*f[525])( );     /*SOREXP0(jvj+51,jvj+55)*/
goto l111;
l97:pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(457,324,jvj+56)*/
l98:if((x[jvj+56]<=0)) goto l104;
x[jvj+57]=s[x[jvj+56]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+56];
pile[v[22]]=896; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(896,jvj+57,jvj+58)*/
if((x[jvj+58]!=0)) goto l99;
pile[v[22]]=1054; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l99;     /*FNDO0(1054,jvj+57,jvj+59)*/
pile[v[22]]=jvj+57; 
(*f[404])( );     /*SORCREE0(jvj+57)*/
l99:x[jvj+56]=t[x[jvj+56]];
goto l98;
l101:x[jvj+60]=t[x[jvj+60]];
goto l100;
l104:if(B!=incon) goto l105;
l121:if((KR!=79)) goto l122;
(*f[526])( );if(v[102]) goto l122;     /*TAILLECOMB0(V54)*/
V54=pile[v[22]]; 
pile[v[22]]=20; pile[WZ1]=10290; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10290,0,V205)*/
V205=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V54; pile[WZ2]=V205; 
(*f[39])( );     /*SDX0(41,V54,V205,V206)*/
V206=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V206; pile[WZ2]=937; 
(*f[42])( );     /*SRA1(135,V206,937,V208)*/
V208=pile[WZ3]; 
pile[v[22]]=V208; 
(*f[40])( );     /*SLG0(V208)*/
l122:if((KR!=89)) goto l125;
x[jvj+78]=1097 ;z[jvj+78]=1097;
l123:pile[v[22]]=120; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l125;     /*FNDO0(120,jvj+78,jvj+79)*/
pile[v[22]]=698; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l124;     /*FNDO0(698,jvj+79,jvj+80)*/
x[jvj+81]=x[jvj+80] ;z[jvj+81]=z[jvj+80];
pile[v[22]]=163; pile[WZ1]=jvj+81; 
(*f[44])( );if(v[102]) goto l124;     /*FNDC1(163,jvj+81,V142)*/
V142=pile[WZ2]; 
pile[v[22]]=1167; 
(*f[26])( );if(v[102]) goto l124;     /*FNDC0(1167,jvj+81,V140)*/
V140=pile[WZ2]; 
pile[v[22]]=247; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l124;     /*FNDO0(247,jvj+81,jvj+82)*/
pile[v[22]]=109; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l124;     /*FNDO0(109,jvj+81,jvj+83)*/
V258=x[jvj+83];
V261=x[jvj+82];
pile[v[22]]=20; pile[WZ1]=V258; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V258,0,V257)*/
V257=pile[WZ3]; 
pile[v[22]]=V257; pile[WZ1]=V142; 
(*f[37])( );     /*SRA0(V257,V142,V259)*/
V259=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V261; pile[WZ2]=V259; 
(*f[39])( );     /*SDX0(20,V261,V259,V260)*/
V260=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V140; pile[WZ2]=V260; 
(*f[39])( );     /*SDX0(41,V140,V260,V262)*/
V262=pile[WZ3]; 
pile[v[22]]=V262; 
(*f[40])( );     /*SLG0(V262)*/
l124:x[jvj+78]=x[jvj+79] ;z[jvj+78]=z[jvj+79];
goto l123;
l105:if(KR!=65&&KR!=88) goto l109;
x[jvj+33]=incon;
pile[v[22]]=331; pile[WZ1]=924; 
(*f[219])( );if(v[102]) goto l49;     /*FNDC2(331,924,V49)*/
V49=pile[WZ2]; 
if((KR!=V49)) goto l49;
x[jvj+33]=924 ;z[jvj+33]=924;
l49:pile[v[22]]=331; pile[WZ1]=978; 
(*f[219])( );if(v[102]) goto l50;     /*FNDC2(331,978,V50)*/
V50=pile[WZ2]; 
if((KR!=V50)) goto l50;
x[jvj+33]=978 ;z[jvj+33]=978;
l107:x[jvj+66]=x[jvj+33] ;z[jvj+66]=z[jvj+33];
goto l106;
l112:if((KR!=84)) goto l115;
x[jvj+68]=924 ;z[jvj+68]=924;
goto l113;
l115:if((KR!=76)) goto l118;
x[jvj+71]=978 ;z[jvj+71]=978;
goto l116;
l118:if((KR!=67)) goto l121;
x[jvj+74]=1055 ;z[jvj+74]=1055;
goto l119;
l125:if((KR!=69)) goto l130;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+84; 
(*f[33])( );     /*FNDE0(457,324,jvj+84)*/
l126:if((x[jvj+84]<=0)) goto l130;
x[jvj+7]=s[x[jvj+84]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+84];
x[jvj+10]=0 ;z[jvj+10]=0;
if(x[jvj+10]!=incon) goto l17;
l128:if(x[jvj+10]!=incon) goto l129;
l127:x[jvj+84]=t[x[jvj+84]];
goto l126;
l130:if((KR!=66)) goto l139;
pile[v[22]]=1109; pile[WZ1]=924; pile[WZ2]=jvj+85; 
(*f[33])( );     /*FNDE0(1109,924,jvj+85)*/
goto l131;
l134:pile[v[22]]=41; pile[WZ1]=V38; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(41,V38,V25,V28)*/
V28=pile[WZ3]; 
V27=incon;
pile[v[22]]=359; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(359,jvj+4,V35)*/
V35=pile[WZ2]; 
NN=V35;
pile[v[22]]=135; pile[WZ1]=V28; pile[WZ2]=359; 
(*f[42])( );     /*SRA1(135,V28,359,V189)*/
V189=pile[WZ3]; 
pile[v[22]]=V189; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V189,58,V190)*/
V190=pile[WZ2]; 
pile[v[22]]=V190; pile[WZ1]=NN; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V190,NN,41,V27)*/
V27=pile[WZ3]; 
l8:if(V27==incon) goto l9;
goto l135;
l138:pile[v[22]]=V31; 
(*f[40])( );     /*SLG0(V31)*/
goto l132;
l139:if((KR!=81)) goto l143;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(250,158,jvj+24)*/
x[jvj+11]=incon;
if((F==32)) goto l20;
pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+11; 
(*f[78])( );if(v[102]) goto l20;     /*SMA0(1,36,67,jvj+11)*/
l20:if(x[jvj+11]==incon) goto l21;
goto l140;
l142:pile[v[22]]=jvj+28; 
(*f[138])( );if(v[102]) goto l143;     /*EXPPB0(jvj+28)*/
x[jvj+16]=d[23];z[jvj+16]=0;
goto l26;
l146:x[jvj+3]=s[x[jvj+104]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+104];
pile[v[22]]=941; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l147;     /*FNDC0(941,jvj+3,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=942; 
(*f[26])( );if(v[102]) goto l147;     /*FNDC0(942,jvj+3,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=943; 
(*f[26])( );if(v[102]) goto l147;     /*FNDC0(943,jvj+3,V21)*/
V21=pile[WZ2]; 
if((V19>A)) goto l148;
if((V19!=A)) goto l147;
if((V20>M)) goto l148;
if((V20!=M)) goto l147;
if((V21>J)) goto l148;
if((V21!=J)) goto l147;
pile[v[22]]=938; 
(*f[26])( );if(v[102]) goto l147;     /*FNDC0(938,jvj+3,V13)*/
V13=pile[WZ2]; 
if((V13>H)) goto l148;
goto l147;
l148:pile[v[22]]=20; pile[WZ1]=V179; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V179,0,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(163,jvj+3,V17)*/
V17=pile[WZ2]; 
V=V17;
pile[v[22]]=V2; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V2,V,V1)*/
V1=pile[WZ2]; 
l1:if(V1==incon) goto l2;
goto l149;
l151:pile[v[22]]=41; pile[WZ1]=V21; pile[WZ2]=V3; 
(*f[39])( );     /*SDX0(41,V21,V3,V180)*/
V180=pile[WZ3]; 
pile[v[22]]=V180; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V180,45,V182)*/
V182=pile[WZ2]; 
pile[v[22]]=V182; pile[WZ1]=V20; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V182,V20,41,V183)*/
V183=pile[WZ3]; 
pile[v[22]]=V183; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V183,45,V185)*/
V185=pile[WZ2]; 
pile[v[22]]=V185; pile[WZ1]=V19; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V185,V19,41,V186)*/
V186=pile[WZ3]; 
pile[v[22]]=V186; 
(*f[40])( );     /*SLG0(V186)*/
goto l147;
l152:if((KR!=85)) goto l153;
pile[v[22]]=1; pile[WZ1]=jvj+91; 
(*f[79])( );if(v[102]) goto l153;     /*LEXP0(1,jvj+91,DX)*/
DX=pile[WZ2]; 
pile[v[22]]=jvj+91; pile[WZ1]=jvj+92; 
(*f[200])( );if(v[102]) goto l153;     /*NDD0(jvj+91,jvj+92)*/
pile[v[22]]=jvj+92; 
(*f[529])( );     /*SORETAT0(jvj+92)*/
l153:if((KR==83)) goto l154;
if((F==(-89))) goto l154;
(*f[159])( );     /*EDITOUTPB0()*/
l154:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l156:x[jvj+100]=x[jvj+97] ;z[jvj+100]=z[jvj+97];
x[jvj+17]=x[jvj+100] ;z[jvj+17]=z[jvj+100];
pile[v[22]]=1288; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1288,jvj+17,jvj+18)*/
x[jvj+101]=x[jvj+18] ;z[jvj+101]=z[jvj+18];
l31:if((x[jvj+101]<=0)) goto l30;
x[jvj+19]=s[x[jvj+101]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+101];
pile[v[22]]=246; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(246,jvj+19,V165)*/
V165=pile[WZ2]; 
if((x[jvj+11]==250)) goto l33;
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==V165) goto l33;
l32:x[jvj+101]=t[x[jvj+101]];
goto l31;
l129:if((x[jvj+10]<=0)) goto l127;
V131=s[x[jvj+10]];
pile[v[22]]=jvj+7; pile[WZ1]=V131; 
(*f[405])( );     /*CONDENSER0(jvj+7,V131)*/
x[jvj+10]=t[x[jvj+10]];
goto l129;
}
