#include "dx.h"
void EDITE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V2=0,V1=0,K=0,V4=0,V62=0,V64=0,V9=0,V13=0,V22=0,V26=0,V24=0,V25=0,V28=0,V73=0,V71=0,V72=0,NR=0,V74=0,V77=0,V76=0,V20=0,V80=0,V79=0,V81=0,V82=0,V37=0,V40=0,V39=0,V86=0,V85=0,V42=0,V41=0,V47=0,V46=0,V88=0,V89=0,V90=0,V60=0,NV=0,V54=0,V53=0,V30=0,V31=0,V95=0,V94=0,V43=0,NX=0,V11=0,V12=0,V68=0,V65=0,V66=0,V67=0,V69=0,V33=0,V35=0,V78=0,N=0,V29=0,V104=0,V106=0,V105=0,V107=0;
int KR,UR;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=35;
x[jvj+1]=10814;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==139&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
KR=pile[v[22]]; UR=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
NX=incon;
if((KR==45)) goto l25;
if((KR==43)) goto l26;
if((KR==35)) goto l28;
if((KR!=87)) goto l61;
if((UR==70)) goto l29;
if((UR==72)) goto l30;
if((UR==65)) goto l31;
if((UR==78)) goto l32;
if((UR==33)) goto l33;
if((UR==37)) goto l34;
if((UR==43)) goto l35;
if((UR==35)) goto l36;
if((UR==58)) goto l37;
if((UR==66)) goto l38;
if((UR==74)) goto l39;
if((UR==32)) goto l40;
if((UR==87)) goto l42;
if((UR==80)) goto l81;
if((UR==90)) goto l43;
if((UR==68)) goto l45;
if((UR==71)) goto l80;
if((UR==126)) goto l46;
if((UR==67)) goto l1;
if((UR!=60)) goto l53;
x[jvj+20]=vo[13];z[jvj+20]=vz[13];
pile[v[22]]=2; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+21; 
(*f[78])( );if(v[102]) goto l71;     /*SMA0(2,64,67,jvj+21)*/
l47:x[jvj+22]=x[jvj+20] ;z[jvj+22]=z[jvj+20];
pile[v[22]]=287; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(287,jvj+22,jvj+23)*/
pile[v[22]]=218; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(218,jvj+22,jvj+24)*/
x[jvj+26]=x[jvj+23] ;z[jvj+26]=z[jvj+23];
l49:x[jvj+25]=x[jvj+26] ;z[jvj+25]=z[jvj+26];
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+25,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=x[jvj+21])) goto l50;
pile[v[22]]=319; pile[WZ1]=jvj+25; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(319,jvj+25,jvj+29)*/
x[jvj+12]=x[jvj+29] ;z[jvj+12]=z[jvj+29];
V95=x[jvj+12];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+24; 
(*f[42])( );     /*SRA1(135,0,jvj+24,V54)*/
V54=pile[WZ3]; 
V53=incon;
pile[v[22]]=929; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(929,jvj+12,V60)*/
V60=pile[WZ2]; 
NV=V60;
pile[v[22]]=41; pile[WZ1]=NV; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(41,NV,V54,V53)*/
V53=pile[WZ3]; 
l23:if(V53==incon) goto l24;
l51:if(V53!=incon) goto l52;
l50:pile[v[22]]=120; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(120,jvj+25,jvj+26)*/
goto l49;
l1:pile[v[22]]=130; pile[WZ1]=77; 
(*f[26])( );if(v[102]) goto l71;     /*FNDC0(130,77,V3)*/
V3=pile[WZ2]; 
V2=(-V3);
V1=V2-1;
K=1;
l2:if((K>V1)) goto l71;
pile[v[22]]=K; pile[WZ1]=jvj+3; 
(*f[90])( );if(v[102]) goto l3;     /*SRF0(K,jvj+3)*/
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=K; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,K,0,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; pile[WZ1]=V4; 
(*f[37])( );     /*SRA0(V62,V4,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=V64; 
(*f[40])( );     /*SLG0(V64)*/
l3:K++;
goto l2;
l6:x[jvj+35]=t[x[jvj+35]];
l5:if((x[jvj+35]<=0)) goto l8;
x[jvj+8]=s[x[jvj+35]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+35];
pile[v[22]]=683; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(683,jvj+8,V22)*/
V22=pile[WZ2]; 
if((V22!=NR)) goto l6;
V73=x[jvj+9];
pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(30,0,42,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V73; pile[WZ2]=V71; 
(*f[39])( );     /*SDX0(20,V73,V71,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NR; pile[WZ2]=V72; 
(*f[39])( );     /*SDX0(41,NR,V72,V74)*/
V74=pile[WZ3]; 
V77=75-V74;
pile[v[22]]=V77; pile[WZ1]=V74; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(V77,V74,42,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=V76; 
(*f[40])( );     /*SLG0(V76)*/
pile[v[22]]=jvj+6; pile[WZ1]=V20; pile[WZ2]=jvj+11; pile[WZ3]=68; pile[WZ4]=NR; 
(*f[148])( );     /*ANAREG0(jvj+6,V20,jvj+11,68,NR)*/
l8:V24++;
l7:if((V24>V25)) goto l71;
V28=r[V24];
if((V28!=1)) goto l8;
x[jvj+9]=V24 ;z[jvj+9]=(V24<=sepcte) ? V24 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(983,jvj+9,jvj+10)*/
x[jvj+6]=x[jvj+10] ;z[jvj+6]=z[jvj+10];
pile[v[22]]=1001; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1001,jvj+6,jvj+7)*/
x[jvj+35]=x[jvj+7] ;z[jvj+35]=z[jvj+7];
goto l5;
l10:V37=0;
l13:if(V37!=incon) goto l14;
l19:if(NX!=incon) goto l20;
l54:if((UR!=69)) goto l55;
(*f[94])( );     /*KRG0()*/
l55:if((UR!=84)) goto l56;
pile[v[22]]=68; 
(*f[88])( );     /*DATE0(68)*/
(*f[89])( );     /*TABLERASE0()*/
pile[v[22]]=68; 
(*f[88])( );     /*DATE0(68)*/
(*f[86])( );     /*DISQUE0()*/
exit(0);
l56:if((UR!=75)) goto l60;
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(494,324,jvj+30)*/
l57:if((x[jvj+30]<=0)) goto l60;
x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=246; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(246,jvj+31,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(130,jvj+31,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(109,jvj+31,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=V9; pile[WZ2]=jvj+5; 
(*f[133])( );if(v[102]) goto l59;     /*TLDEBL1(jvj+4,V9,jvj+5)*/
l58:x[jvj+30]=t[x[jvj+30]];
goto l57;
l12:V39=V40;
l15:if(V39!=incon) goto l16;
goto l19;
l14:V86=v[77];
pile[v[22]]=41; pile[WZ1]=V86; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(41,V86,V37,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=(-8892); pile[WZ1]=V85; 
(*f[64])( );     /*SRA2((-8892),V85,V40)*/
V40=pile[WZ2]; 
V39=incon;
if((v[77]<=1)) goto l11;
pile[v[22]]=V40; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V40,83,V39)*/
V39=pile[WZ2]; 
l11:if(V39==incon) goto l12;
goto l15;
l16:pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
goto l19;
l18:V41=V42;
l21:if(V41!=incon) goto l22;
goto l54;
l20:V47=(time(tzt)-inccc);
V46=V47-NX;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1007; 
(*f[42])( );     /*SRA1(135,0,1007,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=V88; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V88,58,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V46; pile[WZ2]=V89; 
(*f[39])( );     /*SDX0(41,V46,V89,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=V90; pile[WZ1]=(-9522); 
(*f[37])( );     /*SRA0(V90,(-9522),V42)*/
V42=pile[WZ2]; 
V41=incon;
if((V46<=1)) goto l17;
pile[v[22]]=V42; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V42,83,V41)*/
V41=pile[WZ2]; 
l17:if(V41==incon) goto l18;
goto l21;
l22:pile[v[22]]=V41; 
(*f[40])( );     /*SLG0(V41)*/
goto l54;
l24:V53=V54;
goto l51;
l25:if((UR!=32)) goto l71;
(*f[17])( );     /*FERMER0()*/
l71:if((v[0]>=0)) goto l72;
(*f[151])( );     /*FICTIF0()*/
l72:if((KR!=77)) goto l73;
if((UR!=32)) goto l73;
pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,N)*/
N=pile[WZ1]; 
pile[v[22]]=N; 
(*f[136])( );     /*EDITORD0(N)*/
l73:if((KR!=41)) goto l74;
pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,V29)*/
V29=pile[WZ1]; 
pile[v[22]]=V29; 
(*f[161])( );     /*PROVISOIRE0(V29)*/
l74:if((KR!=64)) goto l75;
pile[v[22]]=0; 
(*f[15])( );     /*ERR1(0)*/
l75:if((KR!=75)) goto l76;
(*f[95])( );     /*CREFIC0()*/
l76:if((KR!=72)) goto l77;
pile[v[22]]=UR; 
(*f[93])( );     /*SNA0(UR)*/
l77:if((KR!=88)) goto l78;
if((UR!=46)) goto l4;
(*f[114])( );     /*EAKK0()*/
l4:if((UR!=32)) goto l78;
(*f[113])( );     /*EAK0()*/
l78:if((KR!=79)) goto l79;
(*f[104])( );     /*DIAL0()*/
l79:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l26:if((UR!=32)) goto l27;
(*f[83])( );     /*STORE0()*/
l27:if(UR!=35&&UR!=43) goto l71;
(*f[86])( );     /*DISQUE0()*/
l28:
(*f[84])( );     /*ARRET0()*/
goto l71;
l29:fflush(stdout);
goto l71;
l30:
(*f[141])( );     /*ANARES0()*/
goto l71;
l31:
(*f[149])( );     /*REGCONTR0()*/
goto l71;
l32:
(*f[150])( );     /*ESSAICOMB0()*/
goto l71;
l33:
(*f[167])( );     /*PREPMALICE0()*/
goto l71;
l34:
(*f[170])( );     /*SURVEILLE0()*/
goto l71;
l35:
(*f[171])( );     /*META0()*/
goto l71;
l36:
(*f[173])( );     /*ANARULE0()*/
goto l71;
l37:pile[v[22]]=250; 
(*f[175])( );     /*LISTEVRAI0(250)*/
goto l71;
l38:x[jvj+13]=vo[13];z[jvj+13]=vz[13];
pile[v[22]]=717; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(717,jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; 
(*f[142])( );     /*SORENSLIS0(jvj+14)*/
goto l71;
l39:pile[v[22]]=2; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+15; 
(*f[78])( );if(v[102]) goto l71;     /*SMA0(2,64,67,jvj+15)*/
pile[v[22]]=jvj+15; 
(*f[140])( );     /*CREJGT0(jvj+15)*/
goto l71;
l40:pile[v[22]]=jvj+16; 
(*f[138])( );if(v[102]) goto l71;     /*EXPPB0(jvj+16)*/
pile[WZ1]=178; 
(*f[137])( );     /*EXPDIAL0(jvj+16,178)*/
pile[v[22]]=994; pile[WZ1]=993; pile[WZ2]=100; 
(*f[43])( );     /*CHGC2(994,993,100)*/
V13=vv[21];
if((V13<=0)) goto l41;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l41:
(*f[25])( );     /*FAIREXP0()*/
goto l71;
l42:pile[v[22]]=68; 
(*f[88])( );     /*DATE0(68)*/
goto l71;
l43:pile[v[22]]=552; pile[WZ1]=727; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(552,727,jvj+17)*/
l44:if((x[jvj+17]<=0)) goto l71;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+18; 
(*f[105])( );     /*DIAS0(jvj+18)*/
x[jvj+17]=t[x[jvj+17]];
goto l44;
l45:
(*f[91])( );     /*MND0()*/
goto l71;
l46:pile[v[22]]=3; 
(*f[126])( );     /*LND2(3,V30,V31)*/
V30=pile[WZ1]; V31=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=V31; 
(*f[162])( );     /*EDITOUTATOME0(V30,V31)*/
goto l71;
l48:pile[v[22]]=120; pile[WZ1]=jvj+22; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(120,jvj+22,jvj+20)*/
goto l47;
l52:pile[v[22]]=20; pile[WZ1]=V95; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(20,V95,V53,V94)*/
V94=pile[WZ3]; 
pile[v[22]]=V94; 
(*f[40])( );     /*SLG0(V94)*/
goto l50;
l53:if((UR!=62)) goto l54;
V43=(time(tzt)-inccc);
v[70]=1000;
v[76]=1000;
NX=V43;
(*f[174])( );     /*COMB0()*/
V37=incon;
if((v[78]<=0)) goto l9;
V80=v[78];
pile[v[22]]=41; pile[WZ1]=V80; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V80,0,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=V79; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V79,42,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=V81; pile[WZ1]=10000000; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V81,10000000,41,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=V82; pile[WZ1]=43; 
(*f[38])( );     /*SPC0(V82,43,V37)*/
V37=pile[WZ2]; 
l9:if(V37==incon) goto l10;
goto l13;
l59:V12=x[jvj+31];
V68=x[jvj+4];
pres[V11]=1;
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=V12; 
(*f[134])( );     /*OTA0(494,324,V12)*/
pile[v[22]]=20; pile[WZ1]=494; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,494,0,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; pile[WZ1]=(-6435); 
(*f[37])( );     /*SRA0(V65,(-6435),V66)*/
V66=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V68; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(20,V68,V66,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V9; pile[WZ2]=V67; 
(*f[39])( );     /*SDX0(41,V9,V67,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; 
(*f[40])( );     /*SLG0(V69)*/
goto l58;
l60:if((UR!=85)) goto l61;
pile[v[22]]=68; 
(*f[88])( );     /*DATE0(68)*/
(*f[96])( );     /*EASB0()*/
pile[v[22]]=68; 
(*f[88])( );     /*DATE0(68)*/
(*f[86])( );     /*DISQUE0()*/
exit(0);
l61:if((KR!=61)) goto l62;
(*f[106])( );     /*SORTOUT0()*/
l62:if((KR!=73)) goto l63;
(*f[146])( );     /*ETUQUOI0()*/
l63:if((KR!=36)) goto l64;
(*f[159])( );     /*EDITOUTPB0()*/
l64:if((KR!=67)) goto l65;
pile[v[22]]=UR; 
(*f[168])( );     /*EDICMT0(UR)*/
l65:if((KR!=38)) goto l67;
if((UR!=80)) goto l66;
(*f[101])( );     /*PRP0()*/
l66:if((UR!=79)) goto l67;
(*f[100])( );     /*PRO0()*/
l67:if((KR!=76)) goto l71;
if((UR!=35)) goto l70;
V33=sepnouv+1;
l68:if((V33>sepfacts)) goto l70;
V35=r[V33];
if((V35!=1)) goto l69;
x[jvj+32]=V33 ;z[jvj+32]=(V33<=sepcte) ? V33 : 0;
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=V78; 
(*f[40])( );     /*SLG0(V78)*/
pile[v[22]]=jvj+32; 
(*f[172])( );     /*SORBL1(jvj+32)*/
l69:V33++;
goto l68;
l70:if((UR!=87)) goto l71;
V20=bh[v[1]][2];
pile[v[22]]=3; 
(*f[102])( );     /*LND0(3,NR)*/
NR=pile[WZ1]; 
pile[v[22]]=jvj+11; 
(*f[138])( );if(v[102]) goto l71;     /*EXPPB0(jvj+11)*/
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l71;     /*FNDC0(1484,854,V26)*/
V26=pile[WZ2]; 
V24=sepfacts+1;
V25=sepfacts+V26;
goto l7;
l80:pile[v[22]]=10061; pile[WZ1]=(-20); pile[WZ2]=333; pile[WZ3]=jvj+19; 
(*f[180])( );     /*TRIENS0(10061,(-20),333,jvj+19)*/
pile[v[22]]=jvj+19; 
(*f[85])( );     /*VG0(jvj+19)*/
goto l71;
l81:pile[v[22]]=311; pile[WZ1]=324; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(311,324,jvj+33)*/
l82:if((x[jvj+33]>0)) goto l83;
goto l71;
l83:x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
V104=x[jvj+34];
if((V104>sepbloc)) goto l84;
V106=x[jvj+34];
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(10,0,42,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V106; pile[WZ2]=V105; 
(*f[39])( );     /*SDX0(20,V106,V105,V107)*/
V107=pile[WZ3]; 
pile[v[22]]=V107; 
(*f[40])( );     /*SLG0(V107)*/
pile[v[22]]=jvj+34; 
(*f[182])( );     /*EASU0(jvj+34)*/
l84:x[jvj+33]=t[x[jvj+33]];
goto l82;
}
