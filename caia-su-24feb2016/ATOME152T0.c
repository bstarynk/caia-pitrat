#include "dx.h"
void ATOME152T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V36=0,V16=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=55;
x[jvj+1]=20152;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3641&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,R,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=25)) goto l13;
x[jvj+25]=vo[14];z[jvj+25]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(642,jvj+25,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+26; 
(*f[887])( );     /*VARND0(R,jvj+26)*/
pile[WZ1]=jvj+27; 
(*f[1930])( );if(v[102]) goto l13;     /*DECTERMES0(R,jvj+27)*/
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(1294,R,jvj+28)*/
for(a=x[jvj+28];a>0;a=t[a]) if(s[a]==1327) goto l11;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+2,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=52)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+2,jvj+11)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[760])( );     /*MEMEX0(jvj+2,jvj+11,jvj+12)*/
if((x[jvj+12]==135)) goto l8;
l3:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+2,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=486)) goto l9;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+15)*/
x[jvj+54]=x[jvj+15] ;z[jvj+54]=z[jvj+15];
l4:if((x[jvj+54]<=0)) goto l9;
x[jvj+16]=s[x[jvj+54]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+54];
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=52)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+16,jvj+19)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[760])( );     /*MEMEX0(jvj+6,jvj+19,jvj+20)*/
if((x[jvj+20]==135)) goto l8;
l5:x[jvj+54]=t[x[jvj+54]];
goto l4;
l7:x[jvj+2]=s[x[jvj+55]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+55];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=486)) goto l2;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+5)*/
x[jvj+53]=x[jvj+5] ;z[jvj+53]=z[jvj+5];
l1:if((x[jvj+53]<=0)) goto l2;
x[jvj+7]=s[x[jvj+53]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+53];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[760])( );     /*MEMEX0(jvj+6,jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l8;
x[jvj+53]=t[x[jvj+53]];
goto l1;
l9:pile[v[22]]=jvj+6; pile[WZ1]=jvj+2; pile[WZ2]=jvj+21; 
(*f[760])( );     /*MEMEX0(jvj+6,jvj+2,jvj+21)*/
if((x[jvj+21]==134)) goto l10;
l8:x[jvj+55]=t[x[jvj+55]];
l6:if((x[jvj+55]>0)) goto l7;
for(i=x[jvj+22],V16=0;i>0;i=t[i],V16++)  ;
if((V16!=1)) goto l12;
if((x[jvj+22]<=0)) goto l12;
x[jvj+32]=s[x[jvj+22]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+22];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+31; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+31)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[255])( );     /*COPEXP0(jvj+32,jvj+33)*/
x[jvj+52]=x[jvj+31] ;z[jvj+52]=z[jvj+31];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+40)*/
pile[v[22]]=V36; pile[WZ1]=858; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(V36,858,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,v[13],642,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=3641; pile[WZ2]=246; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,3641,246,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=20152; pile[WZ2]=218; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+38,20152,218,jvj+39)*/
pile[v[22]]=jvj+40; pile[WZ1]=(-20); pile[WZ2]=jvj+39; pile[WZ3]=159; pile[WZ4]=jvj+41; 
(*f[298])( );     /*TRIENS1(jvj+40,(-20),jvj+39,159,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+41,1,158,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+42)*/
pile[WZ3]=25; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+45)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+47)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; pile[WZ2]=103; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+46,jvj+47,103,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+48; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+31,jvj+48,jvj+43)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=111; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,111,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+33; pile[WZ2]=103; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+50,jvj+33,103,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+51; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+52,jvj+51,jvj+44)*/
pile[WZ2]=111; pile[WZ3]=jvj+42; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+42,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=107; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+35,107,jvj+43)*/
pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+35,107,jvj+44)*/
pile[WZ1]=jvj+34; 
(*f[1296])( );     /*NOUVCONTR0(jvj+35,jvj+34)*/
l12:x[jvj+26]=t[x[jvj+26]];
l11:if((x[jvj+26]<=0)) goto l13;
x[jvj+29]=s[x[jvj+26]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+26];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[1290])( );if(v[102]) goto l12;     /*DEPEXP0(jvj+29,jvj+30)*/
x[jvj+6]=x[jvj+30] ;z[jvj+6]=z[jvj+30];
x[jvj+22]=0 ;z[jvj+22]=0;
x[jvj+55]=x[jvj+27] ;z[jvj+55]=z[jvj+27];
goto l6;
l10:pile[v[22]]=jvj+22; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+2)*/
goto l8;
}
