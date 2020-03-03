#include "dx.h"
void TRPAIR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V23=0,K=0,V21=0,V27=0,KK=0,V24=0,V39=0,V32=0,V37=0,V43=0,V33=0,V40=0,V56=0,V67=0,V69=0,V71=0,V73=0,V75=0,V77=0,V63=0,V64=0,V66=0,V68=0,V70=0,V72=0,V74=0,V76=0,V55=0,XX=0,V47=0,L=0,YY=0,V52=0,V51=0,V61=0,V88=0,V110=0,V89=0,V90=0,V105=0,V99=0;
int N,RS,E;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=60;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; RS=pile[v[22]+1]; E=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
XX=YY=x[RES]=incon;
pile[v[22]]=111; pile[WZ1]=RS; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,RS,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=25)) goto l37;
x[jvj+11]=d[20];z[jvj+11]=0;
l4:if((x[jvj+11]<=0)) goto l37;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=268; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+12,jvj+13)*/
pile[v[22]]=jvj+12; pile[WZ1]=RS; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+12,RS,jvj+1)*/
pile[v[22]]=jvj+13; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+13,RS,jvj+5)*/
x[jvj+4]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=485)) goto l1;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+4)*/
l2:x[jvj+8]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=485)) goto l3;
pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+8)*/
l6:x[jvj+27]=x[jvj+4] ;z[jvj+27]=z[jvj+4];
x[jvj+33]=x[jvj+8] ;z[jvj+33]=z[jvj+8];
x[jvj+19]=0 ;z[jvj+19]=0;
x[jvj+47]=x[jvj+27] ;z[jvj+47]=z[jvj+27];
l10:if((x[jvj+47]>0)) goto l11;
x[jvj+28]=x[jvj+19] ;z[jvj+28]=z[jvj+19];
x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+49]=x[jvj+33] ;z[jvj+49]=z[jvj+33];
l17:if((x[jvj+49]>0)) goto l18;
x[jvj+59]=x[jvj+25] ;z[jvj+59]=z[jvj+25];
if((N==2)) goto l21;
x[jvj+29]=x[jvj+28] ;z[jvj+29]=z[jvj+28];
x[jvj+50]=x[jvj+59] ;z[jvj+50]=z[jvj+59];
l26:if((x[jvj+29]==0)) goto l27;
for(i=x[jvj+29],V47=0;i>0;i=t[i],V47++)  ;
if((V47!=1)) goto l28;
if((x[jvj+29]<=0)) goto l28;
x[jvj+31]=s[x[jvj+29]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+29];
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+31,L)*/
L=pile[WZ2]; 
XX=L;
l28:if((x[jvj+50]==0)) goto l29;
for(i=x[jvj+50],V52=0;i>0;i=t[i],V52++)  ;
if((V52!=1)) goto l30;
if((x[jvj+50]<=0)) goto l30;
x[jvj+32]=s[x[jvj+50]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+50];
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(130,jvj+32,V51)*/
V51=pile[WZ2]; 
YY=V51;
l30:if(XX!=incon) goto l31;
l25:V55=g[625];
if((V55<=0)) goto l33;
V56=vg[625];
if((V56!=0)) goto l22;
if((V55<3)) goto l24;
l22:pile[v[22]]=625; pile[WZ1]=11340; pile[WZ2]=0; pile[WZ3]=(-625); pile[WZ4]=N; pile[WZ5]=(-3101); pile[v[22]+6]=jvj+27; pile[v[22]+7]=(-635); pile[v[22]+8]=jvj+28; pile[v[22]+9]=(-634); pile[v[22]+10]=jvj+29; pile[v[22]+11]=jvj+30; 
(*f[4085])( );     /*INTERP27(625,11340,0,(-625),N,(-3101),jvj+27,(-635),jvj+28,(-634),jvj+29,jvj+30)*/
if((x[jvj+30]==135)) goto l23;
l33:if(x[RES]==incon) goto l34;
l38:v[0]=jvj; v[22]-=4; v[102]=0;return;
l1:pile[v[22]]=20; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[409])( );     /*TRI14(20,jvj+1,jvj+4)*/
goto l2;
l3:pile[v[22]]=20; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[409])( );     /*TRI14(20,jvj+5,jvj+8)*/
goto l6;
l5:x[jvj+11]=t[x[jvj+11]];
goto l4;
l11:x[jvj+14]=s[x[jvj+47]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+47];
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+14,V23)*/
V23=pile[WZ2]; 
K=V23;
V21=K%N;
if((V21==0)) goto l12;
l7:pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=486)) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,jvj+14,jvj+17)*/
x[jvj+46]=x[jvj+17] ;z[jvj+46]=z[jvj+17];
l8:if((x[jvj+46]<=0)) goto l13;
x[jvj+18]=s[x[jvj+46]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+46];
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+18,V27)*/
V27=pile[WZ2]; 
KK=V27;
V24=KK%N;
if((V24==0)) goto l12;
l9:x[jvj+46]=t[x[jvj+46]];
goto l8;
l13:pile[v[22]]=jvj+19; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+14)*/
l12:x[jvj+47]=t[x[jvj+47]];
goto l10;
l18:x[jvj+20]=s[x[jvj+49]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+49];
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+20,V39)*/
V39=pile[WZ2]; 
V32=V39;
V37=V32%N;
if((V37==0)) goto l19;
l14:pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=486)) goto l20;
pile[v[22]]=107; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,jvj+20,jvj+23)*/
x[jvj+48]=x[jvj+23] ;z[jvj+48]=z[jvj+23];
l15:if((x[jvj+48]<=0)) goto l20;
x[jvj+24]=s[x[jvj+48]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+48];
pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+24,V43)*/
V43=pile[WZ2]; 
V33=V43;
V40=V33%N;
if((V40==0)) goto l19;
l16:x[jvj+48]=t[x[jvj+48]];
goto l15;
l20:pile[v[22]]=jvj+25; pile[WZ1]=jvj+20; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+20)*/
l19:x[jvj+49]=t[x[jvj+49]];
goto l17;
l21:pile[v[22]]=RS; pile[WZ1]=jvj+26; 
(*f[891])( );     /*VAREXP0(RS,jvj+26)*/
x[jvj+60]=x[jvj+59] ;z[jvj+60]=z[jvj+59];
x[jvj+51]=x[jvj+28] ;z[jvj+51]=z[jvj+28];
l39:x[jvj+52]=x[jvj+26] ;z[jvj+52]=z[jvj+26];
l40:if((x[jvj+52]>0)) goto l41;
x[jvj+29]=x[jvj+51] ;z[jvj+29]=z[jvj+51];
x[jvj+50]=x[jvj+60] ;z[jvj+50]=z[jvj+60];
goto l26;
l23:if((V55<4)) goto l24;
goto l33;
l24:V67=x[jvj+27];
V69=x[jvj+28];
V71=x[jvj+29];
V73=x[jvj+33];
V75=x[jvj+59];
V77=x[jvj+50];
pile[v[22]]=20; pile[WZ1]=11340; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11340,0,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V63; 
(*f[39])( );     /*SDX0(41,N,V63,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V67; pile[WZ2]=V64; 
(*f[39])( );     /*SDX0(23,V67,V64,V66)*/
V66=pile[WZ3]; 
pile[WZ1]=V69; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(23,V69,V66,V68)*/
V68=pile[WZ3]; 
pile[WZ1]=V71; pile[WZ2]=V68; 
(*f[39])( );     /*SDX0(23,V71,V68,V70)*/
V70=pile[WZ3]; 
pile[WZ1]=V73; pile[WZ2]=V70; 
(*f[39])( );     /*SDX0(23,V73,V70,V72)*/
V72=pile[WZ3]; 
pile[WZ1]=V75; pile[WZ2]=V72; 
(*f[39])( );     /*SDX0(23,V75,V72,V74)*/
V74=pile[WZ3]; 
pile[WZ1]=V77; pile[WZ2]=V74; 
(*f[39])( );     /*SDX0(23,V77,V74,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=V76; 
(*f[40])( );     /*SLG0(V76)*/
if((V55!=2)) goto l33;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l33;
l27:XX=0;
goto l28;
l29:YY=0;
goto l30;
l31:if(YY!=incon) goto l32;
goto l25;
l32:if((XX==YY)) goto l25;
x[RES]=134 ;z[RES]=134;
goto l25;
l34:if(XX!=incon) goto l35;
l37:v[0]=jvj; v[22]-=4; v[102]=1;return;
l35:if(YY!=incon) goto l36;
goto l37;
l36:if((XX!=0)) goto l37;
if((YY!=0)) goto l37;
if((N>=32)) goto l37;
V61=2*N;
pile[v[22]]=V61; pile[WZ1]=E; pile[WZ2]=jvj+27; pile[WZ3]=jvj+33; pile[WZ4]=RS; pile[WZ5]=RES; 
(*f[4084])( );if(v[102]) goto l37;     /*TRPAIR1(V61,E,jvj+27,jvj+33,RS,RES)*/
goto l38;
l41:x[jvj+41]=s[x[jvj+52]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+52];
x[jvj+40]=0 ;z[jvj+40]=0;
x[jvj+57]=x[jvj+51] ;z[jvj+57]=z[jvj+51];
l42:if((x[jvj+57]>0)) goto l57;
x[jvj+55]=x[jvj+60] ;z[jvj+55]=z[jvj+60];
l43:if((x[jvj+55]>0)) goto l53;
for(i=x[jvj+40],V88=0;i>0;i=t[i],V88++)  ;
if((V88<2)) goto l52;
V110=x[jvj+40];
if((V110<=0)) goto l52;
V89=s[V110];
l44:if((x[jvj+40]<=0)) goto l52;
V90=s[x[jvj+40]];
if((V89!=V90)) goto l45;
x[jvj+40]=t[x[jvj+40]];
goto l44;
l45:x[jvj+36]=0 ;z[jvj+36]=0;
x[jvj+54]=x[jvj+51] ;z[jvj+54]=z[jvj+51];
l46:if((x[jvj+54]>0)) goto l50;
x[jvj+34]=0 ;z[jvj+34]=0;
x[jvj+53]=x[jvj+60] ;z[jvj+53]=z[jvj+60];
l47:if((x[jvj+53]>0)) goto l48;
x[jvj+51]=x[jvj+36] ;z[jvj+51]=z[jvj+36];
x[jvj+60]=x[jvj+34] ;z[jvj+60]=z[jvj+34];
goto l39;
l48:x[jvj+35]=s[x[jvj+53]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+53];
if((x[jvj+35]==V89)) goto l49;
if((x[jvj+35]==V90)) goto l49;
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[68])( );     /*PLUE0(jvj+34,jvj+35)*/
l49:x[jvj+53]=t[x[jvj+53]];
goto l47;
l50:x[jvj+37]=s[x[jvj+54]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+54];
if((x[jvj+37]==V89)) goto l51;
if((x[jvj+37]==V90)) goto l51;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[68])( );     /*PLUE0(jvj+36,jvj+37)*/
l51:x[jvj+54]=t[x[jvj+54]];
goto l46;
l52:x[jvj+52]=t[x[jvj+52]];
goto l40;
l53:x[jvj+38]=s[x[jvj+55]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+55];
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[891])( );     /*VAREXP0(jvj+38,jvj+39)*/
x[jvj+56]=x[jvj+39] ;z[jvj+56]=z[jvj+39];
for(i=x[jvj+56],V105=0;i>0;i=t[i],V105++)  ;
if((V105==1)) goto l56;
l54:x[jvj+55]=t[x[jvj+55]];
goto l43;
l55:pile[v[22]]=jvj+40; pile[WZ1]=jvj+38; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+38)*/
goto l54;
l57:x[jvj+43]=s[x[jvj+57]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+57];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[891])( );     /*VAREXP0(jvj+43,jvj+44)*/
x[jvj+58]=x[jvj+44] ;z[jvj+58]=z[jvj+44];
for(i=x[jvj+58],V99=0;i>0;i=t[i],V99++)  ;
if((V99==1)) goto l60;
l58:x[jvj+57]=t[x[jvj+57]];
goto l42;
l59:pile[v[22]]=jvj+40; pile[WZ1]=jvj+43; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+43)*/
goto l58;
l56:if((x[jvj+56]<=0)) goto l54;
x[jvj+35]=s[x[jvj+56]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+56];
pile[v[22]]=jvj+35; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[760])( );     /*MEMEX0(jvj+35,jvj+41,jvj+42)*/
if((x[jvj+42]==135)) goto l55;
x[jvj+56]=t[x[jvj+56]];
goto l56;
l60:if((x[jvj+58]<=0)) goto l58;
x[jvj+37]=s[x[jvj+58]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+58];
pile[v[22]]=jvj+37; pile[WZ1]=jvj+41; pile[WZ2]=jvj+45; 
(*f[760])( );     /*MEMEX0(jvj+37,jvj+41,jvj+45)*/
if((x[jvj+45]==135)) goto l59;
x[jvj+58]=t[x[jvj+58]];
goto l60;
}
