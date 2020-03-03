#include "dx.h"
void CREUSE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V15=0,V16=0,V17=0,V9=0,V87=0,S=0,V42=0,V46=0,V125=0,V118=0,V119=0,V120=0,V121=0,V122=0,V124=0,V40=0,V126=0,V41=0,V60=0,NT=0,V136=0,V129=0,V130=0,V131=0,V132=0,V57=0,V133=0,V135=0,V137=0,V54=0,V139=0,V59=0,V73=0,TT=0,V68=0,V67=0,V77=0,V78=0,V81=0,V150=0,V152=0,V143=0,V144=0,V145=0,V146=0,V147=0,V148=0,V151=0,V153=0,V155=0,V72=0,V38=0,V53=0,V52=0,V56=0,V70=0,V19=0,V22=0,V23=0,V24=0,V25=0,V27=0,V29=0,V26=0,V28=0,V102=0,V104=0,V106=0,V108=0,V96=0,V97=0,V98=0,V99=0,V100=0,V101=0,V103=0,V105=0,V107=0,V109=0,V111=0,V113=0,V115=0,V18=0,V85=0,V93=0,V94=0;
int K,N;
int Q;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=10920;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==953&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
K=pile[v[22]]; N=pile[v[22]+1]; Q=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[Q]=S=x[jvj+29]=incon;
pile[v[22]]=913; pile[WZ1]=K; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(913,K,jvj+7)*/
if((x[jvj+7]!=753)) goto l2;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,K,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=1078; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1078,K,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=1078; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+8,1078,jvj+36)*/
pile[v[22]]=117; pile[WZ1]=V87; pile[WZ2]=860; pile[WZ3]=753; pile[WZ4]=jvj+36; pile[WZ5]=jvj+9; 
(*f[725])( );     /*QUADRI14(117,V87,860,753,jvj+36,jvj+9)*/
pile[v[22]]=994; pile[WZ1]=1051; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(994,1051,jvj+9)*/
l2:if(x[jvj+7]!=1052&&x[jvj+7]!=1063&&x[jvj+7]!=876) goto l3;
pile[v[22]]=1078; pile[WZ1]=K; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1078,K,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[378])( );     /*CPI0(jvj+10,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=1161; pile[WZ2]=1055; 
(*f[35])( );     /*CHGC1(jvj+11,1161,1055)*/
(*f[554])( );     /*AJEXP1(jvj+11)*/
l3:if(x[jvj+7]==753||x[jvj+7]==1052||x[jvj+7]==1063) goto l5;
pile[v[22]]=935; pile[WZ1]=K; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(935,K,jvj+12)*/
if(x[jvj+12]!=316&&x[jvj+12]!=991) goto l5;
pile[v[22]]=1078; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1078,K,jvj+2)*/
pile[v[22]]=1249; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1249,jvj+2,jvj+3)*/
l5:pile[v[22]]=1078; pile[WZ1]=K; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(1078,K,jvj+15)*/
pile[v[22]]=1249; pile[WZ1]=jvj+15; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1249,jvj+15,jvj+4)*/
V9=incon;
pile[v[22]]=515; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(515,jvj+4,V14)*/
V14=pile[WZ2]; 
pile[WZ1]=K; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(515,K,V15)*/
V15=pile[WZ2]; 
if((V14!=V15)) goto l1;
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,jvj+4,V16)*/
V16=pile[WZ2]; 
pile[WZ1]=K; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,K,V17)*/
V17=pile[WZ2]; 
if((V16!=V17)) goto l1;
pile[v[22]]=913; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(913,jvj+4,jvj+5)*/
pile[WZ1]=K; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(913,K,jvj+6)*/
if((x[jvj+5]!=x[jvj+6])) goto l1;
V9=68;
l6:S=V9;
x[jvj+29]=x[jvj+4] ;z[jvj+29]=z[jvj+4];
l20:if(x[Q]==incon) goto l21;
if(S!=incon) goto l26;
l34:if((x[Q]==120)) goto l36;
pile[v[22]]=610; pile[WZ1]=K; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(610,K,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=Q; pile[WZ1]=1253; pile[WZ2]=V85; 
(*f[43])( );     /*CHGC2(Q,1253,V85)*/
l35:pile[v[22]]=935; pile[WZ1]=K; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(935,K,jvj+33)*/
pile[v[22]]=913; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(913,K,jvj+34)*/
pile[v[22]]=Q; pile[WZ1]=1161; pile[WZ2]=1055; 
(*f[35])( );     /*CHGC1(Q,1161,1055)*/
pile[WZ1]=1078; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(Q,1078,jvj+37)*/
pile[v[22]]=913; pile[WZ1]=jvj+34; pile[WZ2]=935; pile[WZ3]=jvj+33; pile[WZ4]=jvj+37; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(913,jvj+34,935,jvj+33,jvj+37,jvj+35)*/
pile[v[22]]=jvj+35; 
(*f[952])( );     /*ANACREUSE0(jvj+35)*/
l36:pile[v[22]]=20; pile[WZ1]=10920; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10920,0,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V93; pile[WZ2]=N; 
(*f[42])( );     /*SRA1(135,V93,N,V94)*/
V94=pile[WZ3]; 
pile[v[22]]=V94; 
(*f[40])( );     /*SLG0(V94)*/
if(S!=incon) goto l37;
l39:pile[v[22]]=K; 
(*f[183])( );     /*ENLEVENATTENTE0(K)*/
l40:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:V9=67;
goto l6;
l4:pile[v[22]]=860; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(860,jvj+2,jvj+13)*/
if((x[jvj+13]==372)) goto l5;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+14; 
(*f[378])( );     /*CPI0(jvj+2,jvj+14)*/
x[Q]=x[jvj+14] ;z[Q]=z[jvj+14];
pile[v[22]]=jvj+14; pile[WZ1]=1249; pile[WZ2]=K; 
(*f[35])( );     /*CHGC1(jvj+14,1249,K)*/
goto l5;
l8:if((V41<4)) goto l9;
l23:pile[v[22]]=jvj+24; pile[WZ1]=860; pile[WZ2]=372; 
(*f[35])( );     /*CHGC1(jvj+24,860,372)*/
pile[WZ1]=39; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(jvj+24,39,jvj+16)*/
pile[WZ1]=1247; pile[WZ2]=V40; 
(*f[43])( );     /*CHGC2(jvj+24,1247,V40)*/
pile[WZ1]=642; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+24,642,0)*/
l27:pile[v[22]]=860; pile[WZ1]=jvj+15; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(860,jvj+15,jvj+28)*/
if((x[jvj+28]!=372)) goto l32;
pile[v[22]]=642; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(642,jvj+15,V70)*/
V70=pile[WZ2]; 
if((V70<10)) goto l32;
V72=g[495];
if((V72<=0)) goto l32;
V73=vg[495];
if((V73!=0)) goto l14;
if((V72<3)) goto l17;
l14:pile[v[22]]=495; pile[WZ1]=10920; pile[WZ2]=0; pile[WZ3]=66; pile[WZ4]=jvj+15; pile[WZ5]=jvj+20; 
(*f[232])( );     /*INTERP3(495,10920,0,66,jvj+15,jvj+20)*/
if((x[jvj+20]==135)) goto l16;
l32:if(x[Q]==incon) goto l33;
goto l34;
l9:pile[v[22]]=117; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+15,V46)*/
V46=pile[WZ2]; 
V125=x[jvj+16];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V118; pile[WZ2]=10920; 
(*f[98])( );     /*SRA3(135,V118,10920,V119)*/
V119=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V119; 
(*f[39])( );     /*SDX0(41,2,V119,V120)*/
V120=pile[WZ3]; 
pile[v[22]]=V120; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V120,125,V121)*/
V121=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V46; pile[WZ2]=V121; 
(*f[39])( );     /*SDX0(41,V46,V121,V122)*/
V122=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V125; pile[WZ2]=V122; 
(*f[39])( );     /*SDX0(20,V125,V122,V124)*/
V124=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V40; pile[WZ2]=V124; 
(*f[39])( );     /*SDX0(41,V40,V124,V126)*/
V126=pile[WZ3]; 
pile[v[22]]=V126; 
(*f[40])( );     /*SLG0(V126)*/
l10:if((V41!=2)) goto l23;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l23;
l12:if((V59<4)) goto l13;
l25:pile[v[22]]=jvj+25; pile[WZ1]=39; pile[WZ2]=jvj+18; 
(*f[35])( );     /*CHGC1(jvj+25,39,jvj+18)*/
pile[WZ1]=1247; pile[WZ2]=NT; 
(*f[43])( );     /*CHGC2(jvj+25,1247,NT)*/
pile[WZ1]=642; pile[WZ2]=V52; 
(*f[43])( );     /*CHGC2(jvj+25,642,V52)*/
goto l27;
l13:V136=x[jvj+18];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V129; pile[WZ2]=10920; 
(*f[98])( );     /*SRA3(135,V129,10920,V130)*/
V130=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V130; 
(*f[39])( );     /*SDX0(41,3,V130,V131)*/
V131=pile[WZ3]; 
pile[v[22]]=V131; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V131,125,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V57; pile[WZ2]=V132; 
(*f[39])( );     /*SDX0(41,V57,V132,V133)*/
V133=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V136; pile[WZ2]=V133; 
(*f[39])( );     /*SDX0(20,V136,V133,V135)*/
V135=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NT; pile[WZ2]=V135; 
(*f[39])( );     /*SDX0(41,NT,V135,V137)*/
V137=pile[WZ3]; 
pile[WZ1]=V54; pile[WZ2]=V137; 
(*f[39])( );     /*SDX0(41,V54,V137,V139)*/
V139=pile[WZ3]; 
pile[v[22]]=V139; 
(*f[40])( );     /*SLG0(V139)*/
if((V59!=2)) goto l25;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l25;
l15:V67=V68;
l18:pile[v[22]]=20; pile[WZ1]=V152; pile[WZ2]=V67; 
(*f[39])( );     /*SDX0(20,V152,V67,V151)*/
V151=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V78; pile[WZ2]=V151; 
(*f[39])( );     /*SDX0(41,V78,V151,V153)*/
V153=pile[WZ3]; 
pile[WZ1]=V77; pile[WZ2]=V153; 
(*f[39])( );     /*SDX0(41,V77,V153,V155)*/
V155=pile[WZ3]; 
pile[v[22]]=V155; 
(*f[40])( );     /*SLG0(V155)*/
l19:if((V72!=2)) goto l32;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l32;
l16:if((V72<4)) goto l17;
goto l32;
l17:pile[v[22]]=1026; pile[WZ1]=K; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(1026,K,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=1247; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(1247,jvj+15,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(117,jvj+15,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=39; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(39,jvj+15,jvj+21)*/
pile[v[22]]=109; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(109,jvj+15,jvj+22)*/
V150=x[jvj+22];
V152=x[jvj+21];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V143; pile[WZ2]=10920; 
(*f[98])( );     /*SRA3(135,V143,10920,V144)*/
V144=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=4; pile[WZ2]=V144; 
(*f[39])( );     /*SDX0(41,4,V144,V145)*/
V145=pile[WZ3]; 
pile[v[22]]=V145; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V145,125,V146)*/
V146=pile[WZ2]; 
pile[v[22]]=22; pile[WZ1]=V146; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(22,V146,126,V147)*/
V147=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V81; pile[WZ2]=V147; 
(*f[39])( );     /*SDX0(41,V81,V147,V148)*/
V148=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V150; pile[WZ2]=V148; 
(*f[39])( );     /*SDX0(20,V150,V148,V68)*/
V68=pile[WZ3]; 
V67=incon;
pile[v[22]]=163; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,jvj+15,TT)*/
TT=pile[WZ2]; 
pile[v[22]]=V68; pile[WZ1]=TT; 
(*f[37])( );     /*SRA0(V68,TT,V67)*/
V67=pile[WZ2]; 
goto l18;
l21:if(S!=incon) goto l22;
l33:x[Q]=120 ;z[Q]=120;
goto l36;
l22:if((S!=68)) goto l33;
pile[v[22]]=515; pile[WZ1]=K; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(515,K,V38)*/
V38=pile[WZ2]; 
x[jvj+16]=V38 ;z[jvj+16]=(V38<=sepcte) ? V38 : 0;
pile[v[22]]=860; pile[WZ1]=jvj+15; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(860,jvj+15,jvj+23)*/
if((x[jvj+23]==372)) goto l24;
pile[v[22]]=130; pile[WZ1]=K; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,K,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=jvj+15; pile[WZ1]=jvj+24; 
(*f[378])( );     /*CPI0(jvj+15,jvj+24)*/
x[Q]=x[jvj+24] ;z[Q]=z[jvj+24];
V41=g[493];
if((V41<=0)) goto l23;
V42=vg[493];
if((V42!=0)) goto l7;
if((V41<3)) goto l9;
l7:pile[v[22]]=493; pile[WZ1]=10920; pile[WZ2]=0; pile[WZ3]=(-612); pile[WZ4]=K; pile[WZ5]=(-702); pile[v[22]+6]=jvj+16; pile[v[22]+7]=jvj+17; 
(*f[187])( );     /*INTERP0(493,10920,0,(-612),K,(-702),jvj+16,jvj+17)*/
if((x[jvj+17]==135)) goto l8;
goto l23;
l24:pile[v[22]]=1026; pile[WZ1]=K; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(1026,K,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=jvj+15; pile[WZ1]=jvj+25; 
(*f[378])( );     /*CPI0(jvj+15,jvj+25)*/
pile[v[22]]=860; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(860,jvj+25,jvj+26)*/
if((x[jvj+26]!=372)) goto l27;
pile[v[22]]=642; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(642,jvj+25,V53)*/
V53=pile[WZ2]; 
V52=V53+1;
if((V52>10)) goto l27;
pile[v[22]]=39; pile[WZ1]=jvj+15; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(39,jvj+15,jvj+27)*/
pile[v[22]]=1247; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(1247,jvj+15,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(117,jvj+15,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=jvj+27; pile[WZ2]=V56; pile[WZ3]=V57; pile[WZ4]=jvj+18; 
(*f[1271])( );if(v[102]) goto l27;     /*CHERBLOC0(V54,jvj+27,V56,V57,jvj+18,NT)*/
NT=pile[WZ5]; 
x[Q]=x[jvj+25] ;z[Q]=z[jvj+25];
V59=g[494];
if((V59<=0)) goto l25;
V60=vg[494];
if((V60!=0)) goto l11;
if((V59<3)) goto l13;
l11:pile[v[22]]=494; pile[WZ1]=10920; pile[WZ2]=0; pile[WZ3]=(-620); pile[WZ4]=jvj+15; pile[WZ5]=(-604); pile[v[22]+6]=jvj+18; pile[v[22]+7]=(-3141); pile[v[22]+8]=NT; pile[v[22]+9]=(-612); pile[v[22]+10]=K; pile[v[22]+11]=jvj+19; 
(*f[1272])( );     /*INTERP14(494,10920,0,(-620),jvj+15,(-604),jvj+18,(-3141),NT,(-612),K,jvj+19)*/
if((x[jvj+19]==135)) goto l12;
goto l25;
l26:if((S==68)) goto l27;
goto l34;
l29:if((V18<4)) goto l30;
goto l39;
l30:pile[v[22]]=510; pile[WZ1]=K; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(510,K,V22)*/
V22=pile[WZ2]; 
pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(510,jvj+29,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=130; pile[WZ1]=K; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,K,V24)*/
V24=pile[WZ2]; 
pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,jvj+29,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=515; pile[WZ1]=K; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(515,K,V27)*/
V27=pile[WZ2]; 
pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(515,jvj+29,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=913; pile[WZ1]=K; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(913,K,jvj+31)*/
pile[WZ1]=jvj+29; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(913,jvj+29,jvj+32)*/
V26=V27;
V28=V29;
V102=x[jvj+32];
V104=x[jvj+31];
V106=V28;
V108=V26;
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V96)*/
V96=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V96; pile[WZ2]=10920; 
(*f[98])( );     /*SRA3(135,V96,10920,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V97; 
(*f[39])( );     /*SDX0(41,1,V97,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=V98; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V98,125,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=18; pile[WZ1]=V99; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(18,V99,126,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V100; 
(*f[39])( );     /*SDX0(20,V102,V100,V101)*/
V101=pile[WZ3]; 
pile[WZ1]=V104; pile[WZ2]=V101; 
(*f[39])( );     /*SDX0(20,V104,V101,V103)*/
V103=pile[WZ3]; 
pile[WZ1]=V106; pile[WZ2]=V103; 
(*f[39])( );     /*SDX0(20,V106,V103,V105)*/
V105=pile[WZ3]; 
pile[WZ1]=V108; pile[WZ2]=V105; 
(*f[39])( );     /*SDX0(20,V108,V105,V107)*/
V107=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V25; pile[WZ2]=V107; 
(*f[39])( );     /*SDX0(41,V25,V107,V109)*/
V109=pile[WZ3]; 
pile[WZ1]=V24; pile[WZ2]=V109; 
(*f[39])( );     /*SDX0(41,V24,V109,V111)*/
V111=pile[WZ3]; 
pile[WZ1]=V23; pile[WZ2]=V111; 
(*f[39])( );     /*SDX0(41,V23,V111,V113)*/
V113=pile[WZ3]; 
pile[WZ1]=V22; pile[WZ2]=V113; 
(*f[39])( );     /*SDX0(41,V22,V113,V115)*/
V115=pile[WZ3]; 
pile[v[22]]=V115; 
(*f[40])( );     /*SLG0(V115)*/
l31:if((V18!=2)) goto l39;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l39;
l37:if(x[jvj+29]!=incon) goto l38;
goto l39;
l38:if((S!=67)) goto l39;
V18=g[492];
if((V18<=0)) goto l39;
V19=vg[492];
if((V19!=0)) goto l28;
if((V18<3)) goto l30;
l28:pile[v[22]]=492; pile[WZ1]=10920; pile[WZ2]=0; pile[WZ3]=(-630); pile[WZ4]=jvj+29; pile[WZ5]=(-612); pile[v[22]+6]=K; pile[v[22]+7]=jvj+30; 
(*f[187])( );     /*INTERP0(492,10920,0,(-630),jvj+29,(-612),K,jvj+30)*/
if((x[jvj+30]==135)) goto l29;
goto l39;
}
