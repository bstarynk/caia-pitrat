#include "dx.h"
void STUTIREG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V4=0,V2=0,V3=0,V6=0,V27=0,K=0,V16=0,V17=0,V22=0,V19=0,V21=0,V45=0,V47=0,V43=0;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=10979;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1526&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(250,158,jvj+3)*/
x[jvj+2]=vo[12];z[jvj+2]=vz[12];
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+2,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(1484,854,V4)*/
V4=pile[WZ2]; 
V2=sepfacts+1;
V3=sepfacts+V4;
l1:if((V2>V3)) goto l10;
V6=r[V2];
if((V6!=1)) goto l2;
x[jvj+28]=V2 ;z[jvj+28]=(V2<=sepcte) ? V2 : 0;
pile[v[22]]=V10; pile[WZ1]=117; pile[WZ2]=jvj+29; 
(*f[46])( );     /*TRI0(V10,117,jvj+29)*/
pile[v[22]]=109; pile[WZ1]=jvj+28; pile[WZ2]=274; pile[WZ3]=jvj+29; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(109,jvj+28,274,jvj+29,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=159; pile[WZ2]=jvj+4; 
(*f[774])( );     /*TJPLUS0(jvj+3,159,jvj+4)*/
l2:V2++;
goto l1;
l5:x[jvj+30]=t[x[jvj+30]];
l4:if((x[jvj+30]<=0)) goto l12;
x[jvj+6]=s[x[jvj+30]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+30];
pile[v[22]]=109; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,jvj+6,jvj+7)*/
if((x[jvj+7]!=V19)) goto l5;
pile[v[22]]=274; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(274,jvj+6,jvj+13)*/
x[jvj+8]=x[jvj+13] ;z[jvj+8]=z[jvj+13];
x[jvj+27]=incon;
pile[v[22]]=159; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(159,jvj+8,jvj+9)*/
x[jvj+31]=x[jvj+9] ;z[jvj+31]=z[jvj+9];
l7:if((x[jvj+31]>0)) goto l8;
pile[v[22]]=jvj+26; pile[WZ1]=158; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,158,jvj+27)*/
l13:x[jvj+15]=x[jvj+32] ;z[jvj+15]=z[jvj+32];
x[jvj+14]=x[jvj+27] ;z[jvj+14]=z[jvj+27];
pile[v[22]]=jvj+8; pile[WZ1]=159; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+8,159,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+14,jvj+15,1)*/
pile[v[22]]=jvj+8; 
(*f[186])( );     /*BTC0(jvj+8,jvj+15,1)*/
l12:K++;
l11:if((K>V27)) goto l15;
V16=tu[K];
V17=tm[K];
if((V17<=0)) goto l12;
V22=tp[K];
if((V22<=0)) goto l12;
V19=vbl[V17];
V21=tt[K];
x[jvj+26]=V21 ;z[jvj+26]=(V21<=sepcte) ? V21 : 0;
if(x[jvj+26]!=289&&x[jvj+26]!=187&&x[jvj+26]!=44&&x[jvj+26]!=714) goto l12;
x[jvj+32]=incon;
if((V16==0)) goto l6;
x[jvj+32]=737 ;z[jvj+32]=737;
l3:pile[v[22]]=159; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(159,jvj+3,jvj+5)*/
x[jvj+30]=x[jvj+5] ;z[jvj+30]=z[jvj+5];
goto l4;
l6:x[jvj+32]=846 ;z[jvj+32]=846;
goto l3;
l8:x[jvj+10]=s[x[jvj+31]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+31];
pile[v[22]]=158; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(158,jvj+10,jvj+11)*/
if((x[jvj+11]!=x[jvj+26])) goto l9;
x[jvj+27]=x[jvj+10] ;z[jvj+27]=z[jvj+10];
goto l13;
l9:x[jvj+31]=t[x[jvj+31]];
goto l7;
l10:x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(642,jvj+12,V27)*/
V27=pile[WZ2]; 
K=0;
goto l11;
l15:x[jvj+16]=vo[12];z[jvj+16]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(683,jvj+16,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=159; pile[WZ1]=jvj+3; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(159,jvj+3,jvj+18)*/
pile[v[22]]=109; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(109,jvj+16,jvj+19)*/
l16:if((x[jvj+18]<=0)) goto l19;
x[jvj+20]=s[x[jvj+18]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+18];
pile[v[22]]=274; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(274,jvj+20,jvj+21)*/
pile[v[22]]=109; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(109,jvj+20,jvj+22)*/
x[jvj+17]=x[jvj+21] ;z[jvj+17]=z[jvj+21];
pile[v[22]]=159; pile[WZ1]=jvj+17; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(159,jvj+17,jvj+23)*/
if((x[jvj+23]==0)) goto l17;
x[jvj+24]=x[jvj+22] ;z[jvj+24]=z[jvj+22];
pile[v[22]]=983; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(983,jvj+24,jvj+25)*/
pile[v[22]]=163; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(163,jvj+16,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=163; pile[WZ2]=V45; 
(*f[177])( );     /*CHGC4(jvj+17,163,V45)*/
l14:pile[v[22]]=1542; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(1542,jvj+16,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=642; pile[WZ2]=V47; 
(*f[43])( );     /*CHGC2(jvj+17,642,V47)*/
l18:pile[v[22]]=jvj+25; pile[WZ1]=1001; pile[WZ2]=jvj+17; 
(*f[774])( );     /*TJPLUS0(jvj+25,1001,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=109; pile[WZ2]=jvj+19; 
(*f[35])( );     /*CHGC1(jvj+17,109,jvj+19)*/
pile[WZ1]=683; pile[WZ2]=V43; 
(*f[43])( );     /*CHGC2(jvj+17,683,V43)*/
l17:x[jvj+18]=t[x[jvj+18]];
goto l16;
l19:x[jvj+1]=incon; v[0]=jvj; return;
}
