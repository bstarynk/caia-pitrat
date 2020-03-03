#include "dx.h"
void MXDIVA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NN=0,DD=0,V21=0,V22=0,YY=0,V10=0,V11=0,V27=0,V39=0,GG=0,V31=0,V41=0,V29=0,V34=0,NK=0,V35=0,P=0,V45=0,V46=0;
int X,EN;
int N,D;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=66;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; EN=pile[v[22]+1]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,X,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=486)) goto l1;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,X,jvj+3)*/
l5:x[jvj+51]=x[jvj+3] ;z[jvj+51]=z[jvj+3];
l3:if((x[jvj+51]>0)) goto l4;
x[jvj+56]=x[jvj+3] ;z[jvj+56]=z[jvj+3];
l16:if((x[jvj+56]>0)) goto l17;
for(i=x[jvj+3],V35=0;i>0;i=t[i],V35++)  ;
if((V35>1)) goto l33;
V34=incon;
if((x[jvj+3]!=0)) goto l30;
V34=1;
l30:if((x[jvj+3]<=0)) goto l31;
x[jvj+33]=s[x[jvj+3]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+3];
pile[v[22]]=130; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,jvj+33,NK)*/
NK=pile[WZ2]; 
V34=NK;
l32:if((V34==(-99999998))) goto l33;
x[jvj+57]=x[EN] ;z[jvj+57]=z[EN];
l20:if((x[jvj+57]>0)) goto l21;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+32; 
(*f[46])( );     /*TRI0(1,117,jvj+32)*/
x[jvj+58]=x[EN] ;z[jvj+58]=z[EN];
l26:if((x[jvj+58]>0)) goto l27;
pile[v[22]]=117; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(117,jvj+32,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=V34; 
(*f[1011])( );     /*PGCD0(V29,V34,P)*/
P=pile[WZ2]; 
V45=V34/P;
V46=V29/P;
N=V45;
D=V46;
l34:v[0]=jvj; v[22]-=4; pile[v[22]+2]=N; pile[v[22]+3]=D; v[102]=0;return;
l1:pile[v[22]]=20; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[409])( );     /*TRI14(20,X,jvj+3)*/
goto l5;
l4:x[jvj+4]=s[x[jvj+51]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+51];
x[jvj+50]=x[EN] ;z[jvj+50]=z[EN];
l2:if((x[jvj+50]<=0)) goto l6;
x[jvj+5]=s[x[jvj+50]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+50];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[760])( );     /*MEMEX0(jvj+4,jvj+5,jvj+6)*/
if((x[jvj+6]==135)) goto l35;
x[jvj+50]=t[x[jvj+50]];
goto l2;
l8:x[jvj+52]=t[x[jvj+52]];
l7:if((x[jvj+52]<=0)) goto l14;
x[jvj+10]=s[x[jvj+52]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+52];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[200])( );if(v[102]) goto l8;     /*NDD0(jvj+10,jvj+11)*/
x[jvj+12]=x[jvj+11] ;z[jvj+12]=z[jvj+11];
pile[v[22]]=280; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(280,jvj+12,V22)*/
V22=pile[WZ2]; 
if((V21>=V22)) goto l8;
pile[v[22]]=1331; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1331,jvj+12,jvj+13)*/
x[jvj+53]=x[jvj+13] ;z[jvj+53]=z[jvj+13];
l9:if((x[jvj+53]<=0)) goto l8;
x[jvj+14]=s[x[jvj+53]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+53];
pile[v[22]]=497; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(497,jvj+14,jvj+15)*/
if((x[jvj+15]==YY)) goto l12;
l10:x[jvj+53]=t[x[jvj+53]];
goto l9;
l12:x[jvj+54]=t[x[jvj+54]];
l11:if((x[jvj+54]<=0)) goto l18;
x[jvj+16]=s[x[jvj+54]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+54];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[200])( );if(v[102]) goto l12;     /*NDD0(jvj+16,jvj+17)*/
x[jvj+9]=x[jvj+17] ;z[jvj+9]=z[jvj+17];
pile[v[22]]=1331; pile[WZ1]=jvj+9; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1331,jvj+9,jvj+18)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(280,jvj+9,V21)*/
V21=pile[WZ2]; 
x[jvj+52]=x[EN] ;z[jvj+52]=z[EN];
goto l7;
l14:x[jvj+55]=x[jvj+18] ;z[jvj+55]=z[jvj+18];
l13:if((x[jvj+55]<=0)) goto l12;
x[jvj+19]=s[x[jvj+55]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+55];
pile[v[22]]=497; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(497,jvj+19,jvj+20)*/
if((x[jvj+20]!=YY)) goto l15;
x[jvj+65]=x[EN] ;z[jvj+65]=z[EN];
l54:if((x[jvj+65]>0)) goto l55;
l18:x[jvj+56]=t[x[jvj+56]];
goto l16;
l15:x[jvj+55]=t[x[jvj+55]];
goto l13;
l17:x[jvj+21]=s[x[jvj+56]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+56];
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[200])( );if(v[102]) goto l18;     /*NDD0(jvj+21,jvj+22)*/
x[jvj+63]=x[jvj+3] ;z[jvj+63]=z[jvj+3];
l48:if((x[jvj+63]>0)) goto l49;
goto l18;
l21:x[jvj+25]=s[x[jvj+57]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+57];
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]==41)) goto l22;
l19:pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+25,jvj+27)*/
if((x[jvj+27]!=484)) goto l33;
pile[v[22]]=jvj+25; pile[WZ1]=jvj+28; 
(*f[200])( );if(v[102]) goto l33;     /*NDD0(jvj+25,jvj+28)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(280,jvj+28,V27)*/
V27=pile[WZ2]; 
l22:x[jvj+57]=t[x[jvj+57]];
goto l20;
l24:if(V31==incon) goto l25;
l29:if((V31==(-99999998))) goto l28;
pile[v[22]]=jvj+32; pile[WZ1]=117; pile[WZ2]=V31; 
(*f[818])( );     /*MTC0(jvj+32,117,V31)*/
l28:x[jvj+58]=t[x[jvj+58]];
goto l26;
l25:V31=(-99999998);
goto l28;
l27:x[jvj+29]=s[x[jvj+58]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+58];
V31=incon;
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+29,V39)*/
V39=pile[WZ2]; 
GG=V39;
V31=GG;
l23:pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]!=484)) goto l24;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+31; 
(*f[200])( );if(v[102]) goto l24;     /*NDD0(jvj+29,jvj+31)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(280,jvj+31,V41)*/
V41=pile[WZ2]; 
V31=V41;
goto l29;
l31:if(V34==incon) goto l33;
goto l32;
l33:N=D=incon;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l35:x[jvj+59]=x[jvj+3] ;z[jvj+59]=z[jvj+3];
l36:if((x[jvj+59]>0)) goto l37;
l6:x[jvj+51]=t[x[jvj+51]];
goto l3;
l37:x[jvj+34]=s[x[jvj+59]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+59];
pile[v[22]]=jvj+34; pile[WZ1]=jvj+4; pile[WZ2]=jvj+35; 
(*f[760])( );     /*MEMEX0(jvj+34,jvj+4,jvj+35)*/
if((x[jvj+35]==135)) goto l38;
x[jvj+59]=t[x[jvj+59]];
goto l36;
l38:x[jvj+36]=0 ;z[jvj+36]=0;
x[jvj+60]=x[jvj+3] ;z[jvj+60]=z[jvj+3];
l39:if((x[jvj+60]>0)) goto l40;
x[jvj+7]=x[jvj+36] ;z[jvj+7]=z[jvj+36];
x[jvj+61]=x[EN] ;z[jvj+61]=z[EN];
l42:if((x[jvj+61]>0)) goto l43;
goto l6;
l40:x[jvj+37]=s[x[jvj+60]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+60];
if((x[jvj+37]==x[jvj+34])) goto l41;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[68])( );     /*PLUE0(jvj+36,jvj+37)*/
l41:x[jvj+60]=t[x[jvj+60]];
goto l39;
l43:x[jvj+38]=s[x[jvj+61]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+61];
pile[v[22]]=jvj+38; pile[WZ1]=jvj+5; pile[WZ2]=jvj+39; 
(*f[760])( );     /*MEMEX0(jvj+38,jvj+5,jvj+39)*/
if((x[jvj+39]==135)) goto l44;
x[jvj+61]=t[x[jvj+61]];
goto l42;
l44:x[jvj+40]=0 ;z[jvj+40]=0;
x[jvj+62]=x[EN] ;z[jvj+62]=z[EN];
l45:if((x[jvj+62]>0)) goto l46;
x[jvj+8]=x[jvj+40] ;z[jvj+8]=z[jvj+40];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[4080])( );if(v[102]) goto l6;     /*MXDIVA1(jvj+7,jvj+8,NN,DD)*/
NN=pile[WZ2]; DD=pile[WZ3]; 
N=NN;
D=DD;
goto l34;
l46:x[jvj+41]=s[x[jvj+62]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+62];
if((x[jvj+41]==x[jvj+38])) goto l47;
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+41)*/
l47:x[jvj+62]=t[x[jvj+62]];
goto l45;
l49:x[jvj+42]=s[x[jvj+63]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+63];
pile[v[22]]=jvj+42; pile[WZ1]=jvj+21; pile[WZ2]=jvj+43; 
(*f[760])( );     /*MEMEX0(jvj+42,jvj+21,jvj+43)*/
if((x[jvj+43]==135)) goto l50;
x[jvj+63]=t[x[jvj+63]];
goto l48;
l50:x[jvj+44]=0 ;z[jvj+44]=0;
x[jvj+64]=x[jvj+3] ;z[jvj+64]=z[jvj+3];
l51:if((x[jvj+64]>0)) goto l52;
x[jvj+23]=x[jvj+44] ;z[jvj+23]=z[jvj+44];
YY=x[jvj+22];
x[jvj+54]=x[EN] ;z[jvj+54]=z[EN];
goto l11;
l52:x[jvj+45]=s[x[jvj+64]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+64];
if((x[jvj+45]==x[jvj+42])) goto l53;
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[68])( );     /*PLUE0(jvj+44,jvj+45)*/
l53:x[jvj+64]=t[x[jvj+64]];
goto l51;
l55:x[jvj+46]=s[x[jvj+65]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+65];
pile[v[22]]=jvj+46; pile[WZ1]=jvj+16; pile[WZ2]=jvj+47; 
(*f[760])( );     /*MEMEX0(jvj+46,jvj+16,jvj+47)*/
if((x[jvj+47]==135)) goto l56;
x[jvj+65]=t[x[jvj+65]];
goto l54;
l56:x[jvj+48]=0 ;z[jvj+48]=0;
x[jvj+66]=x[EN] ;z[jvj+66]=z[EN];
l57:if((x[jvj+66]>0)) goto l58;
x[jvj+24]=x[jvj+48] ;z[jvj+24]=z[jvj+48];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[4080])( );if(v[102]) goto l18;     /*MXDIVA1(jvj+23,jvj+24,V10,V11)*/
V10=pile[WZ2]; V11=pile[WZ3]; 
N=V10;
D=V11;
goto l34;
l58:x[jvj+49]=s[x[jvj+66]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+66];
if((x[jvj+49]==x[jvj+46])) goto l59;
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[68])( );     /*PLUE0(jvj+48,jvj+49)*/
l59:x[jvj+66]=t[x[jvj+66]];
goto l57;
}
