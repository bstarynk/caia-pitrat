#include "dx.h"
void SORPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,N=0,V59=0,V16=0,V17=0,V6=0,V32=0,V40=0,V34=0,V36=0,V45=0,V46=0,V47=0,V49=0,V50=0,V52=0,V53=0,V55=0,V56=0,V12=0,V30=0,V74=0,V73=0,V98=0,V80=0,V86=0;
int FF,EE,Q,Y;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=62;
if(v[0]>99700) (*f[6])( );

FF=pile[v[22]]; EE=pile[v[22]+1]; Q=pile[v[22]+2]; Y=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=109; pile[WZ1]=Y; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(109,Y,jvj+34)*/
pile[v[22]]=983; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(983,jvj+34,jvj+35)*/
pile[v[22]]=878; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(878,jvj+35,jvj+36)*/
l36:if((x[jvj+36]<=0)) goto l32;
x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
pile[v[22]]=163; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(163,jvj+37,V74)*/
V74=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(163,Y,V73)*/
V73=pile[WZ2]; 
if((V74==V73)) goto l37;
x[jvj+36]=t[x[jvj+36]];
goto l36;
l2:x[jvj+53]=t[x[jvj+53]];
l1:if((x[jvj+53]<=0)) goto l5;
x[jvj+1]=s[x[jvj+53]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+53];
pile[v[22]]=683; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+1,V4)*/
V4=pile[WZ2]; 
if((V4!=N)) goto l2;
pile[v[22]]=944; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(944,jvj+38,jvj+39)*/
l38:if((x[jvj+39]>0)) goto l43;
pile[v[22]]=944; pile[WZ1]=jvj+38; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(944,jvj+38,jvj+40)*/
l39:if((x[jvj+40]>0)) goto l45;
pile[v[22]]=944; pile[WZ1]=jvj+38; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(944,jvj+38,jvj+41)*/
l40:if((x[jvj+41]>0)) goto l41;
l5:V59=t[V59];
l3:if((V59>0)) goto l4;
x[jvj+62]=x[jvj+4] ;z[jvj+62]=z[jvj+4];
x[jvj+58]=x[jvj+62] ;z[jvj+58]=z[jvj+62];
l18:if((x[jvj+58]>0)) goto l19;
for(i=x[jvj+62],V16=0;i>0;i=t[i],V16++)  ;
for(i=x[EE],V17=0;i>0;i=t[i],V17++)  ;
if((V16!=V17)) goto l32;
x[jvj+54]=x[jvj+62] ;z[jvj+54]=z[jvj+62];
l6:if((x[jvj+54]>0)) goto l7;
x[jvj+55]=x[jvj+62] ;z[jvj+55]=z[jvj+62];
l9:if((x[jvj+55]>0)) goto l10;
x[jvj+59]=x[jvj+62] ;z[jvj+59]=z[jvj+62];
l21:if((x[jvj+59]<=0)) goto l34;
x[jvj+18]=s[x[jvj+59]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+59];
pile[v[22]]=447; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(447,jvj+18,jvj+19)*/
pile[v[22]]=459; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(459,jvj+18,jvj+20)*/
x[jvj+21]=d[73];z[jvj+21]=0;
l23:if((x[jvj+21]<=0)) goto l25;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(jvj+22,jvj+19,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=jvj+20; pile[WZ1]=jvj+22; pile[WZ2]=V6; 
(*f[186])( );     /*BTC0(jvj+20,jvj+22,V6)*/
l24:x[jvj+21]=t[x[jvj+21]];
goto l23;
l4:N=s[V59];
x[jvj+53]=x[FF] ;z[jvj+53]=z[FF];
goto l1;
l7:x[jvj+5]=s[x[jvj+54]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+54];
pile[v[22]]=447; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(447,jvj+5,jvj+6)*/
pile[v[22]]=935; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(935,jvj+6,jvj+7)*/
if((x[jvj+7]==547)) goto l8;
x[jvj+56]=x[jvj+62] ;z[jvj+56]=z[jvj+62];
l12:if((x[jvj+56]>0)) goto l13;
x[jvj+57]=x[jvj+62] ;z[jvj+57]=z[jvj+62];
l15:if((x[jvj+57]>0)) goto l16;
x[jvj+61]=x[jvj+62] ;z[jvj+61]=z[jvj+62];
l28:if((x[jvj+61]<=0)) goto l34;
x[jvj+25]=s[x[jvj+61]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+61];
pile[v[22]]=447; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(447,jvj+25,jvj+26)*/
pile[v[22]]=459; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(459,jvj+25,jvj+27)*/
pile[v[22]]=218; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(218,jvj+27,jvj+28)*/
x[jvj+29]=d[73];z[jvj+29]=0;
l30:if((x[jvj+29]<=0)) goto l29;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(jvj+30,jvj+26,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=jvj+28; pile[WZ1]=jvj+30; pile[WZ2]=V12; 
(*f[186])( );     /*BTC0(jvj+28,jvj+30,V12)*/
l31:x[jvj+29]=t[x[jvj+29]];
goto l30;
l8:x[jvj+54]=t[x[jvj+54]];
goto l6;
l10:x[jvj+8]=s[x[jvj+55]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+55];
pile[v[22]]=459; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(459,jvj+8,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=1000; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+9,1000,1)*/
l11:x[jvj+55]=t[x[jvj+55]];
goto l9;
l13:x[jvj+10]=s[x[jvj+56]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+56];
pile[v[22]]=447; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(447,jvj+10,jvj+11)*/
pile[v[22]]=935; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(935,jvj+11,jvj+12)*/
if((x[jvj+12]!=493)) goto l32;
l14:x[jvj+56]=t[x[jvj+56]];
goto l12;
l16:x[jvj+13]=s[x[jvj+57]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+57];
pile[v[22]]=459; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(459,jvj+13,jvj+14)*/
pile[v[22]]=218; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(218,jvj+14,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=1000; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+15,1000,1)*/
l17:x[jvj+57]=t[x[jvj+57]];
goto l15;
l19:x[jvj+16]=s[x[jvj+58]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+58];
pile[v[22]]=447; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(447,jvj+16,jvj+17)*/
pile[v[22]]=jvj+17; 
(*f[853])( );     /*SORESSAI0(jvj+17)*/
l20:x[jvj+58]=t[x[jvj+58]];
goto l18;
l22:x[jvj+59]=t[x[jvj+59]];
goto l21;
l25:pile[v[22]]=493; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(493,jvj+19,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(683,jvj+19,V40)*/
V40=pile[WZ2]; 
x[jvj+60]=t[x[jvj+59]];
l26:if((x[jvj+60]<=0)) goto l22;
x[jvj+23]=s[x[jvj+60]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+60];
pile[v[22]]=447; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(447,jvj+23,jvj+24)*/
pile[v[22]]=493; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(493,jvj+24,V34)*/
V34=pile[WZ2]; 
if((V32==V34)) goto l27;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(683,jvj+24,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(20,0,126,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V45; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V45,493,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V32; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(41,V32,V46,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V47,(-9543),V49)*/
V49=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V40; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(41,V40,V49,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; pile[WZ1]=(-1410); 
(*f[37])( );     /*SRA0(V50,(-1410),V52)*/
V52=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V34; pile[WZ2]=V52; 
(*f[39])( );     /*SDX0(41,V34,V52,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V53,(-9543),V55)*/
V55=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V36; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(41,V36,V55,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=V56; 
(*f[40])( );     /*SLG0(V56)*/
l27:x[jvj+60]=t[x[jvj+60]];
goto l26;
l29:x[jvj+61]=t[x[jvj+61]];
goto l28;
l32:pile[v[22]]=109; pile[WZ1]=Y; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(109,Y,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=109; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+32,109,jvj+31)*/
pile[v[22]]=163; pile[WZ1]=Y; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(163,Y,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=jvj+31; pile[WZ1]=163; pile[WZ2]=V30; 
(*f[177])( );     /*CHGC4(jvj+31,163,V30)*/
l33:pile[v[22]]=Q; pile[WZ1]=1051; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(Q,1051,jvj+31)*/
l34:v[0]=jvj; v[22]-=4; return;
l37:x[jvj+38]=x[jvj+37] ;z[jvj+38]=z[jvj+37];
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+2]=d[72];z[jvj+2]=0;
V59=x[EE];
goto l3;
l41:x[jvj+42]=s[x[jvj+41]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+41];
pile[v[22]]=683; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(683,jvj+42,V98)*/
V98=pile[WZ2]; 
if((V98!=N)) goto l44;
pile[v[22]]=1078; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(1078,jvj+42,jvj+43)*/
pile[v[22]]=860; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(860,jvj+43,jvj+44)*/
if((x[jvj+44]!=530)) goto l44;
x[jvj+33]=x[jvj+42] ;z[jvj+33]=z[jvj+42];
l35:pile[v[22]]=447; pile[WZ1]=jvj+33; pile[WZ2]=459; pile[WZ3]=jvj+1; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(447,jvj+33,459,jvj+1,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[196])( );     /*PLUF0(jvj+2,jvj+3,jvj+4)*/
goto l5;
l42:x[jvj+39]=t[x[jvj+39]];
goto l38;
l43:x[jvj+45]=s[x[jvj+39]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+39];
pile[v[22]]=683; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(683,jvj+45,V80)*/
V80=pile[WZ2]; 
if((V80!=N)) goto l42;
pile[v[22]]=935; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(935,jvj+45,jvj+46)*/
if((x[jvj+46]!=547)) goto l42;
pile[v[22]]=1078; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(1078,jvj+45,jvj+47)*/
pile[v[22]]=860; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(860,jvj+47,jvj+48)*/
if((x[jvj+48]!=530)) goto l42;
x[jvj+33]=x[jvj+45] ;z[jvj+33]=z[jvj+45];
goto l35;
l44:x[jvj+41]=t[x[jvj+41]];
goto l40;
l45:x[jvj+49]=s[x[jvj+40]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+40];
pile[v[22]]=683; pile[WZ1]=jvj+49; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(683,jvj+49,V86)*/
V86=pile[WZ2]; 
if((V86!=N)) goto l46;
pile[v[22]]=1078; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(1078,jvj+49,jvj+50)*/
pile[v[22]]=860; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(860,jvj+50,jvj+51)*/
if((x[jvj+51]!=530)) goto l46;
pile[v[22]]=935; pile[WZ1]=jvj+49; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(935,jvj+49,jvj+52)*/
if(x[jvj+52]!=936&&x[jvj+52]!=493) goto l46;
x[jvj+33]=x[jvj+49] ;z[jvj+33]=z[jvj+49];
l46:x[jvj+40]=t[x[jvj+40]];
goto l39;
}
