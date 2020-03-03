#include "dx.h"
void TRINOMERIG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NK=0,V17=0,V33=0;
int Z;
int A,B,C,RES;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=69;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; C=pile[v[22]+3]; RES=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=incon;
pile[v[22]]=68; pile[WZ1]=158; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(68,158,jvj+14)*/
pile[v[22]]=129; pile[WZ1]=Z; pile[WZ2]=jvj+1; 
(*f[1157])( );if(v[102]) goto l1;     /*NORME1(129,Z,jvj+1)*/
l1:if(x[jvj+1]!=incon) goto l2;
l19:pile[v[22]]=jvj+14; pile[WZ1]=158; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+14,158,12)*/
l20:x[jvj+40]=incon;
pile[v[22]]=447; pile[WZ1]=jvj+14; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(447,jvj+14,jvj+31)*/
x[jvj+40]=x[jvj+31] ;z[jvj+40]=z[jvj+31];
l21:x[jvj+41]=incon;
pile[v[22]]=459; pile[WZ1]=jvj+14; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(459,jvj+14,jvj+32)*/
x[jvj+41]=x[jvj+32] ;z[jvj+41]=z[jvj+32];
l22:x[jvj+42]=incon;
pile[v[22]]=475; pile[WZ1]=jvj+14; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(475,jvj+14,jvj+33)*/
x[jvj+42]=x[jvj+33] ;z[jvj+42]=z[jvj+33];
l23:x[A]=x[jvj+40] ;z[A]=z[jvj+40];
x[B]=x[jvj+41] ;z[B]=z[jvj+41];
x[C]=x[jvj+42] ;z[C]=z[jvj+42];
pile[v[22]]=158; pile[WZ1]=jvj+14; pile[WZ2]=RES; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(158,jvj+14,RES)*/
v[0]=jvj; v[22]-=5; v[102]=0;return;
l2:pile[v[22]]=jvj+1; 
(*f[981])( );if(v[102]) goto l19;     /*CPTVAR0(jvj+1,NK)*/
NK=pile[WZ1]; 
if((NK>0)) goto l8;
if((NK!=0)) goto l19;
pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+18)*/
pile[v[22]]=jvj+14; pile[WZ1]=475; pile[WZ2]=jvj+18; 
(*f[35])( );     /*CHGC1(jvj+14,475,jvj+18)*/
goto l20;
l4:x[jvj+2]=s[x[jvj+56]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+56];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+3)*/
x[jvj+56]=t[x[jvj+56]];
l3:if((x[jvj+56]>0)) goto l4;
x[jvj+6]=incon;
for(i=x[jvj+57],V17=0;i>0;i=t[i],V17++)  ;
if((V17!=1)) goto l29;
if((x[jvj+57]<=0)) goto l29;
x[jvj+5]=s[x[jvj+57]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+57];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
l13:pile[v[22]]=jvj+14; pile[WZ1]=459; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+14,459,jvj+6)*/
goto l20;
l6:x[jvj+7]=s[x[jvj+58]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+58];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+8)*/
x[jvj+58]=t[x[jvj+58]];
l5:if((x[jvj+58]>0)) goto l6;
x[jvj+11]=incon;
if((V33==0)) goto l25;
if((V33!=1)) goto l30;
if((x[jvj+59]<=0)) goto l30;
x[jvj+10]=s[x[jvj+59]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+59];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
l18:pile[v[22]]=jvj+14; pile[WZ1]=447; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(jvj+14,447,jvj+11)*/
goto l20;
l8:pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+1,jvj+15)*/
if((x[jvj+15]!=22)) goto l9;
pile[v[22]]=111; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+1,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=485)) goto l9;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+12)*/
l7:if((x[jvj+12]<=0)) goto l20;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; pile[WZ2]=67; 
(*f[1900])( );     /*TRINOMERIG1(jvj+13,jvj+14,67)*/
x[jvj+12]=t[x[jvj+12]];
goto l7;
l9:if((NK==1)) goto l10;
if((NK!=2)) goto l19;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+1,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=486)) goto l19;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+26)*/
x[jvj+61]=x[jvj+26] ;z[jvj+61]=z[jvj+26];
l14:if((x[jvj+61]<=0)) goto l19;
x[jvj+27]=s[x[jvj+61]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+61];
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=484)) goto l15;
x[jvj+48]=x[jvj+27] ;z[jvj+48]=z[jvj+27];
x[jvj+65]=x[jvj+26] ;z[jvj+65]=z[jvj+26];
l37:if((x[jvj+65]>0)) goto l38;
l15:x[jvj+61]=t[x[jvj+61]];
goto l14;
l10:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+1,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=486)) goto l19;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+21)*/
x[jvj+60]=x[jvj+21] ;z[jvj+60]=z[jvj+21];
l11:if((x[jvj+60]<=0)) goto l19;
x[jvj+22]=s[x[jvj+60]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+60];
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=484)) goto l12;
x[jvj+63]=x[jvj+21] ;z[jvj+63]=z[jvj+21];
l31:if((x[jvj+63]>0)) goto l32;
l12:x[jvj+60]=t[x[jvj+60]];
goto l11;
l24:x[A]=x[B]=x[C]=x[RES]=incon;
v[0]=jvj; v[22]-=5; v[102]=1;return;
l25:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+11)*/
goto l18;
l26:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+40)*/
goto l21;
l27:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+41; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+41)*/
goto l22;
l28:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+42)*/
goto l23;
l29:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+36; 
(*f[301])( );     /*TRI11(jvj+35,jvj+4,107,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+36,22,100,jvj+6)*/
goto l13;
l30:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+9; pile[WZ2]=107; pile[WZ3]=jvj+39; 
(*f[301])( );     /*TRI11(jvj+38,jvj+9,107,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+39,22,100,jvj+11)*/
goto l18;
l32:x[jvj+43]=s[x[jvj+63]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+63];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+22; pile[WZ2]=jvj+44; 
(*f[760])( );     /*MEMEX0(jvj+43,jvj+22,jvj+44)*/
if((x[jvj+44]==135)) goto l33;
x[jvj+63]=t[x[jvj+63]];
goto l31;
l33:x[jvj+45]=0 ;z[jvj+45]=0;
x[jvj+64]=x[jvj+21] ;z[jvj+64]=z[jvj+21];
l34:if((x[jvj+64]>0)) goto l35;
x[jvj+57]=x[jvj+45] ;z[jvj+57]=z[jvj+45];
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+56]=x[jvj+57] ;z[jvj+56]=z[jvj+57];
goto l3;
l35:x[jvj+46]=s[x[jvj+64]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+64];
if((x[jvj+46]==x[jvj+43])) goto l36;
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[68])( );     /*PLUE0(jvj+45,jvj+46)*/
l36:x[jvj+64]=t[x[jvj+64]];
goto l34;
l38:x[jvj+47]=s[x[jvj+65]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+65];
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[760])( );     /*MEMEX0(jvj+47,jvj+48,jvj+49)*/
if((x[jvj+49]==135)) goto l39;
x[jvj+65]=t[x[jvj+65]];
goto l37;
l39:x[jvj+50]=0 ;z[jvj+50]=0;
x[jvj+66]=x[jvj+26] ;z[jvj+66]=z[jvj+26];
l40:if((x[jvj+66]>0)) goto l41;
x[jvj+69]=x[jvj+50] ;z[jvj+69]=z[jvj+50];
x[jvj+62]=x[jvj+26] ;z[jvj+62]=z[jvj+26];
l16:if((x[jvj+62]<=0)) goto l15;
x[jvj+29]=s[x[jvj+62]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+62];
if((x[jvj+27]==x[jvj+29])) goto l17;
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]!=484)) goto l17;
x[jvj+67]=x[jvj+69] ;z[jvj+67]=z[jvj+69];
l43:if((x[jvj+67]>0)) goto l44;
l17:x[jvj+62]=t[x[jvj+62]];
goto l16;
l41:x[jvj+51]=s[x[jvj+66]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+66];
if((x[jvj+51]==x[jvj+47])) goto l42;
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; 
(*f[68])( );     /*PLUE0(jvj+50,jvj+51)*/
l42:x[jvj+66]=t[x[jvj+66]];
goto l40;
l44:x[jvj+52]=s[x[jvj+67]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+67];
pile[v[22]]=jvj+52; pile[WZ1]=jvj+29; pile[WZ2]=jvj+53; 
(*f[760])( );     /*MEMEX0(jvj+52,jvj+29,jvj+53)*/
if((x[jvj+53]==135)) goto l45;
x[jvj+67]=t[x[jvj+67]];
goto l43;
l45:x[jvj+54]=0 ;z[jvj+54]=0;
x[jvj+68]=x[jvj+69] ;z[jvj+68]=z[jvj+69];
l46:if((x[jvj+68]>0)) goto l47;
x[jvj+59]=x[jvj+54] ;z[jvj+59]=z[jvj+54];
for(i=x[jvj+59],V33=0;i>0;i=t[i],V33++)  ;
x[jvj+9]=0 ;z[jvj+9]=0;
x[jvj+58]=x[jvj+59] ;z[jvj+58]=z[jvj+59];
goto l5;
l47:x[jvj+55]=s[x[jvj+68]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+68];
if((x[jvj+55]==x[jvj+52])) goto l48;
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; 
(*f[68])( );     /*PLUE0(jvj+54,jvj+55)*/
l48:x[jvj+68]=t[x[jvj+68]];
goto l46;
}
