#include "dx.h"
void ETUCONTRBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V7=0,V54=0,V34=0,V35=0,V26=0,I=0,V61=0,V60=0,V17=0,V53=0,C=0,V=0,D=0,V20=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=10593;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1928&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,R,jvj+15)*/
if((x[jvj+15]!=22)) goto l30;
pile[v[22]]=111; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,R,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+16,jvj+17)*/
pile[v[22]]=R; pile[WZ1]=jvj+18; 
(*f[887])( );     /*VARND0(R,jvj+18)*/
for(i=x[jvj+18],V7=0;i>0;i=t[i],V7++)  ;
pile[v[22]]=0; pile[WZ1]=1274; pile[WZ2]=jvj+38; 
(*f[46])( );     /*TRI0(0,1274,jvj+38)*/
pile[v[22]]=868; pile[WZ1]=jvj+17; pile[WZ2]=870; pile[WZ3]=V7; pile[WZ4]=jvj+38; pile[WZ5]=jvj+2; 
(*f[47])( );     /*QUADRI0(868,jvj+17,870,V7,jvj+38,jvj+2)*/
pile[v[22]]=R; pile[WZ1]=jvj+2; pile[WZ2]=0; 
(*f[2050])( );     /*TRVFONC0(R,jvj+2,0)*/
pile[v[22]]=1101; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(1101,R,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=1101; pile[WZ2]=V8; 
(*f[43])( );     /*CHGC2(jvj+2,1101,V8)*/
l9:pile[v[22]]=R; pile[WZ1]=1587; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(R,1587,jvj+2)*/
if((x[jvj+17]==25)) goto l14;
if((x[jvj+17]==625)) goto l17;
if((x[jvj+17]!=1280)) goto l18;
pile[v[22]]=870; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(870,jvj+2,V61)*/
V61=pile[WZ2]; 
if((V61!=1)) goto l18;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,R,jvj+26)*/
pile[v[22]]=130; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+26,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=1589; pile[WZ2]=V60; 
(*f[43])( );     /*CHGC2(jvj+2,1589,V60)*/
l18:if(x[jvj+17]!=55&&x[jvj+17]!=48) goto l27;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,R,jvj+27)*/
l19:if((x[jvj+27]<=0)) goto l27;
x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=jvj+28; 
(*f[1928])( );     /*ETUCONTRBIS0(jvj+28)*/
x[jvj+27]=t[x[jvj+27]];
goto l19;
l4:x[jvj+39]=t[x[jvj+39]];
l3:if((x[jvj+39]<=0)) goto l8;
x[jvj+6]=s[x[jvj+39]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+39];
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]==41)) goto l4;
l2:pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+6,jvj+8)*/
if((x[jvj+8]==484)) goto l4;
l31:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l7:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+13,R,jvj+14)*/
x[jvj+3]=x[jvj+14] ;z[jvj+3]=z[jvj+14];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]==41)) goto l8;
l1:pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+3,jvj+5)*/
if((x[jvj+5]==484)) goto l8;
l5:pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+3,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=486)) goto l31;
pile[v[22]]=107; pile[WZ1]=jvj+3; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,jvj+3,jvj+11)*/
x[jvj+39]=x[jvj+11] ;z[jvj+39]=z[jvj+11];
goto l3;
l8:x[jvj+12]=t[x[jvj+12]];
l6:if((x[jvj+12]>0)) goto l7;
pile[v[22]]=R; pile[WZ1]=1588; pile[WZ2]=1340; 
(*f[36])( );     /*PLUSC0(R,1588,1340)*/
goto l31;
l12:V54=s[x[jvj+20]];
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==V54) goto l13;
goto l18;
l13:x[jvj+20]=t[x[jvj+20]];
l11:if((x[jvj+20]>0)) goto l12;
pile[v[22]]=jvj+2; pile[WZ1]=1588; pile[WZ2]=1327; 
(*f[36])( );     /*PLUSC0(jvj+2,1588,1327)*/
goto l18;
l14:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,R,jvj+21)*/
pile[v[22]]=103; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,R,jvj+22)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+23; 
(*f[898])( );if(v[102]) goto l10;     /*DEPH0(jvj+21,jvj+23)*/
if((x[jvj+23]==135)) goto l15;
l10:pile[v[22]]=763; pile[WZ1]=769; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(763,769,jvj+19)*/
pile[v[22]]=1300; pile[WZ1]=jvj+2; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(1300,jvj+2,jvj+20)*/
goto l11;
l15:pile[v[22]]=jvj+22; pile[WZ1]=jvj+24; 
(*f[898])( );if(v[102]) goto l10;     /*DEPH0(jvj+22,jvj+24)*/
if((x[jvj+24]==135)) goto l16;
goto l10;
l16:pile[v[22]]=jvj+21; 
(*f[897])( );if(v[102]) goto l10;     /*DGR0(jvj+21,V34)*/
V34=pile[WZ1]; 
pile[v[22]]=jvj+22; 
(*f[897])( );if(v[102]) goto l10;     /*DGR0(jvj+22,V35)*/
V35=pile[WZ1]; 
if((V34!=V35)) goto l10;
pile[v[22]]=jvj+2; pile[WZ1]=1588; pile[WZ2]=1105; 
(*f[36])( );     /*PLUSC0(jvj+2,1588,1105)*/
goto l10;
l17:pile[v[22]]=870; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(870,jvj+2,V26)*/
V26=pile[WZ2]; 
if((V26!=1)) goto l18;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(160,R,jvj+25)*/
pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+25,I)*/
I=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=1181; pile[WZ2]=I; 
(*f[43])( );     /*CHGC2(jvj+2,1181,I)*/
goto l18;
l21:V17=s[x[jvj+30]];
for(a=x[jvj+29];a>0;a=t[a]) if(s[a]==V17) goto l22;
l30:pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,R,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+37]!=25)) goto l31;
x[jvj+12]=d[20];z[jvj+12]=0;
goto l6;
l22:x[jvj+30]=t[x[jvj+30]];
l20:if((x[jvj+30]>0)) goto l21;
pile[v[22]]=1300; pile[WZ1]=jvj+2; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(1300,jvj+2,jvj+31)*/
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==486) goto l29;
pile[v[22]]=jvj+2; pile[WZ1]=1588; pile[WZ2]=1142; 
(*f[36])( );     /*PLUSC0(jvj+2,1588,1142)*/
l29:pile[v[22]]=jvj+2; pile[WZ1]=1588; pile[WZ2]=769; 
(*f[36])( );     /*PLUSC0(jvj+2,1588,769)*/
goto l30;
l25:x[jvj+33]=s[x[jvj+32]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+32];
pile[v[22]]=498; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(498,jvj+33,jvj+34)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+35,jvj+34)*/
l26:x[jvj+32]=t[x[jvj+32]];
l24:if((x[jvj+32]>0)) goto l25;
pile[v[22]]=jvj+2; pile[WZ1]=678; pile[WZ2]=jvj+35; 
(*f[34])( );     /*CHGC0(jvj+2,678,jvj+35)*/
pile[v[22]]=1101; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(1101,jvj+2,V20)*/
V20=pile[WZ2]; 
if((V20!=1)) goto l30;
pile[v[22]]=763; pile[WZ1]=769; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(763,769,jvj+29)*/
pile[v[22]]=1300; pile[WZ1]=jvj+2; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(1300,jvj+2,jvj+30)*/
goto l20;
l27:pile[v[22]]=R; 
(*f[899])( );if(v[102]) goto l23;     /*COMPTELT0(R,V53,C,V,D)*/
V53=pile[WZ1]; C=pile[WZ2]; V=pile[WZ3]; D=pile[WZ4]; 
if((D<=0)) goto l28;
pile[v[22]]=jvj+2; pile[WZ1]=1188; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+2,1188,68)*/
l28:pile[v[22]]=jvj+2; pile[WZ1]=1591; pile[WZ2]=V; 
(*f[43])( );     /*CHGC2(jvj+2,1591,V)*/
pile[WZ1]=1590; pile[WZ2]=V53; 
(*f[43])( );     /*CHGC2(jvj+2,1590,V53)*/
l23:x[jvj+35]=0 ;z[jvj+35]=0;
pile[v[22]]=R; pile[WZ1]=jvj+32; 
(*f[887])( );     /*VARND0(R,jvj+32)*/
goto l24;
}
