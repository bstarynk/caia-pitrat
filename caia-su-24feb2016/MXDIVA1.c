#include "dx.h"
void MXDIVA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NN=0,DD=0,V17=0,V18=0,YY=0,V6=0,V7=0,V23=0,V35=0,GG=0,V27=0,V37=0,V25=0,V30=0,NK=0,V31=0,P=0,V41=0,V42=0;
int E,EN;
int N,D;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=64;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; EN=pile[v[22]+1]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+48]=x[E] ;z[jvj+48]=z[E];
l2:if((x[jvj+48]>0)) goto l3;
x[jvj+53]=x[E] ;z[jvj+53]=z[E];
l14:if((x[jvj+53]>0)) goto l15;
for(i=x[E],V31=0;i>0;i=t[i],V31++)  ;
if((V31>1)) goto l31;
V30=incon;
if((x[E]!=0)) goto l28;
V30=1;
l28:x[jvj+56]=x[E] ;z[jvj+56]=z[E];
if((x[jvj+56]<=0)) goto l29;
x[jvj+30]=s[x[jvj+56]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+56];
pile[v[22]]=130; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(130,jvj+30,NK)*/
NK=pile[WZ2]; 
V30=NK;
l30:if((V30==(-99999998))) goto l31;
x[jvj+54]=x[EN] ;z[jvj+54]=z[EN];
l18:if((x[jvj+54]>0)) goto l19;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+29; 
(*f[46])( );     /*TRI0(1,117,jvj+29)*/
x[jvj+55]=x[EN] ;z[jvj+55]=z[EN];
l24:if((x[jvj+55]>0)) goto l25;
pile[v[22]]=117; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(117,jvj+29,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=V30; 
(*f[1011])( );     /*PGCD0(V25,V30,P)*/
P=pile[WZ2]; 
V41=V30/P;
V42=V25/P;
N=V41;
D=V42;
l32:v[0]=jvj; v[22]-=4; pile[v[22]+2]=N; pile[v[22]+3]=D; v[102]=0;return;
l3:x[jvj+1]=s[x[jvj+48]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+48];
x[jvj+47]=x[EN] ;z[jvj+47]=z[EN];
l1:if((x[jvj+47]<=0)) goto l4;
x[jvj+2]=s[x[jvj+47]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+47];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[760])( );     /*MEMEX0(jvj+1,jvj+2,jvj+3)*/
if((x[jvj+3]==135)) goto l33;
x[jvj+47]=t[x[jvj+47]];
goto l1;
l6:x[jvj+49]=t[x[jvj+49]];
l5:if((x[jvj+49]<=0)) goto l12;
x[jvj+7]=s[x[jvj+49]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+49];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[200])( );if(v[102]) goto l6;     /*NDD0(jvj+7,jvj+8)*/
x[jvj+9]=x[jvj+8] ;z[jvj+9]=z[jvj+8];
pile[v[22]]=280; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(280,jvj+9,V18)*/
V18=pile[WZ2]; 
if((V17>=V18)) goto l6;
pile[v[22]]=1331; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1331,jvj+9,jvj+10)*/
x[jvj+50]=x[jvj+10] ;z[jvj+50]=z[jvj+10];
l7:if((x[jvj+50]<=0)) goto l6;
x[jvj+11]=s[x[jvj+50]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+50];
pile[v[22]]=497; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(497,jvj+11,jvj+12)*/
if((x[jvj+12]==YY)) goto l10;
l8:x[jvj+50]=t[x[jvj+50]];
goto l7;
l10:x[jvj+51]=t[x[jvj+51]];
l9:if((x[jvj+51]<=0)) goto l16;
x[jvj+13]=s[x[jvj+51]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+51];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[200])( );if(v[102]) goto l10;     /*NDD0(jvj+13,jvj+14)*/
x[jvj+6]=x[jvj+14] ;z[jvj+6]=z[jvj+14];
pile[v[22]]=1331; pile[WZ1]=jvj+6; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1331,jvj+6,jvj+15)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(280,jvj+6,V17)*/
V17=pile[WZ2]; 
x[jvj+49]=x[EN] ;z[jvj+49]=z[EN];
goto l5;
l12:x[jvj+52]=x[jvj+15] ;z[jvj+52]=z[jvj+15];
l11:if((x[jvj+52]<=0)) goto l10;
x[jvj+16]=s[x[jvj+52]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+52];
pile[v[22]]=497; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(497,jvj+16,jvj+17)*/
if((x[jvj+17]!=YY)) goto l13;
x[jvj+63]=x[EN] ;z[jvj+63]=z[EN];
l52:if((x[jvj+63]>0)) goto l53;
l16:x[jvj+53]=t[x[jvj+53]];
goto l14;
l13:x[jvj+52]=t[x[jvj+52]];
goto l11;
l15:x[jvj+18]=s[x[jvj+53]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+53];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[200])( );if(v[102]) goto l16;     /*NDD0(jvj+18,jvj+19)*/
x[jvj+61]=x[E] ;z[jvj+61]=z[E];
l46:if((x[jvj+61]>0)) goto l47;
goto l16;
l19:x[jvj+22]=s[x[jvj+54]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+54];
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]==41)) goto l20;
l17:pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+22,jvj+24)*/
if((x[jvj+24]!=484)) goto l31;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+25; 
(*f[200])( );if(v[102]) goto l31;     /*NDD0(jvj+22,jvj+25)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(280,jvj+25,V23)*/
V23=pile[WZ2]; 
l20:x[jvj+54]=t[x[jvj+54]];
goto l18;
l22:if(V27==incon) goto l23;
l27:if((V27==(-99999998))) goto l26;
pile[v[22]]=jvj+29; pile[WZ1]=117; pile[WZ2]=V27; 
(*f[818])( );     /*MTC0(jvj+29,117,V27)*/
l26:x[jvj+55]=t[x[jvj+55]];
goto l24;
l23:V27=(-99999998);
goto l26;
l25:x[jvj+26]=s[x[jvj+55]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+55];
V27=incon;
pile[v[22]]=130; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+26,V35)*/
V35=pile[WZ2]; 
GG=V35;
V27=GG;
l21:pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=484)) goto l22;
pile[v[22]]=jvj+26; pile[WZ1]=jvj+28; 
(*f[200])( );if(v[102]) goto l22;     /*NDD0(jvj+26,jvj+28)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(280,jvj+28,V37)*/
V37=pile[WZ2]; 
V27=V37;
goto l27;
l29:if(V30==incon) goto l31;
goto l30;
l31:N=D=incon;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l33:x[jvj+57]=x[E] ;z[jvj+57]=z[E];
l34:if((x[jvj+57]>0)) goto l35;
l4:x[jvj+48]=t[x[jvj+48]];
goto l2;
l35:x[jvj+31]=s[x[jvj+57]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+57];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+1; pile[WZ2]=jvj+32; 
(*f[760])( );     /*MEMEX0(jvj+31,jvj+1,jvj+32)*/
if((x[jvj+32]==135)) goto l36;
x[jvj+57]=t[x[jvj+57]];
goto l34;
l36:x[jvj+33]=0 ;z[jvj+33]=0;
x[jvj+58]=x[E] ;z[jvj+58]=z[E];
l37:if((x[jvj+58]>0)) goto l38;
x[jvj+4]=x[jvj+33] ;z[jvj+4]=z[jvj+33];
x[jvj+59]=x[EN] ;z[jvj+59]=z[EN];
l40:if((x[jvj+59]>0)) goto l41;
goto l4;
l38:x[jvj+34]=s[x[jvj+58]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+58];
if((x[jvj+34]==x[jvj+31])) goto l39;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+33,jvj+34)*/
l39:x[jvj+58]=t[x[jvj+58]];
goto l37;
l41:x[jvj+35]=s[x[jvj+59]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+59];
pile[v[22]]=jvj+35; pile[WZ1]=jvj+2; pile[WZ2]=jvj+36; 
(*f[760])( );     /*MEMEX0(jvj+35,jvj+2,jvj+36)*/
if((x[jvj+36]==135)) goto l42;
x[jvj+59]=t[x[jvj+59]];
goto l40;
l42:x[jvj+37]=0 ;z[jvj+37]=0;
x[jvj+60]=x[EN] ;z[jvj+60]=z[EN];
l43:if((x[jvj+60]>0)) goto l44;
x[jvj+5]=x[jvj+37] ;z[jvj+5]=z[jvj+37];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[4080])( );if(v[102]) goto l4;     /*MXDIVA1(jvj+4,jvj+5,NN,DD)*/
NN=pile[WZ2]; DD=pile[WZ3]; 
N=NN;
D=DD;
goto l32;
l44:x[jvj+38]=s[x[jvj+60]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+60];
if((x[jvj+38]==x[jvj+35])) goto l45;
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[68])( );     /*PLUE0(jvj+37,jvj+38)*/
l45:x[jvj+60]=t[x[jvj+60]];
goto l43;
l47:x[jvj+39]=s[x[jvj+61]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+61];
pile[v[22]]=jvj+39; pile[WZ1]=jvj+18; pile[WZ2]=jvj+40; 
(*f[760])( );     /*MEMEX0(jvj+39,jvj+18,jvj+40)*/
if((x[jvj+40]==135)) goto l48;
x[jvj+61]=t[x[jvj+61]];
goto l46;
l48:x[jvj+41]=0 ;z[jvj+41]=0;
x[jvj+62]=x[E] ;z[jvj+62]=z[E];
l49:if((x[jvj+62]>0)) goto l50;
x[jvj+20]=x[jvj+41] ;z[jvj+20]=z[jvj+41];
YY=x[jvj+19];
x[jvj+51]=x[EN] ;z[jvj+51]=z[EN];
goto l9;
l50:x[jvj+42]=s[x[jvj+62]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+62];
if((x[jvj+42]==x[jvj+39])) goto l51;
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[68])( );     /*PLUE0(jvj+41,jvj+42)*/
l51:x[jvj+62]=t[x[jvj+62]];
goto l49;
l53:x[jvj+43]=s[x[jvj+63]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+63];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+13; pile[WZ2]=jvj+44; 
(*f[760])( );     /*MEMEX0(jvj+43,jvj+13,jvj+44)*/
if((x[jvj+44]==135)) goto l54;
x[jvj+63]=t[x[jvj+63]];
goto l52;
l54:x[jvj+45]=0 ;z[jvj+45]=0;
x[jvj+64]=x[EN] ;z[jvj+64]=z[EN];
l55:if((x[jvj+64]>0)) goto l56;
x[jvj+21]=x[jvj+45] ;z[jvj+21]=z[jvj+45];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[4080])( );if(v[102]) goto l16;     /*MXDIVA1(jvj+20,jvj+21,V6,V7)*/
V6=pile[WZ2]; V7=pile[WZ3]; 
N=V6;
D=V7;
goto l32;
l56:x[jvj+46]=s[x[jvj+64]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+64];
if((x[jvj+46]==x[jvj+43])) goto l57;
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[68])( );     /*PLUE0(jvj+45,jvj+46)*/
l57:x[jvj+64]=t[x[jvj+64]];
goto l55;
}
