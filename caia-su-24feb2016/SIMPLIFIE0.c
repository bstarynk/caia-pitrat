#include "dx.h"
void SIMPLIFIE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,V32=0,V34=0,V33=0,V36=0,V35=0,V25=0,V27=0,XX=0,V61=0,V66=0,V67=0,V58=0,V59=0,V57=0,V60=0,V63=0,V64=0,V62=0;
int R;
int RES,QQ;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=60;
x[jvj+1]=10204;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1151&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RES=pile[v[22]+1]; QQ=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+53]=x[jvj+15]=x[jvj+16]=x[RES]=incon;
pile[v[22]]=67; pile[WZ1]=447; pile[WZ2]=QQ; 
(*f[54])( );     /*TRI1(67,447,QQ)*/
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,R,jvj+3)*/
if((x[jvj+3]!=22)) goto l18;
pile[v[22]]=111; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,R,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+4,jvj+5)*/
if(x[jvj+5]!=25&&x[jvj+5]!=26&&x[jvj+5]!=29&&x[jvj+5]!=30&&x[jvj+5]!=27&&x[jvj+5]!=28&&x[jvj+5]!=625) goto l18;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,R,jvj+6)*/
pile[v[22]]=103; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,R,jvj+7)*/
x[jvj+14]=x[jvj+6] ;z[jvj+14]=z[jvj+6];
x[jvj+53]=x[jvj+5] ;z[jvj+53]=z[jvj+5];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=jvj+8; 
(*f[1450])( );     /*DECSOM0(jvj+14,jvj+15,jvj+8)*/
pile[v[22]]=447; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(447,jvj+8,jvj+9)*/
if((x[jvj+9]!=68)) goto l1;
v[20]=1;
l1:pile[v[22]]=459; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(459,jvj+8,jvj+10)*/
if((x[jvj+10]!=68)) goto l3;
pile[v[22]]=QQ; pile[WZ1]=447; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(QQ,447,68)*/
l3:pile[v[22]]=jvj+7; pile[WZ1]=jvj+16; pile[WZ2]=jvj+11; 
(*f[1450])( );     /*DECSOM0(jvj+7,jvj+16,jvj+11)*/
pile[v[22]]=447; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(447,jvj+11,jvj+12)*/
if((x[jvj+12]!=68)) goto l2;
v[20]=1;
l2:pile[v[22]]=459; pile[WZ1]=jvj+11; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(459,jvj+11,jvj+13)*/
if((x[jvj+13]!=68)) goto l4;
pile[v[22]]=QQ; pile[WZ1]=447; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(QQ,447,68)*/
l4:pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[1451])( );     /*SIMPLIFIA0(jvj+15,jvj+16)*/
l18:pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,R,jvj+30)*/
if((x[jvj+30]!=22)) goto l20;
pile[v[22]]=111; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,R,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+31,jvj+32)*/
if(x[jvj+32]==25||x[jvj+32]==26||x[jvj+32]==29||x[jvj+32]==30||x[jvj+32]==27||x[jvj+32]==28||x[jvj+32]==625||x[jvj+32]==48||x[jvj+32]==55) goto l19;
pile[v[22]]=R; 
(*f[1453])( );     /*SIMPSOM0(R)*/
l19:if(x[jvj+32]!=55&&x[jvj+32]!=48) goto l20;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,R,jvj+33)*/
x[jvj+19]=0 ;z[jvj+19]=0;
l5:if((x[jvj+33]>0)) goto l6;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+34; 
(*f[299])( );     /*COPEL0(jvj+19,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+32; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+32,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+34; pile[WZ2]=107; pile[WZ3]=jvj+49; 
(*f[301])( );     /*TRI11(jvj+48,jvj+34,107,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=RES; 
(*f[58])( );     /*TRI3(jvj+49,22,100,RES)*/
l20:if(x[jvj+53]!=incon) goto l21;
l33:if(x[RES]==incon) goto l34;
l41:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l6:x[jvj+17]=s[x[jvj+33]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+33];
pile[v[22]]=jvj+17; pile[WZ1]=QQ; pile[WZ2]=jvj+18; 
(*f[1452])( );     /*SIMPLIFIE1(jvj+17,QQ,jvj+18)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+18)*/
x[jvj+33]=t[x[jvj+33]];
goto l5;
l8:x[jvj+21]=s[x[jvj+54]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+54];
pile[v[22]]=117; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+21,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V30; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,V30,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[196])( );     /*PLUF0(jvj+20,jvj+22,jvj+23)*/
l9:x[jvj+54]=t[x[jvj+54]];
l7:if((x[jvj+54]>0)) goto l8;
pile[v[22]]=jvj+23; 
(*f[622])( );if(v[102]) goto l33;     /*PGCDE0(jvj+23,V25)*/
V25=pile[WZ1]; 
x[jvj+27]=0 ;z[jvj+27]=0;
x[jvj+24]=d[29];z[jvj+24]=0;
x[jvj+55]=x[jvj+15] ;z[jvj+55]=z[jvj+15];
l10:if((x[jvj+55]>0)) goto l11;
pile[v[22]]=jvj+27; 
(*f[622])( );if(v[102]) goto l33;     /*PGCDE0(jvj+27,V27)*/
V27=pile[WZ1]; 
pile[v[22]]=V25; pile[WZ1]=V27; 
(*f[1011])( );     /*PGCD0(V25,V27,XX)*/
XX=pile[WZ2]; 
if((XX<=1)) goto l33;
v[20]=1;
x[jvj+56]=x[jvj+15] ;z[jvj+56]=z[jvj+15];
l13:if((x[jvj+56]>0)) goto l14;
x[jvj+57]=x[jvj+16] ;z[jvj+57]=z[jvj+16];
l16:if((x[jvj+57]<=0)) goto l33;
x[jvj+29]=s[x[jvj+57]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+57];
pile[v[22]]=117; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+29,V36)*/
V36=pile[WZ2]; 
V35=V36/XX;
pile[v[22]]=jvj+29; pile[WZ1]=117; pile[WZ2]=V35; 
(*f[43])( );     /*CHGC2(jvj+29,117,V35)*/
l17:x[jvj+57]=t[x[jvj+57]];
goto l16;
l11:x[jvj+25]=s[x[jvj+55]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+55];
pile[v[22]]=117; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+25,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V32; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,V32,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[196])( );     /*PLUF0(jvj+24,jvj+26,jvj+27)*/
l12:x[jvj+55]=t[x[jvj+55]];
goto l10;
l14:x[jvj+28]=s[x[jvj+56]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+56];
pile[v[22]]=117; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(117,jvj+28,V34)*/
V34=pile[WZ2]; 
V33=V34/XX;
pile[v[22]]=jvj+28; pile[WZ1]=117; pile[WZ2]=V33; 
(*f[43])( );     /*CHGC2(jvj+28,117,V33)*/
l15:x[jvj+56]=t[x[jvj+56]];
goto l13;
l21:if(x[jvj+15]!=incon) goto l22;
goto l33;
l22:if(x[jvj+16]!=incon) goto l23;
goto l33;
l23:if((x[jvj+53]==625)) goto l33;
x[jvj+23]=0 ;z[jvj+23]=0;
x[jvj+20]=d[29];z[jvj+20]=0;
x[jvj+54]=x[jvj+16] ;z[jvj+54]=z[jvj+16];
goto l7;
l28:x[jvj+39]=s[x[jvj+59]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+59];
pile[v[22]]=117; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(117,jvj+39,V66)*/
V66=pile[WZ2]; 
if((V66==0)) goto l29;
pile[v[22]]=jvj+40; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+39)*/
l29:x[jvj+59]=t[x[jvj+59]];
l27:if((x[jvj+59]>0)) goto l28;
x[jvj+60]=x[jvj+16] ;z[jvj+60]=z[jvj+16];
l30:if((x[jvj+60]>0)) goto l31;
for(i=x[jvj+40],V60=0;i>0;i=t[i],V60++)  ;
if((V60!=2)) goto l40;
x[jvj+58]=x[jvj+40] ;z[jvj+58]=z[jvj+40];
l24:if((x[jvj+58]<=0)) goto l40;
x[jvj+37]=s[x[jvj+58]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+58];
pile[v[22]]=218; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(218,jvj+37,jvj+38)*/
pile[v[22]]=130; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+38,V61)*/
V61=pile[WZ2]; 
if((V61==1)) goto l26;
l25:x[jvj+58]=t[x[jvj+58]];
goto l24;
l31:x[jvj+41]=s[x[jvj+60]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+60];
pile[v[22]]=117; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(117,jvj+41,V67)*/
V67=pile[WZ2]; 
if((V67==0)) goto l32;
pile[v[22]]=jvj+40; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+41)*/
l32:x[jvj+60]=t[x[jvj+60]];
goto l30;
l34:if(x[jvj+53]!=incon) goto l35;
l40:x[RES]=x[R] ;z[RES]=z[R];
goto l41;
l35:if(x[jvj+15]!=incon) goto l36;
goto l40;
l36:if(x[jvj+16]!=incon) goto l37;
goto l40;
l37:if((v[20]==0)) goto l38;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+42; 
(*f[1454])( );if(v[102]) goto l38;     /*CRESOM0(jvj+15,jvj+42)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+43; 
(*f[1454])( );if(v[102]) goto l38;     /*CRESOM0(jvj+16,jvj+43)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(jvj+42,jvj+44)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(jvj+43,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+53; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+53,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+45; pile[WZ2]=103; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+51,jvj+45,103,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+52; pile[WZ5]=RES; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+44,jvj+52,RES)*/
if((x[jvj+53]!=625)) goto l41;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(160,R,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[378])( );     /*CPI0(jvj+35,jvj+36)*/
pile[v[22]]=RES; pile[WZ1]=160; pile[WZ2]=jvj+36; 
(*f[35])( );     /*CHGC1(RES,160,jvj+36)*/
goto l41;
l38:if((x[jvj+53]!=25)) goto l40;
for(i=x[jvj+15],V58=0;i>0;i=t[i],V58++)  ;
for(i=x[jvj+16],V59=0;i>0;i=t[i],V59++)  ;
V57=V58+V59;
if((V57>3)) goto l40;
x[jvj+40]=0 ;z[jvj+40]=0;
x[jvj+59]=x[jvj+15] ;z[jvj+59]=z[jvj+15];
goto l27;
l39:pile[v[22]]=117; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(117,jvj+37,V63)*/
V63=pile[WZ2]; 
pile[WZ1]=jvj+46; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(117,jvj+46,V64)*/
V64=pile[WZ2]; 
V62=V63%V64;
if((V62==0)) goto l40;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=RES; 
(*f[181])( );     /*QUADRI2(100,20,101,134,RES)*/
v[20]=1;
goto l41;
l26:if((x[jvj+40]<=0)) goto l40;
x[jvj+46]=s[x[jvj+40]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+40];
if((x[jvj+46]!=x[jvj+37])) goto l39;
x[jvj+40]=t[x[jvj+40]];
goto l26;
}
