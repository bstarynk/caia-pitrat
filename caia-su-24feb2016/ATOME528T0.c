#include "dx.h"
void ATOME528T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,E=0,V26=0,V12=0,V15=0,V29=0,V14=0,V16=0,V13=0,V59=0,V57=0,V53=0,V54=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=20528;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3879&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,R,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=408)) goto l8;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,R,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+14,V15)*/
V15=pile[WZ2]; 
if((V15==0)) goto l8;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+9,V29)*/
V29=pile[WZ2]; 
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(929,jvj+9,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=V26; 
(*f[207])( );     /*PLUE2(jvj+10,V26)*/
l5:pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1006,R,jvj+11)*/
l6:if((x[jvj+11]>0)) goto l7;
V59=abs(V15);
V57=V59;
pile[v[22]]=V57; pile[WZ1]=jvj+31; 
(*f[991])( );if(v[102]) goto l8;     /*ENSFACT0(V57,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=V57; 
(*f[207])( );     /*PLUE2(jvj+31,V57)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+31,1)*/
x[jvj+32]=0 ;z[jvj+32]=0;
l9:if((x[jvj+31]>0)) goto l10;
E=x[jvj+32];
for(i=E,V14=0;i>0;i=t[i],V14++)  ;
if((V14>=30)) goto l8;
pile[v[22]]=R; pile[WZ1]=jvj+15; 
(*f[891])( );     /*VAREXP0(R,jvj+15)*/
for(i=x[jvj+15],V16=0;i>0;i=t[i],V16++)  ;
if((V16>2)) goto l8;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,R,jvj+2)*/
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
l1:if((E>0)) goto l2;
for(i=x[jvj+4],V13=0;i>0;i=t[i],V13++)  ;
if((V13!=V14)) goto l8;
x[jvj+8]=0 ;z[jvj+8]=0;
l3:if((x[jvj+4]>0)) goto l4;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+8; pile[WZ2]=107; pile[WZ3]=jvj+20; 
(*f[301])( );     /*TRI11(jvj+19,jvj+8,107,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+20,22,100,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=1006; pile[WZ2]=jvj+10; 
(*f[34])( );     /*CHGC0(jvj+16,1006,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+29)*/
pile[v[22]]=V29; pile[WZ1]=858; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(V29,858,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,v[13],642,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=3879; pile[WZ2]=246; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,3879,246,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=20528; pile[WZ2]=218; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+27,20528,218,jvj+28)*/
pile[v[22]]=jvj+29; pile[WZ1]=(-20); pile[WZ2]=jvj+28; pile[WZ3]=159; pile[WZ4]=jvj+30; 
(*f[298])( );     /*TRIENS1(jvj+29,(-20),jvj+28,159,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+30,1,158,jvj+17)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[1296])( );     /*NOUVCONTR0(jvj+16,jvj+17)*/
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:K=s[E];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+21)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=103; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+22,jvj+23,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+24; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+3,jvj+24,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
E=t[E];
goto l1;
l4:x[jvj+6]=s[x[jvj+4]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+4];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+7)*/
x[jvj+4]=t[x[jvj+4]];
goto l3;
l7:V12=s[x[jvj+11]];
pile[v[22]]=jvj+10; pile[WZ1]=V12; 
(*f[207])( );     /*PLUE2(jvj+10,V12)*/
x[jvj+11]=t[x[jvj+11]];
goto l6;
l10:V53=s[x[jvj+31]];
V54=(-V53);
pile[v[22]]=jvj+32; pile[WZ1]=V54; 
(*f[207])( );     /*PLUE2(jvj+32,V54)*/
pile[WZ1]=V53; 
(*f[207])( );     /*PLUE2(jvj+32,V53)*/
x[jvj+31]=t[x[jvj+31]];
goto l9;
}
