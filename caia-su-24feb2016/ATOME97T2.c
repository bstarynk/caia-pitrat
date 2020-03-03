#include "dx.h"
void ATOME97T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V14=0,V27=0,V51=0,V57=0,V16=0,V15=0,V53=0,V59=0,V20=0,V19=0,V55=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=51;
x[jvj+1]=20097;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3372&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=30)) goto l10;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,RR,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=55)) goto l10;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(870,R,V13)*/
V13=pile[WZ2]; 
if((V13!=2)) goto l10;
pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(870,RR,V14)*/
V14=pile[WZ2]; 
if((V14!=2)) goto l10;
pile[v[22]]=107; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,RR,jvj+7)*/
for(i=x[jvj+7],V27=0;i>0;i=t[i],V27++)  ;
if((V27!=2)) goto l10;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+8,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,R,jvj+9)*/
pile[v[22]]=103; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,R,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+11)*/
x[jvj+50]=x[jvj+7] ;z[jvj+50]=z[jvj+7];
l1:if((x[jvj+50]<=0)) goto l10;
x[jvj+12]=s[x[jvj+50]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+50];
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=26)) goto l2;
x[jvj+51]=x[jvj+7] ;z[jvj+51]=z[jvj+7];
l3:if((x[jvj+51]<=0)) goto l2;
x[jvj+15]=s[x[jvj+51]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+51];
if((x[jvj+12]==x[jvj+15])) goto l4;
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=25)) goto l4;
x[jvj+18]=d[20];z[jvj+18]=0;
l5:if((x[jvj+18]<=0)) goto l4;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=268; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+19,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+12; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+20,jvj+12,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+21,jvj+22)*/
if(x[jvj+22]!=96&&x[jvj+22]!=89&&x[jvj+22]!=41&&x[jvj+22]!=20&&x[jvj+22]!=128&&x[jvj+22]!=570&&x[jvj+22]!=1317) goto l6;
if((x[jvj+23]=w[x[jvj+22]][3])==incon) goto l6;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+23; pile[WZ3]=jvj+24; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+21,jvj+23,V57,jvj+24)*/
V57=pile[WZ2]; 
V16=V57;
V15=V16;
pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+25)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+19; pile[WZ3]=jvj+26; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+12,jvj+19,V53,jvj+26)*/
V53=pile[WZ2]; 
x[jvj+27]=V53 ;z[jvj+27]=(x[jvj+26]==20&&V53<=sepcte) ? V53 : (x[jvj+26]==41) ? (-1000) : 0;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[760])( );     /*MEMEX0(jvj+9,jvj+27,jvj+28)*/
if((x[jvj+28]==135)) goto l7;
l6:x[jvj+18]=t[x[jvj+18]];
goto l5;
l2:x[jvj+50]=t[x[jvj+50]];
goto l1;
l4:x[jvj+51]=t[x[jvj+51]];
goto l3;
l7:x[jvj+48]=x[jvj+25] ;z[jvj+48]=z[jvj+25];
x[jvj+29]=d[20];z[jvj+29]=0;
l8:if((x[jvj+29]<=0)) goto l6;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=268; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+30,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+15; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+31,jvj+15,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+32,jvj+33)*/
if(x[jvj+33]!=96&&x[jvj+33]!=89&&x[jvj+33]!=41&&x[jvj+33]!=20&&x[jvj+33]!=128&&x[jvj+33]!=570&&x[jvj+33]!=1317) goto l9;
if((x[jvj+34]=w[x[jvj+33]][3])==incon) goto l9;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+34; pile[WZ3]=jvj+35; 
(*f[45])( );if(v[102]) goto l9;     /*FNDZ0(jvj+32,jvj+34,V59,jvj+35)*/
V59=pile[WZ2]; 
V20=V59;
V19=V20;
if((V15<=V19)) goto l9;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+30; pile[WZ3]=jvj+36; 
(*f[45])( );if(v[102]) goto l9;     /*FNDZ0(jvj+15,jvj+30,V55,jvj+36)*/
V55=pile[WZ2]; 
x[jvj+37]=V55 ;z[jvj+37]=(x[jvj+36]==20&&V55<=sepcte) ? V55 : (x[jvj+36]==41) ? (-1000) : 0;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[760])( );     /*MEMEX0(jvj+10,jvj+37,jvj+38)*/
if((x[jvj+38]==135)) goto l11;
l9:x[jvj+29]=t[x[jvj+29]];
goto l8;
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l11:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+44)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+45)*/
pile[v[22]]=V51; pile[WZ1]=858; pile[WZ2]=jvj+41; 
(*f[46])( );     /*TRI0(V51,858,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+42; 
(*f[189])( );     /*TRI4(jvj+41,v[13],642,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=3372; pile[WZ2]=246; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,3372,246,jvj+43)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20097; pile[WZ4]=jvj+43; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(158,1,218,20097,jvj+43,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=159; pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+39,159,jvj+44)*/
pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+39,159,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; pile[WZ2]=103; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+47,jvj+48,103,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+49; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+49,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+39; 
(*f[1296])( );     /*NOUVCONTR0(jvj+40,jvj+39)*/
goto l9;
}
