#include "dx.h"
void PREPARER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V16=0,V18=0;
int X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=52;
x[jvj+1]=10343;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1910&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=x[jvj+5]=x[jvj+7]=incon;
pile[v[22]]=447; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(447,X,jvj+4)*/
pile[v[22]]=319; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(319,jvj+4,jvj+5)*/
l3:pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+4,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=1201)) goto l14;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+4,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+23,jvj+24)*/
pile[v[22]]=158; pile[WZ1]=1201; pile[WZ2]=218; pile[WZ3]=jvj+24; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(158,1201,218,jvj+24,jvj+25)*/
pile[v[22]]=jvj+25; 
(*f[605])( );     /*MONITEUR0(jvj+25)*/
l14:if(x[jvj+5]!=incon) goto l15;
l17:pile[v[22]]=X; pile[WZ1]=jvj+4; 
(*f[2042])( );     /*PREPFIN1(X,jvj+4)*/
if(x[jvj+7]!=incon) goto l18;
l19:pile[v[22]]=158; pile[WZ1]=X; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(158,X,jvj+36)*/
if((x[jvj+36]!=287)) goto l21;
pile[v[22]]=218; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(218,X,jvj+37)*/
pile[v[22]]=120; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(120,jvj+37,jvj+38)*/
pile[v[22]]=319; pile[WZ1]=X; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(319,X,jvj+39)*/
pile[v[22]]=746; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(746,X,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=746; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+40,746,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+38; pile[WZ2]=447; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+51,jvj+38,447,jvj+52)*/
pile[v[22]]=158; pile[WZ1]=547; pile[WZ2]=319; pile[WZ3]=jvj+39; pile[WZ4]=jvj+52; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(158,547,319,jvj+39,jvj+52,jvj+3)*/
x[jvj+41]=vo[13];z[jvj+41]=vz[13];
pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(120,X,jvj+2)*/
pile[v[22]]=jvj+3; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+3,120,jvj+2)*/
l20:pile[v[22]]=jvj+41; pile[WZ1]=120; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(jvj+41,120,jvj+3)*/
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:pile[v[22]]=319; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(319,X,jvj+5)*/
l2:if(x[jvj+4]!=incon) goto l3;
goto l19;
l5:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[827])( );if(v[102]) goto l6;     /*VOIRCOND0(jvj+9,jvj+5,jvj+10)*/
if((x[jvj+10]==134)) goto l17;
l6:x[jvj+8]=t[x[jvj+8]];
l4:if((x[jvj+8]>0)) goto l5;
pile[v[22]]=366; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(366,jvj+4,jvj+11)*/
l12:pile[v[22]]=366; pile[WZ1]=jvj+4; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(366,jvj+4,jvj+19)*/
pile[v[22]]=319; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(319,X,jvj+20)*/
pile[v[22]]=746; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(746,X,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=746; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+21,746,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+19; pile[WZ2]=447; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+44,jvj+19,447,jvj+45)*/
pile[v[22]]=158; pile[WZ1]=547; pile[WZ2]=319; pile[WZ3]=jvj+20; pile[WZ4]=jvj+45; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(158,547,319,jvj+20,jvj+45,jvj+16)*/
x[jvj+22]=vo[13];z[jvj+22]=vz[13];
if((x[jvj+7]==918)) goto l8;
if((x[jvj+7]!=433)) goto l13;
pile[v[22]]=120; pile[WZ1]=jvj+4; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(120,jvj+4,jvj+17)*/
pile[v[22]]=jvj+21; pile[WZ1]=746; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+21,746,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+17; pile[WZ2]=447; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,jvj+17,447,jvj+43)*/
pile[v[22]]=158; pile[WZ1]=547; pile[WZ2]=319; pile[WZ3]=jvj+20; pile[WZ4]=jvj+43; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(158,547,319,jvj+20,jvj+43,jvj+13)*/
pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(120,X,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+13,120,jvj+12)*/
l9:pile[v[22]]=jvj+16; pile[WZ1]=120; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(jvj+16,120,jvj+13)*/
l7:pile[v[22]]=120; pile[WZ1]=jvj+4; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(120,jvj+4,jvj+14)*/
l13:pile[v[22]]=jvj+22; pile[WZ1]=120; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(jvj+22,120,jvj+16)*/
l18:if((x[jvj+7]!=1196)) goto l19;
x[jvj+35]=vo[14];z[jvj+35]=vz[14];
pile[v[22]]=jvj+35; pile[WZ1]=893; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+35,893,12)*/
goto l19;
l8:pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(120,X,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+16,120,jvj+15)*/
goto l13;
l10:pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(120,X,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+16,120,jvj+18)*/
goto l13;
l11:pile[v[22]]=X; 
(*f[2041])( );     /*PREPFIN0(X)*/
goto l12;
l15:if(x[jvj+7]!=44&&x[jvj+7]!=187&&x[jvj+7]!=714) goto l16;
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+4,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+26,jvj+27)*/
x[jvj+28]=vo[12];z[jvj+28]=vz[12];
pile[v[22]]=901; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(901,jvj+28,jvj+29)*/
for(a=x[jvj+29];a>0;a=t[a]) if(s[a]==x[jvj+27]) goto l16;
x[jvj+30]=vo[13];z[jvj+30]=vz[13];
pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(901,jvj+30,jvj+31)*/
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==x[jvj+27]) goto l16;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+4,jvj+32)*/
pile[v[22]]=746; pile[WZ1]=X; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(746,X,jvj+33)*/
pile[v[22]]=246; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(246,jvj+4,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=140; pile[WZ1]=jvj+32; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+32,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=642; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(642,jvj+33,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=110; pile[WZ3]=V16; pile[WZ4]=jvj+49; 
(*f[270])( );     /*QUADRI7(101,jvj+5,110,V16,jvj+49)*/
pile[v[22]]=V18; pile[WZ1]=642; pile[WZ2]=jvj+46; 
(*f[46])( );     /*TRI0(V18,642,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=V15; pile[WZ2]=246; pile[WZ3]=jvj+47; 
(*f[189])( );     /*TRI4(jvj+46,V15,246,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+27; pile[WZ2]=218; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+47,jvj+27,218,jvj+48)*/
pile[v[22]]=jvj+49; pile[WZ1]=(-20); pile[WZ2]=jvj+48; pile[WZ3]=159; pile[WZ4]=jvj+50; 
(*f[298])( );     /*TRIENS1(jvj+49,(-20),jvj+48,159,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+7; pile[WZ2]=158; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+50,jvj+7,158,jvj+34)*/
pile[v[22]]=jvj+34; 
(*f[545])( );     /*AGIR0(jvj+34)*/
l16:if(x[jvj+7]!=433&&x[jvj+7]!=918) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+8)*/
goto l4;
}
