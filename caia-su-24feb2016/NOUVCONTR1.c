#include "dx.h"
void NOUVCONTR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0;
int RR,HIST;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=10834;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1751&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; HIST=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+19]=250 ;z[jvj+19]=250;
x[jvj+27]=250 ;z[jvj+27]=250;
pile[v[22]]=1338; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1338,jvj+19,jvj+20)*/
pile[v[22]]=RR; pile[WZ1]=1338; 
(*f[35])( );     /*CHGC1(RR,1338,jvj+20)*/
l9:pile[v[22]]=1375; pile[WZ1]=jvj+19; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1375,jvj+19,jvj+21)*/
if((x[jvj+21]!=68)) goto l1;
pile[v[22]]=RR; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(RR,jvj+22)*/
x[jvj+23]=vo[16];z[jvj+23]=vz[16];
pile[v[22]]=jvj+23; pile[WZ1]=1374; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+23,1374,jvj+22)*/
l1:pile[v[22]]=159; pile[WZ1]=HIST; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(159,HIST,jvj+5)*/
l2:if((x[jvj+5]>0)) goto l3;
pile[v[22]]=RR; pile[WZ1]=jvj+24; 
(*f[887])( );     /*VARND0(RR,jvj+24)*/
for(i=x[jvj+24],V11=0;i>0;i=t[i],V11++)  ;
if((V11<=1)) goto l10;
pile[v[22]]=1280; pile[WZ1]=RR; pile[WZ2]=jvj+3; 
(*f[492])( );     /*FIGURE0(1280,RR,jvj+3)*/
if((x[jvj+3]==135)) goto l10;
pile[v[22]]=625; pile[WZ2]=jvj+4; 
(*f[492])( );     /*FIGURE0(625,RR,jvj+4)*/
if((x[jvj+4]==135)) goto l10;
pile[v[22]]=636; pile[WZ2]=jvj+10; 
(*f[492])( );     /*FIGURE0(636,RR,jvj+10)*/
if((x[jvj+10]==135)) goto l10;
x[jvj+18]=0 ;z[jvj+18]=0;
x[jvj+11]=vo[16];z[jvj+11]=vz[16];
pile[v[22]]=1071; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1071,jvj+11,jvj+12)*/
x[jvj+13]=d[72];z[jvj+13]=0;
l5:if((x[jvj+24]>0)) goto l6;
if((x[jvj+18]==0)) goto l10;
pile[v[22]]=RR; pile[WZ1]=jvj+18; pile[WZ2]=jvj+25; 
(*f[1355])( );if(v[102]) goto l10;     /*SUBSTOTAL0(RR,jvj+18,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=HIST; 
(*f[1296])( );     /*NOUVCONTR0(jvj+25,HIST)*/
pile[v[22]]=1070; pile[WZ1]=RR; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1070,RR,jvj+26)*/
if((x[jvj+26]==68)) goto l10;
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l3:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+6,jvj+7)*/
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
pile[v[22]]=1232; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1232,jvj+8,jvj+9)*/
if((x[jvj+9]!=0)) goto l10;
l4:x[jvj+5]=t[x[jvj+5]];
goto l2;
l6:x[jvj+14]=s[x[jvj+24]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+24];
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l8;
l7:x[jvj+24]=t[x[jvj+24]];
goto l5;
l8:pile[v[22]]=1435; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1435,jvj+14,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+16; 
(*f[1290])( );if(v[102]) goto l7;     /*DEPEXP0(jvj+14,jvj+16)*/
pile[v[22]]=447; pile[WZ2]=459; pile[WZ3]=jvj+15; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(447,jvj+16,459,jvj+15,jvj+17)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[196])( );     /*PLUF0(jvj+13,jvj+17,jvj+18)*/
goto l7;
l10:pile[v[22]]=RR; pile[WZ1]=jvj+27; pile[WZ2]=HIST; 
(*f[1548])( );     /*NOUVCONTRA0(RR,jvj+27,HIST)*/
goto l11;
}
