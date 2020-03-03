#include "dx.h"
void ATOME77T4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V45=0,V5=0,V47=0,V49=0,V51=0,V28=0,V29=0,V57=0,V32=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=60;
x[jvj+1]=20077;z[jvj+1]=(-100);
x[jvj+2]=4;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3397&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[R]==x[RR])) goto l45;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(100,R,jvj+20)*/
if((x[jvj+20]!=22)) goto l45;
pile[WZ1]=RR; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(100,RR,jvj+21)*/
if((x[jvj+21]!=22)) goto l45;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(111,R,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(101,jvj+22,jvj+23)*/
if(x[jvj+23]!=25&&x[jvj+23]!=30) goto l45;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(111,RR,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(101,jvj+24,jvj+25)*/
if(x[jvj+25]!=25&&x[jvj+25]!=30) goto l45;
x[jvj+52]=incon;
if((x[jvj+23]!=25)) goto l24;
if((x[jvj+25]!=25)) goto l24;
x[jvj+52]=25 ;z[jvj+52]=25;
l42:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,R,jvj+26)*/
pile[v[22]]=103; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(103,R,jvj+27)*/
pile[v[22]]=102; pile[WZ1]=RR; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,RR,jvj+28)*/
pile[v[22]]=103; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(103,RR,jvj+29)*/
x[jvj+30]=vo[14];z[jvj+30]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(642,jvj+30,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1006,R,jvj+3)*/
pile[WZ1]=RR; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,RR,jvj+4)*/
l2:if((x[jvj+3]>0)) goto l3;
x[jvj+15]=0 ;z[jvj+15]=0;
pile[v[22]]=R; pile[WZ1]=jvj+13; 
(*f[887])( );     /*VARND0(R,jvj+13)*/
pile[v[22]]=RR; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(RR,jvj+14)*/
l33:if((x[jvj+13]>0)) goto l34;
for(i=x[jvj+15],V32=0;i>0;i=t[i],V32++)  ;
if((V32<4)) goto l45;
pile[v[22]]=jvj+26; pile[WZ1]=jvj+31; 
(*f[893])( );     /*SM0(jvj+26,jvj+31)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+32; 
(*f[893])( );     /*SM0(jvj+27,jvj+32)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+33; 
(*f[893])( );     /*SM0(jvj+28,jvj+33)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+34; 
(*f[893])( );     /*SM0(jvj+29,jvj+34)*/
V5=incon;
if((x[jvj+31]==0)) goto l21;
if((x[jvj+33]==0)) goto l20;
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+60]=x[jvj+31] ;z[jvj+60]=z[jvj+31];
l4:if((x[jvj+60]>0)) goto l5;
for(i=x[jvj+5],V45=0;i>0;i=t[i],V45++)  ;
if((V45<4)) goto l20;
V5=1;
l20:if((x[jvj+34]==0)) goto l21;
x[jvj+7]=0 ;z[jvj+7]=0;
l8:if((x[jvj+31]>0)) goto l9;
for(i=x[jvj+7],V47=0;i>0;i=t[i],V47++)  ;
if((V47<4)) goto l21;
V5=2;
l21:if((x[jvj+32]==0)) goto l23;
if((x[jvj+33]==0)) goto l22;
x[jvj+9]=0 ;z[jvj+9]=0;
l12:if((x[jvj+33]>0)) goto l13;
for(i=x[jvj+9],V49=0;i>0;i=t[i],V49++)  ;
if((V49<4)) goto l22;
V5=2;
l22:if((x[jvj+34]==0)) goto l23;
x[jvj+11]=0 ;z[jvj+11]=0;
l16:if((x[jvj+32]>0)) goto l17;
for(i=x[jvj+11],V51=0;i>0;i=t[i],V51++)  ;
if((V51<4)) goto l23;
V5=1;
l1:if((V5!=1)) goto l25;
if((x[jvj+23]!=30)) goto l25;
if((x[jvj+25]==30)) goto l45;
l25:x[jvj+37]=incon;
if((V5!=1)) goto l26;
if((x[jvj+23]!=25)) goto l26;
if((x[jvj+25]!=30)) goto l26;
x[jvj+37]=x[jvj+27] ;z[jvj+37]=z[jvj+27];
l27:x[jvj+39]=incon;
if((V5!=1)) goto l28;
if((x[jvj+25]!=25)) goto l28;
if(x[jvj+23]!=25&&x[jvj+23]!=30) goto l28;
x[jvj+39]=x[jvj+29] ;z[jvj+39]=z[jvj+29];
l29:x[jvj+41]=incon;
if((V5!=1)) goto l30;
if((x[jvj+23]!=25)) goto l30;
if((x[jvj+25]!=30)) goto l30;
x[jvj+41]=x[jvj+26] ;z[jvj+41]=z[jvj+26];
l31:x[jvj+43]=incon;
if((V5!=1)) goto l32;
if((x[jvj+25]!=25)) goto l32;
if(x[jvj+23]!=25&&x[jvj+23]!=30) goto l32;
x[jvj+43]=x[jvj+28] ;z[jvj+43]=z[jvj+28];
l37:x[jvj+18]=0 ;z[jvj+18]=0;
pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1006,R,jvj+17)*/
l38:if((x[jvj+17]>0)) goto l39;
pile[v[22]]=1006; pile[WZ1]=RR; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1006,RR,jvj+19)*/
l40:if((x[jvj+19]>0)) goto l41;
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(1294,R,jvj+35)*/
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==1492) goto l43;
l45:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l3:I=s[x[jvj+3]];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==I) goto l45;
x[jvj+3]=t[x[jvj+3]];
goto l2;
l5:x[jvj+6]=s[x[jvj+60]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+60];
for(a=x[jvj+33];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l7;
l6:x[jvj+60]=t[x[jvj+60]];
goto l4;
l7:pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+6)*/
goto l6;
l9:x[jvj+8]=s[x[jvj+31]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+31];
for(a=x[jvj+34];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l11;
l10:x[jvj+31]=t[x[jvj+31]];
goto l8;
l11:pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+8)*/
goto l10;
l13:x[jvj+10]=s[x[jvj+33]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+33];
for(a=x[jvj+32];a>0;a=t[a]) if(s[a]==x[jvj+10]) goto l15;
l14:x[jvj+33]=t[x[jvj+33]];
goto l12;
l15:pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+10)*/
goto l14;
l17:x[jvj+12]=s[x[jvj+32]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+32];
for(a=x[jvj+34];a>0;a=t[a]) if(s[a]==x[jvj+12]) goto l19;
l18:x[jvj+32]=t[x[jvj+32]];
goto l16;
l19:pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+12)*/
goto l18;
l23:if(V5==incon) goto l45;
if((V5!=(-99999998))) goto l1;
goto l45;
l24:x[jvj+52]=30 ;z[jvj+52]=30;
goto l42;
l26:x[jvj+37]=x[jvj+26] ;z[jvj+37]=z[jvj+26];
goto l27;
l28:x[jvj+39]=x[jvj+28] ;z[jvj+39]=z[jvj+28];
goto l29;
l30:x[jvj+41]=x[jvj+27] ;z[jvj+41]=z[jvj+27];
goto l31;
l32:x[jvj+43]=x[jvj+29] ;z[jvj+43]=z[jvj+29];
goto l37;
l34:x[jvj+16]=s[x[jvj+13]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+13];
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==x[jvj+16]) goto l36;
l35:x[jvj+13]=t[x[jvj+13]];
goto l33;
l36:pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+16)*/
goto l35;
l39:V28=s[x[jvj+17]];
pile[v[22]]=jvj+18; pile[WZ1]=V28; 
(*f[207])( );     /*PLUE2(jvj+18,V28)*/
x[jvj+17]=t[x[jvj+17]];
goto l38;
l41:V29=s[x[jvj+19]];
pile[v[22]]=jvj+18; pile[WZ1]=V29; 
(*f[207])( );     /*PLUE2(jvj+18,V29)*/
x[jvj+19]=t[x[jvj+19]];
goto l40;
l43:pile[v[22]]=1294; pile[WZ1]=RR; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(1294,RR,jvj+36)*/
for(a=x[jvj+36];a>0;a=t[a]) if(s[a]==1492) goto l44;
goto l45;
l44:pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(jvj+37,jvj+38)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[255])( );     /*COPEXP0(jvj+39,jvj+40)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[255])( );     /*COPEXP0(jvj+41,jvj+42)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(jvj+43,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+52; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+52,jvj+47)*/
pile[WZ3]=485; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+53)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+53; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+53,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=107; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+51,107,jvj+38)*/
pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+51,107,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+54)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+54; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+54,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=107; pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(jvj+49,107,jvj+42)*/
pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+49,107,jvj+44)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; pile[WZ2]=103; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+48,jvj+49,103,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+51; pile[WZ4]=jvj+50; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+51,jvj+50,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=1006; pile[WZ2]=jvj+18; 
(*f[34])( );     /*CHGC0(jvj+45,1006,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+58)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+59; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+59)*/
pile[v[22]]=V57; pile[WZ1]=858; pile[WZ2]=jvj+55; 
(*f[46])( );     /*TRI0(V57,858,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+56; 
(*f[189])( );     /*TRI4(jvj+55,v[13],642,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=3397; pile[WZ2]=246; pile[WZ3]=jvj+57; 
(*f[189])( );     /*TRI4(jvj+56,3397,246,jvj+57)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20077; pile[WZ4]=jvj+57; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(158,1,218,20077,jvj+57,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=159; pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+46,159,jvj+58)*/
pile[WZ2]=jvj+59; 
(*f[36])( );     /*PLUSC0(jvj+46,159,jvj+59)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[1296])( );     /*NOUVCONTR0(jvj+45,jvj+46)*/
goto l45;
}
