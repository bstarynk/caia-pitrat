#include "dx.h"
void BORNINC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V34=0,V53=0,V28=0,I=0,K=0,V32=0,V57=0,V56=0,V61=0,V60=0;
int RA,D,F,X,AT;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=11315;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3510&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RA=pile[v[22]]; D=pile[v[22]+1]; F=pile[v[22]+2]; X=pile[v[22]+3]; AT=pile[v[22]+4]; RR=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=incon;
pile[v[22]]=D; pile[WZ1]=jvj+3; 
(*f[1290])( );     /*DEPEXP0(D,jvj+3)*/
pile[v[22]]=68; pile[WZ1]=158; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(68,158,jvj+25)*/
pile[v[22]]=RA; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(RA,jvj+4)*/
pile[v[22]]=111; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+4,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=485)) goto l29;
pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+32)*/
l22:if((x[jvj+32]<=0)) goto l29;
x[jvj+26]=s[x[jvj+32]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+32];
pile[v[22]]=130; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+26,V28)*/
V28=pile[WZ2]; 
I=V28;
if((x[F]==27)) goto l20;
if((x[F]!=29)) goto l25;
if((I>0)) goto l24;
l25:if(x[jvj+3]!=incon) goto l26;
l23:x[jvj+32]=t[x[jvj+32]];
goto l22;
l1:pile[v[22]]=1331; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1331,jvj+5,jvj+6)*/
l2:if((x[jvj+6]<=0)) goto l33;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=497; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(497,jvj+7,jvj+8)*/
if((x[jvj+8]==x[D])) goto l31;
l3:x[jvj+6]=t[x[jvj+6]];
goto l2;
l7:x[jvj+12]=s[x[jvj+44]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+44];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[760])( );     /*MEMEX0(jvj+12,jvj+3,jvj+13)*/
if((x[jvj+13]==135)) goto l34;
x[jvj+44]=t[x[jvj+44]];
l6:if((x[jvj+44]>0)) goto l7;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+41)*/
l16:if((x[jvj+40]>0)) goto l17;
x[jvj+43]=107 ;z[jvj+43]=107;
if((V61=w[x[jvj+43]][1])==incon) goto l34;
if((V61!=23)) goto l38;
V60=x[jvj+21];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+4; pile[WZ2]=V60; 
(*f[134])( );     /*OTA0(jvj+43,jvj+4,V60)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+43; pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+4,jvj+43,jvj+41)*/
l34:pile[v[22]]=158; pile[WZ1]=jvj+25; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(158,jvj+25,jvj+42)*/
if((x[jvj+42]!=68)) goto l35;
x[RR]=x[jvj+4] ;z[RR]=z[jvj+4];
l36:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=6; v[102]=0;return;
l8:x[jvj+44]=x[jvj+40] ;z[jvj+44]=z[jvj+40];
goto l6;
l9:pile[v[22]]=1331; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1331,jvj+14,jvj+15)*/
x[jvj+45]=x[jvj+15] ;z[jvj+45]=z[jvj+15];
l10:if((x[jvj+45]<=0)) goto l15;
x[jvj+16]=s[x[jvj+45]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+45];
pile[v[22]]=497; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(497,jvj+16,jvj+17)*/
if((x[jvj+17]==x[D])) goto l8;
l11:x[jvj+45]=t[x[jvj+45]];
goto l10;
l15:x[jvj+47]=t[x[jvj+47]];
l14:if((x[jvj+47]<=0)) goto l34;
x[jvj+21]=s[x[jvj+47]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+47];
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=484)) goto l15;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+23; 
(*f[200])( );if(v[102]) goto l15;     /*NDD0(jvj+21,jvj+23)*/
x[jvj+14]=x[jvj+23] ;z[jvj+14]=z[jvj+23];
if((x[F]==29)) goto l9;
if((x[F]!=27)) goto l15;
pile[v[22]]=1332; pile[WZ1]=jvj+14; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1332,jvj+14,jvj+18)*/
x[jvj+46]=x[jvj+18] ;z[jvj+46]=z[jvj+18];
l12:if((x[jvj+46]<=0)) goto l15;
x[jvj+19]=s[x[jvj+46]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+46];
pile[v[22]]=497; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(497,jvj+19,jvj+20)*/
if((x[jvj+20]==x[D])) goto l8;
l13:x[jvj+46]=t[x[jvj+46]];
goto l12;
l17:x[jvj+24]=s[x[jvj+40]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+40];
pile[v[22]]=jvj+24; 
(*f[1161])( );if(v[102]) goto l19;     /*INF0(jvj+24,V15)*/
V15=pile[WZ1]; 
if((V15>0)) goto l18;
l19:pile[v[22]]=jvj+25; pile[WZ1]=158; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+25,158,67)*/
l18:x[jvj+40]=t[x[jvj+40]];
goto l16;
l20:if((I<0)) goto l24;
goto l25;
l24:K=x[jvj+26];
V32=K;
pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=V32; 
(*f[134])( );     /*OTA0(107,jvj+4,V32)*/
goto l25;
l26:pile[v[22]]=158; pile[WZ1]=jvj+25; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(158,jvj+25,jvj+33)*/
if((x[jvj+33]!=68)) goto l23;
pile[v[22]]=111; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+26,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=486)) goto l27;
pile[v[22]]=107; pile[WZ1]=jvj+26; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(107,jvj+26,jvj+29)*/
V53=x[jvj+29];
l21:if((V53<=0)) goto l27;
V34=s[V53];
if((x[jvj+3]==V34)) goto l23;
V53=t[V53];
goto l21;
l27:pile[v[22]]=jvj+26; pile[WZ1]=jvj+3; pile[WZ2]=jvj+34; 
(*f[760])( );     /*MEMEX0(jvj+26,jvj+3,jvj+34)*/
if((x[jvj+34]==134)) goto l28;
goto l23;
l28:pile[v[22]]=67; pile[WZ1]=jvj+26; pile[WZ2]=jvj+4; pile[WZ3]=107; pile[WZ4]=jvj+3; pile[WZ5]=F; pile[v[22]+6]=D; pile[v[22]+7]=jvj+25; 
(*f[3999])( );     /*BORNINC1(67,jvj+26,jvj+4,107,jvj+3,F,D,jvj+25)*/
goto l23;
l29:if(x[jvj+3]!=incon) goto l30;
goto l34;
l30:pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+4,jvj+35)*/
if((x[jvj+35]!=484)) goto l33;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[200])( );if(v[102]) goto l33;     /*NDD0(jvj+4,jvj+5)*/
if((x[F]==29)) goto l1;
if((x[F]!=27)) goto l33;
pile[v[22]]=1332; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1332,jvj+5,jvj+9)*/
l4:if((x[jvj+9]<=0)) goto l33;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=497; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(497,jvj+10,jvj+11)*/
if((x[jvj+11]==x[D])) goto l31;
l5:x[jvj+9]=t[x[jvj+9]];
goto l4;
l31:pile[v[22]]=jvj+4; pile[WZ1]=jvj+3; pile[WZ2]=jvj+36; 
(*f[760])( );     /*MEMEX0(jvj+4,jvj+3,jvj+36)*/
if((x[jvj+36]==134)) goto l32;
l33:pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+4,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]!=486)) goto l34;
pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+40)*/
x[jvj+47]=x[jvj+40] ;z[jvj+47]=z[jvj+40];
goto l14;
l32:pile[v[22]]=jvj+3; pile[WZ1]=jvj+37; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+37)*/
if((V57=w[x[AT]][1])==incon) goto l33;
if((V57!=23)) goto l37;
V56=x[jvj+4];
pile[v[22]]=AT; pile[WZ1]=X; pile[WZ2]=V56; 
(*f[134])( );     /*OTA0(AT,X,V56)*/
pile[v[22]]=X; pile[WZ1]=AT; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(X,AT,jvj+37)*/
goto l33;
l35:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=6; v[102]=1;return;
l37:pile[v[22]]=X; pile[WZ1]=AT; pile[WZ2]=jvj+37; 
(*f[35])( );     /*CHGC1(X,AT,jvj+37)*/
goto l33;
l38:pile[v[22]]=jvj+4; pile[WZ1]=jvj+43; pile[WZ2]=jvj+41; 
(*f[35])( );     /*CHGC1(jvj+4,jvj+43,jvj+41)*/
goto l34;
}
