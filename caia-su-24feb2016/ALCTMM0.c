#include "dx.h"
void ALCTMM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,DX=0,V2=0,V1=0,I=0,V32=0,V33=0,V18=0,V12=0,V16=0,V15=0,V10=0,V47=0,V48=0,V13=0,V14=0,V35=0,V36=0,V37=0,V38=0,V40=0,V7=0,V21=0,V22=0,V23=0,V24=0,V26=0,V27=0,V28=0,V29=0,V31=0,V41=0,V42=0,V43=0,V44=0,V46=0,V64=0,V65=0,V67=0,V66=0,V68=0,V69=0,V71=0,V70=0,V72=0,V73=0,V75=0,V74=0;
int N1,N2,NM,TYY,D1,D2;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=10810;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==476&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N1=pile[v[22]]; N2=pile[v[22]+1]; NM=pile[v[22]+2]; TYY=pile[v[22]+3]; D1=pile[v[22]+4]; D2=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[TYY]==531)) goto l14;
if((x[TYY]!=453)) goto l10;
pile[v[22]]=D2; pile[WZ1]=952; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(D2,952,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=D1; pile[WZ2]=951; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,D1,951,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=N2; pile[WZ2]=515; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,N2,515,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=N1; pile[WZ2]=510; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,N1,510,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=0; pile[WZ2]=416; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,0,416,jvj+20)*/
pile[v[22]]=140; pile[WZ1]=NM; pile[WZ2]=158; pile[WZ3]=453; pile[WZ4]=jvj+20; pile[WZ5]=jvj+3; 
(*f[48])( );     /*QUADRI1(140,NM,158,453,jvj+20,jvj+3)*/
x[jvj+10]=vo[16];z[jvj+10]=vz[16];
pile[v[22]]=0; pile[WZ1]=(-3011); 
(*f[37])( );     /*SRA0(0,(-3011),V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=NM; 
(*f[37])( );     /*SRA0(V21,NM,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V22,(-1318),V23)*/
V23=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=N1; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(41,N1,V23,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; pile[WZ1]=(-3012); 
(*f[37])( );     /*SRA0(V24,(-3012),V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=(-1410); 
(*f[37])( );     /*SRA0(V26,(-1410),V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V27,(-1318),V28)*/
V28=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=N2; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(41,N2,V28,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; pile[WZ1]=(-3013); 
(*f[37])( );     /*SRA0(V29,(-3013),V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; 
(*f[40])( );     /*SLG0(V31)*/
V2=D1-1;
V1=N1+V2;
I=D1;
l2:if((I<=V1)) goto l12;
pile[v[22]]=jvj+10; pile[WZ1]=128; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(jvj+10,128,jvj+3)*/
l10:if(x[TYY]!=979&&x[TYY]!=1027) goto l11;
pile[v[22]]=D2; pile[WZ1]=952; pile[WZ2]=jvj+21; 
(*f[46])( );     /*TRI0(D2,952,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=D1; pile[WZ2]=951; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,D1,951,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=N1; pile[WZ2]=510; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,N1,510,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=0; pile[WZ2]=416; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,0,416,jvj+24)*/
pile[v[22]]=140; pile[WZ1]=NM; pile[WZ2]=158; pile[WZ3]=TYY; pile[WZ4]=jvj+24; pile[WZ5]=jvj+5; 
(*f[48])( );     /*QUADRI1(140,NM,158,TYY,jvj+24,jvj+5)*/
x[jvj+11]=vo[16];z[jvj+11]=vz[16];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=TYY; 
(*f[42])( );     /*SRA1(135,0,TYY,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; pile[WZ1]=NM; 
(*f[37])( );     /*SRA0(V41,NM,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V42,(-1318),V43)*/
V43=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=N1; pile[WZ2]=V43; 
(*f[39])( );     /*SDX0(41,N1,V43,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; pile[WZ1]=(-3012); 
(*f[37])( );     /*SRA0(V44,(-3012),V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; 
(*f[40])( );     /*SLG0(V46)*/
V16=D1-1;
V15=N1+V16;
V10=D1;
l5:if((V10<=V15)) goto l13;
pile[v[22]]=jvj+11; pile[WZ1]=128; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+11,128,jvj+5)*/
V13=(-999999);
pile[v[22]]=128; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(128,jvj+5,jvj+6)*/
l7:if((x[jvj+6]>0)) goto l8;
if((V13==(-999999))) goto l11;
pile[v[22]]=jvj+5; pile[WZ1]=515; pile[WZ2]=V13; 
(*f[43])( );     /*CHGC2(jvj+5,515,V13)*/
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; return;
l8:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=667; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(667,jvj+7,V14)*/
V14=pile[WZ2]; 
if(V14>V13) V13=V14;
l9:x[jvj+6]=t[x[jvj+6]];
goto l7;
l12:pile[v[22]]=I; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(I,117,jvj+2)*/
pile[v[22]]=0; pile[WZ1]=(-3016); 
(*f[37])( );     /*SRA0(0,(-3016),V32)*/
V32=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=I; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(41,I,V32,V33)*/
V33=pile[WZ3]; 
V64=V33-1;
V65=0;
l15:if((V65<=V64)) goto l16;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
V4=bh[v[1]][0];
if(V4==40||V4==37) goto l1;
pile[v[22]]=355; pile[WZ1]=jvj+2; pile[WZ2]=0; pile[WZ3]=jvj+2; 
(*f[757])( );     /*LEXU0(355,jvj+2,0,jvj+2,DX)*/
DX=pile[WZ4]; 
l1:if((V4!=40)) goto l3;
pile[v[22]]=0; pile[WZ1]=jvj+2; pile[WZ2]=120; pile[WZ3]=355; pile[WZ4]=jvj+2; 
(*f[662])( );     /*LEXT1(0,jvj+2,120,355,jvj+2,DX)*/
DX=pile[WZ5]; 
l3:pile[v[22]]=jvj+3; pile[WZ1]=128; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+3,128,jvj+2)*/
I++;
goto l2;
l13:pile[v[22]]=V10; pile[WZ1]=117; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(V10,117,jvj+4)*/
pile[v[22]]=0; pile[WZ1]=(-3016); 
(*f[37])( );     /*SRA0(0,(-3016),V47)*/
V47=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V10; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(41,V10,V47,V48)*/
V48=pile[WZ3]; 
V68=V48-1;
V69=0;
l17:if((V69<=V68)) goto l18;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
V18=bh[v[1]][0];
if(V18==40||V18==37) goto l4;
pile[v[22]]=355; pile[WZ1]=jvj+4; pile[WZ2]=0; pile[WZ3]=jvj+4; 
(*f[757])( );     /*LEXU0(355,jvj+4,0,jvj+4,V12)*/
V12=pile[WZ4]; 
l4:if((V18!=40)) goto l6;
pile[v[22]]=0; pile[WZ1]=jvj+4; pile[WZ2]=120; pile[WZ3]=355; pile[WZ4]=jvj+4; 
(*f[662])( );     /*LEXT1(0,jvj+4,120,355,jvj+4,V12)*/
V12=pile[WZ5]; 
l6:pile[v[22]]=jvj+5; pile[WZ1]=128; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+5,128,jvj+4)*/
V10++;
goto l5;
l14:pile[v[22]]=D1; pile[WZ1]=951; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(D1,951,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=N1; pile[WZ2]=510; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,N1,510,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=0; pile[WZ2]=416; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,0,416,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=531; pile[WZ2]=158; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+14,531,158,jvj+15)*/
pile[v[22]]=117; pile[WZ1]=D1; pile[WZ2]=140; pile[WZ3]=NM; pile[WZ4]=jvj+15; pile[WZ5]=jvj+9; 
(*f[197])( );     /*QUADRI5(117,D1,140,NM,jvj+15,jvj+9)*/
x[jvj+8]=vo[16];z[jvj+8]=vz[16];
pile[v[22]]=0; pile[WZ1]=(-3010); 
(*f[37])( );     /*SRA0(0,(-3010),V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=NM; 
(*f[37])( );     /*SRA0(V35,NM,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V36,(-1318),V37)*/
V37=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=N1; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(41,N1,V37,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; pile[WZ1]=(-2361); 
(*f[37])( );     /*SRA0(V38,(-2361),V40)*/
V40=pile[WZ2]; 
V72=V40-1;
V73=0;
l19:if((V73<=V72)) goto l20;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
pile[v[22]]=0; pile[WZ1]=jvj+9; pile[WZ2]=120; pile[WZ3]=101; pile[WZ4]=jvj+9; 
(*f[662])( );     /*LEXT1(0,jvj+9,120,101,jvj+9,V7)*/
V7=pile[WZ5]; 
pile[v[22]]=jvj+8; pile[WZ1]=128; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+8,128,jvj+9)*/
goto l10;
l16:V67=c[0][V65];
V66=V67;
putchar(V66);
V65++;
goto l15;
l18:V71=c[0][V69];
V70=V71;
putchar(V70);
V69++;
goto l17;
l20:V75=c[0][V73];
V74=V75;
putchar(V74);
V73++;
goto l19;
}
