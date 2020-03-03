#include "dx.h"
void ATOME571T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V36=0,V20=0,V23=0,V25=0,V26=0,V38=0,V28=0,V27=0,V22=0,V19=0;
int C;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=20571;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3974&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
C=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=480; pile[WZ1]=C; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(480,C,jvj+19)*/
for(i=x[jvj+19],V20=0;i>0;i=t[i],V20++)  ;
pile[v[22]]=481; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(481,C,jvj+20)*/
for(i=x[jvj+20],V23=0;i>0;i=t[i],V23++)  ;
pile[v[22]]=473; 
(*f[1975])( );if(v[102]) goto l11;     /*FNDCND0(473,C,V25)*/
V25=pile[WZ2]; 
if((V25!=1)) goto l11;
pile[v[22]]=472; 
(*f[1975])( );if(v[102]) goto l11;     /*FNDCND0(472,C,V26)*/
V26=pile[WZ2]; 
if((V26!=1)) goto l11;
x[jvj+17]=vo[14];z[jvj+17]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(642,jvj+17,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=688; pile[WZ1]=C; 
(*f[1975])( );if(v[102]) goto l11;     /*FNDCND0(688,C,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=750; 
(*f[1975])( );if(v[102]) goto l11;     /*FNDCND0(750,C,V27)*/
V27=pile[WZ2]; 
if((V27!=V28)) goto l11;
x[jvj+10]=0 ;z[jvj+10]=0;
l4:if((x[jvj+20]>0)) goto l5;
for(i=x[jvj+10],V22=0;i>0;i=t[i],V22++)  ;
if((V22!=V23)) goto l11;
x[jvj+6]=0 ;z[jvj+6]=0;
l1:if((x[jvj+19]>0)) goto l2;
for(i=x[jvj+6],V19=0;i>0;i=t[i],V19++)  ;
if((V19!=V20)) goto l11;
x[jvj+13]=0 ;z[jvj+13]=0;
l7:if((x[jvj+6]>0)) goto l8;
x[jvj+16]=0 ;z[jvj+16]=0;
l9:if((x[jvj+10]>0)) goto l10;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+22)*/
pile[WZ3]=485; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+13; pile[WZ2]=107; pile[WZ3]=jvj+29; 
(*f[301])( );     /*TRI11(jvj+28,jvj+13,107,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+29,22,100,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+30)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V27; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,V27,jvj+31)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+16; pile[WZ2]=107; pile[WZ3]=jvj+35; 
(*f[301])( );     /*TRI11(jvj+34,jvj+16,107,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+35,22,100,jvj+32)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+30; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+30,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=107; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+24,107,jvj+31)*/
pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+24,107,jvj+32)*/
pile[v[22]]=jvj+22; pile[WZ1]=111; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,111,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; pile[WZ2]=103; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+23,jvj+24,103,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+25; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+26,jvj+25,jvj+18)*/
pile[v[22]]=929; pile[WZ1]=jvj+17; 
(*f[1975])( );if(v[102]) goto l12;     /*FNDCND0(929,jvj+17,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=1006; pile[WZ2]=jvj+18; 
(*f[235])( );     /*PLUSC2(V36,1006,jvj+18)*/
l12:pile[v[22]]=101; pile[WZ1]=C; pile[WZ2]=110; pile[WZ3]=(-632); pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(101,C,110,(-632),jvj+40)*/
pile[v[22]]=V38; pile[WZ1]=858; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(V38,858,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,v[13],642,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=3974; pile[WZ2]=246; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,3974,246,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=20571; pile[WZ2]=218; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+38,20571,218,jvj+39)*/
pile[v[22]]=jvj+40; pile[WZ1]=(-20); pile[WZ2]=jvj+39; pile[WZ3]=159; pile[WZ4]=jvj+41; 
(*f[298])( );     /*TRIENS1(jvj+40,(-20),jvj+39,159,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+41,1,158,jvj+21)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+21; 
(*f[1296])( );     /*NOUVCONTR0(jvj+18,jvj+21)*/
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+19]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+19];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1290])( );if(v[102]) goto l3;     /*DEPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+5)*/
l3:x[jvj+19]=t[x[jvj+19]];
goto l1;
l5:x[jvj+7]=s[x[jvj+20]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+20];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1291])( );if(v[102]) goto l6;     /*CONVEXP0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=jvj+10; 
(*f[522])( );     /*PLUB2(jvj+10,jvj+9)*/
l6:x[jvj+20]=t[x[jvj+20]];
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
