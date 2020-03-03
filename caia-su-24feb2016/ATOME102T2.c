#include "dx.h"
void ATOME102T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V18=0,V68=0,V42=0,V70=0,V2=0,V78=0,V26=0,K=0,V5=0,V80=0,V50=0;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=20102;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3611&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,RR,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=25)) goto l24;
x[jvj+15]=0 ;z[jvj+15]=0;
pile[v[22]]=RR; pile[WZ1]=jvj+12; 
(*f[887])( );     /*VARND0(RR,jvj+12)*/
l5:if((x[jvj+12]<=0)) goto l10;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=509; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[1969])( );     /*FNDEND0(509,jvj+13,jvj+14)*/
x[jvj+45]=x[jvj+14] ;z[jvj+45]=z[jvj+14];
l6:if((x[jvj+45]>0)) goto l7;
x[jvj+12]=t[x[jvj+12]];
goto l5;
l2:x[jvj+7]=s[x[jvj+44]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+44];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[jvj+7]) goto l4;
l3:x[jvj+44]=t[x[jvj+44]];
l1:if((x[jvj+44]>0)) goto l2;
for(i=x[jvj+6],V13=0;i>0;i=t[i],V13++)  ;
if((V13<2)) goto l11;
x[jvj+20]=d[20];z[jvj+20]=0;
l12:if((x[jvj+20]<=0)) goto l11;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=268; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(268,jvj+21,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+3; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+22,jvj+3,jvj+23)*/
pile[v[22]]=111; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+23,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=485)) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+23,jvj+26)*/
for(i=x[jvj+26],V18=0;i>0;i=t[i],V18++)  ;
if((V18!=2)) goto l13;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+21; pile[WZ3]=jvj+27; 
(*f[45])( );if(v[102]) goto l13;     /*FNDZ0(jvj+3,jvj+21,V68,jvj+27)*/
V68=pile[WZ2]; 
x[jvj+28]=d[20];z[jvj+28]=0;
l14:if((x[jvj+28]<=0)) goto l13;
x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=268; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(268,jvj+29,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=RR; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+30,RR,jvj+31)*/
pile[v[22]]=111; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+31,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=485)) goto l15;
pile[v[22]]=107; pile[WZ1]=jvj+31; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(107,jvj+31,jvj+34)*/
for(i=x[jvj+34],V42=0;i>0;i=t[i],V42++)  ;
if((V42!=2)) goto l15;
pile[v[22]]=RR; pile[WZ1]=jvj+29; pile[WZ3]=jvj+35; 
(*f[45])( );if(v[102]) goto l15;     /*FNDZ0(RR,jvj+29,V70,jvj+35)*/
V70=pile[WZ2]; 
V78=x[jvj+26];
l16:if((V78<=0)) goto l15;
V2=s[V78];
x[jvj+46]=x[jvj+26] ;z[jvj+46]=z[jvj+26];
l17:if((x[jvj+46]>0)) goto l18;
V78=t[V78];
goto l16;
l4:pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
goto l3;
l7:x[jvj+8]=s[x[jvj+45]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+45];
if((x[jvj+8]==x[RR])) goto l8;
pile[v[22]]=1417; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1417,jvj+8,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==306) goto l9;
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1545,jvj+10,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==306) goto l9;
l8:x[jvj+45]=t[x[jvj+45]];
goto l6;
l9:pile[v[22]]=jvj+15; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+8)*/
goto l8;
l11:x[jvj+15]=t[x[jvj+15]];
l10:if((x[jvj+15]<=0)) goto l24;
x[jvj+3]=s[x[jvj+15]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+15];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+3,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=25)) goto l11;
x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(jvj+3,jvj+4)*/
pile[v[22]]=RR; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(RR,jvj+5)*/
x[jvj+44]=x[jvj+4] ;z[jvj+44]=z[jvj+4];
goto l1;
l13:x[jvj+20]=t[x[jvj+20]];
goto l12;
l15:x[jvj+28]=t[x[jvj+28]];
goto l14;
l18:x[jvj+36]=s[x[jvj+46]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+46];
if((V2==x[jvj+36])) goto l19;
pile[v[22]]=130; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+36,V26)*/
V26=pile[WZ2]; 
K=V26;
V80=x[jvj+34];
l20:if((V80<=0)) goto l19;
V5=s[V80];
x[jvj+47]=x[jvj+34] ;z[jvj+47]=z[jvj+34];
l21:if((x[jvj+47]>0)) goto l22;
V80=t[V80];
goto l20;
l19:x[jvj+46]=t[x[jvj+46]];
goto l17;
l22:x[jvj+37]=s[x[jvj+47]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+47];
if((V5==x[jvj+37])) goto l23;
pile[v[22]]=130; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+37,V50)*/
V50=pile[WZ2]; 
if((K!=V50)) goto l23;
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(101,jvj+3,110,(-601),jvj+42)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+43)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(206,715,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+40; 
(*f[189])( );     /*TRI4(jvj+39,v[13],642,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=3609; pile[WZ2]=246; pile[WZ3]=jvj+41; 
(*f[189])( );     /*TRI4(jvj+40,3609,246,jvj+41)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20102; pile[WZ4]=jvj+41; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(158,289,218,20102,jvj+41,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=159; pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(jvj+38,159,jvj+42)*/
pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+38,159,jvj+43)*/
(*f[481])( );     /*STOCKER0(jvj+38)*/
l23:x[jvj+47]=t[x[jvj+47]];
goto l21;
l24:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
