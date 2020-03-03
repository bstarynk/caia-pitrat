#include "dx.h"
void CRETROUVER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V4=0,V8=0,V9=0,V5=0,A=0,B=0,V18=0,V13=0,V17=0,V12=0,V11=0,V10=0,MX=0,V15=0,V14=0,V16=0,MN=0,V37=0,NA=0,V33=0,V44=0,V45=0,V32=0,V50=0,V35=0,V48=0,V34=0,V54=0,V55=0,V51=0,V52=0,V53=0,V36=0;
int D,S,RA;
int RB,V;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=11323;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==4023&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; S=pile[v[22]+1]; RA=pile[v[22]+2]; RB=pile[v[22]+3]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
MX=x[jvj+8]=x[jvj+10]=x[RB]=V=incon;
z[D]=(-1);
pile[v[22]]=RA; pile[WZ1]=jvj+7; 
(*f[3517])( );     /*DECSOM2(RA,jvj+7)*/
V4=incon;
x[jvj+34]=x[jvj+7] ;z[jvj+34]=z[jvj+7];
l1:if((x[jvj+34]>0)) goto l2;
V4=0;
l4:V5=incon;
l5:if((x[jvj+7]>0)) goto l6;
V5=0;
l8:A=V4;
B=V5;
if((A<=0)) goto l37;
pile[v[22]]=164; pile[WZ1]=D; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(164,D,V12)*/
V12=pile[WZ2]; 
V11=V12-B;
V10=V11/A;
MX=V10;
l10:pile[v[22]]=280; pile[WZ1]=D; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(280,D,V15)*/
V15=pile[WZ2]; 
V14=V15-B;
V16=V14/A;
V13=incon;
V18=V14%A;
if((V18==0)) goto l9;
V17=V16+1;
V13=V17;
l11:MN=V13;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=MN; pile[WZ4]=jvj+8; 
(*f[192])( );     /*QUADRI4(100,41,130,MN,jvj+8)*/
l12:if(MX!=incon) goto l36;
l13:if(x[jvj+8]==incon) goto l37;
l14:if(x[jvj+10]==incon) goto l38;
l15:pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=103; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+11,103,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=61; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+30; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,61,102,jvj+9,jvj+30,jvj+12)*/
pile[v[22]]=D; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[4081])( );if(v[102]) goto l30;     /*CRETROUVERVAR0(D,jvj+12,jvj+13,V)*/
V=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7141); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7141),jvj+14)*/
pile[WZ3]=V; pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+31)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+33; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+33)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+33,jvj+32,jvj+15)*/
pile[v[22]]=RA; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; 
(*f[3130])( );if(v[102]) goto l17;     /*SUBSTITUVAR1(RA,jvj+14,jvj+15,jvj+17,jvj+16)*/
if((x[jvj+16]==135)) goto l16;
l17:pile[v[22]]=D; pile[WZ1]=1347; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(D,1347,jvj+13)*/
if(x[RB]!=incon) goto l18;
l30:V36=g[624];
if((V36<=0)) goto l33;
V37=vg[624];
if((V37!=0)) goto l23;
if((V36<3)) goto l27;
l23:pile[v[22]]=624; pile[WZ1]=11323; pile[WZ2]=0; pile[WZ3]=jvj+28; 
(*f[291])( );     /*INTERP4(624,11323,0,jvj+28)*/
if((x[jvj+28]==135)) goto l26;
l33:if(x[RB]!=incon) goto l34;
l32:x[RB]=V=incon;
l31:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l2:x[jvj+2]=s[x[jvj+34]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+34];
pile[v[22]]=218; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(218,jvj+2,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=484)) goto l3;
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+2,V7)*/
V7=pile[WZ2]; 
V4=V7;
goto l4;
l3:x[jvj+34]=t[x[jvj+34]];
goto l1;
l6:x[jvj+5]=s[x[jvj+7]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+7];
pile[v[22]]=218; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,jvj+5,jvj+6)*/
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+6,V8)*/
V8=pile[WZ2]; 
if((V8!=1)) goto l7;
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+5,V9)*/
V9=pile[WZ2]; 
V5=V9;
goto l8;
l7:x[jvj+7]=t[x[jvj+7]];
goto l5;
l9:V13=V16;
goto l11;
l16:x[RB]=x[jvj+17] ;z[RB]=z[jvj+17];
goto l17;
l18:x[jvj+18]=vo[16];z[jvj+18]=vz[16];
pile[v[22]]=1071; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1071,jvj+18,jvj+19)*/
pile[v[22]]=D; pile[WZ1]=jvj+20; 
(*f[1290])( );if(v[102]) goto l22;     /*DEPEXP0(D,jvj+20)*/
l19:if((x[jvj+19]<=0)) goto l22;
x[jvj+21]=s[x[jvj+19]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+19];
pile[v[22]]=1347; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1347,jvj+21,jvj+22)*/
if((x[D]!=x[jvj+22])) goto l20;
pile[v[22]]=1435; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1435,jvj+21,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+20; pile[WZ2]=RB; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; 
(*f[3130])( );if(v[102]) goto l20;     /*SUBSTITUVAR1(jvj+23,jvj+20,RB,jvj+25,jvj+24)*/
if((x[jvj+24]==135)) goto l21;
l20:x[jvj+19]=t[x[jvj+19]];
goto l19;
l21:pile[v[22]]=129; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[1157])( );if(v[102]) goto l20;     /*NORME1(129,jvj+25,jvj+26)*/
pile[v[22]]=jvj+21; pile[WZ1]=1347; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(jvj+21,1347,jvj+13)*/
pile[WZ1]=1435; pile[WZ2]=jvj+26; 
(*f[35])( );     /*CHGC1(jvj+21,1435,jvj+26)*/
goto l20;
l22:pile[v[22]]=RB; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(RB,jvj+27)*/
pile[v[22]]=D; pile[WZ1]=1435; pile[WZ2]=jvj+27; 
(*f[35])( );     /*CHGC1(D,1435,jvj+27)*/
goto l30;
l24:V32=V33;
l28:pile[v[22]]=20; pile[WZ1]=V54; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(20,V54,V32,V53)*/
V53=pile[WZ3]; 
pile[WZ1]=V55; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(20,V55,V53,V35)*/
V35=pile[WZ3]; 
V34=incon;
pile[v[22]]=1347; pile[WZ1]=D; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1347,D,jvj+29)*/
V50=x[jvj+29];
pile[v[22]]=V35; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V35,58,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V50; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(20,V50,V48,V34)*/
V34=pile[WZ3]; 
l29:pile[v[22]]=V34; 
(*f[40])( );     /*SLG0(V34)*/
if((V36!=2)) goto l33;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l33;
l25:V34=V35;
goto l29;
l26:if((V36<4)) goto l27;
goto l33;
l27:V54=x[S];
V55=x[D];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=15; pile[WZ1]=V51; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(15,V51,126,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=11323; pile[WZ2]=V52; 
(*f[39])( );     /*SDX0(20,11323,V52,V33)*/
V33=pile[WZ3]; 
V32=incon;
pile[v[22]]=929; pile[WZ1]=S; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(929,S,NA)*/
NA=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V33,91,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=NA; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V44,NA,41,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V45,93,V32)*/
V32=pile[WZ2]; 
goto l28;
l34:if(V!=incon) goto l35;
goto l32;
l35:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; pile[v[22]+4]=V; v[102]=0;return;
l36:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=MX; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,MX,jvj+10)*/
goto l13;
l37:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=833; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,20,101,833,jvj+8)*/
goto l14;
l38:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=828; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,828,jvj+10)*/
goto l15;
}
