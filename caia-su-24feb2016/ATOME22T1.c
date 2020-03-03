#include "dx.h"
void ATOME22T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=43;
x[jvj+1]=20022;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3228&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,R,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=1171)) goto l16;
x[jvj+21]=vo[14];z[jvj+21]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(642,jvj+21,V18)*/
V18=pile[WZ2]; 
x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(R,jvj+7)*/
l4:if((x[jvj+7]>0)) goto l5;
x[jvj+41]=x[jvj+6] ;z[jvj+41]=z[jvj+6];
l7:if((x[jvj+41]<=0)) goto l11;
x[jvj+11]=s[x[jvj+41]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+41];
pile[v[22]]=365; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[1969])( );     /*FNDEND0(365,jvj+11,jvj+12)*/
x[jvj+42]=x[jvj+12] ;z[jvj+42]=z[jvj+12];
l8:if((x[jvj+42]>0)) goto l9;
x[jvj+41]=t[x[jvj+41]];
goto l7;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=277; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(277,jvj+4,jvj+5)*/
if((x[jvj+5]!=480)) goto l3;
pile[v[22]]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+4)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=277; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(277,jvj+8,jvj+9)*/
if((x[jvj+9]!=481)) goto l6;
pile[v[22]]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+8)*/
l6:x[jvj+7]=t[x[jvj+7]];
goto l4;
l9:x[jvj+14]=s[x[jvj+42]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+42];
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l10;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+27)*/
pile[v[22]]=V18; pile[WZ1]=858; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(V18,858,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,v[13],642,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=3228; pile[WZ2]=246; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,3228,246,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=20022; pile[WZ2]=218; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+25,20022,218,jvj+26)*/
pile[v[22]]=jvj+27; pile[WZ1]=(-20); pile[WZ2]=jvj+26; pile[WZ3]=159; pile[WZ4]=jvj+28; 
(*f[298])( );     /*TRIENS1(jvj+27,(-20),jvj+26,159,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+28,1,158,jvj+13)*/
pile[v[22]]=365; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[1569])( );     /*DELIER0(365,jvj+11,jvj+14,jvj+13)*/
l10:x[jvj+42]=t[x[jvj+42]];
goto l8;
l12:x[jvj+15]=s[x[jvj+10]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+10];
pile[v[22]]=365; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[1969])( );     /*FNDEND0(365,jvj+15,jvj+16)*/
x[jvj+43]=x[jvj+16] ;z[jvj+43]=z[jvj+16];
l13:if((x[jvj+43]>0)) goto l14;
x[jvj+10]=t[x[jvj+10]];
l11:if((x[jvj+10]>0)) goto l12;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+39)*/
pile[v[22]]=V18; pile[WZ1]=858; pile[WZ2]=jvj+35; 
(*f[46])( );     /*TRI0(V18,858,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,v[13],642,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=3228; pile[WZ2]=246; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,3228,246,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=20022; pile[WZ2]=218; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+37,20022,218,jvj+38)*/
pile[v[22]]=jvj+39; pile[WZ1]=(-20); pile[WZ2]=jvj+38; pile[WZ3]=159; pile[WZ4]=jvj+40; 
(*f[298])( );     /*TRIENS1(jvj+39,(-20),jvj+38,159,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+40,1,158,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=R; 
(*f[966])( );     /*ELIMINE0(jvj+22,R)*/
l16:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l14:x[jvj+18]=s[x[jvj+43]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+43];
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[jvj+18]) goto l15;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+33)*/
pile[v[22]]=V18; pile[WZ1]=858; pile[WZ2]=jvj+29; 
(*f[46])( );     /*TRI0(V18,858,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,v[13],642,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=3228; pile[WZ2]=246; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,3228,246,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=20022; pile[WZ2]=218; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+31,20022,218,jvj+32)*/
pile[v[22]]=jvj+33; pile[WZ1]=(-20); pile[WZ2]=jvj+32; pile[WZ3]=159; pile[WZ4]=jvj+34; 
(*f[298])( );     /*TRIENS1(jvj+33,(-20),jvj+32,159,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+34,1,158,jvj+17)*/
pile[v[22]]=365; pile[WZ1]=jvj+18; pile[WZ2]=jvj+15; 
(*f[1569])( );     /*DELIER0(365,jvj+18,jvj+15,jvj+17)*/
l15:x[jvj+43]=t[x[jvj+43]];
goto l13;
}
