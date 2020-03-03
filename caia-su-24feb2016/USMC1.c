#include "dx.h"
void USMC1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V57=0,V78=0,V99=0,V94=0,V105=0,V121=0,V113=0,V75=0,V69=0,V164=0,V160=0,V55=0,V124=0;
int X,N,E,H,P;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=59;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; N=pile[v[22]+1]; E=pile[v[22]+2]; H=pile[v[22]+3]; P=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[N]==68)) goto l6;
if((x[N]==278)) goto l20;
if((x[N]!=228)) goto l30;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,X,jvj+46)*/
pile[v[22]]=101; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+46,jvj+47)*/
if((x[jvj+47]!=647)) goto l29;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,X,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=N; pile[WZ2]=E; pile[WZ3]=H; pile[WZ4]=P; 
(*f[1115])( );     /*USMC1(jvj+48,N,E,H,P)*/
l29:if(x[jvj+47]!=295&&x[jvj+47]!=585&&x[jvj+47]!=137&&x[jvj+47]!=149&&x[jvj+47]!=139&&x[jvj+47]!=432&&x[jvj+47]!=138&&x[jvj+47]!=141&&x[jvj+47]!=1382&&x[jvj+47]!=1660) goto l30;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,X,jvj+49)*/
if((x[jvj+49]!=22)) goto l30;
pile[v[22]]=102; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,X,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=68; pile[WZ2]=E; pile[WZ3]=H; pile[WZ4]=P; 
(*f[1115])( );     /*USMC1(jvj+50,68,E,H,P)*/
l30:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,X,jvj+51)*/
x[jvj+57]=w[x[jvj+51]][8];
if((x[N]!=278)) goto l31;
if((x[jvj+51]!=22)) goto l31;
pile[v[22]]=111; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,X,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==654)) goto l36;
l31:if((x[jvj+57]<=0)) goto l36;
x[jvj+52]=s[x[jvj+57]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+57];
if((x[N]!=68)) goto l33;
if((x[jvj+52]!=113)) goto l33;
if((x[P]==68)) goto l32;
l33:pile[v[22]]=jvj+52; pile[WZ1]=X; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(jvj+52,X,jvj+53)*/
x[jvj+58]=x[jvj+53] ;z[jvj+58]=z[jvj+53];
l34:if((x[jvj+58]<=0)) goto l32;
x[jvj+7]=s[x[jvj+58]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+58];
x[jvj+54]=incon;
if((x[N]!=68)) goto l3;
if((x[jvj+51]!=39)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+7,jvj+8)*/
x[jvj+54]=x[jvj+8] ;z[jvj+54]=z[jvj+8];
l35:pile[v[22]]=jvj+54; pile[WZ1]=N; pile[WZ2]=E; pile[WZ3]=H; pile[WZ4]=P; 
(*f[1115])( );     /*USMC1(jvj+54,N,E,H,P)*/
x[jvj+58]=t[x[jvj+58]];
goto l34;
l1:if(x[jvj+1]==295||x[jvj+1]==585||x[jvj+1]==137||x[jvj+1]==149||x[jvj+1]==139||x[jvj+1]==138||x[jvj+1]==141||x[jvj+1]==432||x[jvj+1]==647||x[jvj+1]==1382) goto l38;
l40:pile[v[22]]=jvj+56; pile[WZ1]=N; pile[WZ2]=E; pile[WZ3]=H; pile[WZ4]=P; 
(*f[1115])( );     /*USMC1(jvj+56,N,E,H,P)*/
l38:x[jvj+59]=t[x[jvj+59]];
l37:if((x[jvj+59]<=0)) goto l41;
x[jvj+55]=s[x[jvj+59]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+59];
if((x[N]!=68)) goto l39;
if((x[jvj+55]==436)) goto l38;
l39:pile[v[22]]=jvj+55; pile[WZ1]=X; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(jvj+55,X,jvj+56)*/
if((x[jvj+51]!=22)) goto l40;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,X,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+3,jvj+4)*/
x[jvj+1]=x[jvj+4] ;z[jvj+1]=z[jvj+4];
if((x[N]==228)) goto l1;
if((x[N]==278)) goto l2;
if((x[N]!=68)) goto l40;
if(x[jvj+1]==228||x[jvj+1]==178) goto l38;
if((x[jvj+55]!=103)) goto l40;
pile[v[22]]=1045; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(1045,jvj+1,jvj+2)*/
if((x[jvj+2]==68)) goto l38;
goto l40;
l2:if((x[jvj+55]!=102)) goto l40;
if(x[jvj+1]==650||x[jvj+1]==649||x[jvj+1]==651||x[jvj+1]==151) goto l38;
goto l40;
l3:x[jvj+54]=x[jvj+7] ;z[jvj+54]=z[jvj+7];
goto l35;
l6:pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,X,V57)*/
V57=pile[WZ2]; 
if(V57==(-3629)||V57==(-4348)||V57==(-4349)||V57==(-3704)||V57==(-1761)||V57==(-1278)||V57==(-3031)||V57==(-5598)||V57==(-6170)||V57==(-6470)||V57==(-10635)||V57==(-10974)||V57==(-11168)) goto l7;
pile[v[22]]=E; pile[WZ1]=V57; 
(*f[331])( );     /*PLUE3(E,V57)*/
l7:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(436,X,jvj+14)*/
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+14,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=H; pile[WZ1]=V78; 
(*f[331])( );     /*PLUE3(H,V78)*/
l8:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,X,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]==25)) goto l10;
if((x[jvj+16]==44)) goto l12;
if((x[jvj+16]!=228)) goto l16;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=228; pile[WZ2]=E; pile[WZ3]=H; pile[WZ4]=P; 
(*f[1115])( );     /*USMC1(jvj+24,228,E,H,P)*/
l16:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,X,jvj+25)*/
if((x[jvj+25]!=22)) goto l17;
pile[v[22]]=1045; pile[WZ1]=jvj+16; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1045,jvj+16,jvj+26)*/
if((x[jvj+26]!=68)) goto l17;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,X,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=278; pile[WZ2]=E; pile[WZ3]=H; pile[WZ4]=P; 
(*f[1115])( );     /*USMC1(jvj+27,278,E,H,P)*/
l17:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,X,jvj+28)*/
if((x[jvj+28]!=39)) goto l30;
pile[v[22]]=113; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(113,X,jvj+29)*/
l18:if((x[jvj+29]<=0)) goto l30;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=102; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+30,jvj+31)*/
pile[v[22]]=140; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+31,V75)*/
V75=pile[WZ2]; 
V69=V75;
pile[v[22]]=H; pile[WZ1]=V69; 
(*f[331])( );     /*PLUE3(H,V69)*/
l19:x[jvj+29]=t[x[jvj+29]];
goto l18;
l10:x[jvj+17]=d[20];z[jvj+17]=0;
l9:if((x[jvj+17]<=0)) goto l16;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+18,X,jvj+19)*/
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+19,V99)*/
V99=pile[WZ2]; 
V94=V99;
pile[v[22]]=H; pile[WZ1]=V94; 
(*f[331])( );     /*PLUE3(H,V94)*/
l11:x[jvj+17]=t[x[jvj+17]];
goto l9;
l12:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+20)*/
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+20,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=H; pile[WZ1]=V105; 
(*f[331])( );     /*PLUE3(H,V105)*/
l13:pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=128)) goto l16;
pile[v[22]]=128; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(128,jvj+20,jvj+22)*/
l14:if((x[jvj+22]<=0)) goto l16;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+23,V121)*/
V121=pile[WZ2]; 
V113=V121;
pile[v[22]]=H; pile[WZ1]=V113; 
(*f[331])( );     /*PLUE3(H,V113)*/
l15:x[jvj+22]=t[x[jvj+22]];
goto l14;
l20:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,X,jvj+32)*/
if((x[jvj+32]==128)) goto l21;
if((x[jvj+32]!=22)) goto l24;
pile[v[22]]=102; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,X,jvj+35)*/
pile[v[22]]=140; pile[WZ1]=jvj+35; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(140,jvj+35,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,X,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+36,jvj+37)*/
if(x[jvj+37]!=649&&x[jvj+37]!=651&&x[jvj+37]!=650) goto l24;
pile[v[22]]=H; pile[WZ1]=V55; 
(*f[331])( );     /*PLUE3(H,V55)*/
(*f[331])( );     /*PLUE3(H,V55)*/
l24:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,X,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]==654)) goto l25;
if((x[jvj+39]!=151)) goto l30;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,X,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=N; pile[WZ2]=E; pile[WZ3]=H; pile[WZ4]=P; 
(*f[1115])( );     /*USMC1(jvj+45,N,E,H,P)*/
goto l30;
l21:pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(128,X,jvj+33)*/
l22:if((x[jvj+33]<=0)) goto l24;
x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,jvj+34,V164)*/
V164=pile[WZ2]; 
V160=V164;
pile[v[22]]=H; pile[WZ1]=V160; 
(*f[331])( );     /*PLUE3(H,V160)*/
l23:x[jvj+33]=t[x[jvj+33]];
goto l22;
l25:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,X,jvj+9)*/
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+9,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+40,jvj+41)*/
if((x[jvj+41]!=651)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+9,jvj+42)*/
pile[v[22]]=140; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+42,V124)*/
V124=pile[WZ2]; 
pile[v[22]]=H; pile[WZ1]=V124; 
(*f[331])( );     /*PLUE3(H,V124)*/
l4:pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]==651)) goto l27;
l5:pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+9,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]==653)) goto l27;
l26:pile[v[22]]=jvj+9; pile[WZ1]=68; pile[WZ2]=E; pile[WZ3]=H; pile[WZ4]=P; 
(*f[1115])( );     /*USMC1(jvj+9,68,E,H,P)*/
l27:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(107,X,jvj+43)*/
l28:if((x[jvj+43]<=0)) goto l30;
x[jvj+44]=s[x[jvj+43]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+43];
pile[v[22]]=jvj+44; pile[WZ1]=68; pile[WZ2]=E; pile[WZ3]=H; pile[WZ4]=P; 
(*f[1115])( );     /*USMC1(jvj+44,68,E,H,P)*/
x[jvj+43]=t[x[jvj+43]];
goto l28;
l32:x[jvj+57]=t[x[jvj+57]];
goto l31;
l36:x[jvj+59]=w[x[jvj+51]][9];
goto l37;
l41:v[0]=jvj; v[22]-=5; return;
}
