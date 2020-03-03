#include "dx.h"
void ALCAE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int FF=0,A=0,M=0,J=0,H=0,V18=0,V22=0,V23=0,V25=0,V27=0,V36=0,V=0;
int AL,VV;
int S;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=40;
x[jvj+1]=10868;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==755&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
AL=pile[v[22]]; VV=pile[v[22]+1]; S=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+37]=incon;
pile[v[22]]=448; pile[WZ1]=AL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(448,AL,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
x[jvj+37]=67 ;z[jvj+37]=67;
l4:x[jvj+31]=incon;
pile[v[22]]=448; pile[WZ1]=AL; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(448,AL,jvj+7)*/
l5:if((x[jvj+7]>0)) goto l6;
x[jvj+31]=67 ;z[jvj+31]=67;
l8:
(*f[184])( );     /*DATE1(A,M,J,H)*/
A=pile[v[22]]; M=pile[WZ1]; J=pile[WZ2]; H=pile[WZ3]; 
pile[v[22]]=jvj+31; pile[WZ1]=1023; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,1023,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=J; pile[WZ2]=943; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,J,943,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=M; pile[WZ2]=942; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,M,942,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=A; pile[WZ2]=941; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,A,941,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=H; pile[WZ2]=938; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,H,938,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=872; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,872,jvj+38)*/
pile[v[22]]=158; pile[WZ1]=298; pile[WZ2]=498; pile[WZ3]=AL; pile[WZ4]=jvj+38; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(158,298,498,AL,jvj+38,jvj+12)*/
if((VV==(-3412))) goto l9;
pile[v[22]]=jvj+12; pile[WZ1]=163; pile[WZ2]=VV; 
(*f[177])( );     /*CHGC4(jvj+12,163,VV)*/
l9:pile[v[22]]=AL; pile[WZ1]=878; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(AL,878,jvj+12)*/
pile[v[22]]=878; pile[WZ1]=AL; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(878,AL,jvj+14)*/
l10:if((x[jvj+14]>0)) goto l11;
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=448)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+3,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=531)) goto l3;
x[jvj+37]=68 ;z[jvj+37]=68;
goto l4;
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l6:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=448)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+8,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+10,jvj+11)*/
FF=x[jvj+11];
if(FF!=979&&FF!=1027) goto l7;
x[jvj+31]=68 ;z[jvj+31]=68;
goto l8;
l7:x[jvj+7]=t[x[jvj+7]];
goto l5;
l11:x[jvj+13]=s[x[jvj+14]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+14];
if((VV==(-3412))) goto l12;
pile[v[22]]=163; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(163,jvj+13,V18)*/
V18=pile[WZ2]; 
if((V18==VV)) goto l12;
x[jvj+14]=t[x[jvj+14]];
goto l10;
l12:vo[16]=x[jvj+13];vz[16]=0;
x[S]=x[jvj+13] ;z[S]=z[jvj+13];
pile[v[22]]=454; pile[WZ1]=AL; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(454,AL,jvj+19)*/
l17:if((x[jvj+19]>0)) goto l18;
pile[v[22]]=448; pile[WZ1]=AL; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(448,AL,jvj+22)*/
l19:if((x[jvj+22]>0)) goto l20;
pile[v[22]]=983; pile[WZ1]=AL; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(983,AL,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=498; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+16,498,jvj+18)*/
pile[v[22]]=878; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(878,jvj+16,jvj+17)*/
l13:if((x[jvj+17]>0)) goto l14;
pile[v[22]]=163; pile[WZ1]=S; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(163,S,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=jvj+18; pile[WZ1]=163; pile[WZ2]=V27; 
(*f[177])( );     /*CHGC4(jvj+18,163,V27)*/
l22:pile[v[22]]=jvj+16; pile[WZ1]=878; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+16,878,jvj+18)*/
l24:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l14:x[jvj+15]=s[x[jvj+17]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+17];
pile[v[22]]=163; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(163,jvj+15,V22)*/
V22=pile[WZ2]; 
pile[WZ1]=S; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(163,S,V23)*/
V23=pile[WZ2]; 
if((V22!=V23)) goto l15;
l16:V25=x[jvj+15];
pile[v[22]]=878; pile[WZ1]=jvj+16; pile[WZ2]=V25; 
(*f[134])( );     /*OTA0(878,jvj+16,V25)*/
l15:x[jvj+17]=t[x[jvj+17]];
goto l13;
l18:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+21)*/
pile[v[22]]=S; pile[WZ1]=454; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(S,454,jvj+21)*/
x[jvj+19]=t[x[jvj+19]];
goto l17;
l20:x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+24)*/
pile[v[22]]=S; pile[WZ1]=448; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(S,448,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+23,jvj+25)*/
if((x[jvj+25]!=448)) goto l21;
pile[v[22]]=436; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(436,jvj+23,jvj+26)*/
pile[v[22]]=140; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+26,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+23; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+23,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=128)) goto l21;
pile[v[22]]=102; pile[WZ1]=jvj+23; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+23,jvj+29)*/
V=V36;
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+39; 
(*f[46])( );     /*TRI0(0,416,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=599; pile[WZ2]=158; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+39,599,158,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+40; pile[WZ5]=jvj+30; 
(*f[599])( );     /*QUADRI12(101,jvj+29,140,V,jvj+40,jvj+30)*/
pile[v[22]]=S; pile[WZ1]=128; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(S,128,jvj+30)*/
l21:x[jvj+22]=t[x[jvj+22]];
goto l19;
}
