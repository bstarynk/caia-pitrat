#include "dx.h"
void EDITORD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0,KR=0,UR=0,V16=0,V46=0,V39=0,V41=0,V40=0,V47=0,T=0,V42=0,V58=0,V60=0,V86=0,V163=0,V164=0,V165=0,V166=0,V104=0,S=0,V35=0,V31=0,V29=0,V30=0,V33=0,V27=0,V34=0,V22=0,V23=0,M=0,V78=0,V156=0,V155=0,V99=0,V96=0,V95=0,V97=0,V90=0,V91=0,V168=0,V169=0,V170=0,V171=0,V74=0,V75=0,V72=0,F=0,NR=0,V161=0,V162=0,V70=0,V158=0,V159=0,V12=0,V117=0,I=0,V111=0,V110=0,V182=0,V183=0,V181=0,V177=0,V178=0,V130=0,V128=0,V129=0,V132=0,V127=0,V133=0,V136=0,V173=0,V174=0,V175=0,V176=0,V152=0,V153=0,JJ=0,V154=0,V143=0,V144=0,V151=0,V142=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=163;
x[jvj+1]=10305;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==136&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l156:x[jvj+5]=UR=x[jvj+59]=KR=x[jvj+74]=V143=S=incon;
pile[v[22]]=33; 
(*f[346])( );     /*LK1(33)*/
V4=bh[v[1]][0];
V5=bh[v[1]][1];
KR=V4;
UR=V5;
S=68;
if((KR==80)) goto l21;
if((KR==65)) goto l22;
if((KR!=69)) goto l42;
x[jvj+32]=924 ;z[jvj+32]=924;
l23:pile[v[22]]=120; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(120,jvj+32,jvj+33)*/
pile[v[22]]=698; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(698,jvj+33,jvj+34)*/
pile[v[22]]=683; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(683,jvj+34,V35)*/
V35=pile[WZ2]; 
if((V35!=N)) goto l24;
pile[v[22]]=jvj+34; 
(*f[183])( );     /*ENLEVENATTENTE0(jvj+34)*/
l24:x[jvj+32]=x[jvj+33] ;z[jvj+32]=z[jvj+33];
goto l23;
l1:pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(457,324,jvj+3)*/
l2:if((x[jvj+3]<=0)) goto l49;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(683,jvj+4,V16)*/
V16=pile[WZ2]; 
if((V16!=N)) goto l3;
pile[v[22]]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+4)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l2;
l5:V40=V41;
l88:if(V40!=incon) goto l89;
l85:x[jvj+160]=t[x[jvj+160]];
l84:if((x[jvj+160]<=0)) goto l83;
x[jvj+6]=s[x[jvj+160]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+160];
V42=incon;
pile[v[22]]=493; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(493,jvj+6,V47)*/
V47=pile[WZ2]; 
T=V47;
V42=T;
l6:if(V42==incon) goto l7;
l86:if(V42!=incon) goto l87;
goto l85;
l7:V42=(-1);
goto l86;
l9:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=683; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(683,jvj+8,V58)*/
V58=pile[WZ2]; 
if((V58==N)) goto l93;
l10:x[jvj+7]=t[x[jvj+7]];
l8:if((x[jvj+7]>0)) goto l9;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(645,597,jvj+9)*/
l11:if((x[jvj+9]<=0)) goto l93;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=683; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(683,jvj+10,V60)*/
V60=pile[WZ2]; 
if((V60!=1)) goto l12;
pile[v[22]]=N; pile[WZ1]=683; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(N,683,jvj+19)*/
pile[v[22]]=265; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(265,jvj+10,jvj+15)*/
l14:if((x[jvj+15]>0)) goto l15;
pile[v[22]]=597; pile[WZ1]=645; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(597,645,jvj+19)*/
l93:pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+72; 
(*f[33])( );     /*FNDE0(645,597,jvj+72)*/
l94:if((x[jvj+72]<=0)) goto l118;
x[jvj+73]=s[x[jvj+72]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+72];
pile[v[22]]=683; pile[WZ1]=jvj+73; 
(*f[26])( );if(v[102]) goto l95;     /*FNDC0(683,jvj+73,V12)*/
V12=pile[WZ2]; 
if((V12!=N)) goto l95;
x[jvj+74]=x[jvj+73] ;z[jvj+74]=z[jvj+73];
l118:if(KR!=incon) goto l119;
l152:if(KR!=incon) goto l153;
l155:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l12:x[jvj+9]=t[x[jvj+9]];
goto l11;
l15:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=158; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(158,jvj+16,jvj+17)*/
pile[v[22]]=120; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(120,jvj+16,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+12)*/
if((KR!=67)) goto l157;
x[jvj+11]=d[12];z[jvj+11]=0;
l13:if((x[jvj+11]<=0)) goto l157;
x[jvj+129]=s[x[jvj+11]] ;z[jvj+129]=(x[jvj+129]<=sepcte) ? x[jvj+129] : z[jvj+11];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+129; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+129,jvj+13)*/
pile[WZ3]=989; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,989,jvj+14)*/
pile[v[22]]=68; pile[WZ1]=jvj+14; pile[WZ2]=38; pile[WZ3]=jvj+12; pile[WZ4]=jvj+13; pile[WZ5]=597; pile[v[22]+6]=jvj+12; 
(*f[337])( );     /*EAFA0(68,jvj+14,38,jvj+12,jvj+13,597,jvj+12)*/
x[jvj+11]=t[x[jvj+11]];
goto l13;
l18:x[jvj+21]=t[x[jvj+21]];
l17:if((x[jvj+21]<=0)) goto l92;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=683; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(683,jvj+22,V86)*/
V86=pile[WZ2]; 
if((V86!=N)) goto l18;
pile[v[22]]=265; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(265,jvj+22,jvj+69)*/
pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+70; 
(*f[78])( );if(v[102]) goto l92;     /*SMA0(1,64,67,jvj+70)*/
l91:if((x[jvj+69]<=0)) goto l92;
x[jvj+71]=s[x[jvj+69]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+69];
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; 
(*f[428])( );     /*SUPBOULN0(jvj+70,jvj+71)*/
x[jvj+69]=t[x[jvj+69]];
goto l91;
l21:pile[v[22]]=jvj+30; 
(*f[138])( );if(v[102]) goto l52;     /*EXPPB0(jvj+30)*/
pile[WZ1]=898; pile[WZ2]=jvj+31; 
(*f[300])( );     /*TRI10(jvj+30,898,jvj+31)*/
pile[v[22]]=jvj+31; 
(*f[422])( );     /*RECHPB0(jvj+31)*/
(*f[423])( );     /*INTRECHPB0(jvj+31)*/
l52:if(KR!=70&&KR!=68) goto l62;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(645,597,jvj+55)*/
l53:if((x[jvj+55]<=0)) goto l62;
x[jvj+56]=s[x[jvj+55]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+55];
pile[v[22]]=683; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(683,jvj+56,V99)*/
V99=pile[WZ2]; 
if((V99!=N)) goto l54;
x[jvj+59]=x[jvj+56] ;z[jvj+59]=z[jvj+56];
if((KR!=70)) goto l62;
pile[v[22]]=20; pile[WZ1]=10305; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10305,0,V163)*/
V163=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V163; pile[WZ2]=333; 
(*f[42])( );     /*SRA1(135,V163,333,V164)*/
V164=pile[WZ3]; 
pile[v[22]]=V164; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V164,58,V165)*/
V165=pile[WZ2]; 
pile[v[22]]=V165; pile[WZ1]=N; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V165,N,41,V166)*/
V166=pile[WZ3]; 
pile[v[22]]=V166; 
(*f[40])( );     /*SLG0(V166)*/
l62:if(x[jvj+59]==incon) goto l63;
l77:if(UR!=incon) goto l78;
l81:if((KR!=78)) goto l90;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(457,324,jvj+65)*/
l82:if((x[jvj+65]<=0)) goto l90;
x[jvj+66]=s[x[jvj+65]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+65];
pile[v[22]]=983; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(983,jvj+66,jvj+67)*/
pile[v[22]]=878; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[33])( );     /*FNDE0(878,jvj+67,jvj+68)*/
V158=x[jvj+66];
x[jvj+160]=x[jvj+68] ;z[jvj+160]=z[jvj+68];
goto l84;
l22:pile[v[22]]=N; 
(*f[420])( );     /*FAITCOND0(N)*/
goto l52;
l25:pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(1484,854,V31)*/
V31=pile[WZ2]; 
V29=sepfacts+1;
V30=sepfacts+V31;
l26:if((V29>V30)) goto l30;
V33=r[V29];
if((V33!=1)) goto l27;
x[jvj+35]=V29 ;z[jvj+35]=(V29<=sepcte) ? V29 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(983,jvj+35,jvj+36)*/
x[jvj+37]=x[jvj+36] ;z[jvj+37]=z[jvj+36];
pile[v[22]]=863; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(863,jvj+37,jvj+38)*/
x[jvj+156]=x[jvj+38] ;z[jvj+156]=z[jvj+38];
l28:if((x[jvj+156]<=0)) goto l27;
x[jvj+39]=s[x[jvj+156]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+156];
pile[v[22]]=683; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(683,jvj+39,V27)*/
V27=pile[WZ2]; 
if((V27!=N)) goto l29;
V34=x[jvj+39];
pile[v[22]]=863; pile[WZ1]=jvj+37; pile[WZ2]=V34; 
(*f[134])( );     /*OTA0(863,jvj+37,V34)*/
l29:x[jvj+156]=t[x[jvj+156]];
goto l28;
l27:V29++;
goto l26;
l30:if(UR!=incon) goto l31;
l35:pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(457,324,jvj+45)*/
l36:if((x[jvj+45]<=0)) goto l42;
x[jvj+46]=s[x[jvj+45]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+45];
pile[v[22]]=983; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(983,jvj+46,jvj+47)*/
pile[v[22]]=878; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(878,jvj+47,jvj+48)*/
x[jvj+158]=x[jvj+48] ;z[jvj+158]=z[jvj+48];
l38:if((x[jvj+158]<=0)) goto l37;
x[jvj+49]=s[x[jvj+158]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+158];
pile[v[22]]=944; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(944,jvj+49,jvj+50)*/
x[jvj+159]=x[jvj+50] ;z[jvj+159]=z[jvj+50];
l39:if((x[jvj+159]>0)) goto l40;
x[jvj+158]=t[x[jvj+158]];
goto l38;
l31:if((UR==45)) goto l35;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(457,324,jvj+40)*/
l32:if((x[jvj+40]<=0)) goto l35;
x[jvj+41]=s[x[jvj+40]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+40];
pile[v[22]]=983; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(983,jvj+41,jvj+42)*/
pile[v[22]]=878; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(878,jvj+42,jvj+43)*/
x[jvj+157]=x[jvj+43] ;z[jvj+157]=z[jvj+43];
l34:if((x[jvj+157]<=0)) goto l33;
x[jvj+44]=s[x[jvj+157]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+157];
pile[v[22]]=493; pile[WZ1]=jvj+44; 
(*f[71])( );     /*ENLV0(493,jvj+44)*/
x[jvj+157]=t[x[jvj+157]];
goto l34;
l33:x[jvj+40]=t[x[jvj+40]];
goto l32;
l37:x[jvj+45]=t[x[jvj+45]];
goto l36;
l40:x[jvj+51]=s[x[jvj+159]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+159];
pile[v[22]]=683; pile[WZ1]=jvj+51; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(683,jvj+51,V22)*/
V22=pile[WZ2]; 
if((V22!=N)) goto l41;
V23=x[jvj+51];
pile[v[22]]=944; pile[WZ1]=jvj+49; pile[WZ2]=V23; 
(*f[134])( );     /*OTA0(944,jvj+49,V23)*/
l41:x[jvj+159]=t[x[jvj+159]];
goto l39;
l42:if((KR!=84)) goto l43;
pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,M)*/
M=pile[WZ1]; 
pile[v[22]]=N; pile[WZ1]=M; 
(*f[424])( );     /*CRETENACE0(N,M)*/
l43:if(UR!=incon) goto l44;
l45:if((KR!=71)) goto l48;
pile[v[22]]=1549; pile[WZ1]=240; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(1549,240,jvj+52)*/
l46:if((x[jvj+52]<=0)) goto l48;
x[jvj+24]=s[x[jvj+52]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+52];
pile[v[22]]=109; pile[WZ1]=jvj+24; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(109,jvj+24,jvj+53)*/
x[jvj+28]=x[jvj+53] ;z[jvj+28]=z[jvj+53];
pile[v[22]]=184; pile[WZ1]=jvj+28; 
(*f[71])( );     /*ENLV0(184,jvj+28)*/
pile[v[22]]=1539; pile[WZ1]=240; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1539,240,jvj+23)*/
pile[v[22]]=449; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l158;     /*FNDO0(449,jvj+24,jvj+25)*/
x[jvj+155]=x[jvj+23] ;z[jvj+155]=z[jvj+23];
l19:if((x[jvj+155]<=0)) goto l158;
x[jvj+26]=s[x[jvj+155]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+155];
pile[v[22]]=117; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+26,V104)*/
V104=pile[WZ2]; 
pile[v[22]]=jvj+25; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(jvj+25,jvj+26,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+134; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+134)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3496); pile[WZ4]=jvj+138; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3496),jvj+138)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V104; pile[WZ4]=jvj+136; 
(*f[192])( );     /*QUADRI4(100,41,130,V104,jvj+136)*/
pile[v[22]]=jvj+134; pile[WZ1]=111; pile[WZ2]=jvj+135; 
(*f[54])( );     /*TRI1(jvj+134,111,jvj+135)*/
pile[v[22]]=jvj+135; pile[WZ1]=jvj+136; pile[WZ2]=103; pile[WZ3]=jvj+137; 
(*f[58])( );     /*TRI3(jvj+135,jvj+136,103,jvj+137)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+138; pile[WZ4]=jvj+137; pile[WZ5]=jvj+130; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+138,jvj+137,jvj+130)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+27; pile[WZ4]=jvj+141; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+27,jvj+141)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9977); pile[WZ4]=jvj+144; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9977),jvj+144)*/
pile[WZ4]=jvj+142; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9977),jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=103; pile[WZ2]=jvj+143; 
(*f[54])( );     /*TRI1(jvj+142,103,jvj+143)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+144; pile[WZ4]=jvj+143; pile[WZ5]=jvj+139; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+144,jvj+143,jvj+139)*/
pile[v[22]]=jvj+139; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+140; 
(*f[180])( );     /*TRIENS0(jvj+139,(-20),114,jvj+140)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+141; pile[WZ4]=jvj+140; pile[WZ5]=jvj+132; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+141,jvj+140,jvj+132)*/
pile[v[22]]=jvj+130; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+131; 
(*f[180])( );     /*TRIENS0(jvj+130,(-20),107,jvj+131)*/
pile[v[22]]=jvj+132; pile[WZ2]=jvj+131; pile[WZ3]=105; pile[WZ4]=jvj+133; 
(*f[298])( );     /*TRIENS1(jvj+132,(-20),jvj+131,105,jvj+133)*/
pile[v[22]]=jvj+133; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+133,42,100,jvj+29)*/
pile[v[22]]=jvj+28; pile[WZ1]=184; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+28,184,jvj+29)*/
l20:x[jvj+155]=t[x[jvj+155]];
goto l19;
l44:if((KR!=86)) goto l45;
pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,V78)*/
V78=pile[WZ1]; 
pile[v[22]]=N; pile[WZ1]=V78; pile[WZ2]=UR; 
(*f[426])( );     /*COMPARNORD0(N,V78,UR)*/
goto l45;
l48:if((KR!=85)) goto l51;
x[jvj+5]=0 ;z[jvj+5]=0;
if(x[jvj+5]!=incon) goto l1;
l49:if(x[jvj+5]!=incon) goto l50;
l51:if(x[jvj+59]==incon) goto l52;
goto l62;
l50:V156=x[jvj+5];
pile[v[22]]=23; pile[WZ1]=V156; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(23,V156,0,V155)*/
V155=pile[WZ3]; 
pile[v[22]]=V155; 
(*f[40])( );     /*SLG0(V155)*/
goto l51;
l54:x[jvj+55]=t[x[jvj+55]];
goto l53;
l55:V96=bh[v[1]][2];
pile[v[22]]=898; pile[WZ1]=905; pile[WZ2]=jvj+57; 
(*f[33])( );     /*FNDE0(898,905,jvj+57)*/
l56:if((x[jvj+57]<=0)) goto l77;
x[jvj+58]=s[x[jvj+57]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+57];
pile[v[22]]=162; pile[WZ1]=jvj+58; 
(*f[219])( );if(v[102]) goto l57;     /*FNDC2(162,jvj+58,V95)*/
V95=pile[WZ2]; 
if((V95!=V96)) goto l57;
pile[v[22]]=905; 
(*f[44])( );if(v[102]) goto l57;     /*FNDC1(905,jvj+58,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=68; pile[WZ1]=1418; pile[WZ2]=jvj+125; 
(*f[54])( );     /*TRI1(68,1418,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=1384; pile[WZ2]=1383; pile[WZ3]=jvj+126; 
(*f[58])( );     /*TRI3(jvj+125,1384,1383,jvj+126)*/
pile[v[22]]=jvj+126; pile[WZ1]=jvj+127; pile[WZ2]=1092; pile[WZ3]=jvj+128; 
(*f[58])( );     /*TRI3(jvj+126,jvj+127,1092,jvj+128)*/
pile[v[22]]=683; pile[WZ1]=N; pile[WZ2]=905; pile[WZ3]=V97; pile[WZ4]=jvj+128; pile[WZ5]=jvj+59; 
(*f[197])( );     /*QUADRI5(683,N,905,V97,jvj+128,jvj+59)*/
if(x[jvj+59]!=incon) goto l60;
l68:pile[v[22]]=597; pile[WZ1]=645; pile[WZ2]=jvj+59; 
(*f[36])( );     /*PLUSC0(597,645,jvj+59)*/
goto l77;
l57:x[jvj+57]=t[x[jvj+57]];
goto l56;
l59:x[jvj+127]=228 ;z[jvj+127]=228;
l67:if(x[jvj+127]!=incon) goto l55;
goto l77;
l60:if((UR!=84)) goto l61;
pile[v[22]]=jvj+59; pile[WZ1]=970; pile[WZ2]=985; 
(*f[35])( );     /*CHGC1(jvj+59,970,985)*/
l61:if((UR!=80)) goto l68;
pile[v[22]]=3; 
(*f[126])( );     /*LND2(3,V90,V91)*/
V90=pile[WZ1]; V91=pile[WZ2]; 
pile[v[22]]=V91; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+60; 
(*f[78])( );if(v[102]) goto l68;     /*SMA0(V91,64,67,jvj+60)*/
pile[v[22]]=jvj+59; pile[WZ1]=970; pile[WZ2]=1489; 
(*f[35])( );     /*CHGC1(jvj+59,970,1489)*/
pile[WZ1]=1540; pile[WZ2]=V90; 
(*f[43])( );     /*CHGC2(jvj+59,1540,V90)*/
pile[WZ1]=934; pile[WZ2]=jvj+60; 
(*f[35])( );     /*CHGC1(jvj+59,934,jvj+60)*/
goto l68;
l63:if((KR!=68)) goto l64;
pile[v[22]]=20; pile[WZ1]=10305; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10305,0,V168)*/
V168=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V168; pile[WZ2]=178; 
(*f[42])( );     /*SRA1(135,V168,178,V169)*/
V169=pile[WZ3]; 
pile[v[22]]=V169; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V169,58,V170)*/
V170=pile[WZ2]; 
pile[v[22]]=V170; pile[WZ1]=N; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V170,N,41,V171)*/
V171=pile[WZ3]; 
pile[v[22]]=V171; 
(*f[40])( );     /*SLG0(V171)*/
l64:if(x[jvj+59]==incon) goto l65;
goto l77;
l65:if(UR!=incon) goto l66;
goto l77;
l66:if((KR!=70)) goto l77;
x[jvj+127]=incon;
if(UR!=83&&UR!=84) goto l58;
x[jvj+127]=255 ;z[jvj+127]=255;
l58:if(x[jvj+127]==incon) goto l59;
goto l67;
l70:x[jvj+61]=t[x[jvj+61]];
l69:if((x[jvj+61]<=0)) goto l71;
x[jvj+62]=s[x[jvj+61]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+61];
pile[v[22]]=683; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(683,jvj+62,V74)*/
V74=pile[WZ2]; 
if((V74!=NR)) goto l70;
pile[v[22]]=905; 
(*f[44])( );if(v[102]) goto l70;     /*FNDC1(905,jvj+62,V75)*/
V75=pile[WZ2]; 
if((V75==F)) goto l70;
V72=67;
l71:if(V72==incon) goto l72;
l80:if(V72!=incon) goto l74;
goto l81;
l72:V72=68;
goto l80;
l74:if((V72!=68)) goto l76;
pile[v[22]]=1418; pile[WZ1]=jvj+59; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(1418,jvj+59,jvj+64)*/
if((x[jvj+64]!=68)) goto l73;
pile[v[22]]=N; pile[WZ1]=F; pile[WZ2]=jvj+59; 
(*f[312])( );     /*CRENSORDBIS0(N,F,jvj+59)*/
l73:pile[v[22]]=1418; pile[WZ1]=jvj+59; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(1418,jvj+59,jvj+63)*/
if((x[jvj+63]==68)) goto l76;
l75:pile[v[22]]=N; pile[WZ1]=UR; pile[WZ2]=NR; pile[WZ3]=F; pile[WZ4]=jvj+59; 
(*f[425])( );     /*CRENSORD0(N,UR,NR,F,jvj+59)*/
l76:if((V72!=67)) goto l81;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=905; 
(*f[42])( );     /*SRA1(135,0,905,V161)*/
V161=pile[WZ3]; 
pile[v[22]]=V161; pile[WZ1]=(-9990); 
(*f[37])( );     /*SRA0(V161,(-9990),V162)*/
V162=pile[WZ2]; 
pile[v[22]]=V162; 
(*f[40])( );     /*SLG0(V162)*/
goto l81;
l78:if(x[jvj+59]!=incon) goto l79;
goto l81;
l79:if((KR!=68)) goto l81;
pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,NR,V70)*/
NR=pile[WZ1]; V70=pile[WZ2]; 
pile[v[22]]=V70; 
(*f[258])( );     /*SMV1(V70,F)*/
F=pile[WZ1]; 
V72=incon;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(645,597,jvj+61)*/
goto l69;
l83:x[jvj+65]=t[x[jvj+65]];
goto l82;
l87:pile[v[22]]=20; pile[WZ1]=V158; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V158,0,V41)*/
V41=pile[WZ3]; 
V40=incon;
pile[v[22]]=163; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+6,V46)*/
V46=pile[WZ2]; 
V39=V46;
pile[v[22]]=V41; pile[WZ1]=V39; 
(*f[37])( );     /*SRA0(V41,V39,V40)*/
V40=pile[WZ2]; 
l4:if(V40==incon) goto l5;
goto l88;
l89:pile[v[22]]=41; pile[WZ1]=V42; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(41,V42,V40,V159)*/
V159=pile[WZ3]; 
pile[v[22]]=V159; 
(*f[40])( );     /*SLG0(V159)*/
goto l85;
l90:if((KR!=66)) goto l92;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(645,597,jvj+21)*/
goto l17;
l92:if(KR!=67&&KR!=75) goto l93;
if((N==1)) goto l93;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(645,597,jvj+7)*/
goto l8;
l95:x[jvj+72]=t[x[jvj+72]];
goto l94;
l96:pile[v[22]]=1418; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l131;     /*FNDO0(1418,jvj+74,jvj+75)*/
if((x[jvj+75]==68)) goto l132;
l131:pile[v[22]]=N; 
(*f[420])( );     /*FAITCOND0(N)*/
pile[v[22]]=265; pile[WZ1]=jvj+74; pile[WZ2]=jvj+76; 
(*f[33])( );     /*FNDE0(265,jvj+74,jvj+76)*/
l97:if((x[jvj+76]<=0)) goto l132;
x[jvj+77]=s[x[jvj+76]] ;z[jvj+77]=(x[jvj+77]<=sepcte) ? x[jvj+77] : z[jvj+76];
pile[v[22]]=120; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(120,jvj+77,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=KR; pile[WZ2]=UR; pile[WZ3]=N; 
(*f[311])( );     /*FINDEX0(jvj+78,KR,UR,N)*/
l98:x[jvj+76]=t[x[jvj+76]];
goto l97;
l99:pile[v[22]]=1418; pile[WZ1]=jvj+74; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(1418,jvj+74,jvj+79)*/
if((x[jvj+79]==68)) goto l152;
l135:pile[v[22]]=265; pile[WZ1]=jvj+74; pile[WZ2]=jvj+114; 
(*f[33])( );     /*FNDE0(265,jvj+74,jvj+114)*/
l136:if((x[jvj+114]<=0)) goto l152;
x[jvj+115]=s[x[jvj+114]] ;z[jvj+115]=(x[jvj+115]<=sepcte) ? x[jvj+115] : z[jvj+114];
pile[v[22]]=158; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l137;     /*FNDO0(158,jvj+115,jvj+116)*/
pile[v[22]]=120; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l137;     /*FNDO0(120,jvj+115,jvj+117)*/
pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(30,0,32,V152)*/
V152=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V152; pile[WZ2]=jvj+116; 
(*f[42])( );     /*SRA1(135,V152,jvj+116,V153)*/
V153=pile[WZ3]; 
pile[v[22]]=V153; 
(*f[40])( );     /*SLG0(V153)*/
pile[v[22]]=10; pile[WZ1]=jvj+117; pile[WZ2]=0; 
(*f[421])( );     /*XO0(10,jvj+117,0,JJ)*/
JJ=pile[WZ3]; 
pile[v[22]]=76; pile[WZ1]=0; pile[WZ2]=45; 
(*f[41])( );     /*SRB0(76,0,45,V154)*/
V154=pile[WZ3]; 
pile[v[22]]=V154; 
(*f[40])( );     /*SLG0(V154)*/
l137:x[jvj+114]=t[x[jvj+114]];
goto l136;
l100:pile[v[22]]=1418; pile[WZ1]=jvj+74; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l126;     /*FNDO0(1418,jvj+74,jvj+80)*/
if((x[jvj+80]==68)) goto l129;
l126:pile[v[22]]=265; pile[WZ1]=jvj+74; pile[WZ2]=jvj+104; 
(*f[33])( );     /*FNDE0(265,jvj+74,jvj+104)*/
pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+105; 
(*f[78])( );if(v[102]) goto l129;     /*SMA0(1,36,67,jvj+105)*/
l127:if((x[jvj+104]<=0)) goto l129;
x[jvj+106]=s[x[jvj+104]] ;z[jvj+106]=(x[jvj+106]<=sepcte) ? x[jvj+106] : z[jvj+104];
pile[v[22]]=120; pile[WZ1]=jvj+106; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l128;     /*FNDO0(120,jvj+106,jvj+107)*/
pile[v[22]]=158; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l128;     /*FNDO0(158,jvj+106,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=158; pile[WZ2]=jvj+109; 
(*f[54])( );     /*TRI1(jvj+108,158,jvj+109)*/
pile[v[22]]=jvj+105; pile[WZ1]=jvj+107; pile[WZ3]=N; pile[WZ4]=UR; 
(*f[152])( );     /*CHERCHATOME0(jvj+105,jvj+107,jvj+109,N,UR)*/
l128:x[jvj+104]=t[x[jvj+104]];
goto l127;
l102:V110=V111;
l105:if(V110!=incon) goto l106;
l104:pile[v[22]]=120; pile[WZ1]=jvj+81; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(120,jvj+81,jvj+84)*/
l103:x[jvj+81]=x[jvj+84] ;z[jvj+81]=z[jvj+84];
pile[v[22]]=103; pile[WZ1]=jvj+81; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l104;     /*FNDO0(103,jvj+81,jvj+85)*/
pile[v[22]]=111; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l104;     /*FNDO0(111,jvj+81,jvj+86)*/
V182=x[jvj+86];
V183=x[jvj+85];
pile[v[22]]=20; pile[WZ1]=V182; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V182,0,V181)*/
V181=pile[WZ3]; 
pile[WZ1]=V183; pile[WZ2]=V181; 
(*f[39])( );     /*SDX0(20,V183,V181,V111)*/
V111=pile[WZ3]; 
V110=incon;
pile[v[22]]=1547; pile[WZ1]=jvj+81; 
(*f[26])( );if(v[102]) goto l101;     /*FNDC0(1547,jvj+81,V117)*/
V117=pile[WZ2]; 
I=V117;
pile[v[22]]=41; pile[WZ1]=I; pile[WZ2]=V111; 
(*f[39])( );     /*SDX0(41,I,V111,V110)*/
V110=pile[WZ3]; 
l101:if(V110==incon) goto l102;
goto l105;
l106:pile[v[22]]=V110; 
(*f[40])( );     /*SLG0(V110)*/
goto l104;
l108:x[jvj+87]=x[jvj+82] ;z[jvj+87]=z[jvj+82];
l107:pile[v[22]]=120; pile[WZ1]=jvj+87; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l134;     /*FNDO0(120,jvj+87,jvj+82)*/
pile[v[22]]=218; pile[WZ1]=jvj+82; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(218,jvj+82,jvj+88)*/
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V177)*/
V177=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V177; pile[WZ2]=jvj+88; 
(*f[42])( );     /*SRA1(135,V177,jvj+88,V178)*/
V178=pile[WZ3]; 
pile[v[22]]=V178; 
(*f[40])( );     /*SLG0(V178)*/
pile[v[22]]=287; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(287,jvj+82,jvj+83)*/
x[jvj+84]=x[jvj+83] ;z[jvj+84]=z[jvj+83];
goto l103;
l110:V128++;
l109:if((V128>V129)) goto l113;
V132=r[V128];
if((V132!=1)) goto l110;
x[jvj+89]=V128 ;z[jvj+89]=(V128<=sepcte) ? V128 : 0;
pile[v[22]]=345; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l110;     /*FNDO0(345,jvj+89,jvj+90)*/
x[jvj+91]=x[jvj+90] ;z[jvj+91]=z[jvj+90];
pile[v[22]]=365; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[33])( );     /*FNDE0(365,jvj+91,jvj+92)*/
x[jvj+161]=x[jvj+92] ;z[jvj+161]=z[jvj+92];
l111:if((x[jvj+161]<=0)) goto l110;
x[jvj+93]=s[x[jvj+161]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+161];
pile[v[22]]=683; pile[WZ1]=jvj+93; 
(*f[26])( );if(v[102]) goto l112;     /*FNDC0(683,jvj+93,V127)*/
V127=pile[WZ2]; 
if((V127!=N)) goto l112;
V133=x[jvj+93];
pile[v[22]]=365; pile[WZ1]=jvj+91; pile[WZ2]=V133; 
(*f[134])( );     /*OTA0(365,jvj+91,V133)*/
l112:x[jvj+161]=t[x[jvj+161]];
goto l111;
l113:pile[v[22]]=265; pile[WZ1]=jvj+74; pile[WZ2]=jvj+94; 
(*f[33])( );     /*FNDE0(265,jvj+74,jvj+94)*/
l114:if((x[jvj+94]<=0)) goto l96;
x[jvj+95]=s[x[jvj+94]] ;z[jvj+95]=(x[jvj+95]<=sepcte) ? x[jvj+95] : z[jvj+94];
l116:pile[v[22]]=120; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l115;     /*FNDO0(120,jvj+95,jvj+96)*/
pile[v[22]]=287; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l117;     /*FNDO0(287,jvj+96,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=KR; pile[WZ2]=UR; pile[WZ3]=N; 
(*f[311])( );     /*FINDEX0(jvj+97,KR,UR,N)*/
l117:x[jvj+95]=x[jvj+96] ;z[jvj+95]=z[jvj+96];
goto l116;
l115:x[jvj+94]=t[x[jvj+94]];
goto l114;
l119:if(x[jvj+74]!=incon) goto l120;
goto l152;
l120:if((KR!=73)) goto l121;
pile[v[22]]=jvj+74; 
(*f[419])( );     /*TOUTSQ0(jvj+74)*/
l121:if((KR!=79)) goto l123;
pile[v[22]]=265; pile[WZ1]=jvj+74; pile[WZ2]=jvj+98; 
(*f[33])( );     /*FNDE0(265,jvj+74,jvj+98)*/
pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+99; 
(*f[78])( );if(v[102]) goto l123;     /*SMA0(1,64,67,jvj+99)*/
l122:if((x[jvj+98]<=0)) goto l123;
x[jvj+100]=s[x[jvj+98]] ;z[jvj+100]=(x[jvj+100]<=sepcte) ? x[jvj+100] : z[jvj+98];
pile[v[22]]=jvj+99; pile[WZ1]=jvj+100; pile[WZ2]=jvj+74; pile[WZ3]=265; 
(*f[427])( );     /*SUPAT0(jvj+99,jvj+100,jvj+74,265)*/
x[jvj+98]=t[x[jvj+98]];
goto l122;
l123:if((KR!=72)) goto l129;
pile[v[22]]=1418; pile[WZ1]=jvj+74; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l125;     /*FNDO0(1418,jvj+74,jvj+101)*/
if((x[jvj+101]!=68)) goto l125;
pile[v[22]]=265; pile[WZ2]=jvj+102; 
(*f[33])( );     /*FNDE0(265,jvj+74,jvj+102)*/
pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+103; 
(*f[78])( );if(v[102]) goto l125;     /*SMA0(1,36,67,jvj+103)*/
l124:if((x[jvj+102]<=0)) goto l125;
V136=s[x[jvj+102]];
pile[v[22]]=jvj+103; pile[WZ1]=jvj+74; 
(*f[153])( );     /*CHERCHATOMEBIS0(jvj+103,jvj+74)*/
x[jvj+102]=t[x[jvj+102]];
goto l124;
l125:if(UR!=incon) goto l100;
l129:if(UR!=incon) goto l130;
l132:if((KR!=76)) goto l152;
pile[v[22]]=1418; pile[WZ1]=jvj+74; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l99;     /*FNDO0(1418,jvj+74,jvj+111)*/
if((x[jvj+111]!=68)) goto l99;
pile[v[22]]=265; pile[WZ2]=jvj+112; 
(*f[33])( );     /*FNDE0(265,jvj+74,jvj+112)*/
l133:if((x[jvj+112]<=0)) goto l99;
x[jvj+87]=s[x[jvj+112]] ;z[jvj+87]=(x[jvj+87]<=sepcte) ? x[jvj+87] : z[jvj+112];
pile[v[22]]=158; pile[WZ1]=jvj+87; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l134;     /*FNDO0(158,jvj+87,jvj+113)*/
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V173)*/
V173=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V173; pile[WZ2]=1547; 
(*f[42])( );     /*SRA1(135,V173,1547,V174)*/
V174=pile[WZ3]; 
pile[v[22]]=V174; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V174,58,V175)*/
V175=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V175; pile[WZ2]=jvj+113; 
(*f[42])( );     /*SRA1(135,V175,jvj+113,V176)*/
V176=pile[WZ3]; 
pile[v[22]]=V176; 
(*f[40])( );     /*SLG0(V176)*/
goto l107;
l130:if(KR!=81&&KR!=82) goto l132;
pile[v[22]]=1418; pile[WZ1]=jvj+74; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l96;     /*FNDO0(1418,jvj+74,jvj+110)*/
if((x[jvj+110]!=68)) goto l96;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l113;     /*FNDC0(1484,854,V130)*/
V130=pile[WZ2]; 
V128=sepfacts+1;
V129=sepfacts+V130;
goto l109;
l134:x[jvj+112]=t[x[jvj+112]];
goto l133;
l138:pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+118; 
(*f[33])( );     /*FNDE0(457,324,jvj+118)*/
l139:if((x[jvj+118]<=0)) goto l145;
x[jvj+119]=s[x[jvj+118]] ;z[jvj+119]=(x[jvj+119]<=sepcte) ? x[jvj+119] : z[jvj+118];
pile[v[22]]=983; pile[WZ1]=jvj+119; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l140;     /*FNDO0(983,jvj+119,jvj+120)*/
pile[v[22]]=878; pile[WZ1]=jvj+120; pile[WZ2]=jvj+121; 
(*f[33])( );     /*FNDE0(878,jvj+120,jvj+121)*/
x[jvj+162]=x[jvj+121] ;z[jvj+162]=z[jvj+121];
l141:if((x[jvj+162]<=0)) goto l140;
x[jvj+122]=s[x[jvj+162]] ;z[jvj+122]=(x[jvj+122]<=sepcte) ? x[jvj+122] : z[jvj+162];
pile[v[22]]=944; pile[WZ1]=jvj+122; pile[WZ2]=jvj+123; 
(*f[33])( );     /*FNDE0(944,jvj+122,jvj+123)*/
x[jvj+163]=x[jvj+123] ;z[jvj+163]=z[jvj+123];
l142:if((x[jvj+163]>0)) goto l143;
x[jvj+162]=t[x[jvj+162]];
goto l141;
l140:x[jvj+118]=t[x[jvj+118]];
goto l139;
l143:x[jvj+124]=s[x[jvj+163]] ;z[jvj+124]=(x[jvj+124]<=sepcte) ? x[jvj+124] : z[jvj+163];
pile[v[22]]=117; pile[WZ1]=jvj+124; 
(*f[26])( );if(v[102]) goto l144;     /*FNDC0(117,jvj+124,V144)*/
V144=pile[WZ2]; 
if(V144>V143) V143=V144;
l144:x[jvj+163]=t[x[jvj+163]];
goto l142;
l146:if((V143==(-999999))) goto l147;
V151=V143+1;
V142=V151;
l147:if(V142==incon) goto l148;
l149:if(V142!=incon) goto l150;
l151:if((S==68)) goto l156;
goto l155;
l148:V142=1;
goto l149;
l150:pile[v[22]]=924; pile[WZ1]=117; pile[WZ2]=V142; 
(*f[43])( );     /*CHGC2(924,117,V142)*/
goto l151;
l153:if(S!=incon) goto l154;
goto l155;
l154:if((KR==83)) goto l155;
if((KR!=69)) goto l151;
V142=incon;
V143=(-999999);
if(V143!=incon) goto l138;
l145:if(V143!=incon) goto l146;
goto l147;
l157:pile[v[22]]=120; pile[WZ1]=jvj+12; pile[WZ2]=158; pile[WZ3]=jvj+17; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(120,jvj+12,158,jvj+17,jvj+20)*/
pile[v[22]]=jvj+19; pile[WZ1]=265; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+19,265,jvj+20)*/
l16:x[jvj+15]=t[x[jvj+15]];
goto l14;
l158:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=683; pile[WZ4]=jvj+154; 
(*f[181])( );     /*QUADRI2(100,20,101,683,jvj+154)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6470); pile[WZ4]=jvj+152; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6470),jvj+152)*/
pile[v[22]]=jvj+152; pile[WZ1]=103; pile[WZ2]=jvj+153; 
(*f[54])( );     /*TRI1(jvj+152,103,jvj+153)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+154; pile[WZ4]=jvj+153; pile[WZ5]=jvj+151; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+154,jvj+153,jvj+151)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+149; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+149)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3496); pile[WZ4]=jvj+147; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3496),jvj+147)*/
pile[v[22]]=jvj+147; pile[WZ1]=436; pile[WZ2]=jvj+148; 
(*f[54])( );     /*TRI1(jvj+147,436,jvj+148)*/
pile[v[22]]=jvj+148; pile[WZ1]=jvj+149; pile[WZ2]=111; pile[WZ3]=jvj+150; 
(*f[58])( );     /*TRI3(jvj+148,jvj+149,111,jvj+150)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+151; pile[WZ4]=jvj+150; pile[WZ5]=jvj+145; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+151,jvj+150,jvj+145)*/
pile[v[22]]=jvj+145; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+146; 
(*f[180])( );     /*TRIENS0(jvj+145,(-20),105,jvj+146)*/
pile[v[22]]=jvj+146; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+146,42,100,jvj+54)*/
pile[v[22]]=jvj+28; pile[WZ1]=184; pile[WZ2]=jvj+54; 
(*f[36])( );     /*PLUSC0(jvj+28,184,jvj+54)*/
l47:x[jvj+52]=t[x[jvj+52]];
goto l46;
}
