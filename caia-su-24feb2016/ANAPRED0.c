#include "dx.h"
void ANAPRED0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RS=0,RES=0,Q=0,V72=0,V74=0,V75=0,M=0,MM=0,NN=0,NT=0,V70=0,V79=0,V78=0,V81=0,V80=0,V86=0,V83=0,V85=0,V89=0,V88=0,N=0,RT=0,V15=0,V9=0,S=0,V11=0,V10=0,V13=0,V94=0,V95=0,V96=0,V97=0,V12=0,V107=0,V100=0,V101=0,V102=0,V103=0,V104=0,V105=0,V106=0,V108=0,V109=0,V111=0,V14=0,V30=0,V24=0,V23=0,V26=0,V25=0,V28=0,V115=0,V116=0,V117=0,V118=0,V27=0,V121=0,V35=0,V130=0,V133=0,V135=0,V123=0,V124=0,V125=0,V126=0,V127=0,V128=0,V129=0,V131=0,V132=0,V134=0,V29=0,V46=0,V40=0,V39=0,V42=0,V41=0,V44=0,V138=0,V139=0,V140=0,V141=0,V43=0,V151=0,V144=0,V145=0,V146=0,V147=0,V148=0,V149=0,V150=0,V152=0,V153=0,V155=0,V45=0,V61=0,V55=0,V54=0,V57=0,V56=0,V59=0,V159=0,V160=0,V161=0,V162=0,V58=0,V165=0,V66=0,V174=0,V177=0,V179=0,V167=0,V168=0,V169=0,V170=0,V171=0,V172=0,V173=0,V175=0,V176=0,V178=0,V60=0;
int CT,X,B,I,SS;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=10818;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1281&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
CT=pile[v[22]]; X=pile[v[22]+1]; B=pile[v[22]+2]; I=pile[v[22]+3]; SS=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=RES=x[jvj+6]=x[jvj+9]=M=NT=N=RT=x[jvj+29]=incon;
pile[v[22]]=122; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(122,X,jvj+5)*/
pile[v[22]]=145; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(145,X,jvj+6)*/
x[jvj+10]=x[jvj+5] ;z[jvj+10]=z[jvj+5];
if((x[jvj+10]!=493)) goto l1;
if((x[jvj+6]!=25)) goto l1;
pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(935,B,jvj+7)*/
if((x[jvj+7]==547)) goto l1;
RES=67;
l9:pile[v[22]]=218; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(218,X,jvj+9)*/
l10:if(RES==incon) goto l11;
if(x[jvj+10]!=incon) goto l17;
l26:pile[v[22]]=117; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(117,X,NT)*/
NT=pile[WZ2]; 
l28:if(x[jvj+10]!=incon) goto l29;
if(NT!=incon) goto l33;
l34:if(RES==incon) goto l35;
l51:if(RT==incon) goto l52;
l53:if(x[jvj+6]!=incon) goto l49;
l110:if(M!=incon) goto l111;
l114:if(x[jvj+10]!=incon) goto l115;
l118:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; return;
l1:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,X,jvj+8)*/
l2:if((x[jvj+8]<=0)) goto l7;
x[jvj+3]=s[x[jvj+8]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+8];
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+35; 
(*f[46])( );     /*TRI0(0,416,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+35,20,158,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=B; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+36; pile[WZ5]=jvj+33; 
(*f[599])( );     /*QUADRI12(101,B,140,(-591),jvj+36,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=(-20); pile[WZ2]=128; pile[WZ3]=jvj+34; 
(*f[180])( );     /*TRIENS0(jvj+33,(-20),128,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=250; pile[WZ2]=109; pile[WZ3]=jvj+4; 
(*f[58])( );     /*TRI3(jvj+34,250,109,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[30])( );if(v[102]) goto l3;     /*EVL0(jvj+3,jvj+4,RS)*/
RS=pile[WZ2]; 
if((RS!=135)) goto l3;
x[jvj+8]=t[x[jvj+8]];
goto l2;
l3:RES=67;
l7:if(x[jvj+10]!=incon) goto l8;
goto l9;
l4:V72=incon;
pile[v[22]]=1015; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(1015,B,Q)*/
Q=pile[WZ2]; 
V72=Q;
l18:MM=V72;
V75=incon;
pile[v[22]]=1043; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1043,B,V74)*/
V74=pile[WZ2]; 
V75=V74;
l19:NN=V75;
if(M==incon) goto l20;
l23:if(x[jvj+6]!=incon) goto l24;
goto l26;
l5:V72=0;
goto l18;
l6:V75=0;
goto l19;
l8:if((x[jvj+10]!=1005)) goto l9;
pile[v[22]]=B; 
(*f[948])( );     /*PCTREUSSI0(B,M)*/
M=pile[WZ1]; 
goto l9;
l11:if(x[jvj+10]!=incon) goto l12;
goto l26;
l12:if(x[jvj+6]!=incon) goto l13;
l17:if((x[jvj+10]==695)) goto l4;
if(M==incon) goto l22;
goto l23;
l13:if(x[jvj+9]!=incon) goto l14;
goto l17;
l14:if((x[jvj+6]==25)) goto l15;
if((x[jvj+6]!=26)) goto l17;
pile[v[22]]=jvj+10; pile[WZ1]=B; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+10,B,jvj+12)*/
if((x[jvj+12]!=x[jvj+9])) goto l16;
goto l17;
l15:pile[v[22]]=jvj+10; pile[WZ1]=B; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+10,B,jvj+11)*/
if((x[jvj+11]==x[jvj+9])) goto l16;
goto l17;
l16:RES=135;
goto l17;
l20:if((MM!=NN)) goto l21;
pile[v[22]]=695; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(695,B,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(117,B,NT)*/
NT=pile[WZ2]; 
M=V70;
l31:pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(935,B,jvj+13)*/
if((x[jvj+13]==547)) goto l33;
V83=incon;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(936,B,V86)*/
V86=pile[WZ2]; 
if((V86<=0)) goto l27;
V83=V86;
l32:V85=100*V83;
if((V85<=30)) goto l33;
if((V85>=300)) goto l33;
V89=NT*V85;
V88=V89/100;
N=V88;
RT=V85;
goto l34;
l21:M=MM;
NT=NN;
goto l31;
l22:pile[v[22]]=jvj+10; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(jvj+10,B,M)*/
M=pile[WZ2]; 
goto l23;
l24:if((x[jvj+10]!=936)) goto l26;
if(x[jvj+6]!=27&&x[jvj+6]!=28) goto l25;
pile[v[22]]=117; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(117,X,V79)*/
V79=pile[WZ2]; 
V78=V79-1;
NT=V78;
l33:N=NT;
goto l34;
l25:if(x[jvj+6]!=29&&x[jvj+6]!=30) goto l26;
if((x[CT]==735)) goto l26;
pile[v[22]]=117; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(117,X,V81)*/
V81=pile[WZ2]; 
V80=V81+1;
NT=V80;
goto l33;
l27:V83=1;
goto l32;
l29:if(NT!=incon) goto l30;
goto l34;
l30:if((x[jvj+10]!=936)) goto l31;
goto l33;
l35:if(x[jvj+6]!=incon) goto l36;
l48:RES=134;
goto l51;
l36:if(M!=incon) goto l37;
goto l48;
l37:if(N!=incon) goto l38;
goto l48;
l38:if((x[jvj+6]==25)) goto l39;
if((x[jvj+6]==26)) goto l41;
if((x[jvj+6]==27)) goto l42;
if((x[jvj+6]==28)) goto l43;
if((x[jvj+6]==29)) goto l44;
if((x[jvj+6]==30)) goto l45;
if((x[jvj+6]==995)) goto l46;
if((x[jvj+6]==996)) goto l47;
if((x[jvj+6]!=1012)) goto l48;
if((M<=((N*11)/10)+2)&&(M>=((N*9)/10)-2)) goto l40;
goto l48;
l39:if((M==N)) goto l40;
goto l48;
l40:RES=135;
goto l51;
l41:if((M!=N)) goto l40;
goto l48;
l42:if((M>N)) goto l40;
goto l48;
l43:if((M>=N)) goto l40;
goto l48;
l44:if((M<N)) goto l40;
goto l48;
l45:if((M<=N)) goto l40;
goto l48;
l46:if(M>((N*11)/10)+2) goto l40;
goto l48;
l47:if(M<((N*9)/10)-2) goto l40;
goto l48;
l49:if((RES==134)) goto l50;
if((RES!=135)) goto l99;
if(x[jvj+6]==29||x[jvj+6]==30||x[jvj+6]==996) goto l54;
l99:if(x[jvj+10]!=incon) goto l100;
goto l110;
l50:if(x[jvj+6]==27||x[jvj+6]==995||x[jvj+6]==28) goto l54;
goto l99;
l52:RT=100;
goto l53;
l54:pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l99;     /*FNDO0(935,B,jvj+14)*/
if(x[jvj+14]!=547&&x[jvj+14]!=325) goto l110;
goto l99;
l56:V9=incon;
if((x[CT]==1080)) goto l57;
if((x[CT]==1042)) goto l58;
V9=10;
l62:x[jvj+16]=vo[12];z[jvj+16]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(109,jvj+16,jvj+17)*/
V107=x[jvj+17];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V100; pile[WZ2]=10818; 
(*f[98])( );     /*SRA3(135,V100,10818,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V101; 
(*f[39])( );     /*SDX0(41,1,V101,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=V102; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V102,125,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=V103; pile[WZ2]=64; 
(*f[41])( );     /*SRB0(V9,V103,64,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V104; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V104,876,V105)*/
V105=pile[WZ3]; 
pile[WZ1]=V105; pile[WZ2]=CT; 
(*f[42])( );     /*SRA1(135,V105,CT,V106)*/
V106=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V107; pile[WZ2]=V106; 
(*f[39])( );     /*SDX0(20,V107,V106,V11)*/
V11=pile[WZ3]; 
V10=incon;
pile[v[22]]=163; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l59;     /*FNDC1(163,jvj+16,S)*/
S=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=S; 
(*f[37])( );     /*SRA0(V11,S,V10)*/
V10=pile[WZ2]; 
l63:pile[v[22]]=135; pile[WZ1]=V10; pile[WZ2]=jvj+10; 
(*f[42])( );     /*SRA1(135,V10,jvj+10,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=M; pile[WZ2]=V108; 
(*f[39])( );     /*SDX0(41,M,V108,V109)*/
V109=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V109; pile[WZ2]=jvj+6; 
(*f[42])( );     /*SRA1(135,V109,jvj+6,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V111; 
(*f[39])( );     /*SDX0(41,N,V111,V13)*/
V13=pile[WZ3]; 
V12=incon;
if((RT!=100)) goto l60;
V12=V13;
l64:pile[v[22]]=V12; 
(*f[40])( );     /*SLG0(V12)*/
l65:if((V14==2)) goto l88;
l107:if(x[jvj+9]!=incon) goto l108;
goto l110;
l57:V9=30;
goto l62;
l58:V9=0;
goto l62;
l59:V10=V11;
goto l63;
l60:pile[v[22]]=V13; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V13,91,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V94; pile[WZ2]=531; 
(*f[42])( );     /*SRA1(135,V94,531,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=V95; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V95,58,V96)*/
V96=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=RT; pile[WZ2]=V96; 
(*f[39])( );     /*SDX0(41,RT,V96,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=V97; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V97,93,V12)*/
V12=pile[WZ2]; 
goto l64;
l61:if((V14<4)) goto l56;
goto l107;
l67:V24=incon;
if((x[CT]==1080)) goto l68;
if((x[CT]==1042)) goto l69;
V24=10;
l73:pile[v[22]]=B; pile[WZ1]=jvj+10; pile[WZ3]=jvj+20; 
(*f[45])( );if(v[102]) goto l76;     /*FNDZ0(B,jvj+10,V121,jvj+20)*/
V121=pile[WZ2]; 
x[jvj+19]=vo[12];z[jvj+19]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+19; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(109,jvj+19,jvj+21)*/
V35=V121;
V130=x[jvj+21];
V133=V35;
V135=x[jvj+9];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V123; pile[WZ2]=10818; 
(*f[98])( );     /*SRA3(135,V123,10818,V124)*/
V124=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V124; 
(*f[39])( );     /*SDX0(41,2,V124,V125)*/
V125=pile[WZ3]; 
pile[v[22]]=V125; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V125,125,V126)*/
V126=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=V126; pile[WZ2]=64; 
(*f[41])( );     /*SRB0(V24,V126,64,V127)*/
V127=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V127; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V127,876,V128)*/
V128=pile[WZ3]; 
pile[WZ1]=V128; pile[WZ2]=CT; 
(*f[42])( );     /*SRA1(135,V128,CT,V129)*/
V129=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V130; pile[WZ2]=V129; 
(*f[39])( );     /*SDX0(20,V130,V129,V26)*/
V26=pile[WZ3]; 
V25=incon;
pile[v[22]]=163; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l70;     /*FNDC1(163,jvj+19,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=V23; 
(*f[37])( );     /*SRA0(V26,V23,V25)*/
V25=pile[WZ2]; 
l74:pile[v[22]]=135; pile[WZ1]=V25; pile[WZ2]=jvj+10; 
(*f[42])( );     /*SRA1(135,V25,jvj+10,V131)*/
V131=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V133; pile[WZ2]=V131; 
(*f[39])( );     /*SDX0(20,V133,V131,V132)*/
V132=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V132; pile[WZ2]=jvj+6; 
(*f[42])( );     /*SRA1(135,V132,jvj+6,V134)*/
V134=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V135; pile[WZ2]=V134; 
(*f[39])( );     /*SDX0(20,V135,V134,V28)*/
V28=pile[WZ3]; 
V27=incon;
if((RT!=100)) goto l71;
V27=V28;
l75:pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
l76:if((V29==2)) goto l77;
goto l110;
l68:V24=30;
goto l73;
l69:V24=0;
goto l73;
l70:V25=V26;
goto l74;
l71:pile[v[22]]=V28; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V28,91,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V115; pile[WZ2]=531; 
(*f[42])( );     /*SRA1(135,V115,531,V116)*/
V116=pile[WZ3]; 
pile[v[22]]=V116; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V116,58,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=RT; pile[WZ2]=V117; 
(*f[39])( );     /*SDX0(41,RT,V117,V118)*/
V118=pile[WZ3]; 
pile[v[22]]=V118; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V118,93,V27)*/
V27=pile[WZ2]; 
goto l75;
l72:if((V29<4)) goto l67;
goto l110;
l77:pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l110;
l79:V40=incon;
if((x[CT]==1042)) goto l80;
V40=0;
l84:x[jvj+23]=vo[12];z[jvj+23]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(109,jvj+23,jvj+24)*/
V151=x[jvj+24];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V144)*/
V144=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V144; pile[WZ2]=10818; 
(*f[98])( );     /*SRA3(135,V144,10818,V145)*/
V145=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V145; 
(*f[39])( );     /*SDX0(41,3,V145,V146)*/
V146=pile[WZ3]; 
pile[v[22]]=V146; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V146,125,V147)*/
V147=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=V147; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(V40,V147,35,V148)*/
V148=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V148; pile[WZ2]=1000; 
(*f[42])( );     /*SRA1(135,V148,1000,V149)*/
V149=pile[WZ3]; 
pile[WZ1]=V149; pile[WZ2]=CT; 
(*f[42])( );     /*SRA1(135,V149,CT,V150)*/
V150=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V151; pile[WZ2]=V150; 
(*f[39])( );     /*SDX0(20,V151,V150,V42)*/
V42=pile[WZ3]; 
V41=incon;
pile[v[22]]=163; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l81;     /*FNDC1(163,jvj+23,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=V39; 
(*f[37])( );     /*SRA0(V42,V39,V41)*/
V41=pile[WZ2]; 
l85:pile[v[22]]=135; pile[WZ1]=V41; pile[WZ2]=jvj+10; 
(*f[42])( );     /*SRA1(135,V41,jvj+10,V152)*/
V152=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=M; pile[WZ2]=V152; 
(*f[39])( );     /*SDX0(41,M,V152,V153)*/
V153=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V153; pile[WZ2]=jvj+6; 
(*f[42])( );     /*SRA1(135,V153,jvj+6,V155)*/
V155=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V155; 
(*f[39])( );     /*SDX0(41,N,V155,V44)*/
V44=pile[WZ3]; 
V43=incon;
if((RT!=100)) goto l82;
V43=V44;
l86:pile[v[22]]=V43; 
(*f[40])( );     /*SLG0(V43)*/
l87:if((V45==2)) goto l88;
goto l107;
l80:V40=15;
goto l84;
l81:V41=V42;
goto l85;
l82:pile[v[22]]=V44; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V44,91,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V138; pile[WZ2]=531; 
(*f[42])( );     /*SRA1(135,V138,531,V139)*/
V139=pile[WZ3]; 
pile[v[22]]=V139; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V139,58,V140)*/
V140=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=RT; pile[WZ2]=V140; 
(*f[39])( );     /*SDX0(41,RT,V140,V141)*/
V141=pile[WZ3]; 
pile[v[22]]=V141; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V141,93,V43)*/
V43=pile[WZ2]; 
goto l86;
l83:if((V45<4)) goto l79;
goto l107;
l88:pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l107;
l90:V55=incon;
if((x[CT]==1042)) goto l91;
V55=0;
l95:pile[v[22]]=B; pile[WZ1]=jvj+10; pile[WZ3]=jvj+27; 
(*f[45])( );if(v[102]) goto l98;     /*FNDZ0(B,jvj+10,V165,jvj+27)*/
V165=pile[WZ2]; 
x[jvj+26]=vo[12];z[jvj+26]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+26; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(109,jvj+26,jvj+28)*/
V66=V165;
V174=x[jvj+28];
V177=V66;
V179=x[jvj+9];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V167)*/
V167=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V167; pile[WZ2]=10818; 
(*f[98])( );     /*SRA3(135,V167,10818,V168)*/
V168=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=4; pile[WZ2]=V168; 
(*f[39])( );     /*SDX0(41,4,V168,V169)*/
V169=pile[WZ3]; 
pile[v[22]]=V169; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V169,125,V170)*/
V170=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=V170; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(V55,V170,35,V171)*/
V171=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V171; pile[WZ2]=1000; 
(*f[42])( );     /*SRA1(135,V171,1000,V172)*/
V172=pile[WZ3]; 
pile[WZ1]=V172; pile[WZ2]=CT; 
(*f[42])( );     /*SRA1(135,V172,CT,V173)*/
V173=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V174; pile[WZ2]=V173; 
(*f[39])( );     /*SDX0(20,V174,V173,V57)*/
V57=pile[WZ3]; 
V56=incon;
pile[v[22]]=163; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l92;     /*FNDC1(163,jvj+26,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=V54; 
(*f[37])( );     /*SRA0(V57,V54,V56)*/
V56=pile[WZ2]; 
l96:pile[v[22]]=135; pile[WZ1]=V56; pile[WZ2]=jvj+10; 
(*f[42])( );     /*SRA1(135,V56,jvj+10,V175)*/
V175=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V177; pile[WZ2]=V175; 
(*f[39])( );     /*SDX0(20,V177,V175,V176)*/
V176=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V176; pile[WZ2]=jvj+6; 
(*f[42])( );     /*SRA1(135,V176,jvj+6,V178)*/
V178=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V179; pile[WZ2]=V178; 
(*f[39])( );     /*SDX0(20,V179,V178,V59)*/
V59=pile[WZ3]; 
V58=incon;
if((RT!=100)) goto l93;
V58=V59;
l97:pile[v[22]]=V58; 
(*f[40])( );     /*SLG0(V58)*/
l98:if((V60==2)) goto l77;
goto l110;
l91:V55=15;
goto l95;
l92:V56=V57;
goto l96;
l93:pile[v[22]]=V59; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V59,91,V159)*/
V159=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V159; pile[WZ2]=531; 
(*f[42])( );     /*SRA1(135,V159,531,V160)*/
V160=pile[WZ3]; 
pile[v[22]]=V160; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V160,58,V161)*/
V161=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=RT; pile[WZ2]=V161; 
(*f[39])( );     /*SDX0(41,RT,V161,V162)*/
V162=pile[WZ3]; 
pile[v[22]]=V162; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V162,93,V58)*/
V58=pile[WZ2]; 
goto l97;
l94:if((V60<4)) goto l90;
goto l110;
l100:if((RES==135)) goto l101;
if((RES!=134)) goto l103;
if(x[CT]!=1080&&x[CT]!=999) goto l103;
pile[v[22]]=CT; pile[WZ1]=158; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(CT,158,jvj+32)*/
pile[v[22]]=122; pile[WZ1]=jvj+10; pile[WZ2]=145; pile[WZ3]=jvj+6; pile[WZ4]=jvj+32; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(122,jvj+10,145,jvj+6,jvj+32,jvj+29)*/
l102:pile[v[22]]=SS; pile[WZ1]=1116; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(SS,1116,jvj+29)*/
l103:if(M!=incon) goto l104;
goto l107;
l101:if((x[CT]!=1042)) goto l103;
pile[v[22]]=CT; pile[WZ1]=158; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(CT,158,jvj+31)*/
pile[v[22]]=122; pile[WZ1]=jvj+10; pile[WZ2]=145; pile[WZ3]=jvj+6; pile[WZ4]=jvj+31; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(122,jvj+10,145,jvj+6,jvj+31,jvj+29)*/
goto l102;
l104:if(N!=incon) goto l105;
goto l107;
l105:if((RES==135)) goto l106;
if((RES!=134)) goto l107;
if((x[I]!=68)) goto l107;
V14=g[438];
if((V14<=0)) goto l107;
V15=vg[438];
if((V15!=0)) goto l55;
if((V14<3)) goto l56;
l55:pile[v[22]]=438; pile[WZ1]=10818; pile[WZ2]=0; pile[WZ3]=(-709); pile[WZ4]=CT; pile[WZ5]=jvj+15; 
(*f[232])( );     /*INTERP3(438,10818,0,(-709),CT,jvj+15)*/
if((x[jvj+15]==135)) goto l61;
goto l107;
l106:if((x[I]!=68)) goto l107;
V45=g[440];
if((V45<=0)) goto l107;
V46=vg[440];
if((V46!=0)) goto l78;
if((V45<3)) goto l79;
l78:pile[v[22]]=440; pile[WZ1]=10818; pile[WZ2]=0; pile[WZ3]=(-709); pile[WZ4]=CT; pile[WZ5]=jvj+22; 
(*f[232])( );     /*INTERP3(440,10818,0,(-709),CT,jvj+22)*/
if((x[jvj+22]==135)) goto l83;
goto l107;
l108:if((RES==135)) goto l109;
if((RES!=134)) goto l110;
if((x[I]!=68)) goto l110;
V29=g[439];
if((V29<=0)) goto l110;
V30=vg[439];
if((V30!=0)) goto l66;
if((V29<3)) goto l67;
l66:pile[v[22]]=439; pile[WZ1]=10818; pile[WZ2]=0; pile[WZ3]=(-709); pile[WZ4]=CT; pile[WZ5]=jvj+18; 
(*f[232])( );     /*INTERP3(439,10818,0,(-709),CT,jvj+18)*/
if((x[jvj+18]==135)) goto l72;
goto l110;
l109:if((x[I]!=68)) goto l110;
V60=g[441];
if((V60<=0)) goto l110;
V61=vg[441];
if((V61!=0)) goto l89;
if((V60<3)) goto l90;
l89:pile[v[22]]=441; pile[WZ1]=10818; pile[WZ2]=0; pile[WZ3]=(-709); pile[WZ4]=CT; pile[WZ5]=jvj+25; 
(*f[232])( );     /*INTERP3(441,10818,0,(-709),CT,jvj+25)*/
if((x[jvj+25]==135)) goto l94;
goto l110;
l111:if(N!=incon) goto l112;
goto l114;
l112:if(x[jvj+29]!=incon) goto l113;
goto l114;
l113:pile[v[22]]=jvj+29; pile[WZ1]=510; pile[WZ2]=M; 
(*f[43])( );     /*CHGC2(jvj+29,510,M)*/
pile[WZ1]=515; pile[WZ2]=N; 
(*f[43])( );     /*CHGC2(jvj+29,515,N)*/
goto l114;
l115:if(x[jvj+9]!=incon) goto l116;
goto l118;
l116:if(x[jvj+29]!=incon) goto l117;
goto l118;
l117:pile[v[22]]=jvj+10; pile[WZ1]=B; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l118;     /*FNDO0(jvj+10,B,jvj+30)*/
pile[v[22]]=jvj+29; pile[WZ1]=447; 
(*f[35])( );     /*CHGC1(jvj+29,447,jvj+30)*/
pile[WZ1]=459; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(jvj+29,459,jvj+9)*/
goto l118;
}
