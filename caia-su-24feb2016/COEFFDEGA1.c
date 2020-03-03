#include "dx.h"
void COEFFDEGA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int II=0,V4=0,V39=0,V10=0,V13=0,V6=0,V26=0,V19=0,V59=0,V52=0,V68=0,V81=0,V74=0,V90=0,KK=0,V98=0;
int XA;
int D,K;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=36;
if(v[0]>99700) (*f[6])( );

XA=pile[v[22]]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=XA; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,XA,jvj+1)*/
if((x[jvj+1]!=484)) goto l2;
D=1;
l1:K=1;
l28:v[0]=jvj; v[22]-=3; pile[v[22]+1]=D; pile[v[22]+2]=K; v[102]=0;return;
l2:pile[v[22]]=130; pile[WZ1]=XA; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,XA,II)*/
II=pile[WZ2]; 
D=0;
K=II;
goto l28;
l3:pile[v[22]]=140; pile[WZ1]=XA; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,XA,V4)*/
V4=pile[WZ2]; 
D=1;
goto l1;
l4:pile[v[22]]=111; pile[WZ1]=XA; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,XA,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==596)) goto l5;
if((x[jvj+3]==486)) goto l7;
if((x[jvj+3]!=52)) goto l27;
pile[v[22]]=102; pile[WZ1]=XA; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,XA,jvj+28)*/
pile[v[22]]=jvj+28; 
(*f[2143])( );if(v[102]) goto l27;     /*COEFFDEGA1(jvj+28,D,KK)*/
D=pile[WZ1]; KK=pile[WZ2]; 
V98=(-KK);
K=V98;
goto l28;
l5:pile[v[22]]=103; pile[WZ1]=XA; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(103,XA,jvj+4)*/
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+4,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=XA; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,XA,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]==21)) goto l6;
if((x[jvj+6]!=484)) goto l27;
D=V39;
goto l1;
l6:D=V39;
goto l1;
l7:pile[v[22]]=107; pile[WZ1]=XA; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,XA,jvj+7)*/
for(i=x[jvj+7],V10=0;i>0;i=t[i],V10++)  ;
if((V10!=2)) goto l27;
x[jvj+29]=x[jvj+7] ;z[jvj+29]=z[jvj+7];
l8:if((x[jvj+29]>0)) goto l9;
x[jvj+31]=x[jvj+7] ;z[jvj+31]=z[jvj+7];
l13:if((x[jvj+31]>0)) goto l14;
x[jvj+33]=x[jvj+7] ;z[jvj+33]=z[jvj+7];
l18:if((x[jvj+33]>0)) goto l19;
x[jvj+35]=x[jvj+7] ;z[jvj+35]=z[jvj+7];
l23:if((x[jvj+35]<=0)) goto l27;
x[jvj+21]=s[x[jvj+35]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+35];
pile[v[22]]=130; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+21,V81)*/
V81=pile[WZ2]; 
V74=V81;
x[jvj+36]=x[jvj+7] ;z[jvj+36]=z[jvj+7];
l25:if((x[jvj+36]<=0)) goto l24;
x[jvj+22]=s[x[jvj+36]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+36];
if((x[jvj+21]==x[jvj+22])) goto l26;
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=596)) goto l26;
pile[v[22]]=103; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,jvj+22,jvj+25)*/
pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+25,V90)*/
V90=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+22,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=484)) goto l26;
D=V90;
K=V74;
goto l28;
l9:x[jvj+8]=s[x[jvj+29]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+29];
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+8,V13)*/
V13=pile[WZ2]; 
V6=V13;
x[jvj+30]=x[jvj+7] ;z[jvj+30]=z[jvj+7];
l11:if((x[jvj+30]<=0)) goto l10;
x[jvj+9]=s[x[jvj+30]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+30];
if((x[jvj+8]==x[jvj+9])) goto l12;
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=21)) goto l12;
D=1;
K=V6;
goto l28;
l10:x[jvj+29]=t[x[jvj+29]];
goto l8;
l12:x[jvj+30]=t[x[jvj+30]];
goto l11;
l14:x[jvj+11]=s[x[jvj+31]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+31];
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+11,V26)*/
V26=pile[WZ2]; 
V19=V26;
x[jvj+32]=x[jvj+7] ;z[jvj+32]=z[jvj+7];
l16:if((x[jvj+32]<=0)) goto l15;
x[jvj+12]=s[x[jvj+32]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+32];
if((x[jvj+11]==x[jvj+12])) goto l17;
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=484)) goto l17;
D=1;
K=V19;
goto l28;
l15:x[jvj+31]=t[x[jvj+31]];
goto l13;
l17:x[jvj+32]=t[x[jvj+32]];
goto l16;
l19:x[jvj+14]=s[x[jvj+33]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+33];
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+14,V59)*/
V59=pile[WZ2]; 
V52=V59;
x[jvj+34]=x[jvj+7] ;z[jvj+34]=z[jvj+7];
l21:if((x[jvj+34]<=0)) goto l20;
x[jvj+15]=s[x[jvj+34]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+34];
if((x[jvj+14]==x[jvj+15])) goto l22;
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=596)) goto l22;
pile[v[22]]=103; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+15,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+18,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+15,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=21)) goto l22;
D=V68;
K=V52;
goto l28;
l20:x[jvj+33]=t[x[jvj+33]];
goto l18;
l22:x[jvj+34]=t[x[jvj+34]];
goto l21;
l24:x[jvj+35]=t[x[jvj+35]];
goto l23;
l26:x[jvj+36]=t[x[jvj+36]];
goto l25;
l27:D=K=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
}
