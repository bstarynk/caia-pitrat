#include "dx.h"
void DISQUZ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V2=0,V3=0,V26=0,RS=0,V19=0,V16=0,V12=0,P=0,V8=0,V32=0,V30=0,V31=0,V33=0,V40=0,QQ=0,V53=0,V54=0,V55=0,V56=0,V58=0,V39=0,V51=0,V46=0,V50=0,V44=0,V45=0,V47=0,V37=0,V35=0,V34=0,V36=0,V64=0,V65=0,V86=0,V85=0,RR=0,V72=0,V73=0,V74=0,V75=0,V76=0,V77=0,V78=0,V69=0,V79=0,V82=0,V80=0,V68=0,V67=0,V66=0,V70=0,V83=0,V81=0,V84=0,V87=0,V102=0,V101=0,V89=0,V98=0,V135=0,V136=0,V137=0,V138=0,V139=0,V140=0,V99=0,V93=0,V94=0,V122=0,V131=0,V128=0,V127=0,V129=0,V130=0,V123=0,V125=0,V126=0,V132=0,V103=0,V111=0,V113=0,V114=0,V115=0,V116=0,V112=0,V117=0,V109=0,V133=0,V134=0,V95=0,V107=0,V118=0,V119=0,V120=0,V121=0,V108=0,V106=0,V105=0,V104=0,V90=0,V88=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=10901;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==281&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((v[66]!=0)) goto l2;
s[10547]=66;
s[10169]=66;
l2:I=1;
l1:if((I<=sepcte)) goto l4;
x[jvj+19]=vo[20];z[jvj+19]=vz[20];
pile[v[22]]=476; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(476,jvj+19,jvj+20)*/
l16:if((x[jvj+20]>0)) goto l17;
pile[v[22]]=474; pile[WZ1]=240; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(474,240,jvj+21)*/
l19:if((x[jvj+21]>0)) goto l20;
x[jvj+23]=vo[20];z[jvj+23]=vz[20];
pile[v[22]]=1316; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(1316,jvj+23,jvj+24)*/
if((x[jvj+24]!=68)) goto l26;
pile[v[22]]=117; pile[WZ1]=1427; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(117,1427,V51)*/
V51=pile[WZ2]; 
V46=0;
V50=80*V51;
v[2]=v[1];
V44=V46;
v[1]=4;
pile[v[22]]=(-10008); pile[WZ1]=V44; 
(*f[64])( );     /*SRA2((-10008),V44,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V45,0,V47)*/
V47=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V47; pile[WZ1]=1153; pile[WZ2]=8; 
(*f[67])( );     /*SPA0(V47,1153,8)*/
fwrite(cmt,sizeof(char),V50,fx[8]);
pile[v[22]]=8; 
(*f[63])( );     /*SPZ1(8)*/
l26:pile[v[22]]=246; pile[WZ1]=240; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(246,240,V37)*/
V37=pile[WZ2]; 
V64=6;
V65=0;
V86=V65;
V85=V64;
l28:if((V86<=V37)) goto l29;
RR=V85;
V87=1;
V102=RR;
V101=V87;
l32:if((V101>sepcte)) goto l44;
if((V101>sepcte)) goto l27;
V89=r[V101];
if((V89!=1)) goto l43;
if((V101!=240)) goto l34;
V98=V101+1;
v[18]=V101;
V135=0;
l33:cpb[V135]=(-1);
V135++;
if((V135<=32767)) goto l33;
v[8]=0;
sy[V102]=((V101>>8)&0xff);sy[V102+1]=(V101&0xff);
pile[v[22]]=V101; 
(*f[677])( );     /*CORVA0(V101)*/
V136=V102+4;
pile[v[22]]=V136; pile[WZ1]=1; 
(*f[678])( );     /*STRA0(V136,1,V137,V138)*/
V137=pile[WZ2]; V138=pile[WZ3]; 
V139=V102+2;
V140=V137+2;
sy[V139]=((V138>>8)&0xff);sy[V139+1]=(V138&0xff);
V99=V140;
sy[V137]=((stofin>>8)&0xff);sy[V137+1]=(stofin&0xff);
V102=V99;
V101=V98;
goto l32;
l4:V2=r[I];
if((V2!=1)) goto l3;
x[jvj+2]=I ;z[jvj+2]=(I<=sepcte) ? I : 0;
V3=s[x[jvj+2]];
if((V3!=68)) goto l3;
if((x[jvj+2]==240)) goto l3;
if((v[66]!=0)) goto l5;
if(x[jvj+2]==10547||x[jvj+2]==10169) goto l3;
l5:s[x[jvj+2]]=67;
pile[v[22]]=jvj+2; 
(*f[670])( );     /*STR0(jvj+2)*/
l3:I++;
goto l1;
l9:pile[v[22]]=466; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(466,jvj+7,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=122; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(122,jvj+7,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(jvj+12,jvj+9,RS)*/
RS=pile[WZ2]; 
w[P][V26]=RS;
l14:x[jvj+25]=t[x[jvj+25]];
l12:if((x[jvj+25]>0)) goto l13;
pile[v[22]]=415; pile[WZ1]=jvj+6; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(415,jvj+6,jvj+17)*/
if((x[jvj+17]!=68)) goto l15;
pile[v[22]]=240; pile[WZ1]=496; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(240,496,jvj+9)*/
l15:pile[v[22]]=415; pile[WZ1]=jvj+6; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(415,jvj+6,jvj+18)*/
if((x[jvj+18]!=67)) goto l18;
pile[v[22]]=496; pile[WZ1]=240; pile[WZ2]=V12; 
(*f[134])( );     /*OTA0(496,240,V12)*/
l18:x[jvj+20]=t[x[jvj+20]];
goto l16;
l10:pile[v[22]]=466; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(466,jvj+7,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=122; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(122,jvj+7,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+13,jvj+9,jvj+10)*/
w[P][V19]=x[jvj+10];
if(x[jvj+13]==2||x[jvj+13]==4) goto l8;
pile[v[22]]=jvj+6; pile[WZ1]=415; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+6,415,68)*/
l8:pile[v[22]]=122; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(122,jvj+7,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+8,jvj+9,jvj+10)*/
goto l14;
l11:w[P][V19]=incon;
goto l14;
l13:x[jvj+7]=s[x[jvj+25]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+25];
pile[v[22]]=158; pile[WZ1]=jvj+7; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(158,jvj+7,jvj+11)*/
if((x[jvj+11]==96)) goto l9;
if((x[jvj+11]==20)) goto l10;
if((x[jvj+11]!=23)) goto l14;
pile[v[22]]=466; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(466,jvj+7,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=122; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(122,jvj+7,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+9; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(jvj+14,jvj+9,jvj+15)*/
w[P][V16]=x[jvj+15];
if((x[jvj+15]==0)) goto l14;
pile[v[22]]=jvj+6; pile[WZ1]=415; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+6,415,68)*/
goto l14;
l17:x[jvj+9]=s[x[jvj+20]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+20];
pile[v[22]]=218; pile[WZ1]=jvj+9; pile[WZ2]=415; pile[WZ3]=67; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(218,jvj+9,415,67,jvj+6)*/
V12=x[jvj+9];
P=V12;
pile[v[22]]=479; pile[WZ1]=240; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(479,240,jvj+16)*/
x[jvj+25]=x[jvj+16] ;z[jvj+25]=z[jvj+16];
goto l12;
l20:x[jvj+3]=s[x[jvj+21]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+21];
V8=x[jvj+3];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=298)) goto l6;
pile[v[22]]=jvj+3; 
(*f[671])( );     /*DIAPB0(jvj+3)*/
l6:if(x[jvj+4]==298||x[jvj+4]==978||x[jvj+4]==553||x[jvj+4]==1651) goto l7;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+3; pile[WZ2]=184; pile[WZ3]=jvj+3; 
(*f[672])( );     /*DIAG0(jvj+3,jvj+3,184,jvj+3)*/
l7:pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(365,jvj+3,jvj+5)*/
if((x[jvj+5]==0)) goto l21;
pile[v[22]]=jvj+3; pile[WZ1]=85; 
(*f[383])( );     /*TESTVAR0(jvj+3,85)*/
l21:pile[v[22]]=474; pile[WZ1]=240; pile[WZ2]=V8; 
(*f[134])( );     /*OTA0(474,240,V8)*/
x[jvj+21]=t[x[jvj+21]];
goto l19;
l24:if((V39<4)) goto l25;
l22:V32=0;
v[2]=v[1];
V30=V32;
v[1]=4;
pile[v[22]]=(-10643); pile[WZ1]=V30; 
(*f[64])( );     /*SRA2((-10643),V30,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V31,0,V33)*/
V33=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V33; pile[WZ1]=1153; pile[WZ2]=9; 
(*f[67])( );     /*SPA0(V33,1153,9)*/
fwrite(sy,sizeof(char),QQ,fx[9]);
pile[v[22]]=9; 
(*f[63])( );     /*SPZ1(9)*/
l27:x[jvj+1]=incon; v[0]=jvj; return;
l25:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V53; pile[WZ2]=10901; 
(*f[98])( );     /*SRA3(135,V53,10901,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V54,125,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=QQ; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(41,QQ,V55,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=V56; pile[WZ1]=(-2322); 
(*f[37])( );     /*SRA0(V56,(-2322),V58)*/
V58=pile[WZ2]; 
pile[v[22]]=V58; 
(*f[40])( );     /*SLG0(V58)*/
if((V39!=2)) goto l22;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l22;
l29:V72=knd[V86];
V73=knr[V86];
V74=V85+2;
V75=V85+4;
V76=vbl[V86];
V77=V85+6;
V78=sansechec[V86];
sy[V85]=((V72>>8)&0xff);sy[V85+1]=(V72&0xff);
V69=V73;
sy[V74]=((V69>>8)&0xff);sy[V74+1]=(V69&0xff);
sy[V75]=((V76>>8)&0xff);sy[V75+1]=(V76&0xff);
sy[V77]=((V78>>8)&0xff);sy[V77+1]=(V78&0xff);
V79=V69-1;
V82=V85+8;
V80=0;
l30:if((V80<=V79)) goto l31;
V68=V69+4;
V67=2*V68;
V66=V85+V67;
V70=V86+1;
V85=V66;
V86=V70;
goto l28;
l31:V83=2*V80;
V81=V82+V83;
V84=vnd[V86][V80];
sy[V81]=((V84>>8)&0xff);sy[V81+1]=(V84&0xff);
V80++;
goto l30;
l34:V93=V101;
V94=V101+1;
V122=s[V93];
if(V122!=68&&V122!=67) goto l37;
V131=t[V93];
V128=t[V131];
if((V128!=0)) goto l35;
V127=r[V131];
if((V127!=2)) goto l42;
l35:V129=t[V128];
if((V129!=0)) goto l36;
V130=r[V131];
if((V130==2)) goto l42;
l36:V123=t[V128];
V125=r[V123];
if((V125!=4)) goto l37;
V126=t[V123];
if((V126==0)) goto l42;
l37:V132=66;
l38:if((V103=w[V93][1])==incon) goto l40;
if((V103!=23)) goto l41;
V111=V102+6;
V113=V102+8;
V114=V93;
V115=V102+2;
V116=V102+4;
if((V112=w[V93][2])==incon) goto l40;
if((V117=w[V93][0])==incon) goto l40;
sy[V111]=((V112>>8)&0xff);sy[V111+1]=(V112&0xff);
V109=V113;
sy[V102]=((V114>>8)&0xff);sy[V102+1]=(V114&0xff);
sy[V115]=((V103>>8)&0xff);sy[V115+1]=(V103&0xff);
sy[V116]=((V117>>8)&0xff);sy[V116+1]=(V117&0xff);
l39:V133=V132;
V134=V109+2;
sy[V109]=((V133>>8)&0xff);sy[V109+1]=(V133&0xff);
V95=V134;
V102=V95;
V101=V94;
goto l32;
l40:V118=V102+4;
V119=V93;
V120=V102+2;
if((V121=w[V93][0])==incon) goto l27;
V109=V118;
sy[V102]=((V119>>8)&0xff);sy[V102+1]=(V119&0xff);
sy[V120]=((V121>>8)&0xff);sy[V120+1]=(V121&0xff);
goto l39;
l41:V104=V93;
V105=V102+2;
V106=V102+4;
V108=V102+6;
if((V107=w[V93][0])==incon) goto l40;
sy[V102]=((V104>>8)&0xff);sy[V102+1]=(V104&0xff);
sy[V105]=((V103>>8)&0xff);sy[V105+1]=(V103&0xff);
sy[V106]=((V107>>8)&0xff);sy[V106+1]=(V107&0xff);
V109=V108;
goto l39;
l42:V132=67;
goto l38;
l43:V90=V101+1;
V101=V90;
goto l32;
l44:V88=V102+2;
sy[V102]=((stobout>>8)&0xff);sy[V102+1]=(stobout&0xff);
QQ=V88;
V35=QQ>>16;
V34=V35&65535;
V36=QQ&65535;
sy[0]=((V34>>8)&0xff);sy[0+1]=(V34&0xff);
sy[2]=((V36>>8)&0xff);sy[2+1]=(V36&0xff);
sy[4]=((V37>>8)&0xff);sy[4+1]=(V37&0xff);
V39=g[490];
if((V39<=0)) goto l22;
V40=vg[490];
if((V40!=0)) goto l23;
if((V39<3)) goto l25;
l23:pile[v[22]]=490; pile[WZ1]=10901; pile[WZ2]=0; pile[WZ3]=(-682); pile[WZ4]=QQ; pile[WZ5]=jvj+22; 
(*f[612])( );     /*INTERP9(490,10901,0,(-682),QQ,jvj+22)*/
if((x[jvj+22]==135)) goto l24;
goto l22;
}
