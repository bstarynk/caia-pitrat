#include "dx.h"
void BILANPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0,V9=0,V4=0,V14=0,V16=0,V22=0,V17=0,V27=0,V29=0,V35=0,V30=0,V40=0,V42=0,V48=0,V43=0,V52=0,V55=0,SS=0,SA=0,V133=0,V255=0,V132=0,V134=0,EA=0,V61=0,V71=0,V62=0,V64=0,V187=0,V63=0,V65=0,DA=0,V79=0,V89=0,V80=0,V82=0,V204=0,V81=0,V83=0,EB=0,V97=0,V107=0,V98=0,V100=0,V221=0,V99=0,V101=0,DB=0,V115=0,V125=0,V116=0,V118=0,V238=0,V117=0,V119=0,V178=0,V181=0,V173=0,V174=0,V175=0,V176=0,V177=0,V179=0,V180=0,V182=0,V183=0,V184=0,V185=0,V262=0,V265=0,V136=0,V130=0,V139=0,V259=0,V260=0,V261=0,V263=0,V264=0,V266=0,V145=0,V148=0,V141=0,V142=0,V143=0,V144=0,V146=0,V147=0,V149=0,V150=0,V151=0,V153=0,V154=0,V155=0,V197=0,V200=0,V73=0,P=0,V191=0,V192=0,V193=0,V194=0,V195=0,V196=0,V198=0,V199=0,V201=0,V161=0,V164=0,V157=0,V158=0,V159=0,V160=0,V162=0,V163=0,V165=0,V166=0,V167=0,V169=0,V170=0,V171=0,V231=0,V234=0,V109=0,V94=0,V225=0,V226=0,V227=0,V228=0,V229=0,V230=0,V232=0,V233=0,V235=0,V214=0,V217=0,V91=0,V76=0,V208=0,V209=0,V210=0,V211=0,V212=0,V213=0,V215=0,V216=0,V218=0,V248=0,V251=0,V127=0,V112=0,V242=0,V243=0,V244=0,V245=0,V246=0,V247=0,V249=0,V250=0,V252=0;
int N,T,E,V,S,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=102;
x[jvj+1]=11236;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1475&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; T=pile[v[22]+1]; E=pile[v[22]+2]; V=pile[v[22]+3]; S=pile[v[22]+4]; D=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V52=999999;
x[jvj+93]=x[E] ;z[jvj+93]=z[E];
l33:if((x[jvj+93]>0)) goto l34;
if((V52!=999999)) goto l37;
SA=999999;
l1:V1=(-999999);
x[jvj+86]=x[E] ;z[jvj+86]=z[E];
l5:if((x[jvj+86]>0)) goto l6;
if((V1!=(-999999))) goto l41;
EA=(-1);
l9:V14=(-999999);
x[jvj+88]=x[E] ;z[jvj+88]=z[E];
l13:if((x[jvj+88]>0)) goto l14;
if((V14!=(-999999))) goto l47;
DA=(-1);
l17:V27=(-999999);
x[jvj+90]=x[E] ;z[jvj+90]=z[E];
l21:if((x[jvj+90]>0)) goto l22;
if((V27!=(-999999))) goto l53;
EB=(-1);
l25:V40=(-999999);
x[jvj+92]=x[E] ;z[jvj+92]=z[E];
l29:if((x[jvj+92]>0)) goto l30;
if((V40!=(-999999))) goto l59;
DB=(-1);
l65:if((SA>=999999)) goto l66;
V178=x[N];
V181=x[S];
pile[v[22]]=0; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(0,(-9543),V173)*/
V173=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V173; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V173,493,V174)*/
V174=pile[WZ3]; 
pile[v[22]]=V174; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V174,62,V175)*/
V175=pile[WZ2]; 
pile[v[22]]=V175; pile[WZ1]=1; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V175,1,41,V176)*/
V176=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V178; pile[WZ2]=V176; 
(*f[39])( );     /*SDX0(20,V178,V176,V177)*/
V177=pile[WZ3]; 
pile[v[22]]=V177; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V177,V,V179)*/
V179=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V181; pile[WZ2]=V179; 
(*f[39])( );     /*SDX0(20,V181,V179,V180)*/
V180=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V180; pile[WZ2]=491; 
(*f[42])( );     /*SRA1(135,V180,491,V182)*/
V182=pile[WZ3]; 
pile[WZ1]=V182; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V182,493,V183)*/
V183=pile[WZ3]; 
pile[v[22]]=V183; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V183,58,V184)*/
V184=pile[WZ2]; 
pile[v[22]]=V184; pile[WZ1]=SA; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V184,SA,41,V185)*/
V185=pile[WZ3]; 
pile[v[22]]=V185; 
(*f[40])( );     /*SLG0(V185)*/
l66:V262=x[N];
V265=x[S];
x[jvj+50]=d[90];z[jvj+50]=0;
x[jvj+98]=x[E] ;z[jvj+98]=z[E];
l67:if((x[jvj+98]>0)) goto l68;
if((EA<0)) goto l72;
V145=x[N];
V148=x[S];
pile[v[22]]=0; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(0,(-9543),V141)*/
V141=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V141; 
(*f[39])( );     /*SDX0(41,1,V141,V142)*/
V142=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V142; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V142,493,V143)*/
V143=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V145; pile[WZ2]=V143; 
(*f[39])( );     /*SDX0(20,V145,V143,V144)*/
V144=pile[WZ3]; 
pile[v[22]]=V144; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V144,V,V146)*/
V146=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V148; pile[WZ2]=V146; 
(*f[39])( );     /*SDX0(20,V148,V146,V147)*/
V147=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V147; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V147,876,V149)*/
V149=pile[WZ3]; 
pile[v[22]]=V149; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V149,58,V150)*/
V150=pile[WZ2]; 
pile[v[22]]=V150; pile[WZ1]=EA; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V150,EA,41,V151)*/
V151=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V151; pile[WZ2]=967; 
(*f[42])( );     /*SRA1(135,V151,967,V153)*/
V153=pile[WZ3]; 
pile[v[22]]=V153; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V153,58,V154)*/
V154=pile[WZ2]; 
pile[v[22]]=V154; pile[WZ1]=DA; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V154,DA,41,V155)*/
V155=pile[WZ3]; 
pile[v[22]]=V155; 
(*f[40])( );     /*SLG0(V155)*/
l72:V197=x[N];
V200=x[S];
x[jvj+56]=d[91];z[jvj+56]=0;
x[jvj+99]=x[E] ;z[jvj+99]=z[E];
l73:if((x[jvj+99]>0)) goto l74;
if((EB<0)) goto l79;
V161=x[N];
V164=x[S];
pile[v[22]]=0; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(0,(-9543),V157)*/
V157=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=0; pile[WZ2]=V157; 
(*f[39])( );     /*SDX0(41,0,V157,V158)*/
V158=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V158; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V158,493,V159)*/
V159=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V161; pile[WZ2]=V159; 
(*f[39])( );     /*SDX0(20,V161,V159,V160)*/
V160=pile[WZ3]; 
pile[v[22]]=V160; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V160,V,V162)*/
V162=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V164; pile[WZ2]=V162; 
(*f[39])( );     /*SDX0(20,V164,V162,V163)*/
V163=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V163; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V163,876,V165)*/
V165=pile[WZ3]; 
pile[v[22]]=V165; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V165,58,V166)*/
V166=pile[WZ2]; 
pile[v[22]]=V166; pile[WZ1]=EB; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V166,EB,41,V167)*/
V167=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V167; pile[WZ2]=967; 
(*f[42])( );     /*SRA1(135,V167,967,V169)*/
V169=pile[WZ3]; 
pile[v[22]]=V169; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V169,58,V170)*/
V170=pile[WZ2]; 
pile[v[22]]=V170; pile[WZ1]=DB; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V170,DB,41,V171)*/
V171=pile[WZ3]; 
pile[v[22]]=V171; 
(*f[40])( );     /*SLG0(V171)*/
l79:V231=x[N];
V234=x[S];
x[jvj+61]=d[91];z[jvj+61]=0;
x[jvj+100]=x[E] ;z[jvj+100]=z[E];
l80:if((x[jvj+100]>0)) goto l81;
V214=x[N];
V217=x[S];
x[jvj+66]=d[91];z[jvj+66]=0;
x[jvj+101]=x[E] ;z[jvj+101]=z[E];
l86:if((x[jvj+101]>0)) goto l87;
V248=x[N];
V251=x[S];
x[jvj+71]=d[91];z[jvj+71]=0;
x[jvj+102]=x[E] ;z[jvj+102]=z[E];
l92:if((x[jvj+102]>0)) goto l93;
l98:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; return;
l2:V3=999999;
pile[v[22]]=459; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(459,jvj+2,jvj+3)*/
pile[v[22]]=493; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(493,jvj+3,V9)*/
V9=pile[WZ2]; 
if((V9!=1)) goto l8;
pile[v[22]]=944; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(944,jvj+3,jvj+4)*/
x[jvj+85]=x[jvj+4] ;z[jvj+85]=z[jvj+4];
l3:if((x[jvj+85]<=0)) goto l8;
x[jvj+5]=s[x[jvj+85]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+85];
pile[v[22]]=935; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(935,jvj+5,jvj+6)*/
if((x[jvj+6]!=547)) goto l4;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(876,jvj+5,V4)*/
V4=pile[WZ2]; 
if(V4<V3) V3=V4;
l4:x[jvj+85]=t[x[jvj+85]];
goto l3;
l6:x[jvj+2]=s[x[jvj+86]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+86];
pile[v[22]]=447; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(447,jvj+2,jvj+7)*/
pile[v[22]]=T; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[1019])( );     /*PLUSTARD0(T,jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l2;
l7:x[jvj+86]=t[x[jvj+86]];
goto l5;
l8:if((V3==999999)) goto l7;
if(V3>V1) V1=V3;
goto l7;
l10:V16=999999;
pile[v[22]]=459; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(459,jvj+9,jvj+10)*/
pile[v[22]]=493; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(493,jvj+10,V22)*/
V22=pile[WZ2]; 
if((V22!=1)) goto l16;
pile[v[22]]=944; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(944,jvj+10,jvj+11)*/
x[jvj+87]=x[jvj+11] ;z[jvj+87]=z[jvj+11];
l11:if((x[jvj+87]<=0)) goto l16;
x[jvj+12]=s[x[jvj+87]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+87];
pile[v[22]]=935; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(935,jvj+12,jvj+13)*/
if((x[jvj+13]!=547)) goto l12;
pile[v[22]]=967; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(967,jvj+12,V17)*/
V17=pile[WZ2]; 
if(V17<V16) V16=V17;
l12:x[jvj+87]=t[x[jvj+87]];
goto l11;
l14:x[jvj+9]=s[x[jvj+88]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+88];
pile[v[22]]=447; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(447,jvj+9,jvj+14)*/
pile[v[22]]=T; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[1019])( );     /*PLUSTARD0(T,jvj+14,jvj+15)*/
if((x[jvj+15]==135)) goto l10;
l15:x[jvj+88]=t[x[jvj+88]];
goto l13;
l16:if((V16==999999)) goto l15;
if(V16>V14) V14=V16;
goto l15;
l18:V29=999999;
pile[v[22]]=459; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(459,jvj+16,jvj+17)*/
pile[v[22]]=493; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(493,jvj+17,V35)*/
V35=pile[WZ2]; 
if((V35!=0)) goto l24;
pile[v[22]]=944; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(944,jvj+17,jvj+18)*/
x[jvj+89]=x[jvj+18] ;z[jvj+89]=z[jvj+18];
l19:if((x[jvj+89]<=0)) goto l24;
x[jvj+19]=s[x[jvj+89]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+89];
pile[v[22]]=935; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(935,jvj+19,jvj+20)*/
if((x[jvj+20]!=547)) goto l20;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(876,jvj+19,V30)*/
V30=pile[WZ2]; 
if(V30<V29) V29=V30;
l20:x[jvj+89]=t[x[jvj+89]];
goto l19;
l22:x[jvj+16]=s[x[jvj+90]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+90];
pile[v[22]]=447; pile[WZ1]=jvj+16; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(447,jvj+16,jvj+21)*/
pile[v[22]]=T; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[1019])( );     /*PLUSTARD0(T,jvj+21,jvj+22)*/
if((x[jvj+22]==135)) goto l18;
l23:x[jvj+90]=t[x[jvj+90]];
goto l21;
l24:if((V29==999999)) goto l23;
if(V29>V27) V27=V29;
goto l23;
l26:V42=999999;
pile[v[22]]=459; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(459,jvj+23,jvj+24)*/
pile[v[22]]=493; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(493,jvj+24,V48)*/
V48=pile[WZ2]; 
if((V48!=0)) goto l32;
pile[v[22]]=944; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(944,jvj+24,jvj+25)*/
x[jvj+91]=x[jvj+25] ;z[jvj+91]=z[jvj+25];
l27:if((x[jvj+91]<=0)) goto l32;
x[jvj+26]=s[x[jvj+91]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+91];
pile[v[22]]=935; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(935,jvj+26,jvj+27)*/
if((x[jvj+27]!=547)) goto l28;
pile[v[22]]=967; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(967,jvj+26,V43)*/
V43=pile[WZ2]; 
if(V43<V42) V42=V43;
l28:x[jvj+91]=t[x[jvj+91]];
goto l27;
l30:x[jvj+23]=s[x[jvj+92]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+92];
pile[v[22]]=447; pile[WZ1]=jvj+23; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(447,jvj+23,jvj+28)*/
pile[v[22]]=T; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[1019])( );     /*PLUSTARD0(T,jvj+28,jvj+29)*/
if((x[jvj+29]==135)) goto l26;
l31:x[jvj+92]=t[x[jvj+92]];
goto l29;
l32:if((V42==999999)) goto l31;
if(V42>V40) V40=V42;
goto l31;
l34:x[jvj+30]=s[x[jvj+93]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+93];
pile[v[22]]=459; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(459,jvj+30,jvj+31)*/
pile[v[22]]=493; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(493,jvj+31,V55)*/
V55=pile[WZ2]; 
SS=V55;
if((SS<=1)) goto l35;
pile[v[22]]=447; pile[WZ1]=jvj+30; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(447,jvj+30,jvj+32)*/
pile[v[22]]=T; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[1019])( );     /*PLUSTARD0(T,jvj+32,jvj+33)*/
if((x[jvj+33]==135)) goto l36;
l35:x[jvj+93]=t[x[jvj+93]];
goto l33;
l36:if(SS<V52) V52=SS;
goto l35;
l37:SA=V52;
goto l1;
l38:pile[v[22]]=V133; pile[WZ1]=60; 
(*f[38])( );     /*SPC0(V133,60,V255)*/
V255=pile[WZ2]; 
pile[v[22]]=V255; pile[WZ1]=SA; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V255,SA,41,V132)*/
V132=pile[WZ3]; 
l39:V134=incon;
if((SA==999999)) goto l40;
V134=V132;
l71:pile[v[22]]=V134; 
(*f[40])( );     /*SLG0(V134)*/
pile[v[22]]=SA; pile[WZ1]=515; pile[WZ2]=jvj+76; 
(*f[46])( );     /*TRI0(SA,515,jvj+76)*/
pile[v[22]]=117; pile[WZ1]=V130; pile[WZ2]=447; pile[WZ3]=493; pile[WZ4]=jvj+76; pile[WZ5]=jvj+55; 
(*f[725])( );     /*QUADRI14(117,V130,447,493,jvj+76,jvj+55)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+55; pile[WZ2]=D; 
(*f[196])( );     /*PLUF0(jvj+50,jvj+55,D)*/
l69:x[jvj+98]=t[x[jvj+98]];
goto l67;
l40:pile[v[22]]=135; pile[WZ1]=V132; pile[WZ2]=397; 
(*f[42])( );     /*SRA1(135,V132,397,V134)*/
V134=pile[WZ3]; 
goto l71;
l41:EA=V1;
goto l9;
l44:pile[v[22]]=V64; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V64,62,V187)*/
V187=pile[WZ2]; 
pile[v[22]]=V187; pile[WZ1]=EA; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V187,EA,41,V63)*/
V63=pile[WZ3]; 
l45:V65=incon;
if((EA<0)) goto l46;
V65=V63;
l78:pile[v[22]]=V65; 
(*f[40])( );     /*SLG0(V65)*/
pile[v[22]]=EA; pile[WZ1]=515; pile[WZ2]=jvj+77; 
(*f[46])( );     /*TRI0(EA,515,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=1; pile[WZ2]=510; pile[WZ3]=jvj+78; 
(*f[189])( );     /*TRI4(jvj+77,1,510,jvj+78)*/
pile[v[22]]=117; pile[WZ1]=P; pile[WZ2]=447; pile[WZ3]=876; pile[WZ4]=jvj+78; pile[WZ5]=jvj+60; 
(*f[725])( );     /*QUADRI14(117,P,447,876,jvj+78,jvj+60)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+60; pile[WZ2]=D; 
(*f[196])( );     /*PLUF0(jvj+56,jvj+60,D)*/
l75:x[jvj+99]=t[x[jvj+99]];
goto l73;
l46:pile[v[22]]=135; pile[WZ1]=V63; pile[WZ2]=397; 
(*f[42])( );     /*SRA1(135,V63,397,V65)*/
V65=pile[WZ3]; 
goto l78;
l47:DA=V14;
goto l17;
l50:pile[v[22]]=V82; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V82,62,V204)*/
V204=pile[WZ2]; 
pile[v[22]]=V204; pile[WZ1]=DA; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V204,DA,41,V81)*/
V81=pile[WZ3]; 
l51:V83=incon;
if((DA<0)) goto l52;
V83=V81;
l91:pile[v[22]]=V83; 
(*f[40])( );     /*SLG0(V83)*/
pile[v[22]]=DA; pile[WZ1]=515; pile[WZ2]=jvj+81; 
(*f[46])( );     /*TRI0(DA,515,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=1; pile[WZ2]=510; pile[WZ3]=jvj+82; 
(*f[189])( );     /*TRI4(jvj+81,1,510,jvj+82)*/
pile[v[22]]=117; pile[WZ1]=V76; pile[WZ2]=447; pile[WZ3]=967; pile[WZ4]=jvj+82; pile[WZ5]=jvj+70; 
(*f[725])( );     /*QUADRI14(117,V76,447,967,jvj+82,jvj+70)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+70; pile[WZ2]=D; 
(*f[196])( );     /*PLUF0(jvj+66,jvj+70,D)*/
l88:x[jvj+101]=t[x[jvj+101]];
goto l86;
l52:pile[v[22]]=135; pile[WZ1]=V81; pile[WZ2]=397; 
(*f[42])( );     /*SRA1(135,V81,397,V83)*/
V83=pile[WZ3]; 
goto l91;
l53:EB=V27;
goto l25;
l56:pile[v[22]]=V100; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V100,62,V221)*/
V221=pile[WZ2]; 
pile[v[22]]=V221; pile[WZ1]=EB; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V221,EB,41,V99)*/
V99=pile[WZ3]; 
l57:V101=incon;
if((EB<0)) goto l58;
V101=V99;
l85:pile[v[22]]=V101; 
(*f[40])( );     /*SLG0(V101)*/
pile[v[22]]=EB; pile[WZ1]=515; pile[WZ2]=jvj+79; 
(*f[46])( );     /*TRI0(EB,515,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=0; pile[WZ2]=510; pile[WZ3]=jvj+80; 
(*f[189])( );     /*TRI4(jvj+79,0,510,jvj+80)*/
pile[v[22]]=117; pile[WZ1]=V94; pile[WZ2]=447; pile[WZ3]=876; pile[WZ4]=jvj+80; pile[WZ5]=jvj+65; 
(*f[725])( );     /*QUADRI14(117,V94,447,876,jvj+80,jvj+65)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+65; pile[WZ2]=D; 
(*f[196])( );     /*PLUF0(jvj+61,jvj+65,D)*/
l82:x[jvj+100]=t[x[jvj+100]];
goto l80;
l58:pile[v[22]]=135; pile[WZ1]=V99; pile[WZ2]=397; 
(*f[42])( );     /*SRA1(135,V99,397,V101)*/
V101=pile[WZ3]; 
goto l85;
l59:DB=V40;
goto l65;
l62:pile[v[22]]=V118; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V118,62,V238)*/
V238=pile[WZ2]; 
pile[v[22]]=V238; pile[WZ1]=DB; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V238,DB,41,V117)*/
V117=pile[WZ3]; 
l63:V119=incon;
if((DB<0)) goto l64;
V119=V117;
l97:pile[v[22]]=V119; 
(*f[40])( );     /*SLG0(V119)*/
pile[v[22]]=DB; pile[WZ1]=515; pile[WZ2]=jvj+83; 
(*f[46])( );     /*TRI0(DB,515,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=0; pile[WZ2]=510; pile[WZ3]=jvj+84; 
(*f[189])( );     /*TRI4(jvj+83,0,510,jvj+84)*/
pile[v[22]]=117; pile[WZ1]=V112; pile[WZ2]=447; pile[WZ3]=967; pile[WZ4]=jvj+84; pile[WZ5]=jvj+75; 
(*f[725])( );     /*QUADRI14(117,V112,447,967,jvj+84,jvj+75)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+75; pile[WZ2]=D; 
(*f[196])( );     /*PLUF0(jvj+71,jvj+75,D)*/
l94:x[jvj+102]=t[x[jvj+102]];
goto l92;
l64:pile[v[22]]=135; pile[WZ1]=V117; pile[WZ2]=397; 
(*f[42])( );     /*SRA1(135,V117,397,V119)*/
V119=pile[WZ3]; 
goto l97;
l68:x[jvj+51]=s[x[jvj+98]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+98];
pile[v[22]]=459; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(459,jvj+51,jvj+52)*/
pile[v[22]]=493; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(493,jvj+52,V136)*/
V136=pile[WZ2]; 
V130=V136;
if((V130>=SA)) goto l69;
if((V130<=1)) goto l69;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l69;     /*FNDC1(163,jvj+52,V139)*/
V139=pile[WZ2]; 
pile[v[22]]=447; pile[WZ1]=jvj+51; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(447,jvj+51,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=T; pile[WZ2]=jvj+54; 
(*f[1019])( );     /*PLUSTARD0(jvj+53,T,jvj+54)*/
if((x[jvj+54]==135)) goto l70;
goto l69;
l70:pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(5,0,43,V259)*/
V259=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V259; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V259,493,V260)*/
V260=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V262; pile[WZ2]=V260; 
(*f[39])( );     /*SDX0(20,V262,V260,V261)*/
V261=pile[WZ3]; 
pile[v[22]]=V261; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V261,V,V263)*/
V263=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V265; pile[WZ2]=V263; 
(*f[39])( );     /*SDX0(20,V265,V263,V264)*/
V264=pile[WZ3]; 
pile[v[22]]=V264; pile[WZ1]=V139; 
(*f[37])( );     /*SRA0(V264,V139,V266)*/
V266=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V130; pile[WZ2]=V266; 
(*f[39])( );     /*SDX0(41,V130,V266,V133)*/
V133=pile[WZ3]; 
V132=incon;
if((SA<999999)) goto l38;
V132=V133;
goto l39;
l74:x[jvj+57]=s[x[jvj+99]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+99];
pile[v[22]]=459; pile[WZ1]=jvj+57; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(459,jvj+57,jvj+34)*/
pile[v[22]]=163; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l75;     /*FNDC1(163,jvj+34,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=447; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(447,jvj+57,jvj+58)*/
V61=999999;
pile[v[22]]=493; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l76;     /*FNDC0(493,jvj+34,V71)*/
V71=pile[WZ2]; 
if((V71!=1)) goto l76;
pile[v[22]]=944; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(944,jvj+34,jvj+35)*/
x[jvj+94]=x[jvj+35] ;z[jvj+94]=z[jvj+35];
l42:if((x[jvj+94]<=0)) goto l76;
x[jvj+36]=s[x[jvj+94]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+94];
pile[v[22]]=935; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(935,jvj+36,jvj+37)*/
if((x[jvj+37]!=547)) goto l43;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(876,jvj+36,V62)*/
V62=pile[WZ2]; 
if(V62<V61) V61=V62;
l43:x[jvj+94]=t[x[jvj+94]];
goto l42;
l76:P=V61;
if((P<=EA)) goto l75;
if((P<=0)) goto l75;
if((V61==999999)) goto l75;
pile[v[22]]=jvj+58; pile[WZ1]=T; pile[WZ2]=jvj+59; 
(*f[1019])( );     /*PLUSTARD0(jvj+58,T,jvj+59)*/
if((x[jvj+59]==135)) goto l77;
goto l75;
l77:pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(5,0,43,V191)*/
V191=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V191; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V191,493,V192)*/
V192=pile[WZ3]; 
pile[v[22]]=V192; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V192,61,V193)*/
V193=pile[WZ2]; 
pile[v[22]]=V193; pile[WZ1]=1; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V193,1,41,V194)*/
V194=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V194; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V194,876,V195)*/
V195=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V197; pile[WZ2]=V195; 
(*f[39])( );     /*SDX0(20,V197,V195,V196)*/
V196=pile[WZ3]; 
pile[v[22]]=V196; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V196,V,V198)*/
V198=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V200; pile[WZ2]=V198; 
(*f[39])( );     /*SDX0(20,V200,V198,V199)*/
V199=pile[WZ3]; 
pile[v[22]]=V199; pile[WZ1]=V73; 
(*f[37])( );     /*SRA0(V199,V73,V201)*/
V201=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=P; pile[WZ2]=V201; 
(*f[39])( );     /*SDX0(41,P,V201,V64)*/
V64=pile[WZ3]; 
V63=incon;
if((EA>=0)) goto l44;
V63=V64;
goto l45;
l81:x[jvj+62]=s[x[jvj+100]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+100];
pile[v[22]]=459; pile[WZ1]=jvj+62; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(459,jvj+62,jvj+42)*/
pile[v[22]]=163; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l82;     /*FNDC1(163,jvj+42,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=447; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(447,jvj+62,jvj+63)*/
V97=999999;
pile[v[22]]=493; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l83;     /*FNDC0(493,jvj+42,V107)*/
V107=pile[WZ2]; 
if((V107!=0)) goto l83;
pile[v[22]]=944; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(944,jvj+42,jvj+43)*/
x[jvj+96]=x[jvj+43] ;z[jvj+96]=z[jvj+43];
l54:if((x[jvj+96]<=0)) goto l83;
x[jvj+44]=s[x[jvj+96]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+96];
pile[v[22]]=935; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(935,jvj+44,jvj+45)*/
if((x[jvj+45]!=547)) goto l55;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(876,jvj+44,V98)*/
V98=pile[WZ2]; 
if(V98<V97) V97=V98;
l55:x[jvj+96]=t[x[jvj+96]];
goto l54;
l83:V94=V97;
if((V94<=EB)) goto l82;
if((V94<=0)) goto l82;
if((V97==999999)) goto l82;
pile[v[22]]=jvj+63; pile[WZ1]=T; pile[WZ2]=jvj+64; 
(*f[1019])( );     /*PLUSTARD0(jvj+63,T,jvj+64)*/
if((x[jvj+64]==135)) goto l84;
goto l82;
l84:pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(5,0,43,V225)*/
V225=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V225; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V225,493,V226)*/
V226=pile[WZ3]; 
pile[v[22]]=V226; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V226,61,V227)*/
V227=pile[WZ2]; 
pile[v[22]]=V227; pile[WZ1]=0; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V227,0,41,V228)*/
V228=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V228; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V228,876,V229)*/
V229=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V231; pile[WZ2]=V229; 
(*f[39])( );     /*SDX0(20,V231,V229,V230)*/
V230=pile[WZ3]; 
pile[v[22]]=V230; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V230,V,V232)*/
V232=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V234; pile[WZ2]=V232; 
(*f[39])( );     /*SDX0(20,V234,V232,V233)*/
V233=pile[WZ3]; 
pile[v[22]]=V233; pile[WZ1]=V109; 
(*f[37])( );     /*SRA0(V233,V109,V235)*/
V235=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V94; pile[WZ2]=V235; 
(*f[39])( );     /*SDX0(41,V94,V235,V100)*/
V100=pile[WZ3]; 
V99=incon;
if((EB>=0)) goto l56;
V99=V100;
goto l57;
l87:x[jvj+67]=s[x[jvj+101]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+101];
pile[v[22]]=459; pile[WZ1]=jvj+67; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l88;     /*FNDO0(459,jvj+67,jvj+38)*/
pile[v[22]]=163; pile[WZ1]=jvj+38; 
(*f[44])( );if(v[102]) goto l88;     /*FNDC1(163,jvj+38,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=447; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l88;     /*FNDO0(447,jvj+67,jvj+68)*/
V79=999999;
pile[v[22]]=493; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l89;     /*FNDC0(493,jvj+38,V89)*/
V89=pile[WZ2]; 
if((V89!=1)) goto l89;
pile[v[22]]=944; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(944,jvj+38,jvj+39)*/
x[jvj+95]=x[jvj+39] ;z[jvj+95]=z[jvj+39];
l48:if((x[jvj+95]<=0)) goto l89;
x[jvj+40]=s[x[jvj+95]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+95];
pile[v[22]]=935; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(935,jvj+40,jvj+41)*/
if((x[jvj+41]!=547)) goto l49;
pile[v[22]]=967; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(967,jvj+40,V80)*/
V80=pile[WZ2]; 
if(V80<V79) V79=V80;
l49:x[jvj+95]=t[x[jvj+95]];
goto l48;
l89:V76=V79;
if((V76<=DA)) goto l88;
if((V76<=0)) goto l88;
if((V79==999999)) goto l88;
pile[v[22]]=jvj+68; pile[WZ1]=T; pile[WZ2]=jvj+69; 
(*f[1019])( );     /*PLUSTARD0(jvj+68,T,jvj+69)*/
if((x[jvj+69]==135)) goto l90;
goto l88;
l90:pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(5,0,43,V208)*/
V208=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V208; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V208,493,V209)*/
V209=pile[WZ3]; 
pile[v[22]]=V209; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V209,61,V210)*/
V210=pile[WZ2]; 
pile[v[22]]=V210; pile[WZ1]=1; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V210,1,41,V211)*/
V211=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V211; pile[WZ2]=967; 
(*f[42])( );     /*SRA1(135,V211,967,V212)*/
V212=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V214; pile[WZ2]=V212; 
(*f[39])( );     /*SDX0(20,V214,V212,V213)*/
V213=pile[WZ3]; 
pile[v[22]]=V213; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V213,V,V215)*/
V215=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V217; pile[WZ2]=V215; 
(*f[39])( );     /*SDX0(20,V217,V215,V216)*/
V216=pile[WZ3]; 
pile[v[22]]=V216; pile[WZ1]=V91; 
(*f[37])( );     /*SRA0(V216,V91,V218)*/
V218=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V76; pile[WZ2]=V218; 
(*f[39])( );     /*SDX0(41,V76,V218,V82)*/
V82=pile[WZ3]; 
V81=incon;
if((DA>=0)) goto l50;
V81=V82;
goto l51;
l93:x[jvj+72]=s[x[jvj+102]] ;z[jvj+72]=(x[jvj+72]<=sepcte) ? x[jvj+72] : z[jvj+102];
pile[v[22]]=459; pile[WZ1]=jvj+72; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(459,jvj+72,jvj+46)*/
pile[v[22]]=163; pile[WZ1]=jvj+46; 
(*f[44])( );if(v[102]) goto l94;     /*FNDC1(163,jvj+46,V127)*/
V127=pile[WZ2]; 
pile[v[22]]=447; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(447,jvj+72,jvj+73)*/
V115=999999;
pile[v[22]]=493; pile[WZ1]=jvj+46; 
(*f[26])( );if(v[102]) goto l95;     /*FNDC0(493,jvj+46,V125)*/
V125=pile[WZ2]; 
if((V125!=0)) goto l95;
pile[v[22]]=944; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(944,jvj+46,jvj+47)*/
x[jvj+97]=x[jvj+47] ;z[jvj+97]=z[jvj+47];
l60:if((x[jvj+97]<=0)) goto l95;
x[jvj+48]=s[x[jvj+97]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+97];
pile[v[22]]=935; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(935,jvj+48,jvj+49)*/
if((x[jvj+49]!=547)) goto l61;
pile[v[22]]=967; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(967,jvj+48,V116)*/
V116=pile[WZ2]; 
if(V116<V115) V115=V116;
l61:x[jvj+97]=t[x[jvj+97]];
goto l60;
l95:V112=V115;
if((V112<=DB)) goto l94;
if((V112<=0)) goto l94;
if((V115==999999)) goto l94;
pile[v[22]]=jvj+73; pile[WZ1]=T; pile[WZ2]=jvj+74; 
(*f[1019])( );     /*PLUSTARD0(jvj+73,T,jvj+74)*/
if((x[jvj+74]==135)) goto l96;
goto l94;
l96:pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(5,0,43,V242)*/
V242=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V242; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V242,493,V243)*/
V243=pile[WZ3]; 
pile[v[22]]=V243; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V243,61,V244)*/
V244=pile[WZ2]; 
pile[v[22]]=V244; pile[WZ1]=0; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V244,0,41,V245)*/
V245=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V245; pile[WZ2]=967; 
(*f[42])( );     /*SRA1(135,V245,967,V246)*/
V246=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V248; pile[WZ2]=V246; 
(*f[39])( );     /*SDX0(20,V248,V246,V247)*/
V247=pile[WZ3]; 
pile[v[22]]=V247; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V247,V,V249)*/
V249=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V251; pile[WZ2]=V249; 
(*f[39])( );     /*SDX0(20,V251,V249,V250)*/
V250=pile[WZ3]; 
pile[v[22]]=V250; pile[WZ1]=V127; 
(*f[37])( );     /*SRA0(V250,V127,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V112; pile[WZ2]=V252; 
(*f[39])( );     /*SDX0(41,V112,V252,V118)*/
V118=pile[WZ3]; 
V117=incon;
if((DB>=0)) goto l62;
V117=V118;
goto l63;
}
