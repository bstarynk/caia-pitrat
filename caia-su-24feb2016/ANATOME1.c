#include "dx.h"
void ANATOME1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V11=0,V38=0,V30=0,V31=0,V32=0,V33=0,V34=0,V35=0,V36=0,V37=0,V19=0,V20=0,V=0,V167=0,V22=0,V25=0,T=0,V51=0,V47=0,V66=0,V42=0,V58=0,W=0,V83=0,V100=0,F=0,V76=0,V106=0,V115=0,V116=0,V85=0,V86=0,V87=0,V88=0,V89=0,V90=0,V137=0,V121=0,V151=0,V158=0,V146=0;
int N,FM,ND;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=130;
x[jvj+1]=11098;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==780&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; FM=pile[v[22]+1]; ND=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V38=x[N];
pile[v[22]]=N; pile[WZ1]=0; pile[WZ2]=V38; pile[WZ3]=972; 
(*f[285])( );     /*ENLY0(N,0,V38,972,V30,V31)*/
V30=pile[WZ4]; V31=pile[WZ5]; 
pile[WZ1]=V31; pile[WZ2]=V30; pile[WZ3]=1033; 
(*f[285])( );     /*ENLY0(N,V31,V30,1033,V32,V33)*/
V32=pile[WZ4]; V33=pile[WZ5]; 
pile[WZ1]=V33; pile[WZ2]=V32; pile[WZ3]=1088; 
(*f[285])( );     /*ENLY0(N,V33,V32,1088,V34,V35)*/
V34=pile[WZ4]; V35=pile[WZ5]; 
pile[WZ1]=V35; pile[WZ2]=V34; pile[WZ3]=1183; 
(*f[285])( );     /*ENLY0(N,V35,V34,1183,V36,V37)*/
V36=pile[WZ4]; V37=pile[WZ5]; 
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(645,597,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l66;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+4,V5)*/
V5=pile[WZ2]; 
if((V5!=ND)) goto l2;
x[jvj+14]=incon;
pile[v[22]]=970; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(970,jvj+4,jvj+13)*/
if((x[jvj+13]==985)) goto l9;
if((x[jvj+13]!=341)) goto l10;
pile[v[22]]=1538; pile[WZ1]=N; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1538,N,jvj+5)*/
l3:if((x[jvj+5]<=0)) goto l10;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=683; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,jvj+6,V11)*/
V11=pile[WZ2]; 
if((V11!=ND)) goto l4;
x[jvj+12]=0 ;z[jvj+12]=0;
pile[v[22]]=159; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(159,jvj+6,jvj+7)*/
l5:if((x[jvj+7]>0)) goto l6;
x[jvj+14]=x[jvj+12] ;z[jvj+14]=z[jvj+12];
l11:pile[v[22]]=184; pile[WZ1]=N; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(184,N,jvj+15)*/
pile[v[22]]=N; pile[WZ1]=109; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(N,109,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=184; pile[WZ2]=jvj+113; 
(*f[300])( );     /*TRI10(jvj+15,184,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=jvj+14; pile[WZ2]=107; pile[WZ3]=jvj+114; 
(*f[301])( );     /*TRI11(jvj+113,jvj+14,107,jvj+114)*/
pile[v[22]]=jvj+114; pile[WZ1]=854; pile[WZ2]=100; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+114,854,100,jvj+17)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=N; 
(*f[487])( );     /*CARCONTR0(jvj+16,jvj+17,N)*/
pile[v[22]]=1088; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1088,jvj+16,jvj+19)*/
x[jvj+118]=x[jvj+19] ;z[jvj+118]=z[jvj+19];
l14:if((x[jvj+118]>0)) goto l15;
pile[v[22]]=1088; pile[WZ1]=jvj+16; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(1088,jvj+16,jvj+22)*/
l19:if((x[jvj+22]<=0)) goto l32;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+23,V22)*/
V22=pile[WZ2]; 
if((V22!=(-3629))) goto l20;
pile[v[22]]=1275; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1275,jvj+23,jvj+26)*/
l23:if((x[jvj+26]<=0)) goto l32;
T=s[x[jvj+26]];
pile[v[22]]=1088; pile[WZ1]=jvj+16; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(1088,jvj+16,jvj+24)*/
x[jvj+119]=x[jvj+24] ;z[jvj+119]=z[jvj+24];
l21:if((x[jvj+119]<=0)) goto l24;
x[jvj+25]=s[x[jvj+119]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+119];
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+25,V25)*/
V25=pile[WZ2]; 
if((V25!=T)) goto l22;
pile[v[22]]=258; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(258,jvj+25,jvj+27)*/
x[jvj+120]=x[jvj+27] ;z[jvj+120]=z[jvj+27];
l25:if((x[jvj+120]<=0)) goto l24;
x[jvj+28]=s[x[jvj+120]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+120];
pile[v[22]]=1018; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(1018,jvj+28,jvj+29)*/
if((x[jvj+29]!=1216)) goto l26;
pile[v[22]]=145; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(145,jvj+28,jvj+30)*/
pile[v[22]]=447; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(447,jvj+28,jvj+31)*/
pile[v[22]]=jvj+16; pile[WZ1]=(-3629); pile[WZ2]=jvj+30; pile[WZ3]=jvj+31; pile[WZ4]=1216; 
(*f[489])( );     /*AJA0(jvj+16,(-3629),jvj+30,jvj+31,1216)*/
l26:x[jvj+120]=t[x[jvj+120]];
goto l25;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+5]=t[x[jvj+5]];
goto l3;
l6:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=1489; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1489,jvj+8,jvj+9)*/
x[jvj+115]=x[jvj+9] ;z[jvj+115]=z[jvj+9];
l7:if((x[jvj+115]>0)) goto l8;
x[jvj+7]=t[x[jvj+7]];
goto l5;
l8:x[jvj+10]=s[x[jvj+115]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+115];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+11)*/
x[jvj+115]=t[x[jvj+115]];
goto l7;
l9:x[jvj+116]=0 ;z[jvj+116]=0;
x[jvj+14]=x[jvj+116] ;z[jvj+14]=z[jvj+116];
goto l11;
l10:pile[v[22]]=107; pile[WZ1]=N; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,N,jvj+14)*/
goto l11;
l13:x[jvj+117]=t[x[jvj+117]];
l12:if((x[jvj+117]<=0)) goto l18;
x[jvj+18]=s[x[jvj+117]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+117];
pile[v[22]]=140; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+18,V19)*/
V19=pile[WZ2]; 
if((V19!=V)) goto l13;
pile[v[22]]=jvj+20; pile[WZ2]=V; pile[WZ3]=V20; 
(*f[488])( );     /*FUSION0(jvj+20,jvj+18,V,V20)*/
l18:V167=t[V167];
l17:if((V167<=0)) goto l16;
V=s[V167];
x[jvj+117]=x[jvj+19] ;z[jvj+117]=z[jvj+19];
goto l12;
l15:x[jvj+20]=s[x[jvj+118]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+118];
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+20,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=273; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(273,jvj+20,jvj+21)*/
V167=x[jvj+21];
goto l17;
l16:x[jvj+118]=t[x[jvj+118]];
goto l14;
l20:x[jvj+22]=t[x[jvj+22]];
goto l19;
l22:x[jvj+119]=t[x[jvj+119]];
goto l21;
l24:x[jvj+26]=t[x[jvj+26]];
goto l23;
l32:pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(102,N,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(100,jvj+41,jvj+42)*/
if((x[jvj+42]!=69)) goto l61;
pile[v[22]]=108; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(108,jvj+41,jvj+43)*/
pile[v[22]]=184; pile[WZ1]=N; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(184,N,jvj+44)*/
l33:if((x[jvj+43]<=0)) goto l61;
x[jvj+45]=s[x[jvj+43]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+43];
pile[v[22]]=103; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(103,jvj+45,jvj+46)*/
pile[v[22]]=140; pile[WZ1]=jvj+46; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+46,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+45; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,jvj+45,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+47,jvj+48)*/
if((x[jvj+48]!=576)) goto l34;
V42=V66;
x[jvj+123]=x[jvj+44] ;z[jvj+123]=z[jvj+44];
l35:if((x[jvj+123]<=0)) goto l34;
x[jvj+49]=s[x[jvj+123]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+123];
pile[v[22]]=107; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(107,jvj+49,jvj+50)*/
x[jvj+124]=x[jvj+50] ;z[jvj+124]=z[jvj+50];
l36:if((x[jvj+124]>0)) goto l37;
x[jvj+123]=t[x[jvj+123]];
goto l35;
l34:x[jvj+43]=t[x[jvj+43]];
goto l33;
l37:x[jvj+51]=s[x[jvj+124]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+124];
pile[v[22]]=111; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+51,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+52,jvj+53)*/
if((x[jvj+53]!=278)) goto l38;
pile[v[22]]=102; pile[WZ1]=jvj+51; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,jvj+51,jvj+54)*/
pile[v[22]]=140; pile[WZ1]=jvj+54; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(140,jvj+54,V58)*/
V58=pile[WZ2]; 
W=V58;
if((W==V42)) goto l39;
pile[v[22]]=1088; pile[WZ1]=jvj+16; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(1088,jvj+16,jvj+32)*/
x[jvj+121]=x[jvj+32] ;z[jvj+121]=z[jvj+32];
l27:if((x[jvj+121]<=0)) goto l38;
x[jvj+33]=s[x[jvj+121]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+121];
pile[v[22]]=140; pile[WZ1]=jvj+33; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,jvj+33,V51)*/
V51=pile[WZ2]; 
if((V51!=V42)) goto l28;
pile[v[22]]=273; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(273,jvj+33,jvj+34)*/
for(a=x[jvj+34];a>0;a=t[a]) if(s[a]==W) goto l39;
l28:x[jvj+121]=t[x[jvj+121]];
goto l27;
l38:x[jvj+124]=t[x[jvj+124]];
goto l36;
l39:pile[v[22]]=103; pile[WZ1]=jvj+51; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(103,jvj+51,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+55; 
(*f[490])( );     /*CHEROBJ0(jvj+35,jvj+55)*/
x[jvj+40]=0 ;z[jvj+40]=0;
x[jvj+122]=x[jvj+55] ;z[jvj+122]=z[jvj+55];
l29:if((x[jvj+122]<=0)) goto l40;
x[jvj+39]=s[x[jvj+122]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+122];
pile[v[22]]=118; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(118,jvj+39,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+35,jvj+36)*/
if((x[jvj+36]!=22)) goto l31;
pile[v[22]]=111; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+35,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+39]==x[jvj+38])) goto l30;
l31:pile[v[22]]=jvj+40; pile[WZ1]=jvj+39; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+39)*/
l30:x[jvj+122]=t[x[jvj+122]];
goto l29;
l43:V83=s[x[jvj+58]];
pile[v[22]]=jvj+57; pile[WZ1]=V83; 
(*f[331])( );     /*PLUE3(jvj+57,V83)*/
x[jvj+58]=t[x[jvj+58]];
l42:if((x[jvj+58]>0)) goto l43;
pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(102,N,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(100,jvj+59,jvj+60)*/
if((x[jvj+60]!=69)) goto l65;
pile[v[22]]=108; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(108,jvj+59,jvj+61)*/
l44:if((x[jvj+61]<=0)) goto l65;
x[jvj+62]=s[x[jvj+61]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+61];
pile[v[22]]=103; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(103,jvj+62,jvj+63)*/
pile[v[22]]=140; pile[WZ1]=jvj+63; 
(*f[44])( );if(v[102]) goto l45;     /*FNDC1(140,jvj+63,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+62; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,jvj+62,jvj+64)*/
pile[v[22]]=101; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(101,jvj+64,jvj+65)*/
F=x[jvj+65];
if(F!=576&&F!=749&&F!=758&&F!=756) goto l45;
V76=V100;
pile[v[22]]=jvj+57; pile[WZ1]=V76; 
(*f[331])( );     /*PLUE3(jvj+57,V76)*/
l45:x[jvj+61]=t[x[jvj+61]];
goto l44;
l47:x[jvj+67]=s[x[jvj+66]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+66];
pile[v[22]]=140; pile[WZ1]=jvj+67; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(140,jvj+67,V106)*/
V106=pile[WZ2]; 
for(a=x[jvj+57];a>0;a=t[a]) if(s[a]==V106) goto l49;
l48:x[jvj+66]=t[x[jvj+66]];
l46:if((x[jvj+66]>0)) goto l47;
if((x[jvj+68]==0)) goto l66;
x[jvj+127]=x[jvj+68] ;z[jvj+127]=z[jvj+68];
l55:if((x[jvj+127]>0)) goto l56;
pile[v[22]]=N; pile[WZ1]=1088; pile[WZ2]=jvj+68; 
(*f[34])( );     /*CHGC0(N,1088,jvj+68)*/
l66:pile[v[22]]=159; pile[WZ1]=857; pile[WZ2]=jvj+104; 
(*f[33])( );     /*FNDE0(159,857,jvj+104)*/
pile[v[22]]=184; pile[WZ1]=N; pile[WZ2]=jvj+105; 
(*f[33])( );     /*FNDE0(184,N,jvj+105)*/
l67:if((x[jvj+104]>0)) goto l68;
pile[v[22]]=159; pile[WZ1]=1033; pile[WZ2]=jvj+109; 
(*f[33])( );     /*FNDE0(159,1033,jvj+109)*/
pile[v[22]]=184; pile[WZ1]=N; pile[WZ2]=jvj+110; 
(*f[33])( );     /*FNDE0(184,N,jvj+110)*/
l73:if((x[jvj+110]>0)) goto l74;
l80:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l49:pile[v[22]]=jvj+68; pile[WZ1]=jvj+67; 
(*f[68])( );     /*PLUE0(jvj+68,jvj+67)*/
goto l48;
l51:x[jvj+125]=t[x[jvj+125]];
l50:if((x[jvj+125]<=0)) goto l54;
x[jvj+72]=s[x[jvj+125]] ;z[jvj+72]=(x[jvj+72]<=sepcte) ? x[jvj+72] : z[jvj+125];
pile[v[22]]=1018; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(1018,jvj+72,jvj+73)*/
if((x[jvj+73]!=1300)) goto l51;
pile[v[22]]=145; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(145,jvj+72,jvj+74)*/
if((x[jvj+70]!=x[jvj+74])) goto l51;
pile[v[22]]=447; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(447,jvj+72,jvj+75)*/
if((x[jvj+71]!=x[jvj+75])) goto l51;
V115=x[jvj+69];
pile[v[22]]=258; pile[WZ1]=jvj+76; pile[WZ2]=V115; 
(*f[134])( );     /*OTA0(258,jvj+76,V115)*/
l54:x[jvj+126]=t[x[jvj+126]];
l52:if((x[jvj+126]>0)) goto l53;
pile[v[22]]=jvj+76; pile[WZ1]=0; pile[WZ2]=V116; pile[WZ3]=273; 
(*f[285])( );     /*ENLY0(jvj+76,0,V116,273,V85,V86)*/
V85=pile[WZ4]; V86=pile[WZ5]; 
pile[WZ1]=V86; pile[WZ2]=V85; pile[WZ3]=1275; 
(*f[285])( );     /*ENLY0(jvj+76,V86,V85,1275,V87,V88)*/
V87=pile[WZ4]; V88=pile[WZ5]; 
pile[WZ1]=V88; pile[WZ2]=V87; pile[WZ3]=1276; 
(*f[285])( );     /*ENLY0(jvj+76,V88,V87,1276,V89,V90)*/
V89=pile[WZ4]; V90=pile[WZ5]; 
x[jvj+127]=t[x[jvj+127]];
goto l55;
l53:x[jvj+69]=s[x[jvj+126]] ;z[jvj+69]=(x[jvj+69]<=sepcte) ? x[jvj+69] : z[jvj+126];
pile[v[22]]=1018; pile[WZ1]=jvj+69; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(1018,jvj+69,jvj+78)*/
if((x[jvj+78]!=1216)) goto l54;
pile[v[22]]=145; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(145,jvj+69,jvj+70)*/
pile[v[22]]=447; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(447,jvj+69,jvj+71)*/
x[jvj+125]=x[jvj+77] ;z[jvj+125]=z[jvj+77];
goto l50;
l56:x[jvj+76]=s[x[jvj+127]] ;z[jvj+76]=(x[jvj+76]<=sepcte) ? x[jvj+76] : z[jvj+127];
V116=x[jvj+76];
pile[v[22]]=258; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(258,jvj+76,jvj+77)*/
x[jvj+126]=x[jvj+77] ;z[jvj+126]=z[jvj+77];
goto l52;
l60:x[jvj+93]=s[x[jvj+92]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+92];
pile[v[22]]=jvj+93; pile[WZ1]=jvj+16; pile[WZ2]=jvj+94; 
(*f[33])( );     /*FNDE0(jvj+93,jvj+16,jvj+94)*/
if((x[jvj+94]==0)) goto l62;
pile[v[22]]=N; pile[WZ1]=jvj+93; 
(*f[34])( );     /*CHGC0(N,jvj+93,jvj+94)*/
l62:x[jvj+92]=t[x[jvj+92]];
l59:if((x[jvj+92]>0)) goto l60;
if((FM!=(-9009))) goto l41;
pile[v[22]]=905; pile[WZ1]=N; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(905,N,V151)*/
V151=pile[WZ2]; 
if((V151!=(-9113))) goto l41;
pile[v[22]]=102; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,N,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+95,jvj+96)*/
if((x[jvj+96]!=69)) goto l41;
pile[v[22]]=108; pile[WZ2]=jvj+97; 
(*f[33])( );     /*FNDE0(108,jvj+95,jvj+97)*/
pile[v[22]]=184; pile[WZ1]=N; pile[WZ2]=jvj+91; 
(*f[33])( );     /*FNDE0(184,N,jvj+91)*/
if((x[jvj+91]<=0)) goto l41;
x[jvj+98]=s[x[jvj+91]] ;z[jvj+98]=(x[jvj+98]<=sepcte) ? x[jvj+98] : z[jvj+91];
pile[v[22]]=365; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[492])( );     /*FIGURE0(365,jvj+98,jvj+99)*/
if((x[jvj+99]==135)) goto l63;
l41:x[jvj+57]=0 ;z[jvj+57]=0;
pile[v[22]]=jvj+57; pile[WZ1]=(-7416); 
(*f[331])( );     /*PLUE3(jvj+57,(-7416))*/
pile[v[22]]=762; pile[WZ1]=21; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(762,21,jvj+58)*/
goto l42;
l61:x[jvj+92]=d[17];z[jvj+92]=0;
goto l59;
l65:if((x[jvj+57]==0)) goto l66;
x[jvj+68]=0 ;z[jvj+68]=0;
pile[v[22]]=1088; pile[WZ1]=jvj+16; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(1088,jvj+16,jvj+66)*/
goto l46;
l68:x[jvj+106]=s[x[jvj+104]] ;z[jvj+106]=(x[jvj+106]<=sepcte) ? x[jvj+106] : z[jvj+104];
x[jvj+129]=x[jvj+105] ;z[jvj+129]=z[jvj+105];
l69:if((x[jvj+129]>0)) goto l70;
x[jvj+104]=t[x[jvj+104]];
goto l67;
l70:x[jvj+107]=s[x[jvj+129]] ;z[jvj+107]=(x[jvj+107]<=sepcte) ? x[jvj+107] : z[jvj+129];
pile[v[22]]=jvj+106; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[491])( );     /*FIGURETOTAL0(jvj+106,jvj+107,jvj+108)*/
if((x[jvj+108]==135)) goto l72;
l71:x[jvj+129]=t[x[jvj+129]];
goto l69;
l72:pile[v[22]]=N; pile[WZ1]=857; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(N,857,68)*/
goto l71;
l74:x[jvj+79]=s[x[jvj+110]] ;z[jvj+79]=(x[jvj+79]<=sepcte) ? x[jvj+79] : z[jvj+110];
pile[v[22]]=100; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(100,jvj+79,jvj+80)*/
if((x[jvj+80]!=42)) goto l77;
pile[v[22]]=107; pile[WZ2]=jvj+81; 
(*f[33])( );     /*FNDE0(107,jvj+79,jvj+81)*/
x[jvj+128]=x[jvj+81] ;z[jvj+128]=z[jvj+81];
l57:if((x[jvj+128]<=0)) goto l77;
x[jvj+82]=s[x[jvj+128]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+128];
pile[v[22]]=100; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(100,jvj+82,jvj+83)*/
if((x[jvj+83]!=22)) goto l58;
pile[v[22]]=103; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,jvj+82,jvj+84)*/
pile[v[22]]=130; pile[WZ1]=jvj+84; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(130,jvj+84,V137)*/
V137=pile[WZ2]; 
if((V137!=1)) goto l58;
pile[v[22]]=111; pile[WZ1]=jvj+82; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,jvj+82,jvj+85)*/
pile[v[22]]=101; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(101,jvj+85,jvj+86)*/
V121=x[jvj+86];
if(V121!=25&&V121!=30) goto l58;
pile[v[22]]=102; pile[WZ1]=jvj+82; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,jvj+82,jvj+87)*/
pile[v[22]]=100; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(100,jvj+87,jvj+88)*/
if((x[jvj+88]!=43)) goto l58;
pile[v[22]]=102; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,jvj+87,jvj+89)*/
pile[v[22]]=101; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(101,jvj+89,jvj+90)*/
if((x[jvj+90]==870)) goto l75;
l58:x[jvj+128]=t[x[jvj+128]];
goto l57;
l75:x[jvj+110]=t[x[jvj+110]];
goto l73;
l77:x[jvj+130]=x[jvj+109] ;z[jvj+130]=z[jvj+109];
l76:if((x[jvj+130]<=0)) goto l75;
x[jvj+111]=s[x[jvj+130]] ;z[jvj+111]=(x[jvj+111]<=sepcte) ? x[jvj+111] : z[jvj+130];
pile[v[22]]=jvj+111; pile[WZ1]=jvj+79; pile[WZ2]=jvj+112; 
(*f[491])( );     /*FIGURETOTAL0(jvj+111,jvj+79,jvj+112)*/
if((x[jvj+112]==135)) goto l79;
l78:x[jvj+130]=t[x[jvj+130]];
goto l76;
l79:pile[v[22]]=N; pile[WZ1]=1033; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(N,1033,68)*/
goto l78;
l40:if((x[jvj+40]<=0)) goto l38;
x[jvj+56]=s[x[jvj+40]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+40];
pile[v[22]]=jvj+16; pile[WZ1]=V42; pile[WZ2]=44; pile[WZ3]=jvj+56; pile[WZ4]=1300; 
(*f[489])( );     /*AJA0(jvj+16,V42,44,jvj+56,1300)*/
x[jvj+40]=t[x[jvj+40]];
goto l40;
l63:if((x[jvj+97]<=0)) goto l41;
x[jvj+100]=s[x[jvj+97]] ;z[jvj+100]=(x[jvj+100]<=sepcte) ? x[jvj+100] : z[jvj+97];
pile[v[22]]=103; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(103,jvj+100,jvj+101)*/
pile[v[22]]=140; pile[WZ1]=jvj+101; 
(*f[44])( );if(v[102]) goto l64;     /*FNDC1(140,jvj+101,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+100; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(102,jvj+100,jvj+102)*/
pile[v[22]]=101; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(101,jvj+102,jvj+103)*/
if((x[jvj+103]!=749)) goto l64;
V146=V158;
pile[v[22]]=jvj+16; pile[WZ1]=V146; pile[WZ2]=25; pile[WZ3]=68; pile[WZ4]=202; 
(*f[489])( );     /*AJA0(jvj+16,V146,25,68,202)*/
l64:x[jvj+97]=t[x[jvj+97]];
goto l63;
}
