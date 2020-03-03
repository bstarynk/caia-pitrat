#include "dx.h"
void ATOME147T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V16=0,I=0,V19=0,V11=0,V20=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=20147;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3582&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=408)) goto l7;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,R,jvj+10)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+10,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,R,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+7,jvj+11)*/
if((x[jvj+11]!=484)) goto l7;
x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+12,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+13; 
(*f[200])( );if(v[102]) goto l7;     /*NDD0(jvj+7,jvj+13)*/
pile[v[22]]=V11; pile[WZ1]=jvj+14; 
(*f[1007])( );if(v[102]) goto l7;     /*DECFACTPREM0(V11,jvj+14)*/
x[jvj+3]=0 ;z[jvj+3]=0;
x[jvj+28]=x[jvj+14] ;z[jvj+28]=z[jvj+14];
l1:if((x[jvj+28]<=0)) goto l4;
x[jvj+2]=s[x[jvj+28]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+28];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+2,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V14; 
(*f[207])( );     /*PLUE2(jvj+3,V14)*/
l2:x[jvj+28]=t[x[jvj+28]];
goto l1;
l5:x[jvj+4]=s[x[jvj+14]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+14];
pile[v[22]]=510; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(510,jvj+4,V19)*/
V19=pile[WZ2]; 
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(515,jvj+4,V16)*/
V16=pile[WZ2]; 
I=0;
l3:if((I>V16)) goto l8;
pile[v[22]]=jvj+5; pile[WZ1]=I; 
(*f[207])( );     /*PLUE2(jvj+5,I)*/
I++;
goto l3;
l8:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+20)*/
pile[v[22]]=V20; pile[WZ1]=858; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(V20,858,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,v[13],642,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=3582; pile[WZ2]=246; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,3582,246,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=20147; pile[WZ2]=218; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+18,20147,218,jvj+19)*/
pile[v[22]]=jvj+20; pile[WZ1]=(-20); pile[WZ2]=jvj+19; pile[WZ3]=159; pile[WZ4]=jvj+21; 
(*f[298])( );     /*TRIENS1(jvj+20,(-20),jvj+19,159,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+21,1,158,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; pile[WZ2]=V19; pile[WZ3]=jvj+5; 
(*f[3501])( );     /*AFP1(jvj+6,jvj+7,V19,jvj+5)*/
l6:x[jvj+14]=t[x[jvj+14]];
l4:if((x[jvj+14]>0)) goto l5;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+26)*/
pile[v[22]]=V20; pile[WZ1]=858; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(V20,858,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,v[13],642,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=3582; pile[WZ2]=246; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,3582,246,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=20147; pile[WZ2]=218; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+24,20147,218,jvj+25)*/
pile[v[22]]=jvj+26; pile[WZ1]=(-20); pile[WZ2]=jvj+25; pile[WZ3]=159; pile[WZ4]=jvj+27; 
(*f[298])( );     /*TRIENS1(jvj+26,(-20),jvj+25,159,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+27,1,158,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=1287; pile[WZ2]=jvj+13; pile[WZ3]=jvj+3; 
(*f[3502])( );     /*VENS0(jvj+15,1287,jvj+13,jvj+3)*/
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
