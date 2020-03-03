#include "dx.h"
void NOUVEAUTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V9=0,V6=0,V5=0,V38=0,V37=0,V49=0,V48=0,V1=0,V55=0,V56=0,V63=0,V62=0;
int P,Q;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=10856;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==974&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; Q=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=128; pile[WZ1]=P; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(128,P,jvj+2)*/
for(i=x[jvj+2],V7=0;i>0;i=t[i],V7++)  ;
pile[WZ1]=Q; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(128,Q,jvj+3)*/
for(i=x[jvj+3],V9=0;i>0;i=t[i],V9++)  ;
if((V7!=V9)) goto l1;
pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(128,Q,jvj+4)*/
l2:if((x[jvj+2]<=0)) goto l1;
x[jvj+5]=s[x[jvj+2]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+2];
pile[v[22]]=158; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,jvj+5,jvj+6)*/
if(x[jvj+6]!=41&&x[jvj+6]!=453&&x[jvj+6]!=531&&x[jvj+6]!=979&&x[jvj+6]!=1027) goto l3;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+5,V6)*/
V6=pile[WZ2]; 
x[jvj+26]=x[jvj+4] ;z[jvj+26]=z[jvj+4];
l4:if((x[jvj+26]<=0)) goto l3;
x[jvj+7]=s[x[jvj+26]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+26];
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+7,V5)*/
V5=pile[WZ2]; 
if((V5!=V6)) goto l5;
pile[v[22]]=158; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(158,jvj+5,jvj+8)*/
if((x[jvj+8]==531)) goto l23;
if((x[jvj+8]!=41)) goto l9;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+5,V38)*/
V38=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+7,V37)*/
V37=pile[WZ2]; 
if((V38!=V37)) goto l13;
l9:if(x[jvj+8]!=453&&x[jvj+8]!=979&&x[jvj+8]!=1027) goto l14;
pile[v[22]]=128; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(128,jvj+5,jvj+9)*/
x[jvj+27]=x[jvj+9] ;z[jvj+27]=z[jvj+9];
l10:if((x[jvj+27]<=0)) goto l18;
x[jvj+10]=s[x[jvj+27]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+27];
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+10,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=128; pile[WZ1]=jvj+7; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(128,jvj+7,jvj+11)*/
x[jvj+28]=x[jvj+11] ;z[jvj+28]=z[jvj+11];
l11:if((x[jvj+28]<=0)) goto l13;
x[jvj+12]=s[x[jvj+28]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+28];
pile[v[22]]=117; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+12,V48)*/
V48=pile[WZ2]; 
if((V49!=V48)) goto l12;
x[jvj+27]=t[x[jvj+27]];
goto l10;
l1:x[RES]=134 ;z[RES]=134;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:x[jvj+2]=t[x[jvj+2]];
goto l2;
l7:x[RES]=135 ;z[RES]=135;
goto l8;
l12:x[jvj+28]=t[x[jvj+28]];
goto l11;
l13:V1=134;
l6:if((V1==134)) goto l7;
l5:x[jvj+26]=t[x[jvj+26]];
goto l4;
l14:V1=135;
goto l6;
l17:x[jvj+29]=t[x[jvj+29]];
l16:if((x[jvj+29]<=0)) goto l13;
x[jvj+15]=s[x[jvj+29]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+29];
pile[v[22]]=117; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+15,V56)*/
V56=pile[WZ2]; 
if((V56!=V55)) goto l17;
x[jvj+16]=t[x[jvj+16]];
l15:if((x[jvj+16]<=0)) goto l14;
x[jvj+13]=s[x[jvj+16]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+16];
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+13,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=128; pile[WZ1]=jvj+5; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(128,jvj+5,jvj+14)*/
x[jvj+29]=x[jvj+14] ;z[jvj+29]=z[jvj+14];
goto l16;
l19:x[jvj+17]=s[x[jvj+9]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+9];
pile[v[22]]=117; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+17,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=128; pile[WZ1]=jvj+7; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(128,jvj+7,jvj+18)*/
x[jvj+30]=x[jvj+18] ;z[jvj+30]=z[jvj+18];
l20:if((x[jvj+30]<=0)) goto l21;
x[jvj+19]=s[x[jvj+30]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+30];
pile[v[22]]=117; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(117,jvj+19,V62)*/
V62=pile[WZ2]; 
if((V63!=V62)) goto l22;
pile[v[22]]=355; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(355,jvj+17,jvj+20)*/
pile[WZ1]=jvj+19; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(355,jvj+19,jvj+21)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[1345])( );     /*MEMESUITE0(jvj+20,jvj+21,jvj+22)*/
if((x[jvj+22]==134)) goto l13;
l21:x[jvj+9]=t[x[jvj+9]];
l18:if((x[jvj+9]>0)) goto l19;
pile[v[22]]=128; pile[WZ1]=jvj+7; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(128,jvj+7,jvj+16)*/
goto l15;
l22:x[jvj+30]=t[x[jvj+30]];
goto l20;
l23:pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+5,jvj+23)*/
pile[WZ1]=jvj+7; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+7,jvj+24)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[1345])( );     /*MEMESUITE0(jvj+23,jvj+24,jvj+25)*/
if((x[jvj+25]==134)) goto l13;
goto l9;
}
