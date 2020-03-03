#include "dx.h"
void ATOME509T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V8=0,V19=0,I=0,V23=0,V51=0,V53=0,V4=0,V45=0,V46=0,V49=0,V47=0,V50=0,V52=0,V44=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=20509;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3808&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,NNNI,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l8;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+2,V19)*/
V19=pile[WZ2]; 
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V16; 
(*f[207])( );     /*PLUE2(jvj+3,V16)*/
l1:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
x[jvj+7]=d[20];z[jvj+7]=0;
l4:if((x[jvj+7]<=0)) goto l8;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+8,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=NNNI; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+8,NNNI,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+9,NNNI,jvj+11)*/
x[jvj+32]=0 ;z[jvj+32]=0;
x[jvj+27]=x[jvj+32] ;z[jvj+27]=z[jvj+32];
x[jvj+28]=x[jvj+32] ;z[jvj+28]=z[jvj+32];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[3810])( );     /*EQMPOSX0(jvj+10,jvj+27,jvj+28)*/
pile[v[22]]=jvj+11; 
(*f[3810])( );     /*EQMPOSX0(jvj+11,jvj+27,jvj+28)*/
x[jvj+30]=0 ;z[jvj+30]=0;
V51=x[jvj+27];
l9:if((V51>0)) goto l15;
V53=x[jvj+28];
l10:if((V53>0)) goto l11;
V4=x[jvj+30];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+13)*/
V23=V4;
l6:if((V23<=0)) goto l5;
I=s[V23];
if((I<2)) goto l7;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=160; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,160,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=111; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+17,jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+19,jvj+13,103,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+20; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+20,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+14,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+25)*/
pile[v[22]]=V19; pile[WZ1]=858; pile[WZ2]=jvj+21; 
(*f[46])( );     /*TRI0(V19,858,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,v[13],642,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=3808; pile[WZ2]=246; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,3808,246,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=20509; pile[WZ2]=218; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+23,20509,218,jvj+24)*/
pile[v[22]]=jvj+25; pile[WZ1]=(-20); pile[WZ2]=jvj+24; pile[WZ3]=159; pile[WZ4]=jvj+26; 
(*f[298])( );     /*TRIENS1(jvj+25,(-20),jvj+24,159,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+26,1,158,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[1296])( );     /*NOUVCONTR0(jvj+14,jvj+15)*/
l7:V23=t[V23];
goto l6;
l3:V8=s[x[jvj+4]];
pile[v[22]]=jvj+3; pile[WZ1]=V8; 
(*f[207])( );     /*PLUE2(jvj+3,V8)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l5:x[jvj+7]=t[x[jvj+7]];
goto l4;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l11:V45=s[V53];
x[jvj+29]=d[136];z[jvj+29]=0;
l12:if((x[jvj+29]>0)) goto l13;
V53=t[V53];
goto l10;
l13:V46=s[x[jvj+29]];
V49=V45+V46;
V47=abs(V49);
if((V47<=1)) goto l14;
pile[v[22]]=jvj+30; pile[WZ1]=V47; 
(*f[207])( );     /*PLUE2(jvj+30,V47)*/
l14:x[jvj+29]=t[x[jvj+29]];
goto l12;
l15:V50=s[V51];
pile[v[22]]=jvj+30; pile[WZ1]=V50; 
(*f[207])( );     /*PLUE2(jvj+30,V50)*/
pile[v[22]]=V50; pile[WZ1]=jvj+31; 
(*f[992])( );if(v[102]) goto l17;     /*FACTPREM0(V50,jvj+31)*/
V52=x[jvj+31];
l16:if((V52<=0)) goto l17;
V44=s[V52];
pile[v[22]]=jvj+30; pile[WZ1]=V44; 
(*f[207])( );     /*PLUE2(jvj+30,V44)*/
V52=t[V52];
goto l16;
l17:V51=t[V51];
goto l9;
}
