#include "dx.h"
void DEJAFAIT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V8=0,V24=0,V33=0,V34=0,V16=0,V17=0,V26=0,V28=0,V55=0,V54=0;
int P,B,N;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=10764;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==791&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; B=pile[v[22]+1]; N=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=x[jvj+28]=incon;
pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(935,B,jvj+2)*/
if((x[jvj+2]==1185)) goto l3;
l1:pile[v[22]]=860; pile[WZ1]=P; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(860,P,jvj+3)*/
if(x[jvj+3]==104||x[jvj+3]==368) goto l3;
l2:pile[v[22]]=109; pile[WZ1]=P; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(109,P,jvj+4)*/
pile[v[22]]=896; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(896,jvj+4,jvj+5)*/
if((x[jvj+5]!=0)) goto l3;
l50:pile[v[22]]=109; pile[WZ1]=P; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(109,P,jvj+42)*/
pile[v[22]]=983; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(983,jvj+42,jvj+43)*/
pile[v[22]]=878; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(878,jvj+43,jvj+44)*/
l51:if((x[jvj+44]<=0)) goto l13;
x[jvj+45]=s[x[jvj+44]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+44];
pile[v[22]]=163; pile[WZ1]=jvj+45; 
(*f[44])( );if(v[102]) goto l52;     /*FNDC1(163,jvj+45,V55)*/
V55=pile[WZ2]; 
pile[WZ1]=P; 
(*f[44])( );if(v[102]) goto l52;     /*FNDC1(163,P,V54)*/
V54=pile[WZ2]; 
if((V55==V54)) goto l52;
x[jvj+44]=t[x[jvj+44]];
goto l51;
l3:x[R]=67 ;z[R]=67;
goto l50;
l7:x[jvj+9]=t[x[jvj+9]];
l6:if((x[jvj+9]<=0)) goto l35;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=1110; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1110,jvj+10,V24)*/
V24=pile[WZ2]; 
if((V24!=1)) goto l7;
pile[v[22]]=698; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(698,jvj+10,jvj+33)*/
l31:if((x[jvj+32]<=0)) goto l35;
x[jvj+34]=s[x[jvj+32]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+32];
pile[v[22]]=683; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(683,jvj+34,V26)*/
V26=pile[WZ2]; 
if((V16!=V26)) goto l32;
pile[v[22]]=1049; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(1049,jvj+34,jvj+35)*/
x[jvj+47]=x[jvj+35] ;z[jvj+47]=z[jvj+35];
l33:if((x[jvj+47]<=0)) goto l32;
x[jvj+36]=s[x[jvj+47]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+47];
pile[v[22]]=jvj+36; pile[WZ1]=jvj+33; pile[WZ2]=jvj+37; 
(*f[760])( );     /*MEMEX0(jvj+36,jvj+33,jvj+37)*/
if((x[jvj+37]==135)) goto l34;
x[jvj+47]=t[x[jvj+47]];
goto l33;
l12:x[jvj+40]=x[jvj+11] ;z[jvj+40]=z[jvj+11];
l42:if(x[jvj+40]!=incon) goto l43;
l41:x[jvj+39]=t[x[jvj+39]];
l39:if((x[jvj+39]<=0)) goto l38;
V28=s[x[jvj+39]];
x[jvj+40]=incon;
if((V28!=944)) goto l11;
pile[v[22]]=1078; pile[WZ1]=jvj+11; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1078,jvj+11,jvj+16)*/
x[jvj+40]=x[jvj+16] ;z[jvj+40]=z[jvj+16];
l11:if(x[jvj+40]==incon) goto l12;
goto l42;
l14:pile[v[22]]=1051; pile[WZ1]=994; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1051,994,jvj+17)*/
l15:if((x[jvj+17]>0)) goto l16;
x[jvj+21]=x[N] ;z[jvj+21]=z[N];
l19:pile[v[22]]=120; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(120,jvj+21,jvj+22)*/
pile[v[22]]=698; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(698,jvj+22,jvj+23)*/
x[jvj+8]=x[jvj+23] ;z[jvj+8]=z[jvj+23];
pile[v[22]]=P; pile[WZ1]=jvj+8; pile[WZ2]=jvj+24; 
(*f[1143])( );     /*MEMEPB0(P,jvj+8,jvj+24)*/
if((x[jvj+24]==68)) goto l21;
l20:x[jvj+21]=x[jvj+22] ;z[jvj+21]=z[jvj+22];
goto l19;
l16:x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=1078; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1078,jvj+18,jvj+19)*/
pile[v[22]]=P; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[1143])( );     /*MEMEPB0(P,jvj+19,jvj+20)*/
if((x[jvj+20]==68)) goto l18;
l17:x[jvj+17]=t[x[jvj+17]];
goto l15;
l18:x[R]=68 ;z[R]=68;
l49:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l21:x[R]=68 ;z[R]=68;
x[jvj+6]=d[65];z[jvj+6]=0;
l4:if((x[jvj+6]<=0)) goto l22;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(jvj+7,P,V7)*/
V7=pile[WZ2]; 
pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(jvj+7,jvj+8,V8)*/
V8=pile[WZ2]; 
if((V7<=V8)) goto l5;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+7; pile[WZ2]=V7; 
(*f[43])( );     /*CHGC2(jvj+8,jvj+7,V7)*/
l5:x[jvj+6]=t[x[jvj+6]];
goto l4;
l22:if(x[R]==incon) goto l23;
l45:if(x[R]==incon) goto l46;
l48:if(x[R]!=incon) goto l49;
l47:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l23:if(x[jvj+28]!=incon) goto l24;
goto l45;
l24:pile[v[22]]=683; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(683,P,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=860; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(860,P,jvj+25)*/
if(x[jvj+25]!=301&&x[jvj+25]!=336&&x[jvj+25]!=1082) goto l29;
x[jvj+26]=d[71];z[jvj+26]=0;
l25:if((x[jvj+26]<=0)) goto l29;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(jvj+27,jvj+28,jvj+29)*/
x[jvj+46]=x[jvj+29] ;z[jvj+46]=z[jvj+29];
l26:if((x[jvj+46]>0)) goto l27;
x[jvj+26]=t[x[jvj+26]];
goto l25;
l27:x[jvj+30]=s[x[jvj+46]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+46];
pile[v[22]]=683; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(683,jvj+30,V17)*/
V17=pile[WZ2]; 
if((V16!=V17)) goto l28;
pile[v[22]]=860; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(860,jvj+30,jvj+31)*/
if((x[jvj+31]!=x[jvj+25])) goto l28;
x[R]=68 ;z[R]=68;
l29:if(x[R]==incon) goto l30;
l35:if(x[R]==incon) goto l36;
goto l45;
l28:x[jvj+46]=t[x[jvj+46]];
goto l26;
l30:if((x[jvj+25]!=1085)) goto l35;
pile[v[22]]=1251; pile[WZ1]=jvj+28; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(1251,jvj+28,jvj+32)*/
pile[v[22]]=1025; pile[WZ1]=P; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1025,P,jvj+9)*/
goto l6;
l32:x[jvj+32]=t[x[jvj+32]];
goto l31;
l34:x[R]=68 ;z[R]=68;
goto l35;
l36:pile[v[22]]=944; pile[WZ1]=jvj+28; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(944,jvj+28,jvj+38)*/
l37:if((x[jvj+38]<=0)) goto l45;
x[jvj+11]=s[x[jvj+38]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+38];
pile[v[22]]=935; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(935,jvj+11,jvj+12)*/
if(x[jvj+12]==547||x[jvj+12]==325||x[jvj+12]==1000||x[jvj+12]==1041) goto l40;
l8:pile[v[22]]=1078; pile[WZ1]=jvj+11; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(1078,jvj+11,jvj+13)*/
x[jvj+14]=d[65];z[jvj+14]=0;
l9:if((x[jvj+14]<=0)) goto l40;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(jvj+15,P,V33)*/
V33=pile[WZ2]; 
pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(jvj+15,jvj+13,V34)*/
V34=pile[WZ2]; 
if(V33>((V34*11)/10)+2) goto l38;
l10:x[jvj+14]=t[x[jvj+14]];
goto l9;
l38:x[jvj+38]=t[x[jvj+38]];
goto l37;
l40:x[jvj+39]=d[19];z[jvj+39]=0;
goto l39;
l43:pile[v[22]]=P; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[1143])( );     /*MEMEPB0(P,jvj+40,jvj+41)*/
if((x[jvj+41]==68)) goto l44;
goto l41;
l44:x[R]=68 ;z[R]=68;
goto l45;
l46:x[R]=67 ;z[R]=67;
goto l48;
l52:x[jvj+28]=x[jvj+45] ;z[jvj+28]=z[jvj+45];
l13:if(x[R]==incon) goto l14;
goto l49;
}
