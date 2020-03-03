#include "dx.h"
void INT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V9=0,V38=0,V10=0,V14=0,V13=0,I=0,V20=0,V16=0,V21=0,KP=0,LL=0,V29=0,V26=0,V28=0,V24=0,V25=0,V27=0,SK=0,V35=0,V37=0,HH=0,V32=0,V31=0,V34=0,V33=0,V40=0,V41=0,V53=0,V59=0,V63=0,V61=0,V54=0,V66=0,V67=0,V68=0,V69=0,V70=0,V71=0,V77=0,V78=0,V79=0,V80=0,V81=0,V82=0,V83=0,V84=0,V85=0,V86=0,V89=0,V99=0,V90=0,V96=0,V92=0,V91=0,V94=0,V93=0,V73=0,V72=0,V74=0,V75=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=10589;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==22&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=496; pile[WZ1]=240; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(496,240,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=128; pile[WZ1]=77; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(128,77,jvj+5)*/
l3:if((x[jvj+5]<=0)) goto l7;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+6)*/
x[jvj+5]=t[x[jvj+5]];
goto l3;
l2:x[jvj+4]=s[x[jvj+2]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+4)*/
x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+8]=s[x[jvj+27]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+27];
pile[v[22]]=466; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(466,jvj+8,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=122; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(122,jvj+8,jvj+9)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+9; pile[WZ3]=jvj+11; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+10,jvj+9,V38,jvj+11)*/
V38=pile[WZ2]; 
V10=V38;
w[V8][V9]=V10;
l6:x[jvj+27]=t[x[jvj+27]];
l4:if((x[jvj+27]>0)) goto l5;
x[jvj+3]=t[x[jvj+3]];
l7:if((x[jvj+3]>0)) goto l8;
V14=t[240];
V13=s[V14];
w[240][0]=V13;
vo[40]=250;vz[40]=0;
vo[36]=250;vz[36]=0;
I=0;
l9:opn[I]=0;
I++;
if((I<=9999)) goto l9;
V20=vv[16];
pile[v[22]]=V20; 
(*f[62])( );     /*INH0(V20)*/
pile[v[22]]=413; pile[WZ1]=240; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(413,240,V16)*/
V16=pile[WZ2]; 
v[81]=V16;
l10:x[jvj+12]=vo[20];z[jvj+12]=vz[20];
pile[v[22]]=v[14]; pile[WZ1]=499; pile[WZ2]=jvj+13; 
(*f[46])( );     /*TRI0(v[14],499,jvj+13)*/
pile[v[22]]=jvj+12; pile[WZ1]=415; 
(*f[35])( );     /*CHGC1(jvj+12,415,jvj+13)*/
pile[WZ1]=1733; pile[WZ2]=129; 
(*f[35])( );     /*CHGC1(jvj+12,1733,129)*/
V21=vv[33];
if((V21>0)) goto l11;
if((V21!=0)) goto l12;
V66=0;
v[2]=v[1];
V67=V66;
v[1]=4;
pile[v[22]]=(-3023); pile[WZ1]=V67; 
(*f[64])( );     /*SRA2((-3023),V67,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=V68; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V68,62,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=(-4539); pile[WZ1]=V69; 
(*f[64])( );     /*SRA2((-4539),V69,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=V70; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V70,0,V71)*/
V71=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V71; pile[WZ1]=406; pile[WZ2]=130; 
(*f[67])( );     /*SPA0(V71,406,130)*/
V77=0;
V78=v[17];
v[2]=v[1];
V79=V77;
v[1]=4;
pile[v[22]]=(-4539); pile[WZ1]=V79; 
(*f[64])( );     /*SRA2((-4539),V79,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=V80; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V80,0,V81)*/
V81=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V81; pile[WZ1]=1146; pile[WZ2]=2; 
(*f[67])( );     /*SPA0(V81,1146,2)*/
fscanf(fx[2],"%s",res);
fclose(fx[2]);
v[17]=V78;
V82=0;
v[2]=v[1];
V83=V82;
v[1]=4;
pile[v[22]]=(-4501); pile[WZ1]=V83; 
(*f[64])( );     /*SRA2((-4501),V83,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=(-4539); pile[WZ1]=V84; 
(*f[64])( );     /*SRA2((-4539),V84,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V85,0,V86)*/
V86=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V86; pile[WZ1]=406; pile[WZ2]=130; 
(*f[67])( );     /*SPA0(V86,406,130)*/
V89=0;
V99=V89;
l25:V90=res[V99];
if((V90==0)) goto l26;
V96=V99+1;
V99=V96;
goto l25;
l8:x[jvj+10]=s[x[jvj+3]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+3];
pile[v[22]]=jvj+10; 
(*f[59])( );     /*LECT0(jvj+10)*/
pile[v[22]]=479; pile[WZ1]=240; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(479,240,jvj+7)*/
V8=x[jvj+10];
x[jvj+27]=x[jvj+7] ;z[jvj+27]=z[jvj+7];
goto l4;
l11:vv[198]=1;
pile[v[22]]=jvj+12; pile[WZ1]=331; pile[WZ2]=32; 
(*f[69])( );     /*CHGC3(jvj+12,331,32)*/
pile[WZ1]=332; 
(*f[69])( );     /*CHGC3(jvj+12,332,32)*/
l12:pile[v[22]]=117; pile[WZ1]=1427; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,1427,V29)*/
V29=pile[WZ2]; 
V26=0;
V28=80*V29;
v[2]=v[1];
V24=V26;
v[1]=4;
pile[v[22]]=(-10008); pile[WZ1]=V24; 
(*f[64])( );     /*SRA2((-10008),V24,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V25,0,V27)*/
V27=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V27; pile[WZ1]=1146; pile[WZ2]=8; 
(*f[67])( );     /*SPA0(V27,1146,8)*/
fread(cmt,sizeof(char),V28,fx[8]);
pile[v[22]]=8; 
(*f[63])( );     /*SPZ1(8)*/
l13:pile[v[22]]=159; pile[WZ1]=240; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(159,240,jvj+14)*/
l14:if((x[jvj+14]>0)) goto l15;
SK=v[3];
V35=0;
l17:pres[V35]=1;
V35++;
if((V35<=9999)) goto l17;
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(494,324,jvj+15)*/
l18:if((x[jvj+15]>0)) goto l19;
V32=vv[33];
if((V32!=0)) goto l21;
V31=vv[0];
if((V31==99)) goto l21;
V34=sepcte+1;
V33=SK-V34;
pile[v[22]]=0; pile[WZ1]=(-2406); 
(*f[37])( );     /*SRA0(0,(-2406),V40)*/
V40=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V33; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(41,V33,V40,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; 
(*f[40])( );     /*SLG0(V41)*/
l21:x[jvj+1]=incon; v[0]=jvj; return;
l15:x[jvj+19]=s[x[jvj+14]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+14];
pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(216,158,jvj+17)*/
x[jvj+18]=vo[20];z[jvj+18]=vz[20];
pile[v[22]]=jvj+18; pile[WZ1]=128; 
(*f[36])( );     /*PLUSC0(jvj+18,128,jvj+17)*/
pile[v[22]]=128; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(128,jvj+19,jvj+20)*/
V53=(-41);
l22:if((x[jvj+20]>0)) goto l23;
x[jvj+21]=vo[20];z[jvj+21]=vz[20];
pile[v[22]]=jvj+21; pile[WZ1]=191; pile[WZ2]=675; 
(*f[35])( );     /*CHGC1(jvj+21,191,675)*/
pile[WZ1]=1654; pile[WZ2]=1684; 
(*f[35])( );     /*CHGC1(jvj+21,1654,1684)*/
pile[v[22]]=158; pile[WZ1]=jvj+17; 
(*f[71])( );     /*ENLV0(158,jvj+17)*/
pile[v[22]]=117; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+19,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=195; pile[WZ1]=jvj+17; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(195,jvj+17,jvj+22)*/
d[V59]=x[jvj+22];
l16:x[jvj+14]=t[x[jvj+14]];
goto l14;
l19:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=246; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(246,jvj+16,V37)*/
V37=pile[WZ2]; 
HH=V37;
if((HH<0)) goto l20;
if((HH>=10000)) goto l20;
pres[HH]=0;
l20:x[jvj+15]=t[x[jvj+15]];
goto l18;
l23:x[jvj+23]=s[x[jvj+20]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+20];
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+25]=w[x[jvj+24]][3])==incon) goto l24;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+25; pile[WZ3]=jvj+26; 
(*f[45])( );if(v[102]) goto l24;     /*FNDZ0(jvj+23,jvj+25,V63,jvj+26)*/
V63=pile[WZ2]; 
V61=V63;
V54=V61;
pile[v[22]]=V53; pile[WZ1]=V54; pile[WZ2]=jvj+17; pile[WZ3]=195; 
(*f[70])( );     /*PLUSC1(V53,V54,jvj+17,195)*/
l24:x[jvj+20]=t[x[jvj+20]];
goto l22;
l26:V92=V99-1;
V91=res[V92];
V94=V92-1;
V93=res[V94];
V73=V91;
V72=V93;
V74=V73;
V75=V72;
LL=V74;
KP=V75;
pile[v[22]]=jvj+12; pile[WZ1]=331; pile[WZ2]=KP; 
(*f[69])( );     /*CHGC3(jvj+12,331,KP)*/
pile[WZ1]=332; pile[WZ2]=LL; 
(*f[69])( );     /*CHGC3(jvj+12,332,LL)*/
goto l12;
}
