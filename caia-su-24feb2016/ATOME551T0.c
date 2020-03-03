#include "dx.h"
void ATOME551T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V43=0,V35=0,V13=0,V44=0,V14=0,V45=0,V39=0,V30=0,V15=0,V22=0,V41=0;
int NNNJ;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=58;
x[jvj+1]=20551;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3890&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNJ=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNJ; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,NNNJ,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=770)) goto l15;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(642,jvj+6,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=NNNJ; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,NNNJ,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=484)) goto l15;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+14; 
(*f[200])( );if(v[102]) goto l15;     /*NDD0(jvj+12,jvj+14)*/
pile[v[22]]=509; pile[WZ2]=jvj+15; 
(*f[1969])( );     /*FNDEND0(509,jvj+14,jvj+15)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+16)*/
l10:if((x[jvj+15]<=0)) goto l15;
x[jvj+2]=s[x[jvj+15]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+15];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+2,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=625)) goto l11;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=1006; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1006,jvj+2,jvj+3)*/
pile[WZ1]=NNNJ; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNJ,jvj+4)*/
V43=x[jvj+3];
l1:if((V43>0)) goto l2;
if((x[jvj+5]!=0)) goto l11;
pile[v[22]]=160; pile[WZ1]=jvj+2; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(160,jvj+2,jvj+19)*/
pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+19,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=jvj+20; 
(*f[992])( );if(v[102]) goto l11;     /*FACTPREM0(V30,jvj+20)*/
for(i=x[jvj+20],V15=0;i>0;i=t[i],V15++)  ;
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=929; pile[WZ1]=jvj+6; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(929,jvj+6,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=V35; 
(*f[207])( );     /*PLUE2(jvj+7,V35)*/
l5:pile[v[22]]=1006; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1006,jvj+2,jvj+8)*/
V44=x[jvj+8];
l6:if((V44>0)) goto l7;
pile[v[22]]=1006; pile[WZ1]=NNNJ; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1006,NNNJ,jvj+9)*/
V45=x[jvj+9];
l8:if((V45>0)) goto l9;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+31)*/
pile[WZ3]=55; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+34)*/
pile[WZ3]=25; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+37)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+41; 
(*f[192])( );     /*QUADRI4(100,41,130,V15,jvj+41)*/
pile[WZ3]=1; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+39)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=103; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+38,jvj+39,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+41,jvj+40,jvj+35)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+36)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+34; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+34,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=107; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+32,107,jvj+35)*/
pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+32,107,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+42)*/
pile[WZ3]=27; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,27,jvj+45)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,V15,jvj+49)*/
pile[WZ3]=1; pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+47)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; pile[WZ2]=103; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+46,jvj+47,103,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+49,jvj+48,jvj+43)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+51,jvj+21,103,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+52; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+16,jvj+52,jvj+44)*/
pile[WZ2]=111; pile[WZ3]=jvj+42; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+42,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=107; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+33,107,jvj+43)*/
pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+33,107,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+31; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+31,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=107; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+29,107,jvj+32)*/
pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+29,107,jvj+33)*/
x[jvj+22]=d[20];z[jvj+22]=0;
l12:if((x[jvj+22]<=0)) goto l11;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=268; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(268,jvj+23,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+2; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+24,jvj+2,jvj+25)*/
pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+25,V22)*/
V22=pile[WZ2]; 
if((V22!=0)) goto l13;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+23; pile[WZ3]=jvj+26; 
(*f[45])( );if(v[102]) goto l13;     /*FNDZ0(jvj+2,jvj+23,V41,jvj+26)*/
V41=pile[WZ2]; 
x[jvj+27]=V41 ;z[jvj+27]=(x[jvj+26]==20&&V41<=sepcte) ? V41 : (x[jvj+26]==41) ? (-1000) : 0;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[760])( );     /*MEMEX0(jvj+12,jvj+27,jvj+28)*/
if((x[jvj+28]==135)) goto l14;
l13:x[jvj+22]=t[x[jvj+22]];
goto l12;
l2:V8=s[V43];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==V8) goto l4;
l3:V43=t[V43];
goto l1;
l4:pile[v[22]]=jvj+5; pile[WZ1]=V8; 
(*f[207])( );     /*PLUE2(jvj+5,V8)*/
goto l3;
l7:V13=s[V44];
pile[v[22]]=jvj+7; pile[WZ1]=V13; 
(*f[207])( );     /*PLUE2(jvj+7,V13)*/
V44=t[V44];
goto l6;
l9:V14=s[V45];
pile[v[22]]=jvj+7; pile[WZ1]=V14; 
(*f[207])( );     /*PLUE2(jvj+7,V14)*/
V45=t[V45];
goto l8;
l11:x[jvj+15]=t[x[jvj+15]];
goto l10;
l14:pile[v[22]]=jvj+29; pile[WZ1]=1006; pile[WZ2]=jvj+7; 
(*f[34])( );     /*CHGC0(jvj+29,1006,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=NNNJ; pile[WZ2]=110; pile[WZ3]=(-11739); pile[WZ4]=jvj+57; 
(*f[270])( );     /*QUADRI7(101,NNNJ,110,(-11739),jvj+57)*/
pile[v[22]]=V39; pile[WZ1]=858; pile[WZ2]=jvj+53; 
(*f[46])( );     /*TRI0(V39,858,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+54; 
(*f[189])( );     /*TRI4(jvj+53,v[13],642,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=3890; pile[WZ2]=246; pile[WZ3]=jvj+55; 
(*f[189])( );     /*TRI4(jvj+54,3890,246,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=20551; pile[WZ2]=218; pile[WZ3]=jvj+56; 
(*f[58])( );     /*TRI3(jvj+55,20551,218,jvj+56)*/
pile[v[22]]=jvj+57; pile[WZ1]=(-20); pile[WZ2]=jvj+56; pile[WZ3]=159; pile[WZ4]=jvj+58; 
(*f[298])( );     /*TRIENS1(jvj+57,(-20),jvj+56,159,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+58,1,158,jvj+30)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[1296])( );     /*NOUVCONTR0(jvj+29,jvj+30)*/
goto l13;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
