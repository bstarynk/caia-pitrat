#include "dx.h"
void ISJ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V12=0,V16=0,RS=0,V36=0,V26=0;
int TL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=10541;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1659&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=135; pile[WZ1]=TL; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(135,TL,jvj+2)*/
x[jvj+19]=x[jvj+2] ;z[jvj+19]=z[jvj+2];
V36=x[TL];
l14:pile[v[22]]=248; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(248,jvj+19,jvj+20)*/
for(i=x[jvj+20],V26=0;i>0;i=t[i],V26++)  ;
if((V26>1)) goto l15;
if((V26!=1)) goto l12;
pile[v[22]]=134; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(134,jvj+19,jvj+21)*/
l12:pile[v[22]]=135; pile[WZ1]=TL; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(135,TL,jvj+16)*/
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=302; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(302,TL,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
x[jvj+8]=0 ;z[jvj+8]=0;
x[jvj+26]=x[jvj+7] ;z[jvj+26]=z[jvj+7];
l5:if((x[jvj+26]>0)) goto l6;
pile[v[22]]=jvj+8; pile[WZ1]=563; pile[WZ2]=jvj+17; 
(*f[300])( );     /*TRI10(jvj+8,563,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=TL; pile[WZ2]=287; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+17,TL,287,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+7; pile[WZ2]=187; pile[WZ3]=jvj+10; 
(*f[301])( );     /*TRI11(jvj+18,jvj+7,187,jvj+10)*/
pile[v[22]]=187; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(187,jvj+10,jvj+11)*/
for(i=x[jvj+11],V13=0;i>0;i=t[i],V13++)  ;
V12=1000/V13;
l7:if((x[jvj+11]>0)) goto l8;
pile[v[22]]=jvj+10; pile[WZ1]=250; pile[WZ2]=jvj+16; 
(*f[1853])( );     /*ORK0(jvj+10,250,jvj+16,RS)*/
RS=pile[WZ3]; 
pile[v[22]]=297; pile[WZ1]=TL; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(297,TL,jvj+13)*/
pile[v[22]]=741; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(741,jvj+13,V16)*/
V16=pile[WZ2]; 
if((V16==1)) goto l10;
l9:pile[v[22]]=jvj+13; pile[WZ1]=741; pile[WZ2]=RS; 
(*f[43])( );     /*CHGC2(jvj+13,741,RS)*/
l10:pile[v[22]]=187; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(187,jvj+10,jvj+14)*/
l11:if((x[jvj+14]<=0)) goto l13;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=80; pile[WZ1]=jvj+15; 
(*f[71])( );     /*ENLV0(80,jvj+15)*/
x[jvj+14]=t[x[jvj+14]];
goto l11;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+4,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]==85)) goto l4;
if((x[jvj+6]==86)) goto l4;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:pile[v[22]]=jvj+7; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+4)*/
goto l3;
l6:x[jvj+9]=s[x[jvj+26]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+26];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+9)*/
x[jvj+26]=t[x[jvj+26]];
goto l5;
l8:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=80; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+12,80,68)*/
pile[WZ1]=238; pile[WZ2]=V12; 
(*f[43])( );     /*CHGC2(jvj+12,238,V12)*/
x[jvj+11]=t[x[jvj+11]];
goto l7;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l17:pile[v[22]]=jvj+23; pile[WZ1]=437; pile[WZ2]=248; 
(*f[35])( );     /*CHGC1(jvj+23,437,248)*/
pile[v[22]]=jvj+19; pile[WZ2]=404; 
(*f[35])( );     /*CHGC1(jvj+19,437,404)*/
l16:x[jvj+20]=t[x[jvj+20]];
l15:if((x[jvj+20]<=0)) goto l12;
x[jvj+22]=s[x[jvj+20]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+20];
pile[v[22]]=161; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(161,jvj+22,jvj+23)*/
if((x[jvj+23]==V36)) goto l16;
pile[v[22]]=437; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(437,jvj+23,jvj+24)*/
goto l16;
l18:pile[v[22]]=135; pile[WZ1]=jvj+19; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(135,jvj+19,jvj+25)*/
V36=x[jvj+19];
x[jvj+19]=x[jvj+25] ;z[jvj+19]=z[jvj+25];
goto l14;
}
