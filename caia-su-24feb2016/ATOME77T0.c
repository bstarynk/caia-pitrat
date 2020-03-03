#include "dx.h"
void ATOME77T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V49=0,V5=0,V51=0,V53=0,V55=0,V30=0,V31=0,V61=0,V34=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=63;
x[jvj+1]=20077;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3176&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[R]==x[RR])) goto l50;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,R,jvj+19)*/
if((x[jvj+19]!=22)) goto l50;
pile[WZ1]=RR; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,RR,jvj+20)*/
if((x[jvj+20]!=22)) goto l50;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,R,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+21,jvj+22)*/
if(x[jvj+22]!=25&&x[jvj+22]!=30) goto l50;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,RR,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+23,jvj+24)*/
if(x[jvj+24]!=25&&x[jvj+24]!=30) goto l50;
x[jvj+55]=incon;
if((x[jvj+22]!=25)) goto l24;
if((x[jvj+24]!=25)) goto l24;
x[jvj+55]=25 ;z[jvj+55]=25;
l42:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,R,jvj+25)*/
pile[v[22]]=103; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(103,R,jvj+26)*/
pile[v[22]]=102; pile[WZ1]=RR; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,RR,jvj+27)*/
pile[v[22]]=103; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(103,RR,jvj+28)*/
x[jvj+29]=vo[14];z[jvj+29]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(642,jvj+29,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1006,R,jvj+2)*/
pile[WZ1]=RR; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1006,RR,jvj+3)*/
l2:if((x[jvj+2]>0)) goto l3;
x[jvj+14]=0 ;z[jvj+14]=0;
pile[v[22]]=R; pile[WZ1]=jvj+12; 
(*f[887])( );     /*VARND0(R,jvj+12)*/
pile[v[22]]=RR; pile[WZ1]=jvj+13; 
(*f[887])( );     /*VARND0(RR,jvj+13)*/
l33:if((x[jvj+12]>0)) goto l34;
for(i=x[jvj+14],V34=0;i>0;i=t[i],V34++)  ;
if((V34<4)) goto l50;
pile[v[22]]=R; pile[WZ1]=jvj+30; 
(*f[887])( );     /*VARND0(R,jvj+30)*/
pile[v[22]]=RR; pile[WZ1]=jvj+31; 
(*f[887])( );     /*VARND0(RR,jvj+31)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+32; 
(*f[893])( );     /*SM0(jvj+25,jvj+32)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+33; 
(*f[893])( );     /*SM0(jvj+26,jvj+33)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+34; 
(*f[893])( );     /*SM0(jvj+27,jvj+34)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+35; 
(*f[893])( );     /*SM0(jvj+28,jvj+35)*/
V5=incon;
if((x[jvj+32]==0)) goto l21;
if((x[jvj+34]==0)) goto l20;
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+63]=x[jvj+32] ;z[jvj+63]=z[jvj+32];
l4:if((x[jvj+63]>0)) goto l5;
for(i=x[jvj+4],V49=0;i>0;i=t[i],V49++)  ;
if((V49<4)) goto l20;
V5=1;
l20:if((x[jvj+35]==0)) goto l21;
x[jvj+6]=0 ;z[jvj+6]=0;
l8:if((x[jvj+32]>0)) goto l9;
for(i=x[jvj+6],V51=0;i>0;i=t[i],V51++)  ;
if((V51<4)) goto l21;
V5=2;
l21:if((x[jvj+33]==0)) goto l23;
if((x[jvj+34]==0)) goto l22;
x[jvj+8]=0 ;z[jvj+8]=0;
l12:if((x[jvj+34]>0)) goto l13;
for(i=x[jvj+8],V53=0;i>0;i=t[i],V53++)  ;
if((V53<4)) goto l22;
V5=2;
l22:if((x[jvj+35]==0)) goto l23;
x[jvj+10]=0 ;z[jvj+10]=0;
l16:if((x[jvj+33]>0)) goto l17;
for(i=x[jvj+10],V55=0;i>0;i=t[i],V55++)  ;
if((V55<4)) goto l23;
V5=1;
l1:if((V5!=1)) goto l25;
if((x[jvj+22]!=30)) goto l25;
if((x[jvj+24]==30)) goto l50;
l25:x[jvj+38]=incon;
if((V5!=1)) goto l26;
if((x[jvj+22]!=25)) goto l26;
if((x[jvj+24]!=30)) goto l26;
x[jvj+38]=x[jvj+26] ;z[jvj+38]=z[jvj+26];
l27:x[jvj+40]=incon;
if((V5!=1)) goto l28;
if((x[jvj+24]!=25)) goto l28;
if(x[jvj+22]!=25&&x[jvj+22]!=30) goto l28;
x[jvj+40]=x[jvj+28] ;z[jvj+40]=z[jvj+28];
l29:x[jvj+42]=incon;
if((V5!=1)) goto l30;
if((x[jvj+22]!=25)) goto l30;
if((x[jvj+24]!=30)) goto l30;
x[jvj+42]=x[jvj+25] ;z[jvj+42]=z[jvj+25];
l31:x[jvj+44]=incon;
if((V5!=1)) goto l32;
if((x[jvj+24]!=25)) goto l32;
if(x[jvj+22]!=25&&x[jvj+22]!=30) goto l32;
x[jvj+44]=x[jvj+27] ;z[jvj+44]=z[jvj+27];
l37:x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1006,R,jvj+16)*/
l38:if((x[jvj+16]>0)) goto l39;
pile[v[22]]=1006; pile[WZ1]=RR; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1006,RR,jvj+18)*/
l40:if((x[jvj+18]>0)) goto l41;
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(1294,R,jvj+36)*/
for(a=x[jvj+36];a>0;a=t[a]) if(s[a]==1492) goto l43;
l50:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l3:I=s[x[jvj+2]];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==I) goto l50;
x[jvj+2]=t[x[jvj+2]];
goto l2;
l5:x[jvj+5]=s[x[jvj+63]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+63];
for(a=x[jvj+34];a>0;a=t[a]) if(s[a]==x[jvj+5]) goto l7;
l6:x[jvj+63]=t[x[jvj+63]];
goto l4;
l7:pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
goto l6;
l9:x[jvj+7]=s[x[jvj+32]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+32];
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==x[jvj+7]) goto l11;
l10:x[jvj+32]=t[x[jvj+32]];
goto l8;
l11:pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
goto l10;
l13:x[jvj+9]=s[x[jvj+34]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+34];
for(a=x[jvj+33];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l15;
l14:x[jvj+34]=t[x[jvj+34]];
goto l12;
l15:pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+9)*/
goto l14;
l17:x[jvj+11]=s[x[jvj+33]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+33];
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==x[jvj+11]) goto l19;
l18:x[jvj+33]=t[x[jvj+33]];
goto l16;
l19:pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+11)*/
goto l18;
l23:if(V5==incon) goto l50;
if((V5!=(-99999998))) goto l1;
goto l50;
l24:x[jvj+55]=30 ;z[jvj+55]=30;
goto l42;
l26:x[jvj+38]=x[jvj+25] ;z[jvj+38]=z[jvj+25];
goto l27;
l28:x[jvj+40]=x[jvj+27] ;z[jvj+40]=z[jvj+27];
goto l29;
l30:x[jvj+42]=x[jvj+26] ;z[jvj+42]=z[jvj+26];
goto l31;
l32:x[jvj+44]=x[jvj+28] ;z[jvj+44]=z[jvj+28];
goto l37;
l34:x[jvj+15]=s[x[jvj+12]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+12];
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==x[jvj+15]) goto l36;
l35:x[jvj+12]=t[x[jvj+12]];
goto l33;
l36:pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+15)*/
goto l35;
l39:V30=s[x[jvj+16]];
pile[v[22]]=jvj+17; pile[WZ1]=V30; 
(*f[207])( );     /*PLUE2(jvj+17,V30)*/
x[jvj+16]=t[x[jvj+16]];
goto l38;
l41:V31=s[x[jvj+18]];
pile[v[22]]=jvj+17; pile[WZ1]=V31; 
(*f[207])( );     /*PLUE2(jvj+17,V31)*/
x[jvj+18]=t[x[jvj+18]];
goto l40;
l43:pile[v[22]]=1294; pile[WZ1]=RR; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(1294,RR,jvj+37)*/
for(a=x[jvj+37];a>0;a=t[a]) if(s[a]==1492) goto l44;
goto l50;
l44:pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[255])( );     /*COPEXP0(jvj+38,jvj+39)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+41)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[255])( );     /*COPEXP0(jvj+42,jvj+43)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(jvj+44,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+55; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+55,jvj+50)*/
pile[WZ3]=485; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+56)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+56; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+56,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=107; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+54,107,jvj+39)*/
pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+54,107,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+57)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+57; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+57,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=107; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+52,107,jvj+43)*/
pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+52,107,jvj+45)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; pile[WZ2]=103; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+51,jvj+52,103,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+53; pile[WZ5]=jvj+48; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+54,jvj+53,jvj+48)*/
l45:if((x[jvj+30]<=0)) goto l50;
x[jvj+46]=s[x[jvj+30]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+30];
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==x[jvj+46]) goto l47;
l46:x[jvj+30]=t[x[jvj+30]];
goto l45;
l47:pile[v[22]]=509; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[1969])( );     /*FNDEND0(509,jvj+46,jvj+47)*/
for(a=x[jvj+47];a>0;a=t[a]) if(s[a]==x[R]) goto l48;
goto l46;
l48:for(a=x[jvj+47];a>0;a=t[a]) if(s[a]==x[RR]) goto l49;
goto l46;
l49:pile[v[22]]=jvj+48; pile[WZ1]=1006; pile[WZ2]=jvj+17; 
(*f[34])( );     /*CHGC0(jvj+48,1006,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+61; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+61)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+62; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+62)*/
pile[v[22]]=V61; pile[WZ1]=858; pile[WZ2]=jvj+58; 
(*f[46])( );     /*TRI0(V61,858,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+59; 
(*f[189])( );     /*TRI4(jvj+58,v[13],642,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=3176; pile[WZ2]=246; pile[WZ3]=jvj+60; 
(*f[189])( );     /*TRI4(jvj+59,3176,246,jvj+60)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20077; pile[WZ4]=jvj+60; pile[WZ5]=jvj+49; 
(*f[269])( );     /*QUADRI6(158,1,218,20077,jvj+60,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=159; pile[WZ2]=jvj+61; 
(*f[36])( );     /*PLUSC0(jvj+49,159,jvj+61)*/
pile[WZ2]=jvj+62; 
(*f[36])( );     /*PLUSC0(jvj+49,159,jvj+62)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[1296])( );     /*NOUVCONTR0(jvj+48,jvj+49)*/
goto l46;
}
