#include "dx.h"
void VALRIG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V11=0,V12=0,V14=0,V28=0,V33=0,V36=0,V37=0,V38=0,V18=0,V7=0,V58=0,V59=0,V83=0,V82=0,V86=0,V88=0,V87=0,V91=0,V90=0,V100=0,V101=0,V116=0,V118=0,V115=0,V117=0,V103=0,V123=0,V127=0,V128=0,V126=0,V125=0,V2=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=102;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1219; pile[WZ1]=A; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(1219,A,jvj+66)*/
x[R]=x[A] ;z[R]=z[A];
l104:v[0]=jvj; v[22]-=2; return;
l1:x[jvj+86]=36 ;z[jvj+86]=36;
l94:pile[v[22]]=V2; pile[WZ1]=jvj+67; 
(*f[1007])( );if(v[102]) goto l95;     /*DECFACTPREM0(V2,jvj+67)*/
pile[v[22]]=jvj+86; pile[WZ1]=1219; pile[WZ2]=jvj+87; 
(*f[54])( );     /*TRI1(jvj+86,1219,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=jvj+67; pile[WZ2]=763; pile[WZ3]=R; 
(*f[301])( );     /*TRI11(jvj+87,jvj+67,763,R)*/
goto l104;
l6:x[jvj+3]=s[x[jvj+79]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+79];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1677])( );     /*VALRIG0(jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+4)*/
x[jvj+79]=t[x[jvj+79]];
l5:if((x[jvj+79]>0)) goto l6;
V10=incon;
x[jvj+90]=x[jvj+5] ;z[jvj+90]=z[jvj+5];
l7:if((x[jvj+90]>0)) goto l8;
V10=250;
l10:V11=incon;
x[jvj+91]=x[jvj+5] ;z[jvj+91]=z[jvj+5];
l11:if((x[jvj+91]>0)) goto l12;
V11=250;
l2:if((V10!=250)) goto l14;
if((V11!=250)) goto l14;
x[jvj+89]=x[jvj+5] ;z[jvj+89]=z[jvj+5];
l3:if((x[jvj+89]<=0)) goto l14;
x[jvj+1]=s[x[jvj+89]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+89];
pile[v[22]]=1219; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1219,jvj+1,jvj+2)*/
if((x[jvj+2]==485)) goto l111;
l4:x[jvj+89]=t[x[jvj+89]];
goto l3;
l8:x[jvj+6]=s[x[jvj+90]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+90];
pile[v[22]]=1219; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1219,jvj+6,jvj+7)*/
if((x[jvj+7]!=134)) goto l9;
V10=134;
goto l10;
l9:x[jvj+90]=t[x[jvj+90]];
goto l7;
l12:x[jvj+8]=s[x[jvj+91]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+91];
pile[v[22]]=1219; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1219,jvj+8,jvj+9)*/
if((x[jvj+9]!=1557)) goto l13;
V11=1557;
goto l2;
l13:x[jvj+91]=t[x[jvj+91]];
goto l11;
l14:V12=incon;
x[jvj+92]=x[jvj+5] ;z[jvj+92]=z[jvj+5];
l15:if((x[jvj+92]>0)) goto l16;
V12=250;
l18:x[jvj+88]=incon;
if((V10!=134)) goto l22;
x[jvj+88]=134 ;z[jvj+88]=134;
l22:if((V11==1557)) goto l23;
if((V10==250)) goto l24;
l26:if(x[jvj+88]==incon) goto l27;
l110:pile[v[22]]=jvj+88; pile[WZ1]=1219; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(jvj+88,1219,R)*/
if((V10!=250)) goto l104;
if((V11!=250)) goto l104;
x[jvj+18]=0 ;z[jvj+18]=0;
x[jvj+94]=x[jvj+5] ;z[jvj+94]=z[jvj+5];
l28:if((x[jvj+94]>0)) goto l29;
x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+23]=d[64];z[jvj+23]=0;
l38:if((x[jvj+18]>0)) goto l39;
pile[v[22]]=R; pile[WZ1]=763; pile[WZ2]=jvj+25; 
(*f[34])( );     /*CHGC0(R,763,jvj+25)*/
goto l104;
l16:x[jvj+10]=s[x[jvj+92]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+92];
pile[v[22]]=1219; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1219,jvj+10,jvj+11)*/
if((x[jvj+11]!=178)) goto l17;
V12=178;
goto l18;
l17:x[jvj+92]=t[x[jvj+92]];
goto l15;
l20:x[jvj+12]=s[x[jvj+93]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+93];
pile[v[22]]=1219; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1219,jvj+12,jvj+13)*/
if((x[jvj+13]!=52)) goto l21;
pile[v[22]]=jvj+14; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+14,117,1)*/
l21:x[jvj+93]=t[x[jvj+93]];
l19:if((x[jvj+93]>0)) goto l20;
pile[v[22]]=117; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(117,jvj+14,V14)*/
V14=pile[WZ2]; 
V28=V14%2;
if((V28!=0)) goto l26;
x[jvj+88]=36 ;z[jvj+88]=36;
goto l110;
l23:if((V10!=250)) goto l26;
x[jvj+88]=1557 ;z[jvj+88]=1557;
l24:if((V12!=178)) goto l25;
if((V11==1557)) goto l26;
x[jvj+88]=178 ;z[jvj+88]=178;
l25:if((V11!=250)) goto l26;
if((V12!=250)) goto l26;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(0,117,jvj+14)*/
x[jvj+93]=x[jvj+5] ;z[jvj+93]=z[jvj+5];
goto l19;
l27:x[jvj+88]=52 ;z[jvj+88]=52;
goto l110;
l29:x[jvj+15]=s[x[jvj+94]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+94];
pile[v[22]]=763; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(763,jvj+15,jvj+16)*/
x[jvj+95]=x[jvj+16] ;z[jvj+95]=z[jvj+16];
l30:if((x[jvj+95]>0)) goto l31;
x[jvj+94]=t[x[jvj+94]];
goto l28;
l31:x[jvj+17]=s[x[jvj+95]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+95];
pile[v[22]]=510; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(510,jvj+17,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=jvj+18; pile[WZ1]=V33; 
(*f[207])( );     /*PLUE2(jvj+18,V33)*/
l32:x[jvj+95]=t[x[jvj+95]];
goto l30;
l34:x[jvj+19]=s[x[jvj+96]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+96];
pile[v[22]]=763; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(763,jvj+19,jvj+20)*/
x[jvj+97]=x[jvj+20] ;z[jvj+97]=z[jvj+20];
l35:if((x[jvj+97]>0)) goto l36;
x[jvj+96]=t[x[jvj+96]];
l33:if((x[jvj+96]>0)) goto l34;
pile[v[22]]=117; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(117,jvj+22,V38)*/
V38=pile[WZ2]; 
V18=V38;
pile[v[22]]=510; pile[WZ1]=V7; pile[WZ2]=515; pile[WZ3]=V18; pile[WZ4]=jvj+24; 
(*f[391])( );     /*QUADRI10(510,V7,515,V18,jvj+24)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[196])( );     /*PLUF0(jvj+23,jvj+24,jvj+25)*/
l40:x[jvj+18]=t[x[jvj+18]];
goto l38;
l36:x[jvj+21]=s[x[jvj+97]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+97];
pile[v[22]]=510; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(510,jvj+21,V36)*/
V36=pile[WZ2]; 
if((V36!=V7)) goto l37;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(515,jvj+21,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=jvj+22; pile[WZ1]=117; pile[WZ2]=V37; 
(*f[186])( );     /*BTC0(jvj+22,117,V37)*/
l37:x[jvj+97]=t[x[jvj+97]];
goto l35;
l39:V7=s[x[jvj+18]];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(0,117,jvj+22)*/
x[jvj+96]=x[jvj+5] ;z[jvj+96]=z[jvj+5];
goto l33;
l45:x[jvj+33]=s[x[jvj+76]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+76];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[1677])( );     /*VALRIG0(jvj+33,jvj+34)*/
pile[v[22]]=1219; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(1219,jvj+34,jvj+35)*/
if((x[jvj+35]==1557)) goto l46;
pile[v[22]]=jvj+36; 
(*f[68])( );     /*PLUE0(jvj+36,jvj+34)*/
l46:x[jvj+76]=t[x[jvj+76]];
l44:if((x[jvj+76]>0)) goto l45;
V58=incon;
x[jvj+98]=x[jvj+36] ;z[jvj+98]=z[jvj+36];
l47:if((x[jvj+98]>0)) goto l48;
V58=250;
l50:V59=incon;
x[jvj+99]=x[jvj+36] ;z[jvj+99]=z[jvj+36];
l51:if((x[jvj+99]>0)) goto l52;
V59=250;
l54:x[jvj+41]=incon;
if((V58!=134)) goto l55;
pile[v[22]]=134; pile[WZ1]=1219; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(134,1219,jvj+41)*/
l55:if((V59!=178)) goto l56;
if((V58==134)) goto l57;
pile[v[22]]=178; pile[WZ1]=1219; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(178,1219,jvj+41)*/
l56:if((V58!=250)) goto l57;
if((V59!=250)) goto l57;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+41; 
(*f[1901])( );if(v[102]) goto l57;     /*VALRIGA0(jvj+36,jvj+41)*/
l101:if((x[jvj+41]==(-99999998))) goto l111;
x[R]=x[jvj+41] ;z[R]=z[jvj+41];
goto l104;
l48:x[jvj+37]=s[x[jvj+98]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+98];
pile[v[22]]=1219; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(1219,jvj+37,jvj+38)*/
if((x[jvj+38]!=134)) goto l49;
V58=134;
goto l50;
l49:x[jvj+98]=t[x[jvj+98]];
goto l47;
l52:x[jvj+39]=s[x[jvj+99]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+99];
pile[v[22]]=1219; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1219,jvj+39,jvj+40)*/
if((x[jvj+40]!=178)) goto l53;
V59=178;
goto l54;
l53:x[jvj+99]=t[x[jvj+99]];
goto l51;
l57:if(x[jvj+41]==incon) goto l111;
goto l101;
l60:x[jvj+44]=s[x[jvj+43]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+43];
pile[v[22]]=515; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(515,jvj+44,V83)*/
V83=pile[WZ2]; 
V82=V83%2;
if((V82!=0)) goto l69;
l61:x[jvj+43]=t[x[jvj+43]];
l59:if((x[jvj+43]>0)) goto l60;
x[jvj+49]=0 ;z[jvj+49]=0;
pile[v[22]]=763; pile[WZ1]=jvj+42; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(763,jvj+42,jvj+45)*/
x[jvj+46]=d[64];z[jvj+46]=0;
l62:if((x[jvj+45]>0)) goto l63;
pile[v[22]]=36; pile[WZ1]=1219; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(36,1219,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+49; pile[WZ2]=763; pile[WZ3]=jvj+80; 
(*f[301])( );     /*TRI11(jvj+81,jvj+49,763,jvj+80)*/
l103:if((x[jvj+80]==(-99999998))) goto l111;
x[R]=x[jvj+80] ;z[R]=z[jvj+80];
goto l104;
l63:x[jvj+47]=s[x[jvj+45]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+45];
pile[v[22]]=510; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l64;     /*FNDC0(510,jvj+47,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l64;     /*FNDC0(515,jvj+47,V88)*/
V88=pile[WZ2]; 
V87=V88/2;
pile[v[22]]=510; pile[WZ1]=V86; pile[WZ2]=515; pile[WZ3]=V87; pile[WZ4]=jvj+48; 
(*f[391])( );     /*QUADRI10(510,V86,515,V87,jvj+48)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[196])( );     /*PLUF0(jvj+46,jvj+48,jvj+49)*/
l64:x[jvj+45]=t[x[jvj+45]];
goto l62;
l66:x[jvj+50]=t[x[jvj+50]];
l65:if((x[jvj+50]<=0)) goto l58;
x[jvj+51]=s[x[jvj+50]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+50];
pile[v[22]]=515; pile[WZ1]=jvj+51; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(515,jvj+51,V91)*/
V91=pile[WZ2]; 
V90=V91%2;
if((V90==0)) goto l66;
pile[v[22]]=134; pile[WZ1]=1219; pile[WZ2]=jvj+80; 
(*f[54])( );     /*TRI1(134,1219,jvj+80)*/
l58:pile[v[22]]=763; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(763,jvj+42,jvj+43)*/
goto l59;
l69:if(x[jvj+80]==incon) goto l111;
goto l103;
l70:if((x[jvj+72]!=36)) goto l97;
pile[v[22]]=763; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(763,jvj+52,jvj+53)*/
if((x[jvj+53]==0)) goto l111;
l97:pile[v[22]]=1219; pile[WZ1]=jvj+55; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(1219,jvj+55,jvj+74)*/
V100=incon;
if((x[jvj+74]==134)) goto l71;
if((x[jvj+72]==134)) goto l71;
V100=250;
l72:V101=incon;
if((V100!=250)) goto l74;
if((x[jvj+74]==178)) goto l73;
if((x[jvj+72]==178)) goto l73;
l74:V101=250;
l75:x[jvj+82]=incon;
if((V100==134)) goto l106;
if((V100!=250)) goto l108;
if((V101!=250)) goto l108;
if((x[jvj+74]!=1557)) goto l91;
if(x[jvj+72]!=36&&x[jvj+72]!=52) goto l91;
pile[v[22]]=1557; pile[WZ1]=1219; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(1557,1219,jvj+82)*/
l91:if(x[jvj+74]!=36&&x[jvj+74]!=52) goto l92;
if(x[jvj+72]!=36&&x[jvj+72]!=52) goto l92;
V103=incon;
pile[v[22]]=763; pile[WZ1]=jvj+52; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(763,jvj+52,jvj+58)*/
l78:if((x[jvj+58]>0)) goto l79;
V103=68;
l81:x[jvj+83]=incon;
if((x[jvj+74]==x[jvj+72])) goto l82;
if((V103!=68)) goto l83;
x[jvj+83]=52 ;z[jvj+83]=52;
l84:x[jvj+85]=incon;
if((V103==68)) goto l85;
x[jvj+102]=0 ;z[jvj+102]=0;
x[jvj+85]=x[jvj+102] ;z[jvj+85]=z[jvj+102];
l107:pile[v[22]]=jvj+83; pile[WZ1]=1219; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+83,1219,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; pile[WZ2]=763; pile[WZ3]=jvj+82; 
(*f[301])( );     /*TRI11(jvj+84,jvj+85,763,jvj+82)*/
l98:x[R]=x[jvj+82] ;z[R]=z[jvj+82];
goto l104;
l71:V100=134;
goto l72;
l73:V101=178;
goto l75;
l77:x[jvj+100]=t[x[jvj+100]];
l76:if((x[jvj+100]<=0)) goto l80;
x[jvj+57]=s[x[jvj+100]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+100];
pile[v[22]]=510; pile[WZ1]=jvj+57; 
(*f[26])( );if(v[102]) goto l77;     /*FNDC0(510,jvj+57,V115)*/
V115=pile[WZ2]; 
if((V115!=V116)) goto l77;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l77;     /*FNDC0(515,jvj+57,V117)*/
V117=pile[WZ2]; 
if((V117<V118)) goto l77;
x[jvj+58]=t[x[jvj+58]];
goto l78;
l79:x[jvj+54]=s[x[jvj+58]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+58];
pile[v[22]]=510; pile[WZ1]=jvj+54; 
(*f[26])( );if(v[102]) goto l80;     /*FNDC0(510,jvj+54,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l80;     /*FNDC0(515,jvj+54,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=763; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(763,jvj+55,jvj+56)*/
x[jvj+100]=x[jvj+56] ;z[jvj+100]=z[jvj+56];
goto l76;
l80:V103=67;
goto l81;
l82:if((V103!=68)) goto l83;
x[jvj+83]=36 ;z[jvj+83]=36;
goto l84;
l83:x[jvj+83]=134 ;z[jvj+83]=134;
goto l84;
l85:x[jvj+65]=0 ;z[jvj+65]=0;
pile[v[22]]=763; pile[WZ1]=jvj+52; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(763,jvj+52,jvj+61)*/
x[jvj+62]=d[64];z[jvj+62]=0;
l88:if((x[jvj+61]>0)) goto l89;
x[jvj+85]=x[jvj+65] ;z[jvj+85]=z[jvj+65];
goto l107;
l87:x[jvj+101]=t[x[jvj+101]];
l86:if((x[jvj+101]<=0)) goto l90;
x[jvj+60]=s[x[jvj+101]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+101];
pile[v[22]]=510; pile[WZ1]=jvj+60; 
(*f[26])( );if(v[102]) goto l87;     /*FNDC0(510,jvj+60,V123)*/
V123=pile[WZ2]; 
if((V123!=V128)) goto l87;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l90;     /*FNDC0(515,jvj+60,V126)*/
V126=pile[WZ2]; 
V125=V126-V127;
if((V125<=0)) goto l90;
pile[v[22]]=510; pile[WZ1]=V128; pile[WZ2]=515; pile[WZ3]=V125; pile[WZ4]=jvj+64; 
(*f[391])( );     /*QUADRI10(510,V128,515,V125,jvj+64)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[196])( );     /*PLUF0(jvj+62,jvj+64,jvj+65)*/
l90:x[jvj+61]=t[x[jvj+61]];
goto l88;
l89:x[jvj+63]=s[x[jvj+61]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+61];
pile[v[22]]=515; pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l90;     /*FNDC0(515,jvj+63,V127)*/
V127=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l90;     /*FNDC0(510,jvj+63,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=763; pile[WZ1]=jvj+55; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(763,jvj+55,jvj+59)*/
x[jvj+101]=x[jvj+59] ;z[jvj+101]=z[jvj+59];
goto l86;
l92:if(x[jvj+82]==incon) goto l108;
goto l98;
l93:pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l95;     /*FNDC0(130,A,V2)*/
V2=pile[WZ2]; 
if((0==V2)) goto l109;
if((V2==0)) goto l95;
x[jvj+86]=incon;
if((V2>=0)) goto l1;
x[jvj+86]=52 ;z[jvj+86]=52;
goto l94;
l95:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(111,A,jvj+68)*/
pile[v[22]]=101; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(101,jvj+68,jvj+69)*/
if((x[jvj+69]==63)) goto l96;
if((x[jvj+69]==52)) goto l99;
if((x[jvj+69]==485)) goto l100;
if((x[jvj+69]==1351)) goto l102;
if((x[jvj+69]!=486)) goto l111;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+79; 
(*f[33])( );     /*FNDE0(107,A,jvj+79)*/
x[jvj+5]=0 ;z[jvj+5]=0;
goto l5;
l96:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(102,A,jvj+70)*/
pile[v[22]]=103; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(103,A,jvj+71)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+55; 
(*f[1677])( );     /*VALRIG0(jvj+70,jvj+55)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+52; 
(*f[1677])( );     /*VALRIG0(jvj+71,jvj+52)*/
pile[v[22]]=1219; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(1219,jvj+52,jvj+72)*/
if((x[jvj+72]!=36)) goto l70;
pile[v[22]]=763; pile[WZ2]=jvj+73; 
(*f[33])( );     /*FNDE0(763,jvj+52,jvj+73)*/
if((x[jvj+73]!=0)) goto l70;
x[R]=x[jvj+55] ;z[R]=z[jvj+55];
goto l104;
l99:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(102,A,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=jvj+28; 
(*f[1677])( );     /*VALRIG0(jvj+75,jvj+28)*/
pile[v[22]]=1219; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(1219,jvj+28,jvj+26)*/
x[R]=x[jvj+28] ;z[R]=z[jvj+28];
if(x[jvj+26]!=36&&x[jvj+26]!=52) goto l41;
pile[v[22]]=268; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(268,jvj+26,jvj+27)*/
pile[v[22]]=jvj+28; pile[WZ1]=1219; 
(*f[35])( );     /*CHGC1(jvj+28,1219,jvj+27)*/
l41:if((x[jvj+26]!=485)) goto l104;
pile[v[22]]=159; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(159,jvj+28,jvj+29)*/
l42:if((x[jvj+29]<=0)) goto l104;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=1219; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(1219,jvj+30,jvj+31)*/
pile[v[22]]=268; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(268,jvj+31,jvj+32)*/
pile[v[22]]=jvj+30; pile[WZ1]=1219; 
(*f[35])( );     /*CHGC1(jvj+30,1219,jvj+32)*/
l43:x[jvj+29]=t[x[jvj+29]];
goto l42;
l100:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+76; 
(*f[33])( );     /*FNDE0(107,A,jvj+76)*/
x[jvj+36]=0 ;z[jvj+36]=0;
goto l44;
l102:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(102,A,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+42; 
(*f[1677])( );     /*VALRIG0(jvj+77,jvj+42)*/
pile[v[22]]=1219; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(1219,jvj+42,jvj+78)*/
x[jvj+80]=incon;
if((x[jvj+78]==52)) goto l105;
if((x[jvj+78]!=485)) goto l67;
pile[v[22]]=178; pile[WZ1]=1219; pile[WZ2]=jvj+80; 
(*f[54])( );     /*TRI1(178,1219,jvj+80)*/
l67:if(x[jvj+78]!=1557&&x[jvj+78]!=134&&x[jvj+78]!=178) goto l68;
x[jvj+80]=x[jvj+42] ;z[jvj+80]=z[jvj+42];
l68:if((x[jvj+78]!=36)) goto l69;
pile[v[22]]=763; pile[WZ1]=jvj+42; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(763,jvj+42,jvj+50)*/
goto l65;
l105:pile[v[22]]=134; pile[WZ1]=1219; pile[WZ2]=jvj+80; 
(*f[54])( );     /*TRI1(134,1219,jvj+80)*/
goto l67;
l106:pile[v[22]]=134; pile[WZ1]=1219; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(134,1219,jvj+82)*/
goto l98;
l108:pile[v[22]]=178; pile[WZ1]=1219; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(178,1219,jvj+82)*/
goto l98;
l109:pile[v[22]]=1557; pile[WZ1]=1219; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(1557,1219,R)*/
goto l104;
l111:pile[v[22]]=178; pile[WZ1]=1219; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(178,1219,R)*/
goto l104;
}
