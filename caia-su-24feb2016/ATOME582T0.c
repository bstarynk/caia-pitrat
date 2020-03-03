#include "dx.h"
void ATOME582T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V36=0,V10=0,V39=0,V19=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=35;
x[jvj+1]=20582;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3836&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,NNNI,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=25)) goto l11;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(642,jvj+6,V39)*/
V39=pile[WZ2]; 
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(929,jvj+6,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=V36; 
(*f[207])( );     /*PLUE2(jvj+7,V36)*/
l5:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+8)*/
l6:if((x[jvj+8]>0)) goto l7;
x[jvj+11]=d[20];z[jvj+11]=0;
l8:if((x[jvj+11]<=0)) goto l11;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=NNNI; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+12,NNNI,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=1273)) goto l9;
pile[v[22]]=268; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+12,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=NNNI; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+16,NNNI,jvj+17)*/
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+17,V19)*/
V19=pile[WZ2]; 
if((V19!=0)) goto l9;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+18)*/
pile[v[22]]=102; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+13,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
x[jvj+35]=x[jvj+18] ;z[jvj+35]=z[jvj+18];
l10:if((x[jvj+35]<=0)) goto l9;
x[jvj+21]=s[x[jvj+35]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+35];
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+34]=x[jvj+18] ;z[jvj+34]=z[jvj+18];
l1:if((x[jvj+34]>0)) goto l2;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+26,jvj+20,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+27; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+27,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=1006; pile[WZ2]=jvj+7; 
(*f[34])( );     /*CHGC0(jvj+23,1006,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+32)*/
pile[v[22]]=V39; pile[WZ1]=858; pile[WZ2]=jvj+28; 
(*f[46])( );     /*TRI0(V39,858,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,v[13],642,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=3836; pile[WZ2]=246; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,3836,246,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=20582; pile[WZ2]=218; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+30,20582,218,jvj+31)*/
pile[v[22]]=jvj+32; pile[WZ1]=(-20); pile[WZ2]=jvj+31; pile[WZ3]=159; pile[WZ4]=jvj+33; 
(*f[298])( );     /*TRIENS1(jvj+32,(-20),jvj+31,159,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+33,1,158,jvj+24)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[1296])( );     /*NOUVCONTR0(jvj+23,jvj+24)*/
x[jvj+35]=t[x[jvj+35]];
goto l10;
l2:x[jvj+2]=s[x[jvj+34]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+34];
if((x[jvj+2]==x[jvj+21])) goto l3;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==649)) goto l3;
l4:pile[v[22]]=jvj+5; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+2)*/
l3:x[jvj+34]=t[x[jvj+34]];
goto l1;
l7:V10=s[x[jvj+8]];
pile[v[22]]=jvj+7; pile[WZ1]=V10; 
(*f[207])( );     /*PLUE2(jvj+7,V10)*/
x[jvj+8]=t[x[jvj+8]];
goto l6;
l9:x[jvj+11]=t[x[jvj+11]];
goto l8;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
