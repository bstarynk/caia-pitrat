#include "dx.h"
void POURQUOIPAS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V10=0,V6=0,V8=0,V15=0,V18=0,V20=0,V26=0,V27=0,V28=0,V29=0,V30=0,V31=0,V32=0,V33=0,V34=0,V35=0,V36=0,V37=0,V38=0,V39=0,V40=0,V41=0,V42=0,V43=0,V44=0,V46=0,V47=0,V48=0,V49=0,V50=0,V51=0,V52=0,V53=0,V54=0,V55=0,V56=0,V57=0,V58=0,V59=0,V60=0,V61=0,V62=0,V63=0,V64=0;
int N,NR,NS;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=10627;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==402&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NR=pile[v[22]+1]; NS=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=983; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(983,N,jvj+4)*/
pile[v[22]]=878; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(878,jvj+4,jvj+5)*/
l4:if((x[jvj+5]<=0)) goto l12;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=944; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(944,jvj+6,jvj+7)*/
x[jvj+14]=x[jvj+7] ;z[jvj+14]=z[jvj+7];
l5:if((x[jvj+14]>0)) goto l6;
x[jvj+5]=t[x[jvj+5]];
goto l4;
l1:x[jvj+16]=x[jvj+2] ;z[jvj+16]=z[jvj+2];
l10:if((x[jvj+16]==(-99999998))) goto l9;
x[jvj+8]=x[jvj+16] ;z[jvj+8]=z[jvj+16];
x[jvj+17]=incon;
if((x[jvj+8]==x[jvj+2])) goto l3;
x[jvj+17]=x[jvj+2] ;z[jvj+17]=z[jvj+2];
l11:x[jvj+10]=x[jvj+17] ;z[jvj+10]=z[jvj+17];
pile[v[22]]=876; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(876,jvj+8,V15)*/
V15=pile[WZ2]; 
if((V15>=25)) goto l12;
pile[v[22]]=1078; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1078,jvj+8,jvj+9)*/
pile[v[22]]=117; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+9,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=1078; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1078,jvj+10,jvj+11)*/
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+11,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=jvj+13; 
(*f[378])( );     /*CPI0(jvj+9,jvj+13)*/
V26=x[jvj+13];
pile[v[22]]=jvj+13; pile[WZ1]=0; pile[WZ2]=V26; pile[WZ3]=117; 
(*f[285])( );     /*ENLY0(jvj+13,0,V26,117,V27,V28)*/
V27=pile[WZ4]; V28=pile[WZ5]; 
pile[WZ1]=V28; pile[WZ2]=V27; pile[WZ3]=978; 
(*f[285])( );     /*ENLY0(jvj+13,V28,V27,978,V29,V30)*/
V29=pile[WZ4]; V30=pile[WZ5]; 
pile[WZ1]=V30; pile[WZ2]=V29; pile[WZ3]=999; 
(*f[285])( );     /*ENLY0(jvj+13,V30,V29,999,V31,V32)*/
V31=pile[WZ4]; V32=pile[WZ5]; 
pile[WZ1]=V32; pile[WZ2]=V31; pile[WZ3]=1002; 
(*f[285])( );     /*ENLY0(jvj+13,V32,V31,1002,V33,V34)*/
V33=pile[WZ4]; V34=pile[WZ5]; 
pile[WZ1]=V34; pile[WZ2]=V33; pile[WZ3]=1025; 
(*f[285])( );     /*ENLY0(jvj+13,V34,V33,1025,V35,V36)*/
V35=pile[WZ4]; V36=pile[WZ5]; 
pile[WZ1]=V36; pile[WZ2]=V35; pile[WZ3]=1042; 
(*f[285])( );     /*ENLY0(jvj+13,V36,V35,1042,V37,V38)*/
V37=pile[WZ4]; V38=pile[WZ5]; 
pile[WZ1]=V38; pile[WZ2]=V37; pile[WZ3]=1080; 
(*f[285])( );     /*ENLY0(jvj+13,V38,V37,1080,V39,V40)*/
V39=pile[WZ4]; V40=pile[WZ5]; 
pile[WZ1]=V40; pile[WZ2]=V39; pile[WZ3]=1104; 
(*f[285])( );     /*ENLY0(jvj+13,V40,V39,1104,V41,V42)*/
V41=pile[WZ4]; V42=pile[WZ5]; 
pile[WZ1]=V42; pile[WZ2]=V41; pile[WZ3]=1121; 
(*f[285])( );     /*ENLY0(jvj+13,V42,V41,1121,V43,V44)*/
V43=pile[WZ4]; V44=pile[WZ5]; 
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[378])( );     /*CPI0(jvj+11,jvj+12)*/
V46=x[jvj+12];
pile[v[22]]=jvj+12; pile[WZ1]=0; pile[WZ2]=V46; pile[WZ3]=117; 
(*f[285])( );     /*ENLY0(jvj+12,0,V46,117,V47,V48)*/
V47=pile[WZ4]; V48=pile[WZ5]; 
pile[WZ1]=V48; pile[WZ2]=V47; pile[WZ3]=978; 
(*f[285])( );     /*ENLY0(jvj+12,V48,V47,978,V49,V50)*/
V49=pile[WZ4]; V50=pile[WZ5]; 
pile[WZ1]=V50; pile[WZ2]=V49; pile[WZ3]=999; 
(*f[285])( );     /*ENLY0(jvj+12,V50,V49,999,V51,V52)*/
V51=pile[WZ4]; V52=pile[WZ5]; 
pile[WZ1]=V52; pile[WZ2]=V51; pile[WZ3]=1002; 
(*f[285])( );     /*ENLY0(jvj+12,V52,V51,1002,V53,V54)*/
V53=pile[WZ4]; V54=pile[WZ5]; 
pile[WZ1]=V54; pile[WZ2]=V53; pile[WZ3]=1025; 
(*f[285])( );     /*ENLY0(jvj+12,V54,V53,1025,V55,V56)*/
V55=pile[WZ4]; V56=pile[WZ5]; 
pile[WZ1]=V56; pile[WZ2]=V55; pile[WZ3]=1042; 
(*f[285])( );     /*ENLY0(jvj+12,V56,V55,1042,V57,V58)*/
V57=pile[WZ4]; V58=pile[WZ5]; 
pile[WZ1]=V58; pile[WZ2]=V57; pile[WZ3]=1080; 
(*f[285])( );     /*ENLY0(jvj+12,V58,V57,1080,V59,V60)*/
V59=pile[WZ4]; V60=pile[WZ5]; 
pile[WZ1]=V60; pile[WZ2]=V59; pile[WZ3]=1104; 
(*f[285])( );     /*ENLY0(jvj+12,V60,V59,1104,V61,V62)*/
V61=pile[WZ4]; V62=pile[WZ5]; 
pile[WZ1]=V62; pile[WZ2]=V61; pile[WZ3]=1121; 
(*f[285])( );     /*ENLY0(jvj+12,V62,V61,1121,V63,V64)*/
V63=pile[WZ4]; V64=pile[WZ5]; 
pile[WZ1]=924; 
(*f[762])( );     /*AJNUM0(jvj+12,924)*/
pile[v[22]]=jvj+13; pile[WZ1]=860; pile[WZ2]=368; 
(*f[35])( );     /*CHGC1(jvj+13,860,368)*/
pile[WZ1]=1078; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(jvj+13,1078,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=860; pile[WZ2]=368; 
(*f[35])( );     /*CHGC1(jvj+12,860,368)*/
pile[v[22]]=jvj+13; pile[WZ1]=1064; pile[WZ2]=V18; 
(*f[43])( );     /*CHGC2(jvj+13,1064,V18)*/
pile[v[22]]=jvj+12; pile[WZ2]=V20; 
(*f[43])( );     /*CHGC2(jvj+12,1064,V20)*/
pile[v[22]]=jvj+13; pile[WZ1]=1161; pile[WZ2]=978; 
(*f[35])( );     /*CHGC1(jvj+13,1161,978)*/
pile[WZ1]=jvj+8; 
(*f[432])( );     /*AJEXP0(jvj+13,jvj+8)*/
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+16]=(-99999998);
l9:x[jvj+15]=t[x[jvj+15]];
l8:if((x[jvj+15]<=0)) goto l7;
x[jvj+3]=s[x[jvj+15]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+15];
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+3,V8)*/
V8=pile[WZ2]; 
if((V8!=NS)) goto l9;
x[jvj+16]=incon;
pile[v[22]]=876; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(876,jvj+2,V9)*/
V9=pile[WZ2]; 
pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(876,jvj+3,V10)*/
V10=pile[WZ2]; 
if((V9<V10)) goto l1;
if((V10>=V9)) goto l2;
x[jvj+16]=x[jvj+3] ;z[jvj+16]=z[jvj+3];
goto l10;
l3:x[jvj+17]=x[jvj+3] ;z[jvj+17]=z[jvj+3];
goto l11;
l6:x[jvj+2]=s[x[jvj+14]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+14];
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+2,V6)*/
V6=pile[WZ2]; 
if((V6!=NR)) goto l7;
x[jvj+15]=x[jvj+7] ;z[jvj+15]=z[jvj+7];
goto l8;
l7:x[jvj+14]=t[x[jvj+14]];
goto l5;
}
