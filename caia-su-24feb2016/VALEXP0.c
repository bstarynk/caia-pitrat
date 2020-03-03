#include "dx.h"
void VALEXP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,RS=0,V14=0,RT=0,V16=0,V31=0,V26=0,V30=0,V28=0,V32=0,V52=0,V51=0,V59=0,V58=0,V66=0,V65=0,V81=0,V114=0,N=0,V82=0,V105=0,V103=0,V102=0,V101=0,V42=0,V4=0,V3=0,V=0,V93=0,V96=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=48;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+15]=x[A] ;z[jvj+15]=z[A];
l54:R=x[jvj+48]=incon;
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+15,jvj+16)*/
V114=x[jvj+16];
R=V114;
l45:pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(111,jvj+15,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[jvj+40]!=433)) goto l52;
pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+41)*/
l46:if((x[jvj+41]<=0)) goto l48;
x[jvj+42]=s[x[jvj+41]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+41];
pile[v[22]]=100; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,jvj+42,jvj+43)*/
if((x[jvj+43]!=452)) goto l47;
pile[v[22]]=107; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(107,jvj+42,jvj+44)*/
if((x[jvj+44]!=0)) goto l47;
pile[v[22]]=102; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,jvj+42,jvj+45)*/
x[jvj+48]=x[jvj+45] ;z[jvj+48]=z[jvj+45];
l48:if(R==incon) goto l49;
l53:v[0]=jvj; v[22]-=3; pile[v[22]+2]=R; v[102]=0;return;
l1:V14=impos;
l4:pile[v[22]]=jvj+4; pile[WZ1]=V14; 
(*f[978])( );     /*PLUB3(jvj+4,V14)*/
x[jvj+21]=t[x[jvj+21]];
l2:if((x[jvj+21]>0)) goto l3;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==impos) goto l36;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+5; 
(*f[46])( );     /*TRI0(0,117,jvj+5)*/
l5:if((x[jvj+4]>0)) goto l6;
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(117,jvj+5,V16)*/
V16=pile[WZ2]; 
R=V16;
goto l45;
l3:x[jvj+3]=s[x[jvj+21]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+21];
V14=incon;
pile[v[22]]=B; pile[WZ1]=jvj+3; 
(*f[816])( );if(v[102]) goto l1;     /*VALEXP0(B,jvj+3,V15)*/
V15=pile[WZ2]; 
RS=V15;
V14=RS;
goto l4;
l6:RT=s[x[jvj+4]];
pile[v[22]]=jvj+5; pile[WZ1]=117; pile[WZ2]=RT; 
(*f[186])( );     /*BTC0(jvj+5,117,RT)*/
x[jvj+4]=t[x[jvj+4]];
goto l5;
l7:V30=impos;
l10:pile[v[22]]=jvj+7; pile[WZ1]=V30; 
(*f[978])( );     /*PLUB3(jvj+7,V30)*/
x[jvj+22]=t[x[jvj+22]];
l8:if((x[jvj+22]>0)) goto l9;
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==impos) goto l36;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0(1,117,jvj+8)*/
l11:if((x[jvj+7]>0)) goto l12;
pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(117,jvj+8,V32)*/
V32=pile[WZ2]; 
R=V32;
goto l45;
l9:x[jvj+6]=s[x[jvj+22]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+22];
V30=incon;
pile[v[22]]=B; pile[WZ1]=jvj+6; 
(*f[816])( );if(v[102]) goto l7;     /*VALEXP0(B,jvj+6,V31)*/
V31=pile[WZ2]; 
V26=V31;
V30=V26;
goto l10;
l12:V28=s[x[jvj+7]];
pile[v[22]]=jvj+8; pile[WZ1]=117; pile[WZ2]=V28; 
(*f[818])( );     /*MTC0(jvj+8,117,V28)*/
x[jvj+7]=t[x[jvj+7]];
goto l11;
l14:x[jvj+10]=s[x[jvj+18]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+18];
pile[v[22]]=B; pile[WZ1]=jvj+10; 
(*f[816])( );if(v[102]) goto l15;     /*VALEXP0(B,jvj+10,V52)*/
V52=pile[WZ2]; 
if((V52!=135)) goto l15;
V51=135;
l27:R=V51;
goto l45;
l15:x[jvj+18]=t[x[jvj+18]];
l13:if((x[jvj+18]>0)) goto l14;
V51=134;
goto l27;
l17:x[jvj+11]=s[x[jvj+20]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+20];
pile[v[22]]=B; pile[WZ1]=jvj+11; 
(*f[816])( );if(v[102]) goto l18;     /*VALEXP0(B,jvj+11,V59)*/
V59=pile[WZ2]; 
if((V59!=135)) goto l18;
x[jvj+20]=t[x[jvj+20]];
l16:if((x[jvj+20]>0)) goto l17;
V58=135;
l31:R=V58;
goto l45;
l18:V58=134;
goto l31;
l20:x[jvj+12]=s[x[jvj+19]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+19];
pile[v[22]]=B; pile[WZ1]=jvj+12; 
(*f[816])( );if(v[102]) goto l21;     /*VALEXP0(B,jvj+12,V66)*/
V66=pile[WZ2]; 
if((V66!=134)) goto l21;
V65=135;
l29:R=V65;
goto l45;
l21:x[jvj+19]=t[x[jvj+19]];
l19:if((x[jvj+19]>0)) goto l20;
V65=134;
goto l29;
l23:x[jvj+13]=s[x[jvj+47]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+47];
pile[v[22]]=B; pile[WZ1]=jvj+13; 
(*f[816])( );if(v[102]) goto l35;     /*VALEXP0(B,jvj+13,V81)*/
V81=pile[WZ2]; 
if((V81!=135)) goto l35;
x[jvj+47]=t[x[jvj+47]];
l22:if((x[jvj+47]>0)) goto l23;
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,jvj+24,jvj+27)*/
pile[v[22]]=B; pile[WZ1]=jvj+27; 
(*f[816])( );if(v[102]) goto l35;     /*VALEXP0(B,jvj+27,V82)*/
V82=pile[WZ2]; 
R=V82;
goto l45;
l24:pile[v[22]]=130; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+15,N)*/
N=pile[WZ2]; 
R=N;
goto l45;
l25:pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+15,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+17,jvj+1)*/
if((x[jvj+1]==55)) goto l26;
if((x[jvj+1]==50)) goto l28;
if((x[jvj+1]==48)) goto l30;
if((x[jvj+1]==485)) goto l32;
if((x[jvj+1]==486)) goto l33;
if((x[jvj+1]!=433)) goto l36;
pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+23)*/
l34:if((x[jvj+23]<=0)) goto l36;
x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=452)) goto l35;
pile[v[22]]=107; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+24,jvj+26)*/
if((x[jvj+26]==0)) goto l35;
x[jvj+47]=x[jvj+26] ;z[jvj+47]=z[jvj+26];
goto l22;
l26:pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+18)*/
V51=incon;
goto l13;
l28:pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+19)*/
V65=incon;
goto l19;
l30:pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+20)*/
V58=incon;
goto l16;
l32:pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+21)*/
x[jvj+4]=0 ;z[jvj+4]=0;
goto l2;
l33:pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+22)*/
x[jvj+7]=0 ;z[jvj+7]=0;
goto l8;
l35:x[jvj+23]=t[x[jvj+23]];
goto l34;
l36:pile[v[22]]=118; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(118,jvj+1,V105)*/
V105=pile[WZ2]; 
if((V105==3)) goto l37;
if((V105==1)) goto l39;
if((V105!=2)) goto l42;
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+15,jvj+34)*/
if((x[jvj+34]!=22)) goto l42;
pile[v[22]]=155; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(155,jvj+1,jvj+2)*/
if((x[jvj+2]==68)) goto l42;
l41:pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,jvj+15,jvj+35)*/
pile[v[22]]=B; pile[WZ1]=jvj+35; 
(*f[816])( );if(v[102]) goto l42;     /*VALEXP0(B,jvj+35,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+15; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,jvj+15,jvj+36)*/
pile[v[22]]=B; pile[WZ1]=jvj+36; 
(*f[816])( );if(v[102]) goto l42;     /*VALEXP0(B,jvj+36,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=V4; pile[WZ2]=jvj+1; 
(*f[617])( );if(v[102]) goto l42;     /*EVLD0(V3,V4,jvj+1,R)*/
R=pile[WZ3]; 
goto l45;
l37:pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+15,jvj+28)*/
if((x[jvj+28]!=22)) goto l42;
pile[v[22]]=155; pile[WZ1]=jvj+1; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(155,jvj+1,jvj+14)*/
if((x[jvj+14]==68)) goto l42;
l38:pile[v[22]]=160; pile[WZ1]=jvj+15; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(160,jvj+15,jvj+29)*/
pile[v[22]]=B; pile[WZ1]=jvj+29; 
(*f[816])( );if(v[102]) goto l42;     /*VALEXP0(B,jvj+29,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,jvj+15,jvj+30)*/
pile[v[22]]=B; pile[WZ1]=jvj+30; 
(*f[816])( );if(v[102]) goto l42;     /*VALEXP0(B,jvj+30,V102)*/
V102=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+15; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,jvj+15,jvj+31)*/
pile[v[22]]=B; pile[WZ1]=jvj+31; 
(*f[816])( );if(v[102]) goto l42;     /*VALEXP0(B,jvj+31,V101)*/
V101=pile[WZ2]; 
pile[v[22]]=V101; pile[WZ1]=V102; pile[WZ2]=jvj+1; pile[WZ3]=V103; 
(*f[620])( );if(v[102]) goto l42;     /*EVLN0(V101,V102,jvj+1,V103,R)*/
R=pile[WZ4]; 
goto l45;
l39:pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+15,jvj+32)*/
if((x[jvj+32]!=22)) goto l42;
pile[v[22]]=155; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(155,jvj+1,jvj+9)*/
if((x[jvj+9]==68)) goto l42;
l40:pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,jvj+15,jvj+33)*/
pile[v[22]]=B; pile[WZ1]=jvj+33; 
(*f[816])( );if(v[102]) goto l42;     /*VALEXP0(B,jvj+33,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=V42; 
(*f[616])( );if(v[102]) goto l42;     /*EVLU0(jvj+1,V42,R)*/
R=pile[WZ2]; 
goto l45;
l42:pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l45;     /*FNDC1(140,jvj+15,V)*/
V=pile[WZ2]; 
pile[v[22]]=128; pile[WZ1]=B; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(128,B,jvj+37)*/
l43:if((x[jvj+37]<=0)) goto l45;
x[jvj+38]=s[x[jvj+37]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+37];
pile[v[22]]=140; pile[WZ1]=jvj+38; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(140,jvj+38,V93)*/
V93=pile[WZ2]; 
if((V93!=V)) goto l44;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(130,jvj+38,V96)*/
V96=pile[WZ2]; 
R=V96;
goto l45;
l44:x[jvj+37]=t[x[jvj+37]];
goto l43;
l47:x[jvj+41]=t[x[jvj+41]];
goto l46;
l49:if(x[jvj+48]!=incon) goto l50;
l51:v[0]=jvj; v[22]-=3; v[102]=1;return;
l50:pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(100,jvj+15,jvj+46)*/
if((x[jvj+46]!=22)) goto l51;
x[jvj+15]=x[jvj+48] ;z[jvj+15]=z[jvj+48];
goto l54;
l52:if(R!=incon) goto l53;
goto l51;
}
