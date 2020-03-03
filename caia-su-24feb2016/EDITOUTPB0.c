#include "dx.h"
void EDITOUTPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0,KR=0,UR=0,F=0,V16=0,V20=0,V=0,V5=0,V4=0,V21=0,C=0,V178=0,V179=0,V180=0,V6=0,V37=0,V26=0,V29=0,V28=0,V38=0,NN=0,V31=0,V192=0,V193=0,V30=0,V39=0,V27=0,V196=0,V197=0,V32=0,V201=0,V34=0,V139=0,V163=0,V168=0,V166=0,V153=0,V170=0,V173=0,BL=0,V176=0,B=0,V52=0,V53=0,V71=0,V59=0,V61=0,V60=0,V72=0,V74=0,V214=0,V63=0,V62=0,V218=0,V215=0,V216=0,V64=0,V223=0,V219=0,V220=0,V221=0,V66=0,V79=0,V83=0,V229=0,V231=0,V232=0,V224=0,V225=0,V227=0,V228=0,V230=0,V86=0,V235=0,V89=0,V88=0,V97=0,V87=0,V91=0,V90=0,V98=0,NT=0,V93=0,V237=0,V238=0,V92=0,V99=0,V102=0,V245=0,V246=0,V241=0,V242=0,V244=0,V113=0,V105=0,V108=0,V107=0,V106=0,V110=0,V249=0,V250=0,V109=0,V115=0,V118=0,V257=0,V258=0,V252=0,V253=0,V255=0,V256=0,NR=0,V47=0,V57=0,V208=0,V209=0,V211=0,V145=0,V143=0,V261=0,V264=0,V260=0,V262=0,V263=0,V265=0,V134=0,V41=0,V44=0,V205=0,V206=0,V202=0,V204=0,K=0,H=0,V8=0,KK=0,J=0,V9=0,L=0,M=0,V10=0,A=0,V182=0,V22=0,V23=0,V24=0,V183=0,V185=0,V186=0,V188=0,V189=0,DX=0,V293=0,V292=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=104;
x[jvj+1]=10905;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==159&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l150:x[jvj+10]=B=KR=F=incon;
pile[v[22]]=36; 
(*f[346])( );     /*LK1(36)*/
V1=bh[v[1]][0];
V2=bh[v[1]][1];
V3=bh[v[1]][2];
KR=V1;
UR=V2;
F=V3;
if((KR!=80)) goto l40;
pile[v[22]]=68; 
(*f[524])( );     /*ETATCREE0(68)*/
l40:pile[v[22]]=KR; pile[WZ1]=UR; 
(*f[532])( );     /*Z238Z0(KR,UR)*/
if((KR==87)) goto l41;
if((KR==81)) goto l151;
if((KR!=86)) goto l44;
pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+29; 
(*f[78])( );if(v[102]) goto l44;     /*SMA0(1,64,67,jvj+29)*/
pile[v[22]]=jvj+29; 
(*f[530])( );     /*EDIPBA0(jvj+29)*/
l44:if(KR!=67&&KR!=76&&KR!=84&&KR!=82&&KR!=65&&KR!=88) goto l93;
x[jvj+6]=incon;
if((F==32)) goto l16;
pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+6; 
(*f[78])( );if(v[102]) goto l16;     /*SMA0(1,36,67,jvj+6)*/
l45:B=x[jvj+6];
l93:if((KR==78)) goto l94;
if((KR!=70)) goto l101;
pile[v[22]]=1; 
(*f[102])( );     /*LND0(1,NR)*/
NR=pile[WZ1]; 
x[jvj+60]=d[24];z[jvj+60]=0;
l97:if((x[jvj+60]<=0)) goto l101;
x[jvj+65]=s[x[jvj+60]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+60];
x[jvj+61]=x[jvj+65] ;z[jvj+61]=z[jvj+65];
l99:pile[v[22]]=120; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(120,jvj+61,jvj+62)*/
pile[v[22]]=698; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l100;     /*FNDO0(698,jvj+62,jvj+63)*/
x[jvj+64]=x[jvj+63] ;z[jvj+64]=z[jvj+63];
pile[v[22]]=117; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l100;     /*FNDC0(117,jvj+64,V47)*/
V47=pile[WZ2]; 
if((V47!=NR)) goto l100;
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; 
(*f[525])( );     /*SOREXP0(jvj+64,jvj+65)*/
l100:x[jvj+61]=x[jvj+62] ;z[jvj+61]=z[jvj+62];
goto l99;
l2:V4=V5;
l142:if(V4!=incon) goto l3;
l140:x[jvj+104]=t[x[jvj+104]];
l138:if((x[jvj+104]>0)) goto l139;
x[jvj+88]=t[x[jvj+88]];
l137:if((x[jvj+88]<=0)) goto l145;
x[jvj+89]=s[x[jvj+88]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+88];
pile[v[22]]=878; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[33])( );     /*FNDE0(878,jvj+89,jvj+90)*/
V182=x[jvj+89];
x[jvj+104]=x[jvj+90] ;z[jvj+104]=z[jvj+90];
goto l138;
l3:V6=incon;
pile[v[22]]=897; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(897,jvj+3,V21)*/
V21=pile[WZ2]; 
C=V21;
pile[v[22]]=V4; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V4,32,V178)*/
V178=pile[WZ2]; 
pile[v[22]]=V178; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V178,40,V179)*/
V179=pile[WZ2]; 
pile[v[22]]=C; pile[WZ1]=V179; 
(*f[64])( );     /*SRA2(C,V179,V180)*/
V180=pile[WZ2]; 
pile[v[22]]=V180; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V180,41,V6)*/
V6=pile[WZ2]; 
l4:if(V6==incon) goto l5;
l143:if(V6!=incon) goto l144;
goto l140;
l5:V6=V4;
goto l143;
l7:V28=V29;
l130:if(V28!=incon) goto l131;
l129:x[jvj+85]=t[x[jvj+85]];
l128:if((x[jvj+85]<=0)) goto l136;
x[jvj+4]=s[x[jvj+85]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+85];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l129;     /*FNDC0(683,jvj+4,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=1076; 
(*f[26])( );if(v[102]) goto l129;     /*FNDC0(1076,jvj+4,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l129;     /*FNDO0(109,jvj+4,jvj+86)*/
pile[v[22]]=860; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l129;     /*FNDO0(860,jvj+4,jvj+87)*/
V205=x[jvj+87];
V206=x[jvj+86];
pile[v[22]]=41; pile[WZ1]=V44; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V44,0,V202)*/
V202=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V205; pile[WZ2]=V202; 
(*f[39])( );     /*SDX0(20,V205,V202,V204)*/
V204=pile[WZ3]; 
pile[WZ1]=V206; pile[WZ2]=V204; 
(*f[39])( );     /*SDX0(20,V206,V204,V29)*/
V29=pile[WZ3]; 
V28=incon;
pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(163,jvj+4,V37)*/
V37=pile[WZ2]; 
V26=V37;
pile[v[22]]=V29; pile[WZ1]=V26; 
(*f[37])( );     /*SRA0(V29,V26,V28)*/
V28=pile[WZ2]; 
l6:if(V28==incon) goto l7;
goto l130;
l9:V30=V31;
l132:if(V30!=incon) goto l10;
goto l129;
l10:V32=incon;
pile[v[22]]=1114; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(1114,jvj+4,V39)*/
V39=pile[WZ2]; 
V27=V39;
pile[v[22]]=135; pile[WZ1]=V30; pile[WZ2]=1114; 
(*f[42])( );     /*SRA1(135,V30,1114,V196)*/
V196=pile[WZ3]; 
pile[v[22]]=V196; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V196,58,V197)*/
V197=pile[WZ2]; 
pile[v[22]]=V197; pile[WZ1]=V27; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V197,V27,41,V32)*/
V32=pile[WZ3]; 
l11:if(V32==incon) goto l12;
l133:if(V32!=incon) goto l13;
goto l129;
l12:V32=V30;
goto l133;
l13:V34=incon;
pile[v[22]]=1104; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1104,jvj+4,jvj+5)*/
if((x[jvj+5]==0)) goto l14;
V201=x[jvj+5];
pile[v[22]]=23; pile[WZ1]=V201; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(23,V201,V32,V34)*/
V34=pile[WZ3]; 
l14:if(V34==incon) goto l15;
l134:if(V34!=incon) goto l135;
goto l129;
l15:V34=V32;
goto l134;
l16:x[jvj+6]=250 ;z[jvj+6]=250;
goto l45;
l17:pile[v[22]]=878; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(878,jvj+7,jvj+8)*/
x[jvj+98]=x[jvj+8] ;z[jvj+98]=z[jvj+8];
l18:if((x[jvj+98]<=0)) goto l125;
x[jvj+9]=s[x[jvj+98]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+98];
pile[v[22]]=897; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(897,jvj+9,V139)*/
V139=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=V139; 
(*f[331])( );     /*PLUE3(jvj+10,V139)*/
l19:x[jvj+98]=t[x[jvj+98]];
goto l18;
l20:x[jvj+11]=250 ;z[jvj+11]=250;
l21:x[jvj+15]=0 ;z[jvj+15]=0;
pile[v[22]]=345; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(345,jvj+11,jvj+12)*/
pile[v[22]]=365; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(365,jvj+12,jvj+13)*/
l22:if((x[jvj+13]<=0)) goto l43;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=246; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(246,jvj+14,V163)*/
V163=pile[WZ2]; 
pile[v[22]]=jvj+15; pile[WZ1]=V163; 
(*f[207])( );     /*PLUE2(jvj+15,V163)*/
l23:x[jvj+13]=t[x[jvj+13]];
goto l22;
l25:x[jvj+22]=s[x[jvj+16]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+16];
x[jvj+99]=x[jvj+28] ;z[jvj+99]=z[jvj+28];
l26:if((x[jvj+99]>0)) goto l27;
x[jvj+16]=t[x[jvj+16]];
l24:if((x[jvj+16]>0)) goto l25;
x[jvj+27]=0 ;z[jvj+27]=0;
pile[v[22]]=1288; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(1288,jvj+24,jvj+25)*/
l34:if((x[jvj+25]<=0)) goto l36;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=246; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(246,jvj+26,V173)*/
V173=pile[WZ2]; 
pile[v[22]]=jvj+27; pile[WZ1]=V173; 
(*f[207])( );     /*PLUE2(jvj+27,V173)*/
l35:x[jvj+25]=t[x[jvj+25]];
goto l34;
l27:x[jvj+93]=s[x[jvj+99]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+99];
pile[v[22]]=109; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(109,jvj+93,jvj+94)*/
pile[v[22]]=983; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(983,jvj+94,jvj+95)*/
pile[v[22]]=878; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[33])( );     /*FNDE0(878,jvj+95,jvj+96)*/
l152:if((x[jvj+96]<=0)) goto l28;
x[jvj+97]=s[x[jvj+96]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+96];
pile[v[22]]=163; pile[WZ1]=jvj+97; 
(*f[44])( );if(v[102]) goto l153;     /*FNDC1(163,jvj+97,V293)*/
V293=pile[WZ2]; 
pile[WZ1]=jvj+93; 
(*f[44])( );if(v[102]) goto l153;     /*FNDC1(163,jvj+93,V292)*/
V292=pile[WZ2]; 
if((V293==V292)) goto l153;
x[jvj+96]=t[x[jvj+96]];
goto l152;
l28:x[jvj+99]=t[x[jvj+99]];
goto l26;
l31:pile[v[22]]=763; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(763,jvj+19,jvj+20)*/
pile[v[22]]=218; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(218,jvj+19,jvj+21)*/
x[jvj+102]=x[jvj+20] ;z[jvj+102]=z[jvj+20];
l32:if((x[jvj+102]<=0)) goto l30;
x[jvj+23]=s[x[jvj+102]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+102];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(jvj+22,jvj+23,V166)*/
V166=pile[WZ2]; 
V153=V166;
if((V153<=0)) goto l33;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(117,jvj+23,V170)*/
V170=pile[WZ2]; 
pile[v[22]]=jvj+24; pile[WZ1]=V168; pile[WZ2]=jvj+21; pile[WZ3]=jvj+22; pile[WZ4]=V153; pile[WZ5]=V170; 
(*f[527])( );     /*REGROUPE0(jvj+24,V168,jvj+21,jvj+22,V153,V170)*/
l33:x[jvj+102]=t[x[jvj+102]];
goto l32;
l38:pile[v[22]]=BL; pile[WZ1]=jvj+24; pile[WZ2]=jvj+28; pile[WZ3]=UR; 
(*f[528])( );     /*CMLIS0(BL,jvj+24,jvj+28,UR)*/
l37:x[jvj+27]=t[x[jvj+27]];
l36:if((x[jvj+27]<=0)) goto l44;
BL=s[x[jvj+27]];
if((x[jvj+11]==250)) goto l38;
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==BL) goto l38;
goto l37;
l39:V176=((-9009));
l42:pile[v[22]]=V176; 
(*f[531])( );     /*MATCHDANSATOME0(V176)*/
goto l44;
l41:if((UR!=77)) goto l44;
V176=incon;
if((F==65)) goto l39;
if((F!=77)) goto l44;
V176=((-5963));
goto l42;
l43:pile[v[22]]=jvj+28; 
(*f[138])( );if(v[102]) goto l44;     /*EXPPB0(jvj+28)*/
x[jvj+16]=d[23];z[jvj+16]=0;
goto l24;
l47:if(x[jvj+33]==incon) goto l106;
if((x[jvj+33]!=(-99999998))) goto l104;
l106:if((KR!=82)) goto l109;
pile[v[22]]=1051; pile[WZ1]=994; pile[WZ2]=jvj+67; 
(*f[33])( );     /*FNDE0(1051,994,jvj+67)*/
l107:if((x[jvj+67]<=0)) goto l109;
x[jvj+53]=s[x[jvj+67]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+67];
pile[v[22]]=1078; pile[WZ1]=jvj+53; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(1078,jvj+53,jvj+51)*/
if((B==250)) goto l88;
pile[v[22]]=109; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(109,jvj+51,jvj+52)*/
if((B==x[jvj+52])) goto l88;
l108:x[jvj+67]=t[x[jvj+67]];
goto l107;
l48:pile[v[22]]=jvj+30; pile[WZ1]=jvj+33; 
(*f[525])( );     /*SOREXP0(jvj+30,jvj+33)*/
l105:x[jvj+66]=x[jvj+32] ;z[jvj+66]=z[jvj+32];
l103:pile[v[22]]=120; pile[WZ1]=jvj+66; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l106;     /*FNDO0(120,jvj+66,jvj+32)*/
pile[v[22]]=698; pile[WZ1]=jvj+32; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(698,jvj+32,jvj+30)*/
if((B==250)) goto l48;
pile[v[22]]=109; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(109,jvj+30,jvj+31)*/
if((B==x[jvj+31])) goto l48;
goto l105;
l50:V60=V61;
l60:if(V60!=incon) goto l61;
l117:x[jvj+74]=x[jvj+75] ;z[jvj+74]=z[jvj+75];
l116:pile[v[22]]=120; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l118;     /*FNDO0(120,jvj+74,jvj+75)*/
pile[v[22]]=698; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l117;     /*FNDO0(698,jvj+75,jvj+76)*/
x[jvj+35]=x[jvj+76] ;z[jvj+35]=z[jvj+76];
pile[v[22]]=1078; pile[WZ1]=jvj+35; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l117;     /*FNDO0(1078,jvj+35,jvj+77)*/
x[jvj+34]=x[jvj+77] ;z[jvj+34]=z[jvj+77];
pile[v[22]]=109; pile[WZ1]=jvj+34; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l117;     /*FNDO0(109,jvj+34,jvj+40)*/
if((B==250)) goto l59;
if((B==x[jvj+40])) goto l59;
goto l117;
l52:V62=V63;
l62:if(V62!=incon) goto l53;
goto l117;
l53:V64=incon;
pile[v[22]]=1260; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(1260,jvj+35,jvj+36)*/
if((x[jvj+36]==0)) goto l54;
V218=x[jvj+36];
pile[v[22]]=135; pile[WZ1]=V62; pile[WZ2]=1260; 
(*f[42])( );     /*SRA1(135,V62,1260,V215)*/
V215=pile[WZ3]; 
pile[v[22]]=V215; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V215,58,V216)*/
V216=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V218; pile[WZ2]=V216; 
(*f[39])( );     /*SDX0(23,V218,V216,V64)*/
V64=pile[WZ3]; 
l54:if(V64==incon) goto l55;
l63:if(V64!=incon) goto l56;
goto l117;
l55:V64=V62;
goto l63;
l56:V66=incon;
pile[v[22]]=1025; pile[WZ1]=jvj+34; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(1025,jvj+34,jvj+37)*/
if((x[jvj+37]<=0)) goto l57;
x[jvj+38]=s[x[jvj+37]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+37];
pile[v[22]]=698; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(698,jvj+38,jvj+39)*/
V223=x[jvj+39];
pile[v[22]]=V64; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V64,44,V219)*/
V219=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V219; pile[WZ2]=528; 
(*f[42])( );     /*SRA1(135,V219,528,V220)*/
V220=pile[WZ3]; 
pile[v[22]]=V220; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V220,58,V221)*/
V221=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V223; pile[WZ2]=V221; 
(*f[39])( );     /*SDX0(20,V223,V221,V66)*/
V66=pile[WZ3]; 
l57:if(V66==incon) goto l58;
l64:if(V66!=incon) goto l65;
goto l117;
l58:V66=V64;
goto l64;
l59:pile[v[22]]=683; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l117;     /*FNDC0(683,jvj+34,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=117; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l117;     /*FNDC0(117,jvj+35,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=913; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l117;     /*FNDO0(913,jvj+35,jvj+41)*/
pile[v[22]]=935; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l117;     /*FNDO0(935,jvj+35,jvj+42)*/
V229=x[jvj+42];
V231=x[jvj+41];
V232=x[jvj+40];
pile[v[22]]=0; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(0,91,V224)*/
V224=pile[WZ2]; 
pile[v[22]]=V224; pile[WZ1]=V83; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V224,V83,41,V225)*/
V225=pile[WZ3]; 
pile[v[22]]=V225; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V225,93,V227)*/
V227=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V229; pile[WZ2]=V227; 
(*f[39])( );     /*SDX0(20,V229,V227,V228)*/
V228=pile[WZ3]; 
pile[WZ1]=V231; pile[WZ2]=V228; 
(*f[39])( );     /*SDX0(20,V231,V228,V230)*/
V230=pile[WZ3]; 
pile[WZ1]=V232; pile[WZ2]=V230; 
(*f[39])( );     /*SDX0(20,V232,V230,V61)*/
V61=pile[WZ3]; 
V60=incon;
pile[v[22]]=163; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l49;     /*FNDC1(163,jvj+34,V71)*/
V71=pile[WZ2]; 
V59=V71;
pile[v[22]]=V61; pile[WZ1]=V59; 
(*f[37])( );     /*SRA0(V61,V59,V60)*/
V60=pile[WZ2]; 
l49:if(V60==incon) goto l50;
goto l60;
l61:pile[v[22]]=41; pile[WZ1]=V79; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(41,V79,V60,V63)*/
V63=pile[WZ3]; 
V62=incon;
pile[v[22]]=515; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(515,jvj+35,V72)*/
V72=pile[WZ2]; 
if((V72<=sepbase)) goto l51;
if((V72>sepnouv)) goto l51;
V74=V72;
V214=V74;
pile[v[22]]=20; pile[WZ1]=V214; pile[WZ2]=V63; 
(*f[39])( );     /*SDX0(20,V214,V63,V62)*/
V62=pile[WZ3]; 
l51:if(V62==incon) goto l52;
goto l62;
l65:pile[v[22]]=V66; 
(*f[40])( );     /*SLG0(V66)*/
goto l117;
l67:V88=V89;
l73:if(V88!=incon) goto l74;
l114:x[jvj+71]=x[jvj+72] ;z[jvj+71]=z[jvj+72];
l113:pile[v[22]]=120; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l115;     /*FNDO0(120,jvj+71,jvj+72)*/
pile[v[22]]=698; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(698,jvj+72,jvj+73)*/
x[jvj+43]=x[jvj+73] ;z[jvj+43]=z[jvj+73];
pile[v[22]]=109; pile[WZ1]=jvj+43; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(109,jvj+43,jvj+45)*/
if((B==250)) goto l72;
if((B==x[jvj+45])) goto l72;
goto l114;
l69:V90=V91;
l75:if(V90!=incon) goto l76;
goto l114;
l71:V92=V93;
l77:if(V92!=incon) goto l78;
goto l114;
l72:pile[v[22]]=683; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l114;     /*FNDC0(683,jvj+43,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l114;     /*FNDC0(117,jvj+43,V102)*/
V102=pile[WZ2]; 
pile[v[22]]=860; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(860,jvj+43,jvj+46)*/
V245=x[jvj+46];
V246=x[jvj+45];
pile[v[22]]=0; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(0,91,V241)*/
V241=pile[WZ2]; 
pile[v[22]]=V241; pile[WZ1]=V102; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V241,V102,41,V242)*/
V242=pile[WZ3]; 
pile[v[22]]=V242; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V242,93,V244)*/
V244=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V245; pile[WZ2]=V244; 
(*f[39])( );     /*SDX0(20,V245,V244,V89)*/
V89=pile[WZ3]; 
V88=incon;
pile[v[22]]=122; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(122,jvj+43,jvj+44)*/
V86=x[jvj+44];
V235=V86;
pile[v[22]]=20; pile[WZ1]=V235; pile[WZ2]=V89; 
(*f[39])( );     /*SDX0(20,V235,V89,V88)*/
V88=pile[WZ3]; 
l66:if(V88==incon) goto l67;
goto l73;
l74:pile[v[22]]=20; pile[WZ1]=V246; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(20,V246,V88,V91)*/
V91=pile[WZ3]; 
V90=incon;
pile[v[22]]=163; pile[WZ1]=jvj+43; 
(*f[44])( );if(v[102]) goto l68;     /*FNDC1(163,jvj+43,V97)*/
V97=pile[WZ2]; 
V87=V97;
pile[v[22]]=V91; pile[WZ1]=V87; 
(*f[37])( );     /*SRA0(V91,V87,V90)*/
V90=pile[WZ2]; 
l68:if(V90==incon) goto l69;
goto l75;
l76:pile[v[22]]=41; pile[WZ1]=V99; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(41,V99,V90,V93)*/
V93=pile[WZ3]; 
V92=incon;
pile[v[22]]=359; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(359,jvj+43,V98)*/
V98=pile[WZ2]; 
NT=V98;
pile[v[22]]=V93; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V93,40,V237)*/
V237=pile[WZ2]; 
pile[v[22]]=V237; pile[WZ1]=NT; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V237,NT,41,V238)*/
V238=pile[WZ3]; 
pile[v[22]]=V238; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V238,41,V92)*/
V92=pile[WZ2]; 
l70:if(V92==incon) goto l71;
goto l77;
l78:pile[v[22]]=V92; 
(*f[40])( );     /*SLG0(V92)*/
goto l114;
l80:V107=V108;
l84:if(V107!=incon) goto l85;
l111:x[jvj+68]=x[jvj+69] ;z[jvj+68]=z[jvj+69];
l110:pile[v[22]]=120; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l112;     /*FNDO0(120,jvj+68,jvj+69)*/
pile[v[22]]=698; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(698,jvj+69,jvj+70)*/
x[jvj+47]=x[jvj+70] ;z[jvj+47]=z[jvj+70];
pile[v[22]]=109; pile[WZ1]=jvj+47; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(109,jvj+47,jvj+49)*/
if((B==250)) goto l83;
if((B==x[jvj+49])) goto l83;
goto l111;
l82:V109=V110;
l86:if(V109!=incon) goto l87;
goto l111;
l83:pile[v[22]]=683; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l111;     /*FNDC0(683,jvj+47,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l111;     /*FNDC0(117,jvj+47,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=860; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(860,jvj+47,jvj+50)*/
V257=x[jvj+50];
V258=x[jvj+49];
pile[v[22]]=0; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(0,91,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=V252; pile[WZ1]=V118; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V252,V118,41,V253)*/
V253=pile[WZ3]; 
pile[v[22]]=V253; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V253,93,V255)*/
V255=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V257; pile[WZ2]=V255; 
(*f[39])( );     /*SDX0(20,V257,V255,V256)*/
V256=pile[WZ3]; 
pile[WZ1]=V258; pile[WZ2]=V256; 
(*f[39])( );     /*SDX0(20,V258,V256,V108)*/
V108=pile[WZ3]; 
V107=incon;
pile[v[22]]=163; pile[WZ1]=jvj+47; 
(*f[44])( );if(v[102]) goto l79;     /*FNDC1(163,jvj+47,V113)*/
V113=pile[WZ2]; 
V105=V113;
pile[v[22]]=V108; pile[WZ1]=V105; 
(*f[37])( );     /*SRA0(V108,V105,V107)*/
V107=pile[WZ2]; 
l79:if(V107==incon) goto l80;
goto l84;
l85:pile[v[22]]=41; pile[WZ1]=V115; pile[WZ2]=V107; 
(*f[39])( );     /*SDX0(41,V115,V107,V110)*/
V110=pile[WZ3]; 
V109=incon;
pile[v[22]]=948; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(948,jvj+47,jvj+48)*/
V106=68;
if((V106!=x[jvj+48])) goto l81;
pile[v[22]]=135; pile[WZ1]=V110; pile[WZ2]=948; 
(*f[42])( );     /*SRA1(135,V110,948,V249)*/
V249=pile[WZ3]; 
pile[v[22]]=V249; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V249,58,V250)*/
V250=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V250; pile[WZ2]=68; 
(*f[42])( );     /*SRA1(135,V250,68,V109)*/
V109=pile[WZ3]; 
l81:if(V109==incon) goto l82;
goto l86;
l87:pile[v[22]]=V109; 
(*f[40])( );     /*SLG0(V109)*/
goto l111;
l88:x[jvj+55]=incon;
pile[v[22]]=860; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l89;     /*FNDO0(860,jvj+53,jvj+54)*/
x[jvj+103]=x[jvj+54] ;z[jvj+103]=z[jvj+54];
x[jvj+55]=x[jvj+103] ;z[jvj+55]=z[jvj+103];
l89:if(x[jvj+55]==incon) goto l90;
l91:if(x[jvj+55]!=incon) goto l92;
goto l108;
l90:x[jvj+55]=250 ;z[jvj+55]=250;
goto l91;
l92:pile[v[22]]=jvj+51; pile[WZ1]=jvj+55; 
(*f[525])( );     /*SOREXP0(jvj+51,jvj+55)*/
goto l108;
l94:pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(457,324,jvj+56)*/
l95:if((x[jvj+56]<=0)) goto l101;
x[jvj+57]=s[x[jvj+56]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+56];
pile[v[22]]=896; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(896,jvj+57,jvj+58)*/
if((x[jvj+58]!=0)) goto l96;
pile[v[22]]=1054; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l96;     /*FNDO0(1054,jvj+57,jvj+59)*/
pile[v[22]]=jvj+57; 
(*f[404])( );     /*SORCREE0(jvj+57)*/
l96:x[jvj+56]=t[x[jvj+56]];
goto l95;
l98:x[jvj+60]=t[x[jvj+60]];
goto l97;
l101:if(B!=incon) goto l102;
l118:if((KR!=79)) goto l119;
(*f[526])( );if(v[102]) goto l119;     /*TAILLECOMB0(V57)*/
V57=pile[v[22]]; 
pile[v[22]]=20; pile[WZ1]=10290; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10290,0,V208)*/
V208=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V57; pile[WZ2]=V208; 
(*f[39])( );     /*SDX0(41,V57,V208,V209)*/
V209=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V209; pile[WZ2]=937; 
(*f[42])( );     /*SRA1(135,V209,937,V211)*/
V211=pile[WZ3]; 
pile[v[22]]=V211; 
(*f[40])( );     /*SLG0(V211)*/
l119:if((KR!=89)) goto l122;
x[jvj+78]=1097 ;z[jvj+78]=1097;
l120:pile[v[22]]=120; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l122;     /*FNDO0(120,jvj+78,jvj+79)*/
pile[v[22]]=698; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l121;     /*FNDO0(698,jvj+79,jvj+80)*/
x[jvj+81]=x[jvj+80] ;z[jvj+81]=z[jvj+80];
pile[v[22]]=163; pile[WZ1]=jvj+81; 
(*f[44])( );if(v[102]) goto l121;     /*FNDC1(163,jvj+81,V145)*/
V145=pile[WZ2]; 
pile[v[22]]=1167; 
(*f[26])( );if(v[102]) goto l121;     /*FNDC0(1167,jvj+81,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=247; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l121;     /*FNDO0(247,jvj+81,jvj+82)*/
pile[v[22]]=109; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l121;     /*FNDO0(109,jvj+81,jvj+83)*/
V261=x[jvj+83];
V264=x[jvj+82];
pile[v[22]]=20; pile[WZ1]=V261; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V261,0,V260)*/
V260=pile[WZ3]; 
pile[v[22]]=V260; pile[WZ1]=V145; 
(*f[37])( );     /*SRA0(V260,V145,V262)*/
V262=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V264; pile[WZ2]=V262; 
(*f[39])( );     /*SDX0(20,V264,V262,V263)*/
V263=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V143; pile[WZ2]=V263; 
(*f[39])( );     /*SDX0(41,V143,V263,V265)*/
V265=pile[WZ3]; 
pile[v[22]]=V265; 
(*f[40])( );     /*SLG0(V265)*/
l121:x[jvj+78]=x[jvj+79] ;z[jvj+78]=z[jvj+79];
goto l120;
l102:if(KR!=65&&KR!=88) goto l106;
x[jvj+33]=incon;
pile[v[22]]=331; pile[WZ1]=924; 
(*f[219])( );if(v[102]) goto l46;     /*FNDC2(331,924,V52)*/
V52=pile[WZ2]; 
if((KR!=V52)) goto l46;
x[jvj+33]=924 ;z[jvj+33]=924;
l46:pile[v[22]]=331; pile[WZ1]=978; 
(*f[219])( );if(v[102]) goto l47;     /*FNDC2(331,978,V53)*/
V53=pile[WZ2]; 
if((KR!=V53)) goto l47;
x[jvj+33]=978 ;z[jvj+33]=978;
l104:x[jvj+66]=x[jvj+33] ;z[jvj+66]=z[jvj+33];
goto l103;
l109:if((KR!=84)) goto l112;
x[jvj+68]=924 ;z[jvj+68]=924;
goto l110;
l112:if((KR!=76)) goto l115;
x[jvj+71]=978 ;z[jvj+71]=978;
goto l113;
l115:if((KR!=67)) goto l118;
x[jvj+74]=1055 ;z[jvj+74]=1055;
goto l116;
l122:if((KR!=69)) goto l127;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+84; 
(*f[33])( );     /*FNDE0(457,324,jvj+84)*/
l123:if((x[jvj+84]<=0)) goto l127;
x[jvj+7]=s[x[jvj+84]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+84];
x[jvj+10]=0 ;z[jvj+10]=0;
if(x[jvj+10]!=incon) goto l17;
l125:if(x[jvj+10]!=incon) goto l126;
l124:x[jvj+84]=t[x[jvj+84]];
goto l123;
l127:if((KR!=66)) goto l136;
pile[v[22]]=1109; pile[WZ1]=924; pile[WZ2]=jvj+85; 
(*f[33])( );     /*FNDE0(1109,924,jvj+85)*/
goto l128;
l131:pile[v[22]]=41; pile[WZ1]=V41; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(41,V41,V28,V31)*/
V31=pile[WZ3]; 
V30=incon;
pile[v[22]]=359; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(359,jvj+4,V38)*/
V38=pile[WZ2]; 
NN=V38;
pile[v[22]]=135; pile[WZ1]=V31; pile[WZ2]=359; 
(*f[42])( );     /*SRA1(135,V31,359,V192)*/
V192=pile[WZ3]; 
pile[v[22]]=V192; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V192,58,V193)*/
V193=pile[WZ2]; 
pile[v[22]]=V193; pile[WZ1]=NN; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V193,NN,41,V30)*/
V30=pile[WZ3]; 
l8:if(V30==incon) goto l9;
goto l132;
l135:pile[v[22]]=V34; 
(*f[40])( );     /*SLG0(V34)*/
goto l129;
l136:if((KR!=68)) goto l145;
pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,H,K)*/
H=pile[WZ1]; K=pile[WZ2]; 
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+88; 
(*f[33])( );     /*FNDE0(457,324,jvj+88)*/
V8=K+1;
pile[v[22]]=V8; 
(*f[126])( );     /*LND2(V8,J,KK)*/
J=pile[WZ1]; KK=pile[WZ2]; 
V9=KK+1;
pile[v[22]]=V9; 
(*f[126])( );     /*LND2(V9,M,L)*/
M=pile[WZ1]; L=pile[WZ2]; 
V10=L+1;
pile[v[22]]=V10; 
(*f[135])( );     /*LND3(V10,A)*/
A=pile[WZ1]; 
goto l137;
l139:x[jvj+3]=s[x[jvj+104]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+104];
pile[v[22]]=941; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l140;     /*FNDC0(941,jvj+3,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=942; 
(*f[26])( );if(v[102]) goto l140;     /*FNDC0(942,jvj+3,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=943; 
(*f[26])( );if(v[102]) goto l140;     /*FNDC0(943,jvj+3,V24)*/
V24=pile[WZ2]; 
if((V22>A)) goto l141;
if((V22!=A)) goto l140;
if((V23>M)) goto l141;
if((V23!=M)) goto l140;
if((V24>J)) goto l141;
if((V24!=J)) goto l140;
pile[v[22]]=938; 
(*f[26])( );if(v[102]) goto l140;     /*FNDC0(938,jvj+3,V16)*/
V16=pile[WZ2]; 
if((V16>H)) goto l141;
goto l140;
l141:pile[v[22]]=20; pile[WZ1]=V182; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V182,0,V5)*/
V5=pile[WZ3]; 
V4=incon;
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(163,jvj+3,V20)*/
V20=pile[WZ2]; 
V=V20;
pile[v[22]]=V5; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V5,V,V4)*/
V4=pile[WZ2]; 
l1:if(V4==incon) goto l2;
goto l142;
l144:pile[v[22]]=41; pile[WZ1]=V24; pile[WZ2]=V6; 
(*f[39])( );     /*SDX0(41,V24,V6,V183)*/
V183=pile[WZ3]; 
pile[v[22]]=V183; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V183,45,V185)*/
V185=pile[WZ2]; 
pile[v[22]]=V185; pile[WZ1]=V23; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V185,V23,41,V186)*/
V186=pile[WZ3]; 
pile[v[22]]=V186; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V186,45,V188)*/
V188=pile[WZ2]; 
pile[v[22]]=V188; pile[WZ1]=V22; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V188,V22,41,V189)*/
V189=pile[WZ3]; 
pile[v[22]]=V189; 
(*f[40])( );     /*SLG0(V189)*/
goto l140;
l145:if((KR!=85)) goto l146;
pile[v[22]]=1; pile[WZ1]=jvj+91; 
(*f[79])( );if(v[102]) goto l146;     /*LEXP0(1,jvj+91,DX)*/
DX=pile[WZ2]; 
pile[v[22]]=jvj+91; pile[WZ1]=jvj+92; 
(*f[200])( );if(v[102]) goto l146;     /*NDD0(jvj+91,jvj+92)*/
pile[v[22]]=jvj+92; 
(*f[529])( );     /*SORETAT0(jvj+92)*/
l146:if(KR!=incon) goto l147;
l149:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; return;
l147:if(F!=incon) goto l148;
goto l149;
l148:if((KR==83)) goto l149;
if((F!=(-89))) goto l150;
goto l149;
l151:pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(250,158,jvj+24)*/
x[jvj+11]=incon;
if((F==32)) goto l20;
pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+11; 
(*f[78])( );if(v[102]) goto l20;     /*SMA0(1,36,67,jvj+11)*/
goto l21;
l153:x[jvj+100]=x[jvj+97] ;z[jvj+100]=z[jvj+97];
x[jvj+17]=x[jvj+100] ;z[jvj+17]=z[jvj+100];
pile[v[22]]=1288; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1288,jvj+17,jvj+18)*/
x[jvj+101]=x[jvj+18] ;z[jvj+101]=z[jvj+18];
l29:if((x[jvj+101]<=0)) goto l28;
x[jvj+19]=s[x[jvj+101]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+101];
pile[v[22]]=246; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(246,jvj+19,V168)*/
V168=pile[WZ2]; 
if((x[jvj+11]==250)) goto l31;
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==V168) goto l31;
l30:x[jvj+101]=t[x[jvj+101]];
goto l29;
l126:if((x[jvj+10]<=0)) goto l124;
V134=s[x[jvj+10]];
pile[v[22]]=jvj+7; pile[WZ1]=V134; 
(*f[405])( );     /*CONDENSER0(jvj+7,V134)*/
x[jvj+10]=t[x[jvj+10]];
goto l126;
}
