#include "dx.h"
void ATOME529T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V37=0,Z=0,V51=0,V41=0,V22=0,V32=0,V26=0,V44=0,V25=0,V46=0,V48=0,V24=0,V23=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=20529;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3881&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,R,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=625)) goto l16;
pile[v[22]]=R; pile[WZ1]=jvj+24; 
(*f[1361])( );     /*VAROBJ0(R,jvj+24)*/
for(i=x[jvj+24],V32=0;i>0;i=t[i],V32++)  ;
if((V32!=1)) goto l16;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(160,R,jvj+5)*/
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+5,V26)*/
V26=pile[WZ2]; 
if((V26>=100)) goto l16;
x[jvj+19]=vo[14];z[jvj+19]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(642,jvj+19,V44)*/
V44=pile[WZ2]; 
x[jvj+20]=0 ;z[jvj+20]=0;
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l8;     /*FNDCND0(929,jvj+19,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=jvj+20; pile[WZ1]=V41; 
(*f[207])( );     /*PLUE2(jvj+20,V41)*/
l8:pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(1006,R,jvj+21)*/
l9:if((x[jvj+21]>0)) goto l10;
pile[v[22]]=R; pile[WZ1]=jvj+25; 
(*f[1945])( );if(v[102]) goto l16;     /*DEGREE0(R,jvj+25)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+25,V25)*/
V25=pile[WZ2]; 
if((V25<0)) goto l16;
x[jvj+26]=d[20];z[jvj+26]=0;
l11:if((x[jvj+26]<=0)) goto l16;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=R; pile[WZ1]=jvj+27; pile[WZ3]=jvj+28; 
(*f[45])( );if(v[102]) goto l12;     /*FNDZ0(R,jvj+27,V46,jvj+28)*/
V46=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+27,jvj+29)*/
pile[v[22]]=R; pile[WZ1]=jvj+29; pile[WZ3]=jvj+30; 
(*f[45])( );if(v[102]) goto l12;     /*FNDZ0(R,jvj+29,V48,jvj+30)*/
V48=pile[WZ2]; 
x[jvj+47]=x[jvj+24] ;z[jvj+47]=z[jvj+24];
l13:if((x[jvj+47]<=0)) goto l12;
x[jvj+2]=s[x[jvj+47]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+47];
x[jvj+15]=0 ;z[jvj+15]=0;
V37=V26-1;
pile[v[22]]=V37; pile[WZ1]=0; pile[WZ2]=jvj+14; 
(*f[3801])( );     /*ENSINTERV0(V37,0,jvj+14)*/
V51=x[jvj+14];
l2:if((V51>0)) goto l3;
for(i=x[jvj+15],V24=0;i>0;i=t[i],V24++)  ;
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[1290])( );if(v[102]) goto l15;     /*DEPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
l1:if((x[jvj+15]<=0)) goto l15;
K=s[x[jvj+15]];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+37)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+39)*/
pile[v[22]]=jvj+6; pile[WZ1]=160; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+6,160,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=111; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=103; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+38,jvj+39,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+40; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+4,jvj+40,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[522])( );     /*PLUB2(jvj+7,jvj+8)*/
x[jvj+15]=t[x[jvj+15]];
goto l1;
l3:Z=s[V51];
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=Z; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(100,41,130,Z,jvj+9)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+9; pile[WZ2]=R; pile[WZ3]=jvj+10; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+2,jvj+9,R,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[965])( );if(v[102]) goto l5;     /*NORM0(jvj+10,jvj+11)*/
x[jvj+12]=x[jvj+11] ;z[jvj+12]=z[jvj+11];
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]==134)) goto l4;
l5:pile[v[22]]=jvj+15; pile[WZ1]=Z; 
(*f[207])( );     /*PLUE2(jvj+15,Z)*/
l4:V51=t[V51];
goto l2;
l7:x[jvj+16]=s[x[jvj+7]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+7];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+17)*/
x[jvj+7]=t[x[jvj+7]];
l6:if((x[jvj+7]>0)) goto l7;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+18; pile[WZ2]=107; pile[WZ3]=jvj+35; 
(*f[301])( );     /*TRI11(jvj+34,jvj+18,107,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+35,22,100,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=1006; pile[WZ2]=jvj+20; 
(*f[34])( );     /*CHGC0(jvj+31,1006,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+45)*/
pile[v[22]]=V44; pile[WZ1]=858; pile[WZ2]=jvj+41; 
(*f[46])( );     /*TRI0(V44,858,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+42; 
(*f[189])( );     /*TRI4(jvj+41,v[13],642,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=3881; pile[WZ2]=246; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,3881,246,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=20529; pile[WZ2]=218; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+43,20529,218,jvj+44)*/
pile[v[22]]=jvj+45; pile[WZ1]=(-20); pile[WZ2]=jvj+44; pile[WZ3]=159; pile[WZ4]=jvj+46; 
(*f[298])( );     /*TRIENS1(jvj+45,(-20),jvj+44,159,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+46,1,158,jvj+32)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[1296])( );     /*NOUVCONTR0(jvj+31,jvj+32)*/
l14:x[jvj+47]=t[x[jvj+47]];
goto l13;
l10:V22=s[x[jvj+21]];
pile[v[22]]=jvj+20; pile[WZ1]=V22; 
(*f[207])( );     /*PLUE2(jvj+20,V22)*/
x[jvj+21]=t[x[jvj+21]];
goto l9;
l12:x[jvj+26]=t[x[jvj+26]];
goto l11;
l15:for(i=x[jvj+7],V23=0;i>0;i=t[i],V23++)  ;
if((V23!=V24)) goto l14;
x[jvj+18]=0 ;z[jvj+18]=0;
goto l6;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
