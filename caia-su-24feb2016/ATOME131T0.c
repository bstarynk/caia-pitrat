#include "dx.h"
void ATOME131T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V17=0,V18=0,V13=0,V32=0,V29=0,DD=0,RA=0,V8=0,V30=0,V11=0,V14=0,V33=0,V15=0,V21=0,M=0,V24=0,V23=0,V25=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=20131;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3545&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,R,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=25)) goto l9;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(870,R,V14)*/
V14=pile[WZ2]; 
if((V14!=1)) goto l9;
pile[v[22]]=1358; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1358,R,jvj+10)*/
if((x[jvj+10]!=68)) goto l9;
x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+11,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[3546])( );if(v[102]) goto l9;     /*COEFFPOLY0(R,jvj+12,jvj+13)*/
for(i=x[jvj+12],V15=0;i>0;i=t[i],V15++)  ;
if((V15!=2)) goto l9;
if((x[jvj+13]==135)) goto l4;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+12]=t[x[jvj+12]];
l1:if((x[jvj+12]<=0)) goto l9;
x[jvj+2]=s[x[jvj+12]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+12];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+2,V16)*/
V16=pile[WZ2]; 
if((V16!=0)) goto l2;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(515,jvj+2,V17)*/
V17=pile[WZ2]; 
V24=V17/M;
V23=(-V24);
V25=abs(V23);
pile[v[22]]=28; pile[WZ1]=DD; pile[WZ2]=V25; 
(*f[1005])( );if(v[102]) goto l9;     /*RACN0(28,DD,V25,RA)*/
RA=pile[WZ3]; 
pile[v[22]]=R; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(R,jvj+4)*/
if((x[jvj+4]<=0)) goto l9;
x[jvj+14]=s[x[jvj+4]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+4];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+5; 
(*f[1290])( );if(v[102]) goto l9;     /*DEPEXP0(jvj+14,jvj+5)*/
x[jvj+16]=incon;
if((V21==0)) goto l7;
if((V21!=1)) goto l10;
V30=V17%M;
if((V30!=0)) goto l10;
pile[v[22]]=DD; pile[WZ1]=RA; 
(*f[1006])( );if(v[102]) goto l10;     /*POWER0(DD,RA,V11)*/
V11=pile[WZ2]; 
if((V11!=V25)) goto l10;
V13=incon;
if((V23>=0)) goto l6;
V32=(-RA);
V13=V32;
l8:pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+20)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V13; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,V13,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=103; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+21,jvj+22,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+23; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+7,jvj+23,jvj+16)*/
l11:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+39)*/
pile[v[22]]=V33; pile[WZ1]=858; pile[WZ2]=jvj+35; 
(*f[46])( );     /*TRI0(V33,858,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,v[13],642,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=3545; pile[WZ2]=246; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,3545,246,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=20131; pile[WZ2]=218; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+37,20131,218,jvj+38)*/
pile[v[22]]=jvj+39; pile[WZ1]=(-20); pile[WZ2]=jvj+38; pile[WZ3]=159; pile[WZ4]=jvj+40; 
(*f[298])( );     /*TRIENS1(jvj+39,(-20),jvj+38,159,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+40,1,158,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+15; 
(*f[1296])( );     /*NOUVCONTR0(jvj+16,jvj+15)*/
goto l9;
l4:x[jvj+41]=x[jvj+12] ;z[jvj+41]=z[jvj+12];
l3:if((x[jvj+41]<=0)) goto l9;
x[jvj+3]=s[x[jvj+41]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+41];
pile[v[22]]=510; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(510,jvj+3,V18)*/
V18=pile[WZ2]; 
if((V18==0)) goto l5;
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(510,jvj+3,DD)*/
DD=pile[WZ2]; 
V21=DD%2;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(515,jvj+3,M)*/
M=pile[WZ2]; 
if((M!=0)) goto l1;
goto l9;
l5:x[jvj+41]=t[x[jvj+41]];
goto l3;
l6:V13=RA;
goto l8;
l7:V29=V17%M;
if((V29!=0)) goto l10;
if((V23<0)) goto l10;
pile[v[22]]=DD; pile[WZ1]=RA; 
(*f[1006])( );if(v[102]) goto l10;     /*POWER0(DD,RA,V8)*/
V8=pile[WZ2]; 
if((V8!=V23)) goto l10;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+17)*/
pile[WZ3]=25; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=RA; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,RA,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+27; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+6,jvj+27,jvj+18)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+28)*/
pile[WZ3]=52; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+32)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=RA; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,RA,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+34,jvj+33,jvj+30)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+29,jvj+30,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+31; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+6,jvj+31,jvj+19)*/
pile[WZ2]=111; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+17,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=107; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+18)*/
pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+19)*/
goto l11;
l10:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+16)*/
goto l11;
}
