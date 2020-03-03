#include "dx.h"
void ATOME571T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V27=0,V19=0,V20=0,V22=0,V21=0,V26=0,V23=0;
int C;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=40;
x[jvj+1]=20571;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3959&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
C=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=480; pile[WZ1]=C; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(480,C,jvj+17)*/
for(i=x[jvj+17],V24=0;i>0;i=t[i],V24++)  ;
pile[v[22]]=481; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(481,C,jvj+18)*/
for(i=x[jvj+18],V27=0;i>0;i=t[i],V27++)  ;
pile[v[22]]=473; 
(*f[1975])( );if(v[102]) goto l11;     /*FNDCND0(473,C,V19)*/
V19=pile[WZ2]; 
if((V19!=1)) goto l11;
pile[v[22]]=472; 
(*f[1975])( );if(v[102]) goto l11;     /*FNDCND0(472,C,V20)*/
V20=pile[WZ2]; 
if((V20!=1)) goto l11;
pile[v[22]]=688; 
(*f[1975])( );if(v[102]) goto l11;     /*FNDCND0(688,C,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=750; 
(*f[1975])( );if(v[102]) goto l11;     /*FNDCND0(750,C,V21)*/
V21=pile[WZ2]; 
if((V21!=V22)) goto l11;
x[jvj+10]=0 ;z[jvj+10]=0;
l4:if((x[jvj+18]>0)) goto l5;
for(i=x[jvj+10],V26=0;i>0;i=t[i],V26++)  ;
if((V26!=V27)) goto l11;
x[jvj+6]=0 ;z[jvj+6]=0;
l1:if((x[jvj+17]>0)) goto l2;
for(i=x[jvj+6],V23=0;i>0;i=t[i],V23++)  ;
if((V23!=V24)) goto l11;
x[jvj+13]=0 ;z[jvj+13]=0;
l7:if((x[jvj+6]>0)) goto l8;
x[jvj+16]=0 ;z[jvj+16]=0;
l9:if((x[jvj+10]>0)) goto l10;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+20)*/
pile[WZ3]=485; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+13; pile[WZ2]=107; pile[WZ3]=jvj+28; 
(*f[301])( );     /*TRI11(jvj+27,jvj+13,107,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+28,22,100,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+29)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V21; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,V21,jvj+30)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+16; pile[WZ2]=107; pile[WZ3]=jvj+34; 
(*f[301])( );     /*TRI11(jvj+33,jvj+16,107,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+34,22,100,jvj+31)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+29; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+29,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=107; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+30)*/
pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+31)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=103; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+21,jvj+22,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+23,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=C; pile[WZ2]=110; pile[WZ3]=(-632); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(101,C,110,(-632),jvj+39)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(206,715,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,v[13],642,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=3958; pile[WZ2]=246; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,3958,246,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=20571; pile[WZ2]=218; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+37,20571,218,jvj+38)*/
pile[v[22]]=jvj+39; pile[WZ1]=(-20); pile[WZ2]=jvj+38; pile[WZ3]=159; pile[WZ4]=jvj+40; 
(*f[298])( );     /*TRIENS1(jvj+39,(-20),jvj+38,159,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+40,289,158,jvj+19)*/
pile[v[22]]=jvj+19; 
(*f[481])( );     /*STOCKER0(jvj+19)*/
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+17]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+17];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1290])( );if(v[102]) goto l3;     /*DEPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+5)*/
l3:x[jvj+17]=t[x[jvj+17]];
goto l1;
l5:x[jvj+7]=s[x[jvj+18]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+18];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1291])( );if(v[102]) goto l6;     /*CONVEXP0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=jvj+10; 
(*f[522])( );     /*PLUB2(jvj+10,jvj+9)*/
l6:x[jvj+18]=t[x[jvj+18]];
goto l4;
l8:x[jvj+11]=s[x[jvj+6]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+6];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+12)*/
x[jvj+6]=t[x[jvj+6]];
goto l7;
l10:x[jvj+14]=s[x[jvj+10]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+10];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+15)*/
x[jvj+10]=t[x[jvj+10]];
goto l9;
}
