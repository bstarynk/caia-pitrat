#include "dx.h"
void EDIPB1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V110=0,V111=0,KK=0,NRR=0,V18=0,V19=0,RES=0,V31=0,V116=0,V118=0,V115=0,V117=0,V45=0,V47=0,V53=0,V132=0,V133=0,V50=0,V65=0,V57=0,G=0,V138=0,V60=0,V59=0,V61=0,V64=0,V63=0,V80=0,V79=0,V78=0,V148=0,V150=0,V152=0,V73=0,V72=0,V71=0,V140=0,V141=0,V143=0,V145=0,V146=0,V=0,NR=0,V130=0,V131=0,V48=0,V35=0,V32=0,V119=0,V120=0,V122=0,V134=0,V135=0,V129=0,V124=0,V125=0,V126=0,V127=0,V128=0,V27=0,V112=0,V113=0,V6=0,DN=0,V87=0,V88=0,V89=0,V90=0,V106=0,V102=0,V103=0,V104=0,V105=0,V95=0,V96=0,V97=0,V36=0,V37=0,V38=0,NS=0,RR=0,R=0,V84=0,V85=0,V86=0,V1=0,V91=0,V92=0,V93=0,V94=0,V98=0,V99=0,V100=0,V101=0,V109=0,V107=0,V108=0,V17=0,V169=0,V9=0,V171=0,V172=0,V174=0,V173=0,V175=0,V176=0,V178=0,V177=0;
int KR,N,UR,F;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=60;
x[jvj+1]=10816;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==379&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
KR=pile[v[22]]; N=pile[v[22]+1]; UR=pile[v[22]+2]; F=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+51]=x[jvj+22]=V57=DN=R=incon;
if((KR==34)) goto l41;
if((KR==83)) goto l42;
if((KR==80)) goto l43;
if((KR==85)) goto l44;
if((KR!=87)) goto l66;
if((UR==78)) goto l45;
if((UR==90)) goto l46;
if((UR==69)) goto l47;
if((UR==79)) goto l48;
if((UR==84)) goto l49;
if((UR==68)) goto l51;
if((UR!=77)) goto l56;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(0,117,jvj+22)*/
x[jvj+20]=1804 ;z[jvj+20]=1804;
l21:pile[v[22]]=120; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(120,jvj+20,jvj+21)*/
pile[v[22]]=117; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(117,jvj+21,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=jvj+22; pile[WZ1]=117; pile[WZ2]=V65; 
(*f[186])( );     /*BTC0(jvj+22,117,V65)*/
l22:x[jvj+20]=x[jvj+21] ;z[jvj+20]=z[jvj+21];
goto l21;
l2:x[jvj+4]=t[x[jvj+4]];
l1:if((x[jvj+4]<=0)) goto l3;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=163; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(163,jvj+5,V12)*/
V12=pile[WZ2]; 
if((V12!=RR)) goto l2;
x[jvj+60]=x[jvj+5] ;z[jvj+60]=z[jvj+5];
l3:if(x[jvj+60]==incon) goto l4;
l91:if(x[jvj+60]!=incon) goto l92;
l94:if(x[jvj+51]!=incon) goto l95;
l104:if(x[jvj+51]==incon) goto l105;
l106:if((KR!=86)) goto l107;
pile[v[22]]=1; pile[WZ1]=N; 
(*f[393])( );     /*ALCTT0(1,N)*/
l107:if((KR!=68)) goto l109;
pile[v[22]]=276; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(276,N,jvj+3)*/
if((x[jvj+3]==68)) goto l109;
l108:V109=x[N];
pile[v[22]]=0; pile[WZ1]=(-5713); 
(*f[37])( );     /*SRA0(0,(-5713),V107)*/
V107=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V109; pile[WZ2]=V107; 
(*f[39])( );     /*SDX0(20,V109,V107,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=V108; 
(*f[40])( );     /*SLG0(V108)*/
l109:if((KR!=67)) goto l110;
pile[v[22]]=1; pile[WZ1]=N; 
(*f[392])( );     /*ALCTS0(1,N)*/
l110:if((KR!=65)) goto l111;
pile[v[22]]=1; pile[WZ1]=N; 
(*f[394])( );     /*ALCTV0(1,N)*/
l111:if((KR!=72)) goto l112;
pile[v[22]]=1; pile[WZ1]=N; 
(*f[395])( );     /*ALCTH0(1,N)*/
l112:if(KR==83||KR==84) goto l113;
pile[v[22]]=N; 
(*f[130])( );     /*EDIPB0(N)*/
l113:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l4:x[jvj+60]=250 ;z[jvj+60]=250;
goto l91;
l5:if((x[jvj+51]!=250)) goto l94;
pile[v[22]]=0; pile[WZ1]=(-3629); 
(*f[37])( );     /*SRA0(0,(-3629),V110)*/
V110=pile[WZ2]; 
pile[v[22]]=V110; pile[WZ1]=(-3412); 
(*f[37])( );     /*SRA0(V110,(-3412),V111)*/
V111=pile[WZ2]; 
pile[v[22]]=V111; 
(*f[40])( );     /*SLG0(V111)*/
goto l94;
l7:x[jvj+6]=x[N] ;z[jvj+6]=z[N];
l79:if(x[jvj+6]!=incon) goto l80;
l81:if((KR!=89)) goto l82;
pile[v[22]]=250; pile[WZ1]=274; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(250,274,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=F; pile[WZ2]=UR; 
(*f[374])( );     /*EASOR1(jvj+48,F,UR)*/
l82:if((KR!=84)) goto l85;
x[jvj+7]=incon;
if((UR!=48)) goto l8;
pile[v[22]]=jvj+7; 
(*f[128])( );if(v[102]) goto l8;     /*CODN0(jvj+7)*/
l8:if((UR!=76)) goto l9;
x[jvj+8]=vo[20];z[jvj+8]=vz[20];
pile[v[22]]=1123; pile[WZ1]=jvj+8; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1123,jvj+8,jvj+7)*/
l9:if((UR!=32)) goto l10;
pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+7; 
(*f[78])( );if(v[102]) goto l10;     /*SMA0(1,36,67,jvj+7)*/
l10:if((UR==48)) goto l13;
if((UR<48)) goto l114;
if((UR>57)) goto l114;
V17=135;
l11:if((V17==135)) goto l12;
l13:if(x[jvj+7]==incon) goto l14;
l83:if(x[jvj+7]!=incon) goto l84;
l85:if(KR==67||KR==84||KR==65||KR==72||KR==83||KR==69||KR==68||KR==76||KR==34||KR==75||KR==43||KR==80||KR==85||KR==89||KR==82||KR==73||KR==81||KR==78||KR==88||KR==35||KR==77||KR==66||KR==86||KR==71||KR==79||KR==74||KR==90||KR==87||KR==109) goto l86;
pile[v[22]]=0; pile[WZ1]=(-5606); 
(*f[37])( );     /*SRA0(0,(-5606),V95)*/
V95=pile[WZ2]; 
pile[v[22]]=V95; pile[WZ1]=KR; 
(*f[249])( );     /*SPC1(V95,KR,V96)*/
V96=pile[WZ2]; 
pile[v[22]]=V96; pile[WZ1]=(-3412); 
(*f[37])( );     /*SRA0(V96,(-3412),V97)*/
V97=pile[WZ2]; 
pile[v[22]]=V97; 
(*f[40])( );     /*SLG0(V97)*/
l86:if((KR!=77)) goto l87;
if((UR!=32)) goto l87;
pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,V37,V36)*/
V37=pile[WZ1]; V36=pile[WZ2]; 
V38=V36+1;
pile[v[22]]=V38; 
(*f[135])( );     /*LND3(V38,NS)*/
NS=pile[WZ1]; 
pile[v[22]]=N; pile[WZ1]=V37; pile[WZ2]=NS; 
(*f[402])( );     /*POURQUOIPAS0(N,V37,NS)*/
l87:if(x[jvj+51]==incon) goto l88;
goto l94;
l12:pile[v[22]]=1; 
(*f[126])( );     /*LND2(1,NRR,KK)*/
NRR=pile[WZ1]; KK=pile[WZ2]; 
V18=NRR+sepfacts;
V19=r[V18];
if((V19!=1)) goto l13;
if((V18>sephist)) goto l13;
if((V18<=sepfacts)) goto l13;
x[jvj+54]=V18 ;z[jvj+54]=(V18<=sepcte) ? V18 : 0;
x[jvj+7]=x[jvj+54] ;z[jvj+7]=z[jvj+54];
goto l13;
l14:x[jvj+7]=(-99999998);
goto l83;
l19:V47=0;
l68:if(V47!=incon) goto l69;
l70:if((KR!=75)) goto l71;
pile[v[22]]=N; 
(*f[309])( );     /*ALCAI0(N)*/
pile[WZ1]=276; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(N,276,68)*/
l71:if((F!=32)) goto l72;
if(KR!=68&&KR!=78&&KR!=74&&KR!=82&&KR!=90) goto l72;
pile[v[22]]=878; pile[WZ1]=N; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(878,N,jvj+45)*/
for(i=x[jvj+45],V6=0;i>0;i=t[i],V6++)  ;
DN=V6;
l72:if(DN!=incon) goto l73;
l78:if((KR!=76)) goto l81;
x[jvj+6]=incon;
if((F==32)) goto l6;
pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+6; 
(*f[78])( );if(v[102]) goto l6;     /*SMA0(1,36,67,jvj+6)*/
l6:if(x[jvj+6]==incon) goto l7;
goto l79;
l20:x[jvj+33]=324 ;z[jvj+33]=324;
l50:pile[v[22]]=1447; pile[WZ1]=1458; pile[WZ2]=jvj+33; 
(*f[35])( );     /*CHGC1(1447,1458,jvj+33)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=642; 
(*f[42])( );     /*SRA1(135,0,642,V132)*/
V132=pile[WZ3]; 
pile[WZ1]=V132; pile[WZ2]=490; 
(*f[42])( );     /*SRA1(135,V132,490,V133)*/
V133=pile[WZ3]; 
V171=V133-1;
V172=0;
l118:if((V172<=V171)) goto l119;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
pile[v[22]]=0; 
(*f[135])( );     /*LND3(0,V50)*/
V50=pile[WZ1]; 
v[93]=V50;
l66:if(KR!=88&&KR!=35&&KR!=43) goto l67;
pile[v[22]]=0; 
(*f[23])( );     /*EDITE0(0)*/
l67:if(KR!=77&&KR!=109) goto l70;
if(UR!=74&&UR!=106) goto l70;
V47=incon;
if((F!=61)) goto l18;
V47=1;
l18:if(V47==incon) goto l19;
goto l68;
l23:if(x[jvj+22]!=incon) goto l24;
l54:if(V57!=incon) goto l55;
l56:if((UR!=86)) goto l59;
pile[v[22]]=455; pile[WZ1]=N; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(455,N,jvj+37)*/
l57:if((x[jvj+37]<=0)) goto l59;
x[jvj+38]=s[x[jvj+37]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+37];
pile[v[22]]=102; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,jvj+38,jvj+39)*/
pile[v[22]]=20; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[409])( );     /*TRI14(20,jvj+39,jvj+40)*/
pile[v[22]]=107; pile[WZ1]=jvj+38; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(107,jvj+38,jvj+41)*/
pile[v[22]]=N; pile[WZ1]=jvj+40; pile[WZ3]=jvj+42; 
(*f[403])( );     /*DEFMINMAX0(N,jvj+40,jvj+41,jvj+42)*/
V129=x[jvj+38];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1182; 
(*f[42])( );     /*SRA1(135,0,1182,V124)*/
V124=pile[WZ3]; 
pile[v[22]]=V124; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V124,58,V125)*/
V125=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V125; pile[WZ2]=jvj+42; 
(*f[42])( );     /*SRA1(135,V125,jvj+42,V126)*/
V126=pile[WZ3]; 
pile[v[22]]=V126; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V126,(-9543),V127)*/
V127=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V129; pile[WZ2]=V127; 
(*f[39])( );     /*SDX0(20,V129,V127,V128)*/
V128=pile[WZ3]; 
pile[v[22]]=V128; 
(*f[40])( );     /*SLG0(V128)*/
l58:x[jvj+37]=t[x[jvj+37]];
goto l57;
l24:pile[v[22]]=117; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(117,jvj+22,V57)*/
V57=pile[WZ2]; 
goto l54;
l26:V59=V60;
l38:if(V59!=incon) goto l27;
l37:x[jvj+32]=x[jvj+29] ;z[jvj+32]=z[jvj+29];
l36:pile[v[22]]=120; pile[WZ1]=jvj+32; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(120,jvj+32,jvj+29)*/
pile[v[22]]=117; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(117,jvj+29,V73)*/
V73=pile[WZ2]; 
V72=1000*V73;
V71=V72/V57;
pile[v[22]]=218; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(218,jvj+29,jvj+23)*/
V140=x[jvj+23];
pile[v[22]]=20; pile[WZ1]=V140; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V140,0,V60)*/
V60=pile[WZ3]; 
V59=incon;
pile[v[22]]=970; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(970,jvj+23,jvj+24)*/
G=x[jvj+24];
V138=G;
pile[v[22]]=20; pile[WZ1]=V138; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(20,V138,V60,V59)*/
V59=pile[WZ3]; 
l25:if(V59==incon) goto l26;
goto l38;
l27:V61=incon;
pile[v[22]]=1033; pile[WZ1]=jvj+23; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(1033,jvj+23,jvj+25)*/
if((x[jvj+25]!=68)) goto l28;
pile[v[22]]=135; pile[WZ1]=V59; pile[WZ2]=1033; 
(*f[42])( );     /*SRA1(135,V59,1033,V61)*/
V61=pile[WZ3]; 
l28:if(V61==incon) goto l29;
l39:if(V61!=incon) goto l40;
goto l37;
l29:V61=V59;
goto l39;
l31:V63=V64;
l34:if(V63!=incon) goto l35;
l33:x[jvj+58]=t[x[jvj+58]];
l32:if((x[jvj+58]<=0)) goto l37;
x[jvj+26]=s[x[jvj+58]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+58];
pile[v[22]]=459; pile[WZ1]=jvj+26; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(459,jvj+26,jvj+31)*/
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(117,jvj+26,V80)*/
V80=pile[WZ2]; 
V79=100*V80;
V78=V79/V73;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+31; 
(*f[42])( );     /*SRA1(135,0,jvj+31,V64)*/
V64=pile[WZ3]; 
V63=incon;
pile[v[22]]=475; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(475,jvj+26,jvj+27)*/
x[jvj+28]=x[jvj+27] ;z[jvj+28]=z[jvj+27];
pile[v[22]]=135; pile[WZ1]=V64; pile[WZ2]=jvj+28; 
(*f[42])( );     /*SRA1(135,V64,jvj+28,V63)*/
V63=pile[WZ3]; 
l30:if(V63==incon) goto l31;
goto l34;
l35:pile[v[22]]=41; pile[WZ1]=V80; pile[WZ2]=V63; 
(*f[39])( );     /*SDX0(41,V80,V63,V148)*/
V148=pile[WZ3]; 
pile[WZ1]=V78; pile[WZ2]=V148; 
(*f[39])( );     /*SDX0(41,V78,V148,V150)*/
V150=pile[WZ3]; 
pile[v[22]]=V150; pile[WZ1]=37; 
(*f[38])( );     /*SPC0(V150,37,V152)*/
V152=pile[WZ2]; 
pile[v[22]]=V152; 
(*f[40])( );     /*SLG0(V152)*/
goto l33;
l40:pile[v[22]]=41; pile[WZ1]=V73; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(41,V73,V61,V141)*/
V141=pile[WZ3]; 
pile[WZ1]=V71; pile[WZ2]=V141; 
(*f[39])( );     /*SDX0(41,V71,V141,V143)*/
V143=pile[WZ3]; 
pile[v[22]]=V143; pile[WZ1]=37; 
(*f[38])( );     /*SPC0(V143,37,V145)*/
V145=pile[WZ2]; 
pile[v[22]]=V145; 
(*f[38])( );     /*SPC0(V145,37,V146)*/
V146=pile[WZ2]; 
pile[v[22]]=V146; 
(*f[40])( );     /*SLG0(V146)*/
pile[v[22]]=763; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(763,jvj+29,jvj+30)*/
x[jvj+58]=x[jvj+30] ;z[jvj+58]=z[jvj+30];
goto l32;
l41:pile[v[22]]=1; 
(*f[23])( );     /*EDITE0(1)*/
goto l66;
l42:pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l66;
l43:pile[v[22]]=N; 
(*f[310])( );     /*PBCMP0(N)*/
goto l66;
l44:pile[v[22]]=1; pile[WZ1]=N; 
(*f[400])( );     /*ALCTU0(1,N)*/
goto l66;
l45:pile[v[22]]=N; 
(*f[404])( );     /*SORCREE0(N)*/
goto l66;
l46:pile[v[22]]=77; pile[WZ1]=80; pile[WZ2]=32; 
(*f[408])( );     /*EDITOUTPB1(77,80,32)*/
goto l66;
l47:pile[v[22]]=2; 
(*f[258])( );     /*SMV1(2,V)*/
V=pile[WZ1]; 
pile[v[22]]=N; pile[WZ1]=V; 
(*f[405])( );     /*CONDENSER0(N,V)*/
goto l66;
l48:if(F!=84&&F!=78&&F!=85) goto l66;
pile[v[22]]=3; 
(*f[135])( );     /*LND3(3,NR)*/
NR=pile[WZ1]; 
pile[v[22]]=N; pile[WZ1]=F; pile[WZ2]=NR; 
(*f[399])( );     /*ESSAIAZERO0(N,F,NR)*/
goto l66;
l49:pile[v[22]]=0; pile[WZ1]=(-10098); 
(*f[37])( );     /*SRA0(0,(-10098),V130)*/
V130=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V130; pile[WZ2]=854; 
(*f[42])( );     /*SRA1(135,V130,854,V131)*/
V131=pile[WZ3]; 
V175=V131-1;
V176=0;
l120:if((V176<=V175)) goto l121;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
pile[v[22]]=0; 
(*f[135])( );     /*LND3(0,V48)*/
V48=pile[WZ1]; 
x[jvj+33]=incon;
if((V48==0)) goto l20;
V53=sepfacts+V48;
x[jvj+57]=V53 ;z[jvj+57]=(V53<=sepcte) ? V53 : 0;
x[jvj+33]=x[jvj+57] ;z[jvj+33]=z[jvj+57];
goto l50;
l51:pile[v[22]]=159; pile[WZ1]=N; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(159,N,jvj+34)*/
pile[v[22]]=258; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(258,N,jvj+35)*/
l52:if((x[jvj+34]<=0)) goto l66;
x[jvj+36]=s[x[jvj+34]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+34];
pile[v[22]]=493; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(493,jvj+36,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=jvj+36; pile[WZ1]=jvj+35; 
(*f[401])( );     /*SOLDANS0(jvj+36,jvj+35,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=11068; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11068,0,V119)*/
V119=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V35; pile[WZ2]=V119; 
(*f[39])( );     /*SDX0(41,V35,V119,V120)*/
V120=pile[WZ3]; 
pile[WZ1]=V32; pile[WZ2]=V120; 
(*f[39])( );     /*SDX0(41,V32,V120,V122)*/
V122=pile[WZ3]; 
pile[v[22]]=V122; 
(*f[40])( );     /*SLG0(V122)*/
l53:x[jvj+34]=t[x[jvj+34]];
goto l52;
l55:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=983; 
(*f[42])( );     /*SRA1(135,0,983,V134)*/
V134=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V57; pile[WZ2]=V134; 
(*f[39])( );     /*SDX0(41,V57,V134,V135)*/
V135=pile[WZ3]; 
pile[v[22]]=V135; 
(*f[40])( );     /*SLG0(V135)*/
x[jvj+32]=1804 ;z[jvj+32]=1804;
goto l36;
l59:if((UR!=71)) goto l63;
pile[v[22]]=878; pile[WZ1]=N; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(878,N,jvj+43)*/
l60:if((x[jvj+43]<=0)) goto l63;
x[jvj+16]=s[x[jvj+43]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+43];
pile[v[22]]=163; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l62;     /*FNDC1(163,jvj+16,V45)*/
V45=pile[WZ2]; 
if((V45==(-7141))) goto l61;
l62:pile[v[22]]=454; pile[WZ1]=jvj+16; 
(*f[71])( );     /*ENLV0(454,jvj+16)*/
pile[WZ1]=N; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(454,N,jvj+17)*/
x[jvj+56]=x[jvj+17] ;z[jvj+56]=z[jvj+17];
l17:if((x[jvj+56]<=0)) goto l61;
x[jvj+18]=s[x[jvj+56]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+56];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=jvj+16; 
(*f[406])( );     /*ALCAD0(jvj+16,jvj+19)*/
pile[WZ1]=454; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+16,454,jvj+19)*/
x[jvj+56]=t[x[jvj+56]];
goto l17;
l61:x[jvj+43]=t[x[jvj+43]];
goto l60;
l63:if((UR!=88)) goto l66;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=1258; pile[WZ1]=jvj+9; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(1258,jvj+9,jvj+44)*/
l64:if((x[jvj+44]<=0)) goto l66;
x[jvj+11]=s[x[jvj+44]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+44];
pile[v[22]]=493; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(493,jvj+11,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,0,493,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V27; pile[WZ2]=V112; 
(*f[39])( );     /*SDX0(41,V27,V112,V113)*/
V113=pile[WZ3]; 
pile[v[22]]=V113; 
(*f[40])( );     /*SLG0(V113)*/
pile[v[22]]=1255; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1255,jvj+9,jvj+10)*/
pile[v[22]]=256; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(256,jvj+11,jvj+12)*/
x[jvj+55]=x[jvj+10] ;z[jvj+55]=z[jvj+10];
l15:if((x[jvj+55]<=0)) goto l65;
x[jvj+13]=s[x[jvj+55]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+55];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=jvj+12; pile[WZ1]=1258; pile[WZ2]=jvj+15; 
(*f[300])( );     /*TRI10(jvj+12,1258,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[30])( );if(v[102]) goto l16;     /*EVL0(jvj+14,jvj+15,RES)*/
RES=pile[WZ2]; 
V31=RES;
V116=x[jvj+13];
V118=V31;
pile[v[22]]=20; pile[WZ1]=V116; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V116,0,V115)*/
V115=pile[WZ3]; 
pile[WZ1]=V118; pile[WZ2]=V115; 
(*f[39])( );     /*SDX0(20,V118,V115,V117)*/
V117=pile[WZ3]; 
pile[v[22]]=V117; 
(*f[40])( );     /*SLG0(V117)*/
l16:x[jvj+55]=t[x[jvj+55]];
goto l15;
l65:x[jvj+44]=t[x[jvj+44]];
goto l64;
l69:v[62]=V47;
goto l70;
l73:if((KR!=68)) goto l76;
if((DN!=0)) goto l74;
pile[v[22]]=276; pile[WZ1]=N; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(276,N,jvj+47)*/
if((x[jvj+47]!=68)) goto l74;
pile[v[22]]=N; pile[WZ1]=1; 
(*f[396])( );     /*ALCAC0(N,1)*/
l74:if((DN<=1)) goto l75;
pile[v[22]]=0; pile[WZ1]=(-5628); 
(*f[37])( );     /*SRA0(0,(-5628),V87)*/
V87=pile[WZ2]; 
pile[v[22]]=V87; pile[WZ1]=(-712); 
(*f[37])( );     /*SRA0(V87,(-712),V88)*/
V88=pile[WZ2]; 
pile[v[22]]=V88; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V88,(-9543),V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V89; pile[WZ1]=(-5642); 
(*f[37])( );     /*SRA0(V89,(-5642),V90)*/
V90=pile[WZ2]; 
pile[v[22]]=V90; 
(*f[40])( );     /*SLG0(V90)*/
l75:if((DN!=1)) goto l76;
V106=x[N];
pile[v[22]]=0; pile[WZ1]=(-712); 
(*f[37])( );     /*SRA0(0,(-712),V102)*/
V102=pile[WZ2]; 
pile[v[22]]=V102; pile[WZ1]=(-5629); 
(*f[37])( );     /*SRA0(V102,(-5629),V103)*/
V103=pile[WZ2]; 
pile[v[22]]=V103; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V103,(-9543),V104)*/
V104=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V106; pile[WZ2]=V104; 
(*f[39])( );     /*SDX0(20,V106,V104,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=V105; 
(*f[40])( );     /*SLG0(V105)*/
l76:if(x[jvj+51]==incon) goto l77;
goto l78;
l77:if((DN!=1)) goto l78;
if(KR!=78&&KR!=74&&KR!=82&&KR!=90) goto l78;
pile[v[22]]=878; pile[WZ1]=N; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(878,N,jvj+46)*/
if((x[jvj+46]<=0)) goto l78;
x[jvj+59]=s[x[jvj+46]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+46];
x[jvj+51]=x[jvj+59] ;z[jvj+51]=z[jvj+59];
goto l78;
l80:pile[v[22]]=UR; pile[WZ1]=jvj+6; 
(*f[115])( );     /*SORBL0(UR,jvj+6)*/
goto l81;
l84:if((x[jvj+7]==(-99999998))) goto l85;
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=274; pile[WZ3]=jvj+7; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(109,jvj+7,274,jvj+7,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; 
(*f[129])( );if(v[102]) goto l85;     /*EDIBLOC0(jvj+49,jvj+50)*/
goto l85;
l88:if(KR!=68&&KR!=69&&KR!=78&&KR!=74&&KR!=82&&KR!=90) goto l94;
V169=F;
if((V169>=97)) goto l117;
if((V169<65)) goto l115;
if((V169<=90)) goto l116;
l115:V9=134;
l89:if((V9==135)) goto l90;
goto l94;
l90:pile[v[22]]=1; 
(*f[258])( );     /*SMV1(1,RR)*/
RR=pile[WZ1]; 
x[jvj+60]=incon;
pile[v[22]]=878; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(878,N,jvj+4)*/
goto l1;
l92:x[jvj+51]=x[jvj+60] ;z[jvj+51]=z[jvj+60];
R=RR;
vo[16]=x[jvj+51];vz[16]=0;
if(x[jvj+51]!=incon) goto l5;
goto l94;
l95:if((KR!=74)) goto l96;
if((x[jvj+51]==250)) goto l96;
pile[v[22]]=jvj+51; 
(*f[397])( );     /*LECTPART0(jvj+51)*/
l96:if((KR!=82)) goto l97;
if((x[jvj+51]==250)) goto l97;
pile[v[22]]=jvj+51; 
(*f[398])( );     /*SORDON0(jvj+51)*/
l97:if((KR!=90)) goto l98;
pile[v[22]]=jvj+51; 
(*f[407])( );     /*SORDONNEES0(jvj+51)*/
l98:if((KR!=68)) goto l101;
if((x[jvj+51]!=250)) goto l99;
pile[v[22]]=276; pile[WZ1]=N; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l99;     /*FNDO0(276,N,jvj+52)*/
if((x[jvj+52]!=68)) goto l99;
pile[v[22]]=N; pile[WZ1]=1; 
(*f[396])( );     /*ALCAC0(N,1)*/
l99:if(R!=incon) goto l100;
l101:if((KR!=78)) goto l102;
if((x[jvj+51]==250)) goto l102;
vv[11]=2;
pile[v[22]]=994; pile[WZ1]=1238; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(994,1238,68)*/
pile[v[22]]=158; pile[WZ1]=1185; pile[WZ2]=218; pile[WZ3]=jvj+51; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(158,1185,218,jvj+51,jvj+53)*/
pile[v[22]]=jvj+53; 
(*f[191])( );     /*MANAGER0(jvj+53)*/
pile[v[22]]=1238; pile[WZ1]=994; 
(*f[71])( );     /*ENLV0(1238,994)*/
l102:if(R!=incon) goto l103;
goto l104;
l100:if((x[jvj+51]==250)) goto l101;
pile[v[22]]=0; pile[WZ1]=(-712); 
(*f[37])( );     /*SRA0(0,(-712),V91)*/
V91=pile[WZ2]; 
pile[v[22]]=V91; pile[WZ1]=(-5629); 
(*f[37])( );     /*SRA0(V91,(-5629),V92)*/
V92=pile[WZ2]; 
pile[v[22]]=V92; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V92,(-9543),V93)*/
V93=pile[WZ2]; 
pile[v[22]]=V93; pile[WZ1]=R; 
(*f[37])( );     /*SRA0(V93,R,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=V94; 
(*f[40])( );     /*SLG0(V94)*/
goto l101;
l103:if((KR!=69)) goto l104;
if((x[jvj+51]!=250)) goto l93;
pile[v[22]]=0; pile[WZ1]=(-3310); 
(*f[37])( );     /*SRA0(0,(-3310),V84)*/
V84=pile[WZ2]; 
pile[v[22]]=V84; pile[WZ1]=R; 
(*f[37])( );     /*SRA0(V84,R,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=(-3412); 
(*f[37])( );     /*SRA0(V85,(-3412),V86)*/
V86=pile[WZ2]; 
pile[v[22]]=V86; 
(*f[40])( );     /*SLG0(V86)*/
l93:if((x[jvj+51]==250)) goto l104;
V1=x[jvj+51];
pile[v[22]]=878; pile[WZ1]=N; pile[WZ2]=V1; 
(*f[134])( );     /*OTA0(878,N,V1)*/
goto l104;
l105:if(KR!=78&&KR!=74&&KR!=82&&KR!=90) goto l106;
pile[v[22]]=0; pile[WZ1]=(-5628); 
(*f[37])( );     /*SRA0(0,(-5628),V98)*/
V98=pile[WZ2]; 
pile[v[22]]=V98; pile[WZ1]=(-712); 
(*f[37])( );     /*SRA0(V98,(-712),V99)*/
V99=pile[WZ2]; 
pile[v[22]]=V99; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V99,(-9543),V100)*/
V100=pile[WZ2]; 
pile[v[22]]=V100; pile[WZ1]=(-5643); 
(*f[37])( );     /*SRA0(V100,(-5643),V101)*/
V101=pile[WZ2]; 
pile[v[22]]=V101; 
(*f[40])( );     /*SLG0(V101)*/
goto l106;
l114:V17=134;
goto l11;
l116:V9=135;
goto l89;
l117:if((V169<=122)) goto l116;
goto l115;
l119:V174=c[0][V172];
V173=V174;
putchar(V173);
V172++;
goto l118;
l121:V178=c[0][V176];
V177=V178;
putchar(V177);
V176++;
goto l120;
}
