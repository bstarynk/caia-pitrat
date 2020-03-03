#include "dx.h"
void STR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,NN=0,V35=0,V44=0,V34=0,V33=0,V36=0,V40=0,X=0,V68=0,I=0,V73=0,V72=0,V82=0,QQ=0,NK=0,V75=0,V74=0,V116=0,V112=0,V113=0,V114=0,V115=0,V117=0,V119=0,V120=0,V81=0,V95=0,V92=0,V93=0,V94=0,V96=0,V98=0,V100=0,V99=0,V105=0,V102=0,V103=0,V104=0,V106=0,V109=0,V108=0,V79=0,V76=0,V78=0,V77=0,V80=0,V88=0,V87=0,V86=0,V89=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=38;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
X=incon;
V1=x[N];
NN=V1;
if((NN<=sepbase)) goto l12;
if((NN>sepnouv)) goto l12;
pile[v[22]]=365; pile[WZ1]=N; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(365,N,jvj+28)*/
l10:if((x[jvj+28]<=0)) goto l12;
x[jvj+4]=s[x[jvj+28]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+28];
pile[v[22]]=720; pile[WZ1]=N; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(720,N,jvj+1)*/
if((x[jvj+1]!=68)) goto l1;
x[jvj+2]=vo[20];z[jvj+2]=vz[20];
pile[v[22]]=301; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(301,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l2;
l1:pile[v[22]]=jvj+4; 
(*f[316])( );     /*NETT0(jvj+4)*/
l2:pile[v[22]]=720; pile[WZ1]=N; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(720,N,jvj+5)*/
if((x[jvj+5]!=68)) goto l11;
x[jvj+6]=vo[20];z[jvj+6]=vz[20];
pile[v[22]]=301; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(301,jvj+6,jvj+7)*/
if((x[jvj+7]!=68)) goto l11;
pile[v[22]]=302; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(302,jvj+4,jvj+8)*/
x[jvj+35]=x[jvj+8] ;z[jvj+35]=z[jvj+8];
l3:if((x[jvj+35]<=0)) goto l11;
x[jvj+9]=s[x[jvj+35]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+35];
pile[v[22]]=360; pile[WZ1]=jvj+9; 
(*f[71])( );     /*ENLV0(360,jvj+9)*/
x[jvj+35]=t[x[jvj+35]];
goto l3;
l11:x[jvj+28]=t[x[jvj+28]];
goto l10;
l12:if((NN<=sepfacts)) goto l15;
if((NN>sephist)) goto l15;
pile[v[22]]=345; pile[WZ1]=N; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(345,N,jvj+29)*/
pile[v[22]]=365; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(365,jvj+29,jvj+30)*/
l13:if((x[jvj+30]<=0)) goto l15;
x[jvj+13]=s[x[jvj+30]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+30];
pile[v[22]]=720; pile[WZ1]=N; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(720,N,jvj+10)*/
if((x[jvj+10]!=68)) goto l4;
x[jvj+11]=vo[20];z[jvj+11]=vz[20];
pile[v[22]]=301; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(301,jvj+11,jvj+12)*/
if((x[jvj+12]==68)) goto l5;
l4:pile[v[22]]=jvj+13; 
(*f[316])( );     /*NETT0(jvj+13)*/
l5:pile[v[22]]=720; pile[WZ1]=N; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(720,N,jvj+14)*/
if((x[jvj+14]!=68)) goto l14;
x[jvj+15]=vo[20];z[jvj+15]=vz[20];
pile[v[22]]=301; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(301,jvj+15,jvj+16)*/
if((x[jvj+16]!=68)) goto l14;
pile[v[22]]=302; pile[WZ1]=jvj+13; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(302,jvj+13,jvj+17)*/
x[jvj+36]=x[jvj+17] ;z[jvj+36]=z[jvj+17];
l6:if((x[jvj+36]<=0)) goto l14;
x[jvj+18]=s[x[jvj+36]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+36];
pile[v[22]]=360; pile[WZ1]=jvj+18; 
(*f[71])( );     /*ENLV0(360,jvj+18)*/
x[jvj+36]=t[x[jvj+36]];
goto l6;
l14:x[jvj+30]=t[x[jvj+30]];
goto l13;
l15:if((NN<=sepcod)) goto l20;
if((NN>seppb)) goto l20;
pile[v[22]]=367; pile[WZ1]=N; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(367,N,jvj+31)*/
l16:if((x[jvj+31]<=0)) goto l20;
x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=365; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(365,jvj+32,jvj+33)*/
x[jvj+38]=x[jvj+33] ;z[jvj+38]=z[jvj+33];
l17:if((x[jvj+38]>0)) goto l18;
x[jvj+31]=t[x[jvj+31]];
goto l16;
l18:x[jvj+22]=s[x[jvj+38]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+38];
pile[v[22]]=720; pile[WZ1]=N; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(720,N,jvj+19)*/
if((x[jvj+19]!=68)) goto l7;
x[jvj+20]=vo[20];z[jvj+20]=vz[20];
pile[v[22]]=301; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(301,jvj+20,jvj+21)*/
if((x[jvj+21]==68)) goto l8;
l7:pile[v[22]]=jvj+22; 
(*f[316])( );     /*NETT0(jvj+22)*/
l8:pile[v[22]]=720; pile[WZ1]=N; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(720,N,jvj+23)*/
if((x[jvj+23]!=68)) goto l19;
x[jvj+24]=vo[20];z[jvj+24]=vz[20];
pile[v[22]]=301; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(301,jvj+24,jvj+25)*/
if((x[jvj+25]!=68)) goto l19;
pile[v[22]]=302; pile[WZ1]=jvj+22; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(302,jvj+22,jvj+26)*/
x[jvj+37]=x[jvj+26] ;z[jvj+37]=z[jvj+26];
l9:if((x[jvj+37]<=0)) goto l19;
x[jvj+27]=s[x[jvj+37]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+37];
pile[v[22]]=360; pile[WZ1]=jvj+27; 
(*f[71])( );     /*ENLV0(360,jvj+27)*/
x[jvj+37]=t[x[jvj+37]];
goto l9;
l19:x[jvj+38]=t[x[jvj+38]];
goto l17;
l20:V35=t[x[N]];
V44=r[V35];
if((V44==2)) goto l21;
if((V44!=3)) goto l23;
V68=t[V35];
if((V68<=0)) goto l23;
X=V68;
l23:v[8]=0;
v[18]=NN;
I=0;
l24:cpb[I]=(-1);
I++;
if((I<=32767)) goto l24;
if(X!=incon) goto l32;
l34:v[0]=jvj; v[22]-=1; return;
l21:V34=t[V35];
V33=t[V34];
V36=r[V33];
if((V36==4)) goto l22;
if((V33<=0)) goto l23;
if((V36<=4)) goto l23;
if((V34<=0)) goto l23;
X=V33;
goto l23;
l22:if((V33<=0)) goto l23;
if((V34<=0)) goto l23;
V40=t[V33];
if((V40<=0)) goto l23;
X=V40;
goto l23;
l26:pile[v[22]]=V75; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V75,83,V74)*/
V74=pile[WZ2]; 
l29:pile[v[22]]=V74; 
(*f[40])( );     /*SLG0(V74)*/
if((V81!=2)) goto l33;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l33:sy[2]=((V86>>8)&0xff);sy[2+1]=(V86&0xff);
sy[4]=((V89>>8)&0xff);sy[4+1]=(V89&0xff);
V79=0;
v[2]=v[1];
V76=V79;
v[1]=4;
pile[v[22]]=V76; pile[WZ1]=95; 
(*f[38])( );     /*SPC0(V76,95,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=NN; pile[WZ1]=V78; 
(*f[99])( );     /*SPM0(NN,V78,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=V77; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V77,0,V80)*/
V80=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V80; pile[WZ1]=1153; pile[WZ2]=3; 
(*f[67])( );     /*SPA0(V80,1153,3)*/
fwrite(sy,sizeof(char),V88,fx[3]);
pile[v[22]]=3; 
(*f[63])( );     /*SPZ1(3)*/
goto l34;
l27:if((V81<4)) goto l28;
goto l33;
l28:V116=x[N];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V112; pile[WZ2]=10029; 
(*f[98])( );     /*SRA3(135,V112,10029,V113)*/
V113=pile[WZ3]; 
pile[v[22]]=V113; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V113,125,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V116; pile[WZ2]=V114; 
(*f[39])( );     /*SDX0(20,V116,V114,V115)*/
V115=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=QQ; pile[WZ2]=V115; 
(*f[39])( );     /*SDX0(41,QQ,V115,V117)*/
V117=pile[WZ3]; 
pile[v[22]]=V117; pile[WZ1]=(-2322); 
(*f[37])( );     /*SRA0(V117,(-2322),V119)*/
V119=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NK; pile[WZ2]=V119; 
(*f[39])( );     /*SDX0(41,NK,V119,V120)*/
V120=pile[WZ3]; 
pile[v[22]]=V120; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V120,(-4670),V75)*/
V75=pile[WZ2]; 
V74=incon;
if((NK>1)) goto l26;
V74=V75;
goto l29;
l32:pile[v[22]]=X; 
(*f[677])( );     /*CORVA0(X)*/
pile[v[22]]=6; pile[WZ1]=1; 
(*f[678])( );     /*STRA0(6,1,QQ,NK)*/
QQ=pile[WZ2]; NK=pile[WZ3]; 
V88=QQ+2;
V87=V88>>16;
V86=V87&65535;
V89=V88&65535;
sy[QQ]=((stofin>>8)&0xff);sy[QQ+1]=(stofin&0xff);
sy[0]=((NK>>8)&0xff);sy[0+1]=(NK&0xff);
if((QQ<=590000)) goto l30;
V95=x[N];
v[108]=NN;
pile[v[22]]=20; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(20,0,126,V92)*/
V92=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V92; pile[WZ2]=10029; 
(*f[42])( );     /*SRA1(135,V92,10029,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V95; pile[WZ2]=V93; 
(*f[39])( );     /*SDX0(20,V95,V93,V94)*/
V94=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=QQ; pile[WZ2]=V94; 
(*f[39])( );     /*SDX0(41,QQ,V94,V96)*/
V96=pile[WZ3]; 
pile[v[22]]=V96; pile[WZ1]=(-2322); 
(*f[37])( );     /*SRA0(V96,(-2322),V98)*/
V98=pile[WZ2]; 
V100=75-V98;
pile[v[22]]=V100; pile[WZ1]=V98; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(V100,V98,126,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=V99; 
(*f[40])( );     /*SLG0(V99)*/
l30:if((NK<=31900)) goto l31;
V105=x[N];
v[108]=NN;
pile[v[22]]=20; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(20,0,126,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V102; pile[WZ2]=10029; 
(*f[42])( );     /*SRA1(135,V102,10029,V103)*/
V103=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V105; pile[WZ2]=V103; 
(*f[39])( );     /*SDX0(20,V105,V103,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NK; pile[WZ2]=V104; 
(*f[39])( );     /*SDX0(41,NK,V104,V106)*/
V106=pile[WZ3]; 
pile[v[22]]=V106; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V106,(-4670),V73)*/
V73=pile[WZ2]; 
V72=incon;
pile[v[22]]=V73; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V73,83,V72)*/
V72=pile[WZ2]; 
V109=75-V72;
pile[v[22]]=V109; pile[WZ1]=V72; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(V109,V72,126,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=V108; 
(*f[40])( );     /*SLG0(V108)*/
l31:if((v[21]!=0)) goto l33;
if((v[26]!=0)) goto l33;
V81=g[91];
if((V81<=0)) goto l33;
V82=vg[91];
if((V82!=0)) goto l25;
if((V81<3)) goto l28;
l25:pile[v[22]]=91; pile[WZ1]=10029; pile[WZ2]=0; pile[WZ3]=(-625); pile[WZ4]=N; pile[WZ5]=(-682); pile[v[22]+6]=QQ; pile[v[22]+7]=(-2364); pile[v[22]+8]=NK; pile[v[22]+9]=jvj+34; 
(*f[1059])( );     /*INTERP11(91,10029,0,(-625),N,(-682),QQ,(-2364),NK,jvj+34)*/
if((x[jvj+34]==135)) goto l27;
goto l33;
}
