#include "dx.h"
void SIMPTOT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V13=0,V15=0,V18=0,V9=0,II=0,JJ=0,V29=0,V31=0,V34=0,V25=0,V50=0,V51=0,V52=0,I=0,J=0,V42=0,V59=0,V61=0,V64=0,V54=0,V57=0,V109=0,MI=0,MJ=0,V75=0,V77=0,V80=0,V70=0,V73=0,V111=0,V101=0,V94=0,V95=0,V96=0,V98=0,V100=0,V102=0,V89=0,V91=0,V93=0,V86=0,V87=0,V88=0,V90=0,V92=0;
int XX,YY,P;
int RX;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=33;
x[jvj+1]=11643;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==4027&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
XX=pile[v[22]]; YY=pile[v[22]+1]; P=pile[v[22]+2]; RX=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RX]=MI=x[jvj+23]=MJ=incon;
pile[v[22]]=111; pile[WZ1]=YY; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,YY,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=486)) goto l8;
pile[v[22]]=130; pile[WZ1]=XX; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,XX,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=YY; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,YY,jvj+4)*/
for(i=x[jvj+4],V15=0;i>0;i=t[i],V15++)  ;
if((V15!=2)) goto l8;
x[jvj+24]=x[jvj+4] ;z[jvj+24]=z[jvj+4];
l4:if((x[jvj+24]<=0)) goto l8;
x[jvj+5]=s[x[jvj+24]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+24];
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+5,V18)*/
V18=pile[WZ2]; 
V9=V18;
x[jvj+32]=x[jvj+4] ;z[jvj+32]=z[jvj+4];
l6:if((x[jvj+32]<=0)) goto l5;
x[jvj+25]=s[x[jvj+32]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+32];
if((x[jvj+5]!=x[jvj+25])) goto l7;
x[jvj+32]=t[x[jvj+32]];
goto l6;
l1:if((J>=0)) goto l2;
V2=abs(J);
if((V2>I)) goto l18;
l19:pile[v[22]]=100; pile[WZ1]=YY; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,YY,jvj+13)*/
if((x[jvj+13]!=484)) goto l20;
pile[v[22]]=41; pile[WZ1]=I; pile[WZ2]=RX; 
(*f[445])( );     /*TRI15(41,I,RX)*/
l21:pile[v[22]]=111; pile[WZ1]=YY; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,YY,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=485)) goto l26;
pile[v[22]]=130; pile[WZ1]=XX; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,XX,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=YY; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,YY,jvj+17)*/
for(i=x[jvj+17],V61=0;i>0;i=t[i],V61++)  ;
if((V61!=2)) goto l26;
x[jvj+30]=x[jvj+17] ;z[jvj+30]=z[jvj+17];
l22:if((x[jvj+30]<=0)) goto l26;
x[jvj+18]=s[x[jvj+30]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+30];
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+18,V64)*/
V64=pile[WZ2]; 
V54=V64;
V109=x[jvj+17];
l24:if((V109<=0)) goto l23;
V57=s[V109];
if((x[jvj+18]!=V57)) goto l25;
V109=t[V109];
goto l24;
l2:if((I!=J)) goto l18;
if((I<0)) goto l3;
goto l19;
l3:V1=abs(I);
if((V1>J)) goto l18;
goto l19;
l5:x[jvj+24]=t[x[jvj+24]];
goto l4;
l7:II=V13;
x[jvj+10]=x[jvj+25] ;z[jvj+10]=z[jvj+25];
JJ=V9;
l13:if((JJ<=II)) goto l14;
if((II<0)) goto l14;
if((JJ==999)) goto l15;
x[jvj+28]=0 ;z[jvj+28]=0;
x[RX]=x[jvj+28] ;z[RX]=z[jvj+28];
goto l21;
l8:pile[v[22]]=111; pile[WZ1]=XX; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,XX,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=486)) goto l17;
pile[v[22]]=130; pile[WZ1]=YY; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,YY,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=XX; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,XX,jvj+8)*/
for(i=x[jvj+8],V31=0;i>0;i=t[i],V31++)  ;
if((V31!=2)) goto l17;
x[jvj+26]=x[jvj+8] ;z[jvj+26]=z[jvj+8];
l9:if((x[jvj+26]<=0)) goto l17;
x[jvj+9]=s[x[jvj+26]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+26];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+9,V34)*/
V34=pile[WZ2]; 
V25=V34;
x[jvj+33]=x[jvj+8] ;z[jvj+33]=z[jvj+8];
l11:if((x[jvj+33]<=0)) goto l10;
x[jvj+27]=s[x[jvj+33]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+33];
if((x[jvj+9]!=x[jvj+27])) goto l12;
x[jvj+33]=t[x[jvj+33]];
goto l11;
l10:x[jvj+26]=t[x[jvj+26]];
goto l9;
l12:II=V29;
x[jvj+10]=x[jvj+27] ;z[jvj+10]=z[jvj+27];
JJ=V25;
goto l13;
l14:if((JJ>=0)) goto l15;
l16:if((II>=0)) goto l17;
if((JJ<=0)) goto l17;
V51=abs(II);
if((V51<=JJ)) goto l17;
V52=II+JJ;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V52; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,V52,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+12; pile[WZ2]=P; pile[WZ3]=RX; 
(*f[4027])( );     /*SIMPTOT0(jvj+10,jvj+12,P,RX)*/
goto l21;
l15:if((JJ>II)) goto l16;
if((II==999)) goto l17;
V50=II-JJ;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V50; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,V50,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=P; pile[WZ3]=RX; 
(*f[4027])( );     /*SIMPTOT0(jvj+10,jvj+11,P,RX)*/
goto l21;
l17:pile[v[22]]=130; pile[WZ1]=XX; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,XX,I)*/
I=pile[WZ2]; 
if((I==999)) goto l19;
pile[WZ1]=YY; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,YY,J)*/
J=pile[WZ2]; 
if((J==999)) goto l19;
if((I>=0)) goto l1;
if((J>=0)) goto l3;
goto l19;
l18:x[jvj+29]=0 ;z[jvj+29]=0;
x[RX]=x[jvj+29] ;z[RX]=z[jvj+29];
goto l21;
l20:pile[v[22]]=130; pile[WZ1]=YY; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,YY,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=XX; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,XX,jvj+14)*/
if((x[jvj+14]!=484)) goto l21;
pile[v[22]]=41; pile[WZ1]=V42; pile[WZ2]=RX; 
(*f[445])( );     /*TRI15(41,V42,RX)*/
goto l21;
l23:x[jvj+30]=t[x[jvj+30]];
goto l22;
l25:MI=V59;
x[jvj+23]=x[YY] ;z[jvj+23]=z[YY];
MJ=V54;
l32:if(x[RX]==incon) goto l33;
l38:if((v[142]<=0)) goto l39;
V89=x[XX];
V91=x[YY];
V93=x[RX];
pile[v[22]]=20; pile[WZ1]=11643; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11643,0,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V86; 
(*f[39])( );     /*SDX0(41,1,V86,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V89; pile[WZ2]=V87; 
(*f[39])( );     /*SDX0(20,V89,V87,V88)*/
V88=pile[WZ3]; 
pile[WZ1]=V91; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(20,V91,V88,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V93; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(23,V93,V90,V92)*/
V92=pile[WZ3]; 
pile[v[22]]=V92; 
(*f[40])( );     /*SLG0(V92)*/
l39:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l26:pile[v[22]]=111; pile[WZ1]=XX; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,XX,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=485)) goto l32;
pile[v[22]]=130; pile[WZ1]=YY; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(130,YY,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=XX; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,XX,jvj+21)*/
for(i=x[jvj+21],V77=0;i>0;i=t[i],V77++)  ;
if((V77!=2)) goto l32;
x[jvj+31]=x[jvj+21] ;z[jvj+31]=z[jvj+21];
l27:if((x[jvj+31]<=0)) goto l32;
x[jvj+22]=s[x[jvj+31]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+31];
pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+22,V80)*/
V80=pile[WZ2]; 
V70=V80;
V111=x[jvj+21];
l29:if((V111<=0)) goto l28;
V73=s[V111];
if((x[jvj+22]!=V73)) goto l30;
V111=t[V111];
goto l29;
l28:x[jvj+31]=t[x[jvj+31]];
goto l27;
l30:MI=V75;
x[jvj+23]=x[XX] ;z[jvj+23]=z[XX];
MJ=V70;
goto l32;
l31:if((v[142]<=0)) goto l36;
V101=x[jvj+23];
pile[v[22]]=20; pile[WZ1]=11643; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11643,0,V94)*/
V94=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V94; 
(*f[39])( );     /*SDX0(41,2,V94,V95)*/
V95=pile[WZ3]; 
pile[WZ1]=MI; pile[WZ2]=V95; 
(*f[39])( );     /*SDX0(41,MI,V95,V96)*/
V96=pile[WZ3]; 
pile[WZ1]=MJ; pile[WZ2]=V96; 
(*f[39])( );     /*SDX0(41,MJ,V96,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V101; pile[WZ2]=V98; 
(*f[39])( );     /*SDX0(20,V101,V98,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=P; pile[WZ2]=V100; 
(*f[39])( );     /*SDX0(41,P,V100,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=V102; 
(*f[40])( );     /*SLG0(V102)*/
l36:pile[v[22]]=MI; pile[WZ1]=jvj+23; pile[WZ2]=P; pile[WZ3]=MJ; pile[WZ4]=RX; 
(*f[4082])( );     /*SIMPTOTA0(MI,jvj+23,P,MJ,RX)*/
goto l38;
l33:if(MI!=incon) goto l34;
l37:pile[v[22]]=41; pile[WZ1]=999; pile[WZ2]=RX; 
(*f[445])( );     /*TRI15(41,999,RX)*/
goto l38;
l34:if(x[jvj+23]!=incon) goto l35;
goto l37;
l35:if(MJ!=incon) goto l31;
goto l37;
}
