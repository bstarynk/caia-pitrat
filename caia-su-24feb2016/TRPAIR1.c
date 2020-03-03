#include "dx.h"
void TRPAIR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,K=0,V4=0,V10=0,KK=0,V7=0,V22=0,V15=0,V20=0,V26=0,V16=0,V23=0,V39=0,V67=0,V50=0,V52=0,V54=0,V56=0,V58=0,V60=0,V46=0,V47=0,V49=0,V51=0,V53=0,V55=0,V57=0,V59=0,V38=0,XX=0,V30=0,L=0,YY=0,V35=0,V34=0,V44=0,V71=0,V93=0,V72=0,V73=0,V88=0,V82=0;
int N,E,EA,EB,RS;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; E=pile[v[22]+1]; EA=pile[v[22]+2]; EB=pile[v[22]+3]; RS=pile[v[22]+4]; RES=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V67=N;
l32:XX=YY=x[RES]=incon;
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+32]=x[EA] ;z[jvj+32]=z[EA];
l4:if((x[jvj+32]>0)) goto l5;
x[jvj+14]=x[jvj+6] ;z[jvj+14]=z[jvj+6];
x[jvj+12]=0 ;z[jvj+12]=0;
x[jvj+34]=x[EB] ;z[jvj+34]=z[EB];
l11:if((x[jvj+34]>0)) goto l12;
x[jvj+44]=x[jvj+12] ;z[jvj+44]=z[jvj+12];
if((V67==2)) goto l15;
x[jvj+15]=x[jvj+14] ;z[jvj+15]=z[jvj+14];
x[jvj+35]=x[jvj+44] ;z[jvj+35]=z[jvj+44];
l20:if((x[jvj+15]==0)) goto l21;
for(i=x[jvj+15],V30=0;i>0;i=t[i],V30++)  ;
if((V30!=1)) goto l22;
if((x[jvj+15]<=0)) goto l22;
x[jvj+17]=s[x[jvj+15]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+15];
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+17,L)*/
L=pile[WZ2]; 
XX=L;
l22:if((x[jvj+35]==0)) goto l23;
for(i=x[jvj+35],V35=0;i>0;i=t[i],V35++)  ;
if((V35!=1)) goto l24;
if((x[jvj+35]<=0)) goto l24;
x[jvj+18]=s[x[jvj+35]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+35];
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+18,V34)*/
V34=pile[WZ2]; 
YY=V34;
l24:if(XX!=incon) goto l25;
l19:V38=g[625];
if((V38<=0)) goto l27;
V39=vg[625];
if((V39!=0)) goto l16;
if((V38<3)) goto l18;
l16:pile[v[22]]=625; pile[WZ1]=11340; pile[WZ2]=1; pile[WZ3]=(-625); pile[WZ4]=V67; pile[WZ5]=(-3101); pile[v[22]+6]=EA; pile[v[22]+7]=(-635); pile[v[22]+8]=jvj+14; pile[v[22]+9]=(-634); pile[v[22]+10]=jvj+15; pile[v[22]+11]=jvj+16; 
(*f[4085])( );     /*INTERP27(625,11340,1,(-625),V67,(-3101),EA,(-635),jvj+14,(-634),jvj+15,jvj+16)*/
if((x[jvj+16]==135)) goto l17;
l27:if(x[RES]==incon) goto l28;
v[0]=jvj; v[22]-=6; v[102]=0;return;
l5:x[jvj+1]=s[x[jvj+32]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+32];
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,jvj+1,V6)*/
V6=pile[WZ2]; 
K=V6;
V4=K%V67;
if((V4==0)) goto l6;
l1:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=486)) goto l7;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+4)*/
x[jvj+31]=x[jvj+4] ;z[jvj+31]=z[jvj+4];
l2:if((x[jvj+31]<=0)) goto l7;
x[jvj+5]=s[x[jvj+31]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+31];
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+5,V10)*/
V10=pile[WZ2]; 
KK=V10;
V7=KK%V67;
if((V7==0)) goto l6;
l3:x[jvj+31]=t[x[jvj+31]];
goto l2;
l7:pile[v[22]]=jvj+6; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+1)*/
l6:x[jvj+32]=t[x[jvj+32]];
goto l4;
l12:x[jvj+7]=s[x[jvj+34]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+34];
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+7,V22)*/
V22=pile[WZ2]; 
V15=V22;
V20=V15%V67;
if((V20==0)) goto l13;
l8:pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=486)) goto l14;
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+10)*/
x[jvj+33]=x[jvj+10] ;z[jvj+33]=z[jvj+10];
l9:if((x[jvj+33]<=0)) goto l14;
x[jvj+11]=s[x[jvj+33]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+33];
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+11,V26)*/
V26=pile[WZ2]; 
V16=V26;
V23=V16%V67;
if((V23==0)) goto l13;
l10:x[jvj+33]=t[x[jvj+33]];
goto l9;
l14:pile[v[22]]=jvj+12; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+7)*/
l13:x[jvj+34]=t[x[jvj+34]];
goto l11;
l15:pile[v[22]]=RS; pile[WZ1]=jvj+13; 
(*f[891])( );     /*VAREXP0(RS,jvj+13)*/
x[jvj+45]=x[jvj+44] ;z[jvj+45]=z[jvj+44];
x[jvj+36]=x[jvj+14] ;z[jvj+36]=z[jvj+14];
l33:x[jvj+37]=x[jvj+13] ;z[jvj+37]=z[jvj+13];
l34:if((x[jvj+37]>0)) goto l35;
x[jvj+15]=x[jvj+36] ;z[jvj+15]=z[jvj+36];
x[jvj+35]=x[jvj+45] ;z[jvj+35]=z[jvj+45];
goto l20;
l17:if((V38<4)) goto l18;
goto l27;
l18:V50=x[EA];
V52=x[jvj+14];
V54=x[jvj+15];
V56=x[EB];
V58=x[jvj+44];
V60=x[jvj+35];
pile[v[22]]=20; pile[WZ1]=11340; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11340,0,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V67; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(41,V67,V46,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V50; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(23,V50,V47,V49)*/
V49=pile[WZ3]; 
pile[WZ1]=V52; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(23,V52,V49,V51)*/
V51=pile[WZ3]; 
pile[WZ1]=V54; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(23,V54,V51,V53)*/
V53=pile[WZ3]; 
pile[WZ1]=V56; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(23,V56,V53,V55)*/
V55=pile[WZ3]; 
pile[WZ1]=V58; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(23,V58,V55,V57)*/
V57=pile[WZ3]; 
pile[WZ1]=V60; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(23,V60,V57,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; 
(*f[40])( );     /*SLG0(V59)*/
if((V38!=2)) goto l27;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l27;
l21:XX=0;
goto l22;
l23:YY=0;
goto l24;
l25:if(YY!=incon) goto l26;
goto l19;
l26:if((XX==YY)) goto l19;
x[RES]=134 ;z[RES]=134;
goto l19;
l28:if(XX!=incon) goto l29;
l31:v[0]=jvj; v[22]-=6; v[102]=1;return;
l29:if(YY!=incon) goto l30;
goto l31;
l30:if((XX!=0)) goto l31;
if((YY!=0)) goto l31;
if((V67>=32)) goto l31;
V44=2*V67;
V67=V44;
goto l32;
l35:x[jvj+26]=s[x[jvj+37]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+37];
x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+42]=x[jvj+36] ;z[jvj+42]=z[jvj+36];
l36:if((x[jvj+42]>0)) goto l51;
x[jvj+40]=x[jvj+45] ;z[jvj+40]=z[jvj+45];
l37:if((x[jvj+40]>0)) goto l47;
for(i=x[jvj+25],V71=0;i>0;i=t[i],V71++)  ;
if((V71<2)) goto l46;
V93=x[jvj+25];
if((V93<=0)) goto l46;
V72=s[V93];
l38:if((x[jvj+25]<=0)) goto l46;
V73=s[x[jvj+25]];
if((V72!=V73)) goto l39;
x[jvj+25]=t[x[jvj+25]];
goto l38;
l39:x[jvj+21]=0 ;z[jvj+21]=0;
x[jvj+39]=x[jvj+36] ;z[jvj+39]=z[jvj+36];
l40:if((x[jvj+39]>0)) goto l44;
x[jvj+19]=0 ;z[jvj+19]=0;
x[jvj+38]=x[jvj+45] ;z[jvj+38]=z[jvj+45];
l41:if((x[jvj+38]>0)) goto l42;
x[jvj+36]=x[jvj+21] ;z[jvj+36]=z[jvj+21];
x[jvj+45]=x[jvj+19] ;z[jvj+45]=z[jvj+19];
goto l33;
l42:x[jvj+20]=s[x[jvj+38]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+38];
if((x[jvj+20]==V72)) goto l43;
if((x[jvj+20]==V73)) goto l43;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+20)*/
l43:x[jvj+38]=t[x[jvj+38]];
goto l41;
l44:x[jvj+22]=s[x[jvj+39]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+39];
if((x[jvj+22]==V72)) goto l45;
if((x[jvj+22]==V73)) goto l45;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+22)*/
l45:x[jvj+39]=t[x[jvj+39]];
goto l40;
l46:x[jvj+37]=t[x[jvj+37]];
goto l34;
l47:x[jvj+23]=s[x[jvj+40]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+40];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[891])( );     /*VAREXP0(jvj+23,jvj+24)*/
x[jvj+41]=x[jvj+24] ;z[jvj+41]=z[jvj+24];
for(i=x[jvj+41],V88=0;i>0;i=t[i],V88++)  ;
if((V88==1)) goto l50;
l48:x[jvj+40]=t[x[jvj+40]];
goto l37;
l49:pile[v[22]]=jvj+25; pile[WZ1]=jvj+23; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+23)*/
goto l48;
l51:x[jvj+28]=s[x[jvj+42]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+42];
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[891])( );     /*VAREXP0(jvj+28,jvj+29)*/
x[jvj+43]=x[jvj+29] ;z[jvj+43]=z[jvj+29];
for(i=x[jvj+43],V82=0;i>0;i=t[i],V82++)  ;
if((V82==1)) goto l54;
l52:x[jvj+42]=t[x[jvj+42]];
goto l36;
l53:pile[v[22]]=jvj+25; pile[WZ1]=jvj+28; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+28)*/
goto l52;
l50:if((x[jvj+41]<=0)) goto l48;
x[jvj+20]=s[x[jvj+41]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+41];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[760])( );     /*MEMEX0(jvj+20,jvj+26,jvj+27)*/
if((x[jvj+27]==135)) goto l49;
x[jvj+41]=t[x[jvj+41]];
goto l50;
l54:if((x[jvj+43]<=0)) goto l52;
x[jvj+22]=s[x[jvj+43]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+43];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+26; pile[WZ2]=jvj+30; 
(*f[760])( );     /*MEMEX0(jvj+22,jvj+26,jvj+30)*/
if((x[jvj+30]==135)) goto l53;
x[jvj+43]=t[x[jvj+43]];
goto l54;
}
