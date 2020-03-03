#include "dx.h"
void ETUREG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V33=0,V43=0,A=0,V38=0,V44=0,B=0,V39=0,V45=0,V46=0,V35=0,V49=0,V47=0,V48=0,V51=0,V57=0,V68=0,V55=0,V62=0,V69=0,V56=0,V63=0,V67=0,V70=0,V71=0,V59=0,V74=0,V72=0,V73=0,V76=0,V52=0,M=0,V24=0,V25=0,V26=0,V2=0,V28=0,V29=0,V30=0,V5=0,V9=0,PP=0,V8=0,V12=0,V11=0,V14=0,V13=0,P=0,V22=0,V130=0,V129=0,V131=0,V132=0,V133=0,D=0,V134=0,V136=0,V137=0,V138=0,V140=0,V141=0,V142=0,V144=0,V145=0,V147=0,V148=0,V149=0,V150=0,V151=0,Q=0,V152=0,V154=0,V185=0,V10=0,V19=0,V17=0,V18=0,V21=0,V105=0,V103=0,V104=0,V107=0,V102=0,V108=0,V109=0,V83=0,V115=0,V113=0,V114=0,V117=0,V112=0,V118=0,V119=0,V87=0,V93=0,V92=0,V95=0,V94=0,V81=0,V79=0,V188=0,V99=0,V91=0,V157=0,V158=0,V159=0,V160=0,V161=0,V163=0,V164=0,V166=0,V168=0,V169=0,V171=0,V172=0,V97=0,V98=0,V121=0,V122=0,V120=0,V124=0,V123=0,V96=0,V173=0,V174=0,V176=0,V177=0,V178=0,V179=0,V37=0,V61=0,V4=0,V7=0,V86=0,V90=0,V216=0,V215=0;
int E,EE,NA,NB,RS,RA,RB;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=65;
x[jvj+1]=10992;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==444&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; EE=pile[v[22]+1]; NA=pile[v[22]+2]; NB=pile[v[22]+3]; RS=pile[v[22]+4]; RA=pile[v[22]+5]; RB=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=250; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(250,250,jvj+16)*/
if((NB>0)) goto l1;
if((NB>=0)) goto l24;
V57=(-999999);
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(1484,854,V74)*/
V74=pile[WZ2]; 
V72=sepfacts+1;
V73=sepfacts+V74;
l20:if((V72>V73)) goto l23;
V76=r[V72];
if((V76!=1)) goto l21;
x[jvj+8]=V72 ;z[jvj+8]=(V72<=sepcte) ? V72 : 0;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(0,117,jvj+11)*/
pile[v[22]]=983; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(983,jvj+8,jvj+9)*/
pile[v[22]]=1001; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1001,jvj+9,jvj+10)*/
x[jvj+55]=x[jvj+10] ;z[jvj+55]=z[jvj+10];
l15:if((x[jvj+55]<=0)) goto l19;
x[jvj+7]=s[x[jvj+55]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+55];
pile[v[22]]=683; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(683,jvj+7,V67)*/
V67=pile[WZ2]; 
if((V67!=NA)) goto l16;
V62=incon;
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(737,jvj+7,V68)*/
V68=pile[WZ2]; 
V55=V68;
V62=V55;
l13:V63=incon;
pile[v[22]]=846; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(846,jvj+7,V69)*/
V69=pile[WZ2]; 
V56=V69;
V63=V56;
l79:x[jvj+61]=x[EE] ;z[jvj+61]=z[EE];
l80:if((x[jvj+61]>0)) goto l82;
V61=134;
l17:if((V61==135)) goto l18;
l16:x[jvj+55]=t[x[jvj+55]];
goto l15;
l1:V33=(-999999);
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(1484,854,V49)*/
V49=pile[WZ2]; 
V47=sepfacts+1;
V48=sepfacts+V49;
l10:if((V47>V48)) goto l22;
V51=r[V47];
if((V51!=1)) goto l11;
x[jvj+3]=V47 ;z[jvj+3]=(V47<=sepcte) ? V47 : 0;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(0,117,jvj+6)*/
pile[v[22]]=983; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(983,jvj+3,jvj+4)*/
pile[v[22]]=1001; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1001,jvj+4,jvj+5)*/
x[jvj+54]=x[jvj+5] ;z[jvj+54]=z[jvj+5];
l5:if((x[jvj+54]<=0)) goto l9;
x[jvj+2]=s[x[jvj+54]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+54];
V38=incon;
pile[v[22]]=737; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(737,jvj+2,V43)*/
V43=pile[WZ2]; 
A=V43;
V38=A;
l3:V39=incon;
pile[v[22]]=846; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(846,jvj+2,V44)*/
V44=pile[WZ2]; 
B=V44;
V39=B;
l75:x[jvj+60]=x[EE] ;z[jvj+60]=z[EE];
l76:if((x[jvj+60]>0)) goto l78;
V37=134;
l7:if((V37==135)) goto l8;
l6:x[jvj+54]=t[x[jvj+54]];
goto l5;
l2:V38=0;
goto l3;
l4:V39=0;
goto l75;
l8:V45=V38+V39;
pile[v[22]]=jvj+6; pile[WZ1]=117; pile[WZ2]=V45; 
(*f[186])( );     /*BTC0(jvj+6,117,V45)*/
goto l6;
l9:pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+6,V46)*/
V46=pile[WZ2]; 
V35=V46;
if(V35>V33) V33=V35;
l11:V47++;
goto l10;
l12:V62=0;
goto l13;
l14:V63=0;
goto l79;
l18:V70=V62+V63;
pile[v[22]]=jvj+11; pile[WZ1]=117; pile[WZ2]=V70; 
(*f[186])( );     /*BTC0(jvj+11,117,V70)*/
goto l16;
l19:pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+11,V71)*/
V71=pile[WZ2]; 
V59=V71;
if(V59>V57) V57=V59;
l21:V72++;
goto l20;
l22:if((V33==(-999999))) goto l24;
V52=V33/2;
M=V52;
l42:pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l64;     /*FNDC0(1484,854,V19)*/
V19=pile[WZ2]; 
V17=sepfacts+1;
V18=sepfacts+V19;
l43:if((V17>V18)) goto l64;
V21=r[V17];
if((V21!=1)) goto l44;
x[jvj+20]=V17 ;z[jvj+20]=(V17<=sepcte) ? V17 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(983,jvj+20,jvj+21)*/
x[jvj+22]=x[jvj+21] ;z[jvj+22]=z[jvj+21];
pile[v[22]]=1001; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1001,jvj+22,jvj+23)*/
if((x[jvj+23]==0)) goto l44;
V185=x[E];
l38:if((V185>0)) goto l39;
if((NB<=0)) goto l44;
pile[v[22]]=jvj+20; pile[WZ1]=109; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+20,109,jvj+19)*/
pile[v[22]]=jvj+16; pile[WZ1]=NA; pile[WZ2]=NB; pile[WZ3]=M; pile[WZ4]=jvj+19; 
(*f[803])( );     /*ETUCOMP0(jvj+16,NA,NB,M,jvj+19)*/
pile[v[22]]=RS; pile[WZ1]=716; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(RS,716,jvj+19)*/
l44:V17++;
goto l43;
l23:if((V57==(-999999))) goto l24;
M=V57;
goto l42;
l24:M=0;
goto l42;
l26:x[jvj+12]=s[x[jvj+56]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+56];
pile[v[22]]=683; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(683,jvj+12,V24)*/
V24=pile[WZ2]; 
if((V24!=D)) goto l27;
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(737,jvj+12,V25)*/
V25=pile[WZ2]; 
x[jvj+62]=x[EE] ;z[jvj+62]=z[EE];
l83:if((x[jvj+62]>0)) goto l85;
V4=134;
l28:if((V4==135)) goto l29;
l27:x[jvj+56]=t[x[jvj+56]];
l25:if((x[jvj+56]>0)) goto l26;
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(117,jvj+13,V26)*/
V26=pile[WZ2]; 
V2=V26;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+15; 
(*f[46])( );     /*TRI0(0,117,jvj+15)*/
x[jvj+57]=x[jvj+23] ;z[jvj+57]=z[jvj+23];
l30:if((x[jvj+57]>0)) goto l31;
pile[v[22]]=117; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(117,jvj+15,V30)*/
V30=pile[WZ2]; 
V5=V30;
V22=V2+V5;
pile[v[22]]=M; pile[WZ1]=V22; 
(*f[784])( );if(v[102]) goto l40;     /*RAPPORT0(M,V22,V10)*/
V10=pile[WZ2]; 
V8=incon;
pile[v[22]]=V5; pile[WZ1]=V2; 
(*f[783])( );if(v[102]) goto l35;     /*POURMILLE0(V5,V2,V9)*/
V9=pile[WZ2]; 
PP=V9;
V8=PP;
l41:Q=V10;
P=V8;
if((D!=NA)) goto l36;
pile[v[22]]=jvj+16; pile[WZ1]=510; pile[WZ2]=P; 
(*f[43])( );     /*CHGC2(jvj+16,510,P)*/
pile[WZ1]=609; pile[WZ2]=V22; 
(*f[43])( );     /*CHGC2(jvj+16,609,V22)*/
pile[v[22]]=Q; pile[WZ1]=1210; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(Q,1210,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=P; pile[WZ2]=947; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,P,947,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=V5; pile[WZ2]=846; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,V5,846,jvj+38)*/
pile[v[22]]=109; pile[WZ1]=jvj+20; pile[WZ2]=737; pile[WZ3]=V2; pile[WZ4]=jvj+38; pile[WZ5]=jvj+17; 
(*f[47])( );     /*QUADRI0(109,jvj+20,737,V2,jvj+38,jvj+17)*/
pile[v[22]]=RA; pile[WZ1]=716; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(RA,716,jvj+17)*/
l36:if((D!=NB)) goto l37;
pile[v[22]]=jvj+16; pile[WZ1]=515; pile[WZ2]=P; 
(*f[43])( );     /*CHGC2(jvj+16,515,P)*/
pile[WZ1]=610; pile[WZ2]=V22; 
(*f[43])( );     /*CHGC2(jvj+16,610,V22)*/
pile[v[22]]=Q; pile[WZ1]=1210; pile[WZ2]=jvj+39; 
(*f[46])( );     /*TRI0(Q,1210,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=P; pile[WZ2]=947; pile[WZ3]=jvj+40; 
(*f[189])( );     /*TRI4(jvj+39,P,947,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=V5; pile[WZ2]=846; pile[WZ3]=jvj+41; 
(*f[189])( );     /*TRI4(jvj+40,V5,846,jvj+41)*/
pile[v[22]]=109; pile[WZ1]=jvj+20; pile[WZ2]=737; pile[WZ3]=V2; pile[WZ4]=jvj+41; pile[WZ5]=jvj+18; 
(*f[47])( );     /*QUADRI0(109,jvj+20,737,V2,jvj+41,jvj+18)*/
pile[v[22]]=RB; pile[WZ1]=716; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(RB,716,jvj+18)*/
l37:if((V22<=0)) goto l40;
V130=x[jvj+20];
pile[v[22]]=20; pile[WZ1]=V130; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V130,0,V129)*/
V129=pile[WZ3]; 
pile[v[22]]=V129; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V129,40,V131)*/
V131=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V131; pile[WZ2]=683; 
(*f[98])( );     /*SRA3(135,V131,683,V132)*/
V132=pile[WZ3]; 
pile[v[22]]=V132; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V132,61,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=V133; pile[WZ1]=D; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V133,D,41,V134)*/
V134=pile[WZ3]; 
pile[v[22]]=V134; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V134,41,V136)*/
V136=pile[WZ2]; 
pile[v[22]]=V136; pile[WZ1]=(-7110); 
(*f[37])( );     /*SRA0(V136,(-7110),V12)*/
V12=pile[WZ2]; 
V11=incon;
135;
pile[v[22]]=V12; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V12,83,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V11,61,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V2; pile[WZ2]=V137; 
(*f[39])( );     /*SDX0(41,V2,V137,V138)*/
V138=pile[WZ3]; 
pile[v[22]]=V138; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V138,44,V140)*/
V140=pile[WZ2]; 
pile[v[22]]=V140; pile[WZ1]=(-7111); 
(*f[37])( );     /*SRA0(V140,(-7111),V14)*/
V14=pile[WZ2]; 
V13=incon;
135;
pile[v[22]]=V14; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V14,83,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V13,61,V141)*/
V141=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V5; pile[WZ2]=V141; 
(*f[39])( );     /*SDX0(41,V5,V141,V142)*/
V142=pile[WZ3]; 
pile[v[22]]=V142; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V142,46,V144)*/
V144=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=P; pile[WZ2]=V144; 
(*f[39])( );     /*SDX0(41,P,V144,V145)*/
V145=pile[WZ3]; 
pile[v[22]]=V145; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V145,(-9543),V147)*/
V147=pile[WZ2]; 
pile[v[22]]=V147; pile[WZ1]=(-7127); 
(*f[37])( );     /*SRA0(V147,(-7127),V148)*/
V148=pile[WZ2]; 
pile[v[22]]=V148; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V148,40,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V149; pile[WZ2]=1210; 
(*f[98])( );     /*SRA3(135,V149,1210,V150)*/
V150=pile[WZ3]; 
pile[v[22]]=V150; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V150,58,V151)*/
V151=pile[WZ2]; 
pile[v[22]]=V151; pile[WZ1]=Q; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V151,Q,41,V152)*/
V152=pile[WZ3]; 
pile[v[22]]=V152; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V152,41,V154)*/
V154=pile[WZ2]; 
pile[v[22]]=V154; 
(*f[40])( );     /*SLG0(V154)*/
l40:V185=t[V185];
goto l38;
l29:pile[v[22]]=jvj+13; pile[WZ1]=117; pile[WZ2]=V25; 
(*f[186])( );     /*BTC0(jvj+13,117,V25)*/
goto l27;
l31:x[jvj+14]=s[x[jvj+57]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+57];
pile[v[22]]=683; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(683,jvj+14,V28)*/
V28=pile[WZ2]; 
if((V28!=D)) goto l32;
pile[v[22]]=846; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(846,jvj+14,V29)*/
V29=pile[WZ2]; 
x[jvj+63]=x[EE] ;z[jvj+63]=z[EE];
l86:if((x[jvj+63]>0)) goto l88;
V7=134;
l33:if((V7==135)) goto l34;
l32:x[jvj+57]=t[x[jvj+57]];
goto l30;
l34:pile[v[22]]=jvj+15; pile[WZ1]=117; pile[WZ2]=V29; 
(*f[186])( );     /*BTC0(jvj+15,117,V29)*/
goto l32;
l35:V8=(-1);
goto l41;
l39:D=s[V185];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+13; 
(*f[46])( );     /*TRI0(0,117,jvj+13)*/
x[jvj+56]=x[jvj+23] ;z[jvj+56]=z[jvj+23];
goto l25;
l46:V103++;
l45:if((V103>V104)) goto l51;
V107=r[V103];
if((V107!=1)) goto l46;
x[jvj+24]=V103 ;z[jvj+24]=(V103<=sepcte) ? V103 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(983,jvj+24,jvj+25)*/
pile[v[22]]=1001; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1001,jvj+25,jvj+26)*/
x[jvj+58]=x[jvj+26] ;z[jvj+58]=z[jvj+26];
l47:if((x[jvj+58]<=0)) goto l46;
x[jvj+27]=s[x[jvj+58]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+58];
pile[v[22]]=683; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(683,jvj+27,V102)*/
V102=pile[WZ2]; 
if((V102!=V79)) goto l48;
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(737,jvj+27,V108)*/
V108=pile[WZ2]; 
x[jvj+64]=x[EE] ;z[jvj+64]=z[EE];
l89:if((x[jvj+64]>0)) goto l91;
V86=134;
l49:if((V86==135)) goto l50;
l48:x[jvj+58]=t[x[jvj+58]];
goto l47;
l50:pile[v[22]]=jvj+28; pile[WZ1]=117; pile[WZ2]=V108; 
(*f[186])( );     /*BTC0(jvj+28,117,V108)*/
goto l48;
l51:pile[v[22]]=117; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(117,jvj+28,V109)*/
V109=pile[WZ2]; 
V83=V109;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+33; 
(*f[46])( );     /*TRI0(0,117,jvj+33)*/
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(1484,854,V115)*/
V115=pile[WZ2]; 
V113=sepfacts+1;
V114=sepfacts+V115;
l52:if((V113>V114)) goto l58;
V117=r[V113];
if((V117!=1)) goto l53;
x[jvj+29]=V113 ;z[jvj+29]=(V113<=sepcte) ? V113 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(983,jvj+29,jvj+30)*/
pile[v[22]]=1001; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(1001,jvj+30,jvj+31)*/
x[jvj+59]=x[jvj+31] ;z[jvj+59]=z[jvj+31];
l54:if((x[jvj+59]<=0)) goto l53;
x[jvj+32]=s[x[jvj+59]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+59];
pile[v[22]]=683; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(683,jvj+32,V112)*/
V112=pile[WZ2]; 
if((V112!=V79)) goto l55;
pile[v[22]]=846; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(846,jvj+32,V118)*/
V118=pile[WZ2]; 
x[jvj+65]=x[EE] ;z[jvj+65]=z[EE];
l92:if((x[jvj+65]>0)) goto l94;
V90=134;
l56:if((V90==135)) goto l57;
l55:x[jvj+59]=t[x[jvj+59]];
goto l54;
l53:V113++;
goto l52;
l57:pile[v[22]]=jvj+33; pile[WZ1]=117; pile[WZ2]=V118; 
(*f[186])( );     /*BTC0(jvj+33,117,V118)*/
goto l55;
l58:pile[v[22]]=117; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(117,jvj+33,V119)*/
V119=pile[WZ2]; 
V87=V119;
V99=V83+V87;
if((V99<=0)) goto l65;
pile[v[22]]=V87; pile[WZ1]=V83; 
(*f[783])( );if(v[102]) goto l65;     /*POURMILLE0(V87,V83,V91)*/
V91=pile[WZ2]; 
V81=V91;
if((V79!=NA)) goto l61;
pile[v[22]]=jvj+16; pile[WZ1]=510; pile[WZ2]=V81; 
(*f[43])( );     /*CHGC2(jvj+16,510,V81)*/
pile[v[22]]=RA; pile[WZ1]=737; pile[WZ2]=V83; 
(*f[43])( );     /*CHGC2(RA,737,V83)*/
pile[WZ1]=846; pile[WZ2]=V87; 
(*f[43])( );     /*CHGC2(RA,846,V87)*/
pile[WZ1]=947; pile[WZ2]=V81; 
(*f[43])( );     /*CHGC2(RA,947,V81)*/
l61:if((V79!=NB)) goto l66;
pile[v[22]]=jvj+16; pile[WZ1]=515; pile[WZ2]=V81; 
(*f[43])( );     /*CHGC2(jvj+16,515,V81)*/
pile[v[22]]=RB; pile[WZ1]=737; pile[WZ2]=V83; 
(*f[43])( );     /*CHGC2(RB,737,V83)*/
pile[WZ1]=846; pile[WZ2]=V87; 
(*f[43])( );     /*CHGC2(RB,846,V87)*/
pile[WZ1]=947; pile[WZ2]=V81; 
(*f[43])( );     /*CHGC2(RB,947,V81)*/
l66:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=301; 
(*f[42])( );     /*SRA1(135,0,301,V157)*/
V157=pile[WZ3]; 
pile[v[22]]=V157; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V157,40,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V158; pile[WZ2]=683; 
(*f[98])( );     /*SRA3(135,V158,683,V159)*/
V159=pile[WZ3]; 
pile[v[22]]=V159; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V159,61,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=V160; pile[WZ1]=V79; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V160,V79,41,V161)*/
V161=pile[WZ3]; 
pile[v[22]]=V161; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V161,41,V163)*/
V163=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V83; pile[WZ2]=V163; 
(*f[39])( );     /*SDX0(41,V83,V163,V164)*/
V164=pile[WZ3]; 
pile[v[22]]=V164; pile[WZ1]=(-7110); 
(*f[37])( );     /*SRA0(V164,(-7110),V93)*/
V93=pile[WZ2]; 
V92=incon;
if((V83>1)) goto l59;
V92=V93;
l67:pile[v[22]]=41; pile[WZ1]=V87; pile[WZ2]=V92; 
(*f[39])( );     /*SDX0(41,V87,V92,V166)*/
V166=pile[WZ3]; 
pile[v[22]]=V166; pile[WZ1]=(-7111); 
(*f[37])( );     /*SRA0(V166,(-7111),V95)*/
V95=pile[WZ2]; 
V94=incon;
if((V87>1)) goto l60;
V94=V95;
l68:pile[v[22]]=V94; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V94,46,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V81; pile[WZ2]=V168; 
(*f[39])( );     /*SDX0(41,V81,V168,V169)*/
V169=pile[WZ3]; 
pile[v[22]]=V169; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V169,(-9543),V171)*/
V171=pile[WZ2]; 
pile[v[22]]=V171; pile[WZ1]=(-7127); 
(*f[37])( );     /*SRA0(V171,(-7127),V172)*/
V172=pile[WZ2]; 
pile[v[22]]=V172; 
(*f[40])( );     /*SLG0(V172)*/
l65:V188=t[V188];
l62:if((V188>0)) goto l63;
if((NB<=0)) goto l74;
pile[v[22]]=510; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l74;     /*FNDC0(510,jvj+16,V121)*/
V121=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l74;     /*FNDC0(515,jvj+16,V122)*/
V122=pile[WZ2]; 
V120=V121+V122;
V124=V121-V122;
V123=V124*1000;
if((V120!=0)) goto l96;
V96=999999999;
l72:pile[v[22]]=V96; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[804])( );     /*CVNBPRIO0(V96,jvj+34,jvj+35)*/
V97=incon;
if((x[jvj+34]==36)) goto l69;
V97=NB;
l70:V98=incon;
if((x[jvj+34]==36)) goto l71;
V98=NA;
l73:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1059; 
(*f[42])( );     /*SRA1(135,0,1059,V173)*/
V173=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V97; pile[WZ2]=V173; 
(*f[39])( );     /*SDX0(41,V97,V173,V174)*/
V174=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V174; pile[WZ2]=586; 
(*f[42])( );     /*SRA1(135,V174,586,V176)*/
V176=pile[WZ3]; 
pile[WZ1]=V176; pile[WZ2]=jvj+35; 
(*f[42])( );     /*SRA1(135,V176,jvj+35,V177)*/
V177=pile[WZ3]; 
pile[v[22]]=V177; pile[WZ1]=(-6980); 
(*f[37])( );     /*SRA0(V177,(-6980),V178)*/
V178=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V98; pile[WZ2]=V178; 
(*f[39])( );     /*SDX0(41,V98,V178,V179)*/
V179=pile[WZ3]; 
pile[v[22]]=V179; 
(*f[40])( );     /*SLG0(V179)*/
pile[v[22]]=RS; pile[WZ1]=612; pile[WZ2]=jvj+35; 
(*f[35])( );     /*CHGC1(RS,612,jvj+35)*/
pile[WZ1]=550; pile[WZ2]=jvj+34; 
(*f[35])( );     /*CHGC1(RS,550,jvj+34)*/
l74:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; return;
l59:pile[v[22]]=V93; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V93,83,V92)*/
V92=pile[WZ2]; 
goto l67;
l60:pile[v[22]]=V95; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V95,83,V94)*/
V94=pile[WZ2]; 
goto l68;
l63:V79=s[V188];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+28; 
(*f[46])( );     /*TRI0(0,117,jvj+28)*/
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(1484,854,V105)*/
V105=pile[WZ2]; 
V103=sepfacts+1;
V104=sepfacts+V105;
goto l45;
l64:V188=x[E];
goto l62;
l69:V97=NA;
goto l70;
l71:V98=NB;
goto l73;
l77:V37=135;
goto l7;
l78:x[jvj+42]=s[x[jvj+60]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+60];
pile[v[22]]=jvj+42; pile[WZ1]=jvj+2; pile[WZ2]=jvj+43; 
(*f[806])( );     /*EQVALSYM0(jvj+42,jvj+2,jvj+43)*/
if((x[jvj+43]==135)) goto l77;
x[jvj+60]=t[x[jvj+60]];
goto l76;
l81:V61=135;
goto l17;
l82:x[jvj+44]=s[x[jvj+61]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+61];
pile[v[22]]=jvj+44; pile[WZ1]=jvj+7; pile[WZ2]=jvj+45; 
(*f[806])( );     /*EQVALSYM0(jvj+44,jvj+7,jvj+45)*/
if((x[jvj+45]==135)) goto l81;
x[jvj+61]=t[x[jvj+61]];
goto l80;
l84:V4=135;
goto l28;
l85:x[jvj+46]=s[x[jvj+62]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+62];
pile[v[22]]=jvj+46; pile[WZ1]=jvj+12; pile[WZ2]=jvj+47; 
(*f[806])( );     /*EQVALSYM0(jvj+46,jvj+12,jvj+47)*/
if((x[jvj+47]==135)) goto l84;
x[jvj+62]=t[x[jvj+62]];
goto l83;
l87:V7=135;
goto l33;
l88:x[jvj+48]=s[x[jvj+63]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+63];
pile[v[22]]=jvj+48; pile[WZ1]=jvj+14; pile[WZ2]=jvj+49; 
(*f[806])( );     /*EQVALSYM0(jvj+48,jvj+14,jvj+49)*/
if((x[jvj+49]==135)) goto l87;
x[jvj+63]=t[x[jvj+63]];
goto l86;
l90:V86=135;
goto l49;
l91:x[jvj+50]=s[x[jvj+64]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+64];
pile[v[22]]=jvj+50; pile[WZ1]=jvj+27; pile[WZ2]=jvj+51; 
(*f[806])( );     /*EQVALSYM0(jvj+50,jvj+27,jvj+51)*/
if((x[jvj+51]==135)) goto l90;
x[jvj+64]=t[x[jvj+64]];
goto l89;
l93:V90=135;
goto l56;
l94:x[jvj+52]=s[x[jvj+65]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+65];
pile[v[22]]=jvj+52; pile[WZ1]=jvj+32; pile[WZ2]=jvj+53; 
(*f[806])( );     /*EQVALSYM0(jvj+52,jvj+32,jvj+53)*/
if((x[jvj+53]==135)) goto l93;
x[jvj+65]=t[x[jvj+65]];
goto l92;
l95:V96=V216;
goto l72;
l96:V215=V123/V120;
V216=V215;
if((V216!=0)) goto l95;
if((V123<=0)) goto l95;
V96=1;
goto l72;
}
