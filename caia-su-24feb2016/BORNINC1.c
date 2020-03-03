#include "dx.h"
void BORNINC1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V33=0,V50=0,V27=0,I=0,K=0,V31=0,V54=0,V53=0,V58=0,V57=0;
int S,R,X,AT,Y,F,D,Q;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=43;
x[jvj+1]=11315;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3999&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; R=pile[v[22]+1]; X=pile[v[22]+2]; AT=pile[v[22]+3]; Y=pile[v[22]+4]; F=pile[v[22]+5]; D=pile[v[22]+6]; Q=pile[v[22]+7]; v[22]+=8; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[S]!=68)) goto l28;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,R,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=485)) goto l28;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(107,R,jvj+29)*/
l22:if((x[jvj+29]<=0)) goto l28;
x[jvj+23]=s[x[jvj+29]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+29];
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+23,V27)*/
V27=pile[WZ2]; 
I=V27;
if((x[F]==27)) goto l20;
if((x[F]!=29)) goto l25;
if((I>0)) goto l24;
l25:pile[v[22]]=158; pile[WZ1]=Q; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(158,Q,jvj+30)*/
if((x[jvj+30]!=68)) goto l23;
pile[v[22]]=111; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+23,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=486)) goto l26;
pile[v[22]]=107; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+23,jvj+26)*/
V50=x[jvj+26];
l21:if((V50<=0)) goto l26;
V33=s[V50];
if((x[Y]==V33)) goto l23;
V50=t[V50];
goto l21;
l1:pile[v[22]]=1331; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1331,jvj+3,jvj+4)*/
l2:if((x[jvj+4]<=0)) goto l31;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=497; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(497,jvj+5,jvj+6)*/
if((x[jvj+6]==x[D])) goto l29;
l3:x[jvj+4]=t[x[jvj+4]];
goto l2;
l7:x[jvj+10]=s[x[jvj+40]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+40];
pile[v[22]]=jvj+10; pile[WZ1]=Y; pile[WZ2]=jvj+11; 
(*f[760])( );     /*MEMEX0(jvj+10,Y,jvj+11)*/
if((x[jvj+11]==135)) goto l32;
x[jvj+40]=t[x[jvj+40]];
l6:if((x[jvj+40]>0)) goto l7;
pile[v[22]]=Y; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(Y,jvj+38)*/
l16:if((x[jvj+37]>0)) goto l17;
x[jvj+39]=107 ;z[jvj+39]=107;
if((V58=w[x[jvj+39]][1])==incon) goto l32;
if((V58!=23)) goto l34;
V57=x[jvj+19];
pile[v[22]]=jvj+39; pile[WZ1]=R; pile[WZ2]=V57; 
(*f[134])( );     /*OTA0(jvj+39,R,V57)*/
pile[v[22]]=R; pile[WZ1]=jvj+39; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(R,jvj+39,jvj+38)*/
l32:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=8; return;
l8:x[jvj+40]=x[jvj+37] ;z[jvj+40]=z[jvj+37];
goto l6;
l9:pile[v[22]]=1331; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1331,jvj+12,jvj+13)*/
x[jvj+41]=x[jvj+13] ;z[jvj+41]=z[jvj+13];
l10:if((x[jvj+41]<=0)) goto l15;
x[jvj+14]=s[x[jvj+41]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+41];
pile[v[22]]=497; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(497,jvj+14,jvj+15)*/
if((x[jvj+15]==x[D])) goto l8;
l11:x[jvj+41]=t[x[jvj+41]];
goto l10;
l15:x[jvj+43]=t[x[jvj+43]];
l14:if((x[jvj+43]<=0)) goto l32;
x[jvj+19]=s[x[jvj+43]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+43];
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=484)) goto l15;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+21; 
(*f[200])( );if(v[102]) goto l15;     /*NDD0(jvj+19,jvj+21)*/
x[jvj+12]=x[jvj+21] ;z[jvj+12]=z[jvj+21];
if((x[F]==29)) goto l9;
if((x[F]!=27)) goto l15;
pile[v[22]]=1332; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1332,jvj+12,jvj+16)*/
x[jvj+42]=x[jvj+16] ;z[jvj+42]=z[jvj+16];
l12:if((x[jvj+42]<=0)) goto l15;
x[jvj+17]=s[x[jvj+42]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+42];
pile[v[22]]=497; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(497,jvj+17,jvj+18)*/
if((x[jvj+18]==x[D])) goto l8;
l13:x[jvj+42]=t[x[jvj+42]];
goto l12;
l17:x[jvj+22]=s[x[jvj+37]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+37];
pile[v[22]]=jvj+22; 
(*f[1161])( );if(v[102]) goto l19;     /*INF0(jvj+22,V14)*/
V14=pile[WZ1]; 
if((V14>0)) goto l18;
l19:pile[v[22]]=Q; pile[WZ1]=158; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(Q,158,67)*/
l18:x[jvj+37]=t[x[jvj+37]];
goto l16;
l20:if((I<0)) goto l24;
goto l25;
l24:K=x[jvj+23];
V31=K;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=V31; 
(*f[134])( );     /*OTA0(107,R,V31)*/
goto l25;
l26:pile[v[22]]=jvj+23; pile[WZ1]=Y; pile[WZ2]=jvj+31; 
(*f[760])( );     /*MEMEX0(jvj+23,Y,jvj+31)*/
if((x[jvj+31]==134)) goto l27;
l23:x[jvj+29]=t[x[jvj+29]];
goto l22;
l27:pile[v[22]]=67; pile[WZ1]=jvj+23; pile[WZ2]=R; pile[WZ3]=107; pile[WZ4]=Y; pile[WZ5]=F; pile[v[22]+6]=D; pile[v[22]+7]=Q; 
(*f[3999])( );     /*BORNINC1(67,jvj+23,R,107,Y,F,D,Q)*/
goto l23;
l28:pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,R,jvj+32)*/
if((x[jvj+32]!=484)) goto l31;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[200])( );if(v[102]) goto l31;     /*NDD0(R,jvj+3)*/
if((x[F]==29)) goto l1;
if((x[F]!=27)) goto l31;
pile[v[22]]=1332; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1332,jvj+3,jvj+7)*/
l4:if((x[jvj+7]<=0)) goto l31;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=497; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(497,jvj+8,jvj+9)*/
if((x[jvj+9]==x[D])) goto l29;
l5:x[jvj+7]=t[x[jvj+7]];
goto l4;
l29:pile[v[22]]=R; pile[WZ1]=Y; pile[WZ2]=jvj+33; 
(*f[760])( );     /*MEMEX0(R,Y,jvj+33)*/
if((x[jvj+33]==134)) goto l30;
l31:pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,R,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=486)) goto l32;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(107,R,jvj+37)*/
x[jvj+43]=x[jvj+37] ;z[jvj+43]=z[jvj+37];
goto l14;
l30:pile[v[22]]=Y; pile[WZ1]=jvj+34; 
(*f[255])( );     /*COPEXP0(Y,jvj+34)*/
if((V54=w[x[AT]][1])==incon) goto l31;
if((V54!=23)) goto l33;
V53=x[R];
pile[v[22]]=AT; pile[WZ1]=X; pile[WZ2]=V53; 
(*f[134])( );     /*OTA0(AT,X,V53)*/
pile[v[22]]=X; pile[WZ1]=AT; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(X,AT,jvj+34)*/
goto l31;
l33:pile[v[22]]=X; pile[WZ1]=AT; pile[WZ2]=jvj+34; 
(*f[35])( );     /*CHGC1(X,AT,jvj+34)*/
goto l31;
l34:pile[v[22]]=R; pile[WZ1]=jvj+39; pile[WZ2]=jvj+38; 
(*f[35])( );     /*CHGC1(R,jvj+39,jvj+38)*/
goto l32;
}
