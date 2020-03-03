#include "dx.h"
void ATOME123T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,I=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=20123;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3616&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=25)) goto l4;
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+4,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+5; 
(*f[1930])( );if(v[102]) goto l4;     /*DECTERMES0(R,jvj+5)*/
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1294,R,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==1327) goto l2;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+26]=x[jvj+5] ;z[jvj+26]=z[jvj+5];
l1:if((x[jvj+26]<=0)) goto l4;
x[jvj+8]=s[x[jvj+26]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+26];
x[jvj+27]=x[jvj+5] ;z[jvj+27]=z[jvj+5];
l5:if((x[jvj+27]>0)) goto l6;
l3:x[jvj+26]=t[x[jvj+26]];
goto l1;
l6:x[jvj+22]=s[x[jvj+27]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+27];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+8; pile[WZ2]=jvj+23; 
(*f[760])( );     /*MEMEX0(jvj+22,jvj+8,jvj+23)*/
if((x[jvj+23]==135)) goto l7;
x[jvj+27]=t[x[jvj+27]];
goto l5;
l7:x[jvj+24]=0 ;z[jvj+24]=0;
x[jvj+28]=x[jvj+5] ;z[jvj+28]=z[jvj+5];
l8:if((x[jvj+28]>0)) goto l9;
x[jvj+7]=x[jvj+24] ;z[jvj+7]=z[jvj+24];
pile[v[22]]=jvj+7; 
(*f[3617])( );if(v[102]) goto l3;     /*PGCDSOMME0(jvj+7,I)*/
I=pile[WZ1]; 
if((I<=1)) goto l3;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+16)*/
pile[v[22]]=V8; pile[WZ1]=858; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(V8,858,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,v[13],642,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=3616; pile[WZ2]=246; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,3616,246,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=20123; pile[WZ2]=218; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+14,20123,218,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=(-20); pile[WZ2]=jvj+15; pile[WZ3]=159; pile[WZ4]=jvj+17; 
(*f[298])( );     /*TRIENS1(jvj+16,(-20),jvj+15,159,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+17,1,158,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+21; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+21)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+9; pile[WZ2]=103; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+19,jvj+9,103,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+21,jvj+20,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+10; 
(*f[1296])( );     /*NOUVCONTR0(jvj+11,jvj+10)*/
goto l3;
l9:x[jvj+25]=s[x[jvj+28]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+28];
if((x[jvj+25]==x[jvj+22])) goto l10;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[68])( );     /*PLUE0(jvj+24,jvj+25)*/
l10:x[jvj+28]=t[x[jvj+28]];
goto l8;
}
