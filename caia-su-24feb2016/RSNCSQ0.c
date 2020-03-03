#include "dx.h"
void RSNCSQ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V9=0,V17=0,V6=0,V22=0,V28=0,V42=0,V49=0,V39=0,V40=0,V41=0,V43=0,V44=0,V45=0,V46=0,V47=0,V48=0,V50=0,V51=0,V52=0,V53=0,V38=0,V36=0,V37=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=10074;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1927&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=868; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(868,R,jvj+8)*/
if(x[jvj+8]!=27&&x[jvj+8]!=28&&x[jvj+8]!=29&&x[jvj+8]!=30) goto l14;
pile[v[22]]=R; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(R,jvj+9)*/
for(i=x[jvj+9],V17=0;i>0;i=t[i],V17++)  ;
if((V17!=2)) goto l14;
x[jvj+10]=d[200];z[jvj+10]=0;
l9:if((x[jvj+10]<=0)) goto l14;
x[jvj+31]=s[x[jvj+10]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+10];
x[jvj+28]=incon;
if((x[jvj+31]==1182)) goto l6;
x[jvj+28]=365 ;z[jvj+28]=365;
l12:x[jvj+47]=x[jvj+9] ;z[jvj+47]=z[jvj+9];
l10:if((x[jvj+47]>0)) goto l11;
x[jvj+10]=t[x[jvj+10]];
goto l9;
l3:x[jvj+35]=365 ;z[jvj+35]=365;
l15:if((x[jvj+12]<=0)) goto l17;
x[jvj+40]=s[x[jvj+12]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+12];
pile[v[22]]=R; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(R,jvj+2)*/
x[jvj+45]=x[jvj+2] ;z[jvj+45]=z[jvj+2];
l1:if((x[jvj+45]<=0)) goto l16;
x[jvj+39]=s[x[jvj+45]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+45];
if((x[jvj+39]!=x[jvj+40])) goto l24;
x[jvj+45]=t[x[jvj+45]];
goto l1;
l4:x[jvj+41]=579 ;z[jvj+41]=579;
l2:x[jvj+35]=incon;
pile[v[22]]=1101; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(1101,R,V8)*/
V8=pile[WZ2]; 
if((V8!=1)) goto l3;
x[jvj+35]=579 ;z[jvj+35]=579;
goto l15;
l6:x[jvj+28]=579 ;z[jvj+28]=579;
goto l12;
l8:x[jvj+4]=s[x[jvj+18]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+18];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[1755])( );     /*EXTRET0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=1260; pile[WZ2]=jvj+7; 
(*f[300])( );     /*TRI10(jvj+5,1260,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
x[jvj+18]=t[x[jvj+18]];
l7:if((x[jvj+18]>0)) goto l8;
pile[v[22]]=R; pile[WZ1]=jvj+6; 
(*f[2049])( );     /*RSNCSQA0(R,jvj+6)*/
l18:pile[v[22]]=1584; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(1584,R,jvj+20)*/
if((x[jvj+20]!=0)) goto l21;
pile[v[22]]=R; pile[WZ1]=jvj+19; 
(*f[887])( );     /*VARND0(R,jvj+19)*/
for(i=x[jvj+19],V28=0;i>0;i=t[i],V28++)  ;
if((V28<=2)) goto l21;
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l11:x[jvj+34]=s[x[jvj+47]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+47];
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
x[jvj+46]=x[jvj+3] ;z[jvj+46]=z[jvj+3];
l5:if((x[jvj+46]<=0)) goto l13;
x[jvj+33]=s[x[jvj+46]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+46];
if((x[jvj+33]!=x[jvj+34])) goto l23;
x[jvj+46]=t[x[jvj+46]];
goto l5;
l14:if((x[jvj+8]!=25)) goto l17;
pile[v[22]]=R; pile[WZ1]=jvj+12; 
(*f[887])( );     /*VARND0(R,jvj+12)*/
for(i=x[jvj+12],V6=0;i>0;i=t[i],V6++)  ;
if((V6!=2)) goto l17;
x[jvj+41]=incon;
pile[v[22]]=1101; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(1101,R,V9)*/
V9=pile[WZ2]; 
if((V9==1)) goto l4;
if((V9!=2)) goto l17;
x[jvj+41]=365 ;z[jvj+41]=365;
goto l2;
l17:pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,R,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=55)) goto l18;
pile[v[22]]=R; pile[WZ1]=jvj+17; 
(*f[887])( );     /*VARND0(R,jvj+17)*/
for(i=x[jvj+17],V22=0;i>0;i=t[i],V22++)  ;
if((V22<=1)) goto l18;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,R,jvj+18)*/
x[jvj+6]=0 ;z[jvj+6]=0;
goto l7;
l21:V38=x[R];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V38; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(20,V38,V36,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; 
(*f[40])( );     /*SLG0(V37)*/
pile[v[22]]=1584; pile[WZ1]=R; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(1584,R,jvj+21)*/
l19:if((x[jvj+21]<=0)) goto l22;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=1585; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1585,jvj+22,jvj+23)*/
pile[v[22]]=893; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(893,jvj+22,jvj+24)*/
pile[v[22]]=860; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(860,jvj+22,jvj+25)*/
pile[v[22]]=319; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(319,jvj+22,jvj+26)*/
pile[v[22]]=497; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(497,jvj+22,jvj+27)*/
V42=x[jvj+27];
V49=x[jvj+26];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=497; 
(*f[42])( );     /*SRA1(135,0,497,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V39,58,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=V42; pile[WZ2]=20; 
(*f[179])( );     /*SDX1(V40,V42,20,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V41; pile[WZ2]=jvj+25; 
(*f[42])( );     /*SRA1(135,V41,jvj+25,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=V43; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V43,45,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V44,62,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V45; pile[WZ2]=319; 
(*f[42])( );     /*SRA1(135,V45,319,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=V46; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V46,58,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=V49; pile[WZ2]=20; 
(*f[179])( );     /*SDX1(V47,V49,20,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V48; pile[WZ2]=jvj+24; 
(*f[42])( );     /*SRA1(135,V48,jvj+24,V50)*/
V50=pile[WZ3]; 
pile[WZ1]=V50; pile[WZ2]=1585; 
(*f[42])( );     /*SRA1(135,V50,1585,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V51,58,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V52; pile[WZ2]=jvj+23; 
(*f[42])( );     /*SRA1(135,V52,jvj+23,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; 
(*f[40])( );     /*SLG0(V53)*/
l20:x[jvj+21]=t[x[jvj+21]];
goto l19;
l23:pile[v[22]]=jvj+28; pile[WZ1]=1585; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,1585,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=1586; pile[WZ2]=893; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+29,1586,893,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=860; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+30,jvj+31,860,jvj+32)*/
pile[v[22]]=319; pile[WZ1]=jvj+33; pile[WZ2]=497; pile[WZ3]=jvj+34; pile[WZ4]=jvj+32; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(319,jvj+33,497,jvj+34,jvj+32,jvj+11)*/
pile[v[22]]=R; pile[WZ1]=1584; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(R,1584,jvj+11)*/
l13:x[jvj+47]=t[x[jvj+47]];
goto l10;
l24:pile[v[22]]=jvj+35; pile[WZ1]=1585; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,1585,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=225; pile[WZ2]=893; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+36,225,893,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ2]=860; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+37,225,860,jvj+38)*/
pile[v[22]]=319; pile[WZ1]=jvj+39; pile[WZ2]=497; pile[WZ3]=jvj+40; pile[WZ4]=jvj+38; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(319,jvj+39,497,jvj+40,jvj+38,jvj+13)*/
pile[v[22]]=R; pile[WZ1]=1584; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(R,1584,jvj+13)*/
pile[v[22]]=jvj+41; pile[WZ1]=1585; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,1585,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=1395; pile[WZ2]=893; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,1395,893,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ2]=860; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+43,1395,860,jvj+44)*/
pile[v[22]]=319; pile[WZ1]=jvj+39; pile[WZ2]=497; pile[WZ3]=jvj+40; pile[WZ4]=jvj+44; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(319,jvj+39,497,jvj+40,jvj+44,jvj+14)*/
pile[v[22]]=R; pile[WZ1]=1584; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(R,1584,jvj+14)*/
l16:x[jvj+12]=t[x[jvj+12]];
goto l15;
}
