#include "dx.h"
void MEMEL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V86=0,V87=0,V105=0,V107=0,V35=0,VV=0,V42=0,V55=0,V47=0,V62=0,V11=0,V13=0,V101=0,V16=0,V103=0,V19=0,V69=0,W=0,V66=0,V67=0,V77=0,V76=0,V89=0,V84=0;
int X1,X2,L;
int RES;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=53;
if(v[0]>99700) (*f[6])( );

X1=pile[v[22]]; X2=pile[v[22]+1]; L=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X1; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,X1,jvj+9)*/
pile[WZ1]=X2; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,X2,jvj+10)*/
if((x[jvj+9]!=x[jvj+10])) goto l7;
if((x[jvj+9]==39)) goto l8;
if((x[jvj+9]!=128)) goto l19;
if((x[jvj+10]!=128)) goto l19;
pile[v[22]]=128; pile[WZ1]=X1; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(128,X1,jvj+29)*/
pile[WZ1]=X2; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(128,X2,jvj+30)*/
l18:if((x[jvj+29]<=0)) goto l19;
x[jvj+3]=s[x[jvj+29]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+29];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+5]=w[x[jvj+4]][3])==incon) goto l7;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; pile[WZ3]=jvj+6; 
(*f[45])( );if(v[102]) goto l7;     /*FNDZ0(jvj+3,jvj+5,V105,jvj+6)*/
V105=pile[WZ2]; 
x[jvj+47]=x[jvj+30] ;z[jvj+47]=z[jvj+30];
l5:if((x[jvj+47]<=0)) goto l7;
x[jvj+7]=s[x[jvj+47]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+47];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+5; pile[WZ3]=jvj+8; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+7,jvj+5,V107,jvj+8)*/
V107=pile[WZ2]; 
if((V105!=V107)) goto l6;
x[jvj+29]=t[x[jvj+29]];
goto l18;
l3:x[jvj+1]=s[x[jvj+2]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+2];
pile[v[22]]=140; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,jvj+1,V86)*/
V86=pile[WZ2]; 
if((V86==V89)) goto l35;
l1:pile[v[22]]=110; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(110,jvj+1,V87)*/
V87=pile[WZ2]; 
if((V87==V84)) goto l35;
l4:x[jvj+2]=t[x[jvj+2]];
l2:if((x[jvj+2]>0)) goto l3;
pile[v[22]]=110; pile[WZ1]=V84; pile[WZ2]=140; pile[WZ3]=V89; pile[WZ4]=jvj+46; 
(*f[1385])( );     /*QUADRI16(110,V84,140,V89,jvj+46)*/
pile[v[22]]=L; pile[WZ1]=494; pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(L,494,jvj+46)*/
l35:v[0]=jvj; v[22]-=4; return;
l6:x[jvj+47]=t[x[jvj+47]];
goto l5;
l7:x[RES]=134 ;z[RES]=134;
l34:pile[v[22]]=140; pile[WZ1]=X1; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,X1,V89)*/
V89=pile[WZ2]; 
pile[WZ1]=X2; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,X2,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=494; pile[WZ1]=L; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(494,L,jvj+2)*/
goto l2;
l8:if((x[jvj+10]!=39)) goto l19;
pile[v[22]]=114; pile[WZ1]=X1; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(114,X1,jvj+11)*/
pile[WZ1]=X2; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(114,X2,jvj+12)*/
l9:if((x[jvj+11]>0)) goto l10;
pile[v[22]]=113; pile[WZ1]=X1; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(113,X1,jvj+20)*/
pile[WZ1]=X2; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(113,X2,jvj+21)*/
l14:if((x[jvj+20]<=0)) goto l19;
x[jvj+22]=s[x[jvj+20]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+20];
pile[v[22]]=103; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+22,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+23,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+22,jvj+24)*/
V47=V55;
x[jvj+49]=x[jvj+21] ;z[jvj+49]=z[jvj+21];
l16:if((x[jvj+49]<=0)) goto l15;
x[jvj+25]=s[x[jvj+49]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+49];
pile[v[22]]=103; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,jvj+25,jvj+26)*/
pile[v[22]]=140; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+26,V62)*/
V62=pile[WZ2]; 
if((V47!=V62)) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+25,jvj+27)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+27; pile[WZ2]=L; pile[WZ3]=jvj+28; 
(*f[2210])( );     /*MEMEL0(jvj+24,jvj+27,L,jvj+28)*/
if((x[jvj+28]==134)) goto l7;
l17:x[jvj+49]=t[x[jvj+49]];
goto l16;
l10:x[jvj+13]=s[x[jvj+11]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+11];
pile[v[22]]=103; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+13,jvj+14)*/
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+14,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+13,jvj+15)*/
VV=V35;
x[jvj+48]=x[jvj+12] ;z[jvj+48]=z[jvj+12];
l12:if((x[jvj+48]<=0)) goto l11;
x[jvj+16]=s[x[jvj+48]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+48];
pile[v[22]]=103; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+16,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+17,V42)*/
V42=pile[WZ2]; 
if((VV!=V42)) goto l13;
pile[v[22]]=102; pile[WZ1]=jvj+16; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+16,jvj+18)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+18; pile[WZ2]=L; pile[WZ3]=jvj+19; 
(*f[2210])( );     /*MEMEL0(jvj+15,jvj+18,L,jvj+19)*/
if((x[jvj+19]==134)) goto l7;
l13:x[jvj+48]=t[x[jvj+48]];
goto l12;
l11:x[jvj+11]=t[x[jvj+11]];
goto l9;
l15:x[jvj+20]=t[x[jvj+20]];
goto l14;
l19:x[jvj+51]=w[x[jvj+9]][8];
x[jvj+50]=x[jvj+51] ;z[jvj+50]=z[jvj+51];
l20:if((x[jvj+50]>0)) goto l21;
if((x[jvj+9]==39)) goto l24;
if((x[jvj+9]!=128)) goto l22;
l24:if((x[jvj+36]=w[x[jvj+9]][3])==incon) goto l25;
pile[v[22]]=X1; pile[WZ1]=jvj+36; pile[WZ3]=jvj+37; 
(*f[45])( );if(v[102]) goto l25;     /*FNDZ0(X1,jvj+36,V101,jvj+37)*/
V101=pile[WZ2]; 
V16=V101;
pile[v[22]]=X2; pile[WZ3]=jvj+38; 
(*f[45])( );if(v[102]) goto l25;     /*FNDZ0(X2,jvj+36,V103,jvj+38)*/
V103=pile[WZ2]; 
V19=V103;
if((V16!=V19)) goto l7;
l25:x[jvj+52]=w[x[jvj+9]][9];
l26:if((x[jvj+52]<=0)) goto l28;
x[jvj+39]=s[x[jvj+52]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+52];
pile[v[22]]=jvj+39; pile[WZ1]=X1; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(jvj+39,X1,jvj+40)*/
pile[WZ1]=X2; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(jvj+39,X2,jvj+41)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=L; pile[WZ3]=jvj+42; 
(*f[2210])( );     /*MEMEL0(jvj+40,jvj+41,L,jvj+42)*/
if((x[jvj+42]==134)) goto l7;
l27:x[jvj+52]=t[x[jvj+52]];
goto l26;
l21:x[jvj+31]=s[x[jvj+50]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+50];
pile[v[22]]=jvj+31; pile[WZ1]=X1; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(jvj+31,X1,jvj+32)*/
for(i=x[jvj+32],V11=0;i>0;i=t[i],V11++)  ;
pile[WZ1]=X2; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(jvj+31,X2,jvj+33)*/
for(i=x[jvj+33],V13=0;i>0;i=t[i],V13++)  ;
if((V11!=V13)) goto l7;
x[jvj+50]=t[x[jvj+50]];
goto l20;
l23:x[jvj+34]=s[x[jvj+51]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+51];
pile[v[22]]=jvj+34; pile[WZ1]=X1; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(jvj+34,X1,jvj+35)*/
if((x[jvj+35]!=0)) goto l7;
x[jvj+51]=t[x[jvj+51]];
l22:if((x[jvj+51]>0)) goto l23;
if((x[jvj+9]!=21)) goto l24;
goto l25;
l28:pile[v[22]]=140; pile[WZ1]=X1; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(140,X1,V69)*/
V69=pile[WZ2]; 
pile[WZ1]=X2; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(140,X2,W)*/
W=pile[WZ2]; 
pile[v[22]]=494; pile[WZ1]=L; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(494,L,jvj+43)*/
x[jvj+53]=x[jvj+43] ;z[jvj+53]=z[jvj+43];
l29:if((x[jvj+53]<=0)) goto l31;
x[jvj+44]=s[x[jvj+53]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+53];
pile[v[22]]=140; pile[WZ1]=jvj+44; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(140,jvj+44,V66)*/
V66=pile[WZ2]; 
if((V66!=V69)) goto l30;
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(110,jvj+44,V67)*/
V67=pile[WZ2]; 
if((V67!=W)) goto l7;
l30:x[jvj+53]=t[x[jvj+53]];
goto l29;
l33:x[RES]=135 ;z[RES]=135;
goto l34;
l31:if((x[jvj+43]<=0)) goto l33;
x[jvj+45]=s[x[jvj+43]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+43];
pile[v[22]]=110; pile[WZ1]=jvj+45; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(110,jvj+45,V77)*/
V77=pile[WZ2]; 
if((V77!=W)) goto l32;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(140,jvj+45,V76)*/
V76=pile[WZ2]; 
if((V76!=V69)) goto l7;
l32:x[jvj+43]=t[x[jvj+43]];
goto l31;
}
