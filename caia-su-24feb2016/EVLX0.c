#include "dx.h"
void EVLX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,ME=0,V94=0,V96=0,V93=0,V95=0,V72=0,V76=0,V78=0,V83=0,V61=0,V56=0,V13=0,V8=0,V55=0,V64=0,HT=0,V30=0,HH=0,V1=0,V4=0,V3=0,V7=0,V91=0,KK=0,V90=0,V92=0,S=0,V102=0,V101=0,V104=0,V62=0,V103=0,V106=0,V105=0,V108=0,V63=0,V107=0;
int Z,INT;
int RES;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=46;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; INT=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=x[Z] ;z[jvj+9]=z[Z];
l53:ME=x[jvj+7]=x[jvj+1]=x[jvj+8]=HT=incon;
x[jvj+6]=vo[20];z[jvj+6]=vz[20];
pile[v[22]]=INT; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(INT,jvj+6,jvj+7)*/
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(109,jvj+7,jvj+8)*/
l1:pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+7,V12)*/
V12=pile[WZ2]; 
if((V12!=5)) goto l2;
ME=135;
l2:pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+9,jvj+1)*/
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]!=39)) goto l16;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+1,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+3,jvj+4)*/
x[jvj+5]=vo[20];z[jvj+5]=vz[20];
pile[v[22]]=jvj+5; pile[WZ1]=449; 
(*f[35])( );     /*CHGC1(jvj+5,449,jvj+4)*/
l16:if(ME==incon) goto l17;
if(x[jvj+7]!=incon) goto l24;
l33:HT=(-1);
l36:if(ME!=incon) goto l37;
l46:if(x[jvj+1]!=incon) goto l47;
l49:x[RES]=12 ;z[RES]=12;
l52:v[0]=jvj; v[22]-=3; return;
l4:x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=103; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+19,jvj+20)*/
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+20,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=jvj+21; pile[WZ1]=V72; 
(*f[331])( );     /*PLUE3(jvj+21,V72)*/
l5:x[jvj+18]=t[x[jvj+18]];
l3:if((x[jvj+18]>0)) goto l4;
x[jvj+25]=0 ;z[jvj+25]=0;
pile[v[22]]=113; pile[WZ1]=jvj+1; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(113,jvj+1,jvj+22)*/
l6:if((x[jvj+22]>0)) goto l7;
V61=incon;
pile[v[22]]=365; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(365,jvj+26,jvj+27)*/
for(i=x[jvj+27],V78=0;i>0;i=t[i],V78++)  ;
if((V78>1)) goto l9;
l15:V61=(-1);
l28:HT=V61;
l29:if(x[jvj+8]!=incon) goto l30;
l32:if(HT==incon) goto l33;
goto l36;
l7:x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=103; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+23,jvj+24)*/
pile[v[22]]=140; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+24,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=jvj+25; pile[WZ1]=V76; 
(*f[331])( );     /*PLUE3(jvj+25,V76)*/
l8:x[jvj+22]=t[x[jvj+22]];
goto l6;
l12:pile[v[22]]=223; pile[WZ1]=jvj+28; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(223,jvj+28,jvj+30)*/
for(i=x[jvj+25],V106=0;i>0;i=t[i],V106++)  ;
for(i=x[jvj+30],V105=0;i>0;i=t[i],V105++)  ;
if((V106!=V105)) goto l59;
V108=x[jvj+25];
l58:if((V108>0)) goto l61;
V63=135;
l13:if((V63==135)) goto l14;
l10:x[jvj+27]=t[x[jvj+27]];
l9:if((x[jvj+27]<=0)) goto l15;
x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=222; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(222,jvj+28,jvj+29)*/
for(i=x[jvj+21],V102=0;i>0;i=t[i],V102++)  ;
for(i=x[jvj+29],V101=0;i>0;i=t[i],V101++)  ;
if((V102!=V101)) goto l55;
V104=x[jvj+21];
l54:if((V104>0)) goto l57;
V62=135;
l11:if((V62==135)) goto l12;
goto l10;
l14:pile[v[22]]=130; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+28,V83)*/
V83=pile[WZ2]; 
V61=V83;
goto l28;
l17:if(x[jvj+7]!=incon) goto l18;
goto l33;
l18:if(x[jvj+1]!=incon) goto l19;
goto l33;
l19:pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+1,jvj+31)*/
if((x[jvj+31]!=39)) goto l21;
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+7,V56)*/
V56=pile[WZ2]; 
if((V56>=4)) goto l20;
if((V56<=0)) goto l21;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+1,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+32,jvj+33)*/
pile[v[22]]=39; pile[WZ1]=jvj+7; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(39,jvj+7,jvj+34)*/
if((x[jvj+33]==x[jvj+34])) goto l20;
l21:pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+7,V13)*/
V13=pile[WZ2]; 
if((V13<1)) goto l23;
if((x[jvj+31]==85)) goto l20;
if((x[jvj+31]==86)) goto l20;
if((x[jvj+31]!=39)) goto l22;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+1,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+10,jvj+11)*/
pile[v[22]]=708; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(708,jvj+11,jvj+12)*/
if((x[jvj+12]==68)) goto l20;
l22:if((V13<3)) goto l23;
if((x[jvj+31]==73)) goto l20;
if((x[jvj+31]!=39)) goto l23;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+1,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+15,jvj+13)*/
pile[v[22]]=934; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(934,jvj+13,jvj+14)*/
if((x[jvj+14]==68)) goto l23;
l20:ME=135;
l25:pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+1,jvj+37)*/
if((x[jvj+37]==85)) goto l26;
if((x[jvj+37]==86)) goto l26;
l27:if((x[jvj+37]!=39)) goto l29;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+1,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+39,jvj+26)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(130,jvj+7,V64)*/
V64=pile[WZ2]; 
if((V64<=0)) goto l29;
x[jvj+21]=0 ;z[jvj+21]=0;
pile[v[22]]=114; pile[WZ1]=jvj+1; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(114,jvj+1,jvj+18)*/
goto l3;
l23:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+1,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=82)) goto l25;
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+7,V8)*/
V8=pile[WZ2]; 
if((V8>=2)) goto l20;
goto l25;
l24:if(x[jvj+1]!=incon) goto l25;
goto l33;
l26:pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+7,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=498; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(498,jvj+7,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=130; pile[WZ2]=V55; 
(*f[43])( );     /*CHGC2(jvj+38,130,V55)*/
goto l27;
l30:x[jvj+16]=vo[20];z[jvj+16]=vz[20];
pile[v[22]]=14; pile[WZ1]=jvj+16; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(14,jvj+16,jvj+40)*/
if((x[jvj+40]!=68)) goto l32;
V30=v[15];
v[15]=0;
V94=x[jvj+8];
V96=x[jvj+1];
pile[v[22]]=20; pile[WZ1]=V94; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V94,0,V93)*/
V93=pile[WZ3]; 
pile[WZ1]=V96; pile[WZ2]=V93; 
(*f[39])( );     /*SDX0(20,V96,V93,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=V95; 
(*f[40])( );     /*SLG0(V95)*/
pile[v[22]]=39; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(39,jvj+16,jvj+17)*/
if((x[jvj+8]!=x[jvj+17])) goto l31;
pile[v[22]]=(-1); pile[WZ1]=jvj+7; 
(*f[176])( );     /*EDITE2((-1),jvj+7)*/
l31:v[15]=V30;
goto l32;
l34:V1=0;
l41:pile[v[22]]=jvj+7; pile[WZ1]=jvj+9; pile[WZ2]=jvj+41; 
(*f[628])( );     /*EVLY0(jvj+7,jvj+9,jvj+41)*/
if((x[jvj+41]==135)) goto l42;
l47:S=v[1];
v[1]=0;
pile[v[22]]=jvj+1; pile[WZ1]=INT; pile[WZ2]=jvj+43; 
(*f[630])( );if(v[102]) goto l49;     /*EVL3(jvj+1,INT,jvj+43)*/
v[1]=S;
x[jvj+45]=incon;
if((x[jvj+43]!=135)) goto l48;
pile[v[22]]=135; pile[WZ1]=jvj+9; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(135,jvj+9,jvj+44)*/
x[jvj+45]=135 ;z[jvj+45]=135;
l50:pile[v[22]]=jvj+45; pile[WZ1]=jvj+9; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(jvj+45,jvj+9,jvj+46)*/
x[jvj+9]=x[jvj+46] ;z[jvj+9]=z[jvj+46];
goto l53;
l35:pile[v[22]]=41; pile[WZ1]=HT; pile[WZ2]=V4; 
(*f[39])( );     /*SDX0(41,HT,V4,V3)*/
V3=pile[WZ3]; 
l44:pile[v[22]]=V3; pile[WZ1]=jvj+1; 
(*f[344])( );if(v[102]) goto l47;     /*XX1(V3,jvj+1,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=V92; 
(*f[40])( );     /*SLG0(V92)*/
pile[v[22]]=jvj+42; pile[WZ1]=372; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(jvj+42,372,jvj+9)*/
if((V1!=0)) goto l45;
pile[v[22]]=(-1); pile[WZ1]=jvj+7; 
(*f[176])( );     /*EDITE2((-1),jvj+7)*/
l45:v[15]=KK;
goto l47;
l37:if(x[jvj+7]!=incon) goto l38;
goto l46;
l38:if(x[jvj+8]!=incon) goto l39;
goto l46;
l39:if(x[jvj+1]!=incon) goto l40;
goto l49;
l40:if((ME!=135)) goto l47;
V1=incon;
pile[v[22]]=220; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(220,jvj+7,HH)*/
HH=pile[WZ2]; 
V1=HH;
goto l41;
l42:x[jvj+42]=vo[20];z[jvj+42]=vz[20];
V91=x[jvj+8];
KK=v[15];
v[15]=0;
if((V1<=0)) goto l43;
V7=V1-1;
pile[v[22]]=jvj+7; pile[WZ1]=220; pile[WZ2]=V7; 
(*f[43])( );     /*CHGC2(jvj+7,220,V7)*/
l43:pile[v[22]]=20; pile[WZ1]=V91; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V91,0,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=V90; pile[WZ1]=58; 
(*f[249])( );     /*SPC1(V90,58,V4)*/
V4=pile[WZ2]; 
V3=incon;
if((HT>=0)) goto l35;
V3=V4;
goto l44;
l48:x[jvj+45]=120 ;z[jvj+45]=120;
goto l50;
l51:x[RES]=x[jvj+43] ;z[RES]=z[jvj+43];
goto l52;
l56:V104=t[V104];
goto l54;
l57:V103=s[V104];
for(a=x[jvj+29];a>0;a=t[a]) if(s[a]==V103) goto l56;
l55:V62=134;
goto l11;
l60:V108=t[V108];
goto l58;
l61:V107=s[V108];
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==V107) goto l60;
l59:V63=134;
goto l13;
}
