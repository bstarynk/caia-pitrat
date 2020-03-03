#include "dx.h"
void ATOME101T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V33=0,V15=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=33;
x[jvj+1]=20101;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3537&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,R,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=25)) goto l9;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+6,V33)*/
V33=pile[WZ2]; 
x[jvj+7]=d[20];z[jvj+7]=0;
l2:if((x[jvj+7]<=0)) goto l9;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(268,jvj+8,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+9,R,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=485)) goto l3;
pile[v[22]]=107; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,jvj+10,jvj+13)*/
for(i=x[jvj+13],V15=0;i>0;i=t[i],V15++)  ;
if((V15!=2)) goto l3;
pile[v[22]]=jvj+8; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+8,R,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
x[jvj+33]=x[jvj+13] ;z[jvj+33]=z[jvj+13];
l4:if((x[jvj+33]<=0)) goto l3;
x[jvj+31]=s[x[jvj+33]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+33];
x[jvj+16]=x[jvj+31] ;z[jvj+16]=z[jvj+31];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
x[jvj+32]=x[jvj+13] ;z[jvj+32]=z[jvj+13];
l5:if((x[jvj+32]>0)) goto l6;
x[jvj+33]=t[x[jvj+33]];
goto l4;
l1:x[jvj+30]=29 ;z[jvj+30]=29;
l8:pile[v[22]]=jvj+2; pile[WZ1]=jvj+18; 
(*f[1353])( );     /*POSOUNUL0(jvj+2,jvj+18)*/
if((x[jvj+18]==135)) goto l10;
l7:x[jvj+32]=t[x[jvj+32]];
goto l5;
l3:x[jvj+7]=t[x[jvj+7]];
goto l2;
l6:x[jvj+2]=s[x[jvj+32]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+32];
if((x[jvj+31]==x[jvj+2])) goto l7;
x[jvj+30]=incon;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[1352])( );     /*POSITIF0(jvj+2,jvj+3)*/
if((x[jvj+3]==135)) goto l1;
x[jvj+30]=30 ;z[jvj+30]=30;
goto l8;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l10:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+25)*/
pile[v[22]]=V33; pile[WZ1]=858; pile[WZ2]=jvj+21; 
(*f[46])( );     /*TRI0(V33,858,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,v[13],642,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=3537; pile[WZ2]=246; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,3537,246,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=20101; pile[WZ2]=218; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+23,20101,218,jvj+24)*/
pile[v[22]]=jvj+25; pile[WZ1]=(-20); pile[WZ2]=jvj+24; pile[WZ3]=159; pile[WZ4]=jvj+26; 
(*f[298])( );     /*TRIENS1(jvj+25,(-20),jvj+24,159,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+26,1,158,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+30; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+30,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+15; pile[WZ2]=103; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+28,jvj+15,103,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+29; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+17,jvj+29,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+19; 
(*f[1296])( );     /*NOUVCONTR0(jvj+20,jvj+19)*/
goto l7;
}
