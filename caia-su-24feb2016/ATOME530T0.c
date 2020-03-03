#include "dx.h"
void ATOME530T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V38=0,Z=0,V52=0,V42=0,V22=0,V54=0,V45=0,V33=0,V26=0,V25=0,V24=0,V23=0,V47=0,V49=0;
int V;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=20530;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3800&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+19]=vo[14];z[jvj+19]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(642,jvj+19,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=V; pile[WZ2]=jvj+22; 
(*f[1969])( );     /*FNDEND0(509,V,jvj+22)*/
l11:if((x[jvj+22]<=0)) goto l17;
x[jvj+8]=s[x[jvj+22]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+22];
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+8,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=625)) goto l12;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+25; 
(*f[1361])( );     /*VAROBJ0(jvj+8,jvj+25)*/
for(i=x[jvj+25],V33=0;i>0;i=t[i],V33++)  ;
if((V33!=1)) goto l12;
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==x[V]) goto l13;
l12:x[jvj+22]=t[x[jvj+22]];
goto l11;
l3:Z=s[V52];
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=Z; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(100,41,130,Z,jvj+9)*/
pile[v[22]]=V; pile[WZ1]=jvj+9; pile[WZ2]=jvj+8; pile[WZ3]=jvj+10; 
(*f[1719])( );     /*SUBSTITUTES0(V,jvj+9,jvj+8,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[965])( );if(v[102]) goto l5;     /*NORM0(jvj+10,jvj+11)*/
x[jvj+12]=x[jvj+11] ;z[jvj+12]=z[jvj+11];
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]==134)) goto l4;
l5:pile[v[22]]=jvj+15; pile[WZ1]=Z; 
(*f[207])( );     /*PLUE2(jvj+15,Z)*/
l4:V52=t[V52];
l2:if((V52>0)) goto l3;
for(i=x[jvj+15],V24=0;i>0;i=t[i],V24++)  ;
x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=V; pile[WZ1]=jvj+2; 
(*f[1290])( );if(v[102]) goto l14;     /*DEPEXP0(V,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
l1:if((x[jvj+15]<=0)) goto l14;
K=s[x[jvj+15]];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+38)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+40)*/
pile[v[22]]=jvj+5; pile[WZ1]=160; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+5,160,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; pile[WZ2]=111; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+37,jvj+38,111,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=103; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+39,jvj+40,103,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+41; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+3,jvj+41,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+7)*/
x[jvj+15]=t[x[jvj+15]];
goto l1;
l7:x[jvj+16]=s[x[jvj+6]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+6];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+17)*/
x[jvj+6]=t[x[jvj+6]];
l6:if((x[jvj+6]>0)) goto l7;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+18; pile[WZ2]=107; pile[WZ3]=jvj+36; 
(*f[301])( );     /*TRI11(jvj+35,jvj+18,107,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+36,22,100,jvj+32)*/
x[jvj+27]=d[20];z[jvj+27]=0;
l15:if((x[jvj+27]<=0)) goto l12;
x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+28; pile[WZ3]=jvj+29; 
(*f[45])( );if(v[102]) goto l16;     /*FNDZ0(jvj+8,jvj+28,V47,jvj+29)*/
V47=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(268,jvj+28,jvj+30)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+30; pile[WZ3]=jvj+31; 
(*f[45])( );if(v[102]) goto l16;     /*FNDZ0(jvj+8,jvj+30,V49,jvj+31)*/
V49=pile[WZ2]; 
pile[v[22]]=jvj+32; pile[WZ1]=1006; pile[WZ2]=jvj+20; 
(*f[34])( );     /*CHGC0(jvj+32,1006,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+46)*/
pile[v[22]]=V45; pile[WZ1]=858; pile[WZ2]=jvj+42; 
(*f[46])( );     /*TRI0(V45,858,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,v[13],642,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=3800; pile[WZ2]=246; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,3800,246,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=20530; pile[WZ2]=218; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+44,20530,218,jvj+45)*/
pile[v[22]]=jvj+46; pile[WZ1]=(-20); pile[WZ2]=jvj+45; pile[WZ3]=159; pile[WZ4]=jvj+47; 
(*f[298])( );     /*TRIENS1(jvj+46,(-20),jvj+45,159,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+47,1,158,jvj+33)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[1296])( );     /*NOUVCONTR0(jvj+32,jvj+33)*/
l16:x[jvj+27]=t[x[jvj+27]];
goto l15;
l10:V22=s[V54];
pile[v[22]]=jvj+20; pile[WZ1]=V22; 
(*f[207])( );     /*PLUE2(jvj+20,V22)*/
V54=t[V54];
l9:if((V54>0)) goto l10;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+26; 
(*f[1945])( );if(v[102]) goto l12;     /*DEGREE0(jvj+8,jvj+26)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+26,V25)*/
V25=pile[WZ2]; 
if((V25<0)) goto l12;
x[jvj+15]=0 ;z[jvj+15]=0;
V38=V26-1;
pile[v[22]]=V38; pile[WZ1]=0; pile[WZ2]=jvj+14; 
(*f[3801])( );     /*ENSINTERV0(V38,0,jvj+14)*/
V52=x[jvj+14];
goto l2;
l13:pile[v[22]]=160; pile[WZ1]=jvj+8; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(160,jvj+8,jvj+4)*/
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+4,V26)*/
V26=pile[WZ2]; 
if((V26>=100)) goto l12;
x[jvj+20]=0 ;z[jvj+20]=0;
pile[v[22]]=929; pile[WZ1]=jvj+19; 
(*f[1975])( );if(v[102]) goto l8;     /*FNDCND0(929,jvj+19,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=jvj+20; pile[WZ1]=V42; 
(*f[207])( );     /*PLUE2(jvj+20,V42)*/
l8:pile[v[22]]=1006; pile[WZ1]=jvj+8; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(1006,jvj+8,jvj+21)*/
V54=x[jvj+21];
goto l9;
l14:for(i=x[jvj+6],V23=0;i>0;i=t[i],V23++)  ;
if((V23!=V24)) goto l12;
x[jvj+18]=0 ;z[jvj+18]=0;
goto l6;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
