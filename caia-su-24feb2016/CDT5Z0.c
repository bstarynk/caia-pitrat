#include "dx.h"
void CDT5Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,V67=0,V26=0,V98=0,V115=0,V117=0,V111=0,V85=0,V16=0,V14=0,V156=0,V42=0,V131=0,V148=0,V150=0,V162=0,V164=0,V176=0,V175=0,V178=0,V2=0,V177=0;
int RRRT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=11576;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1783&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RRRT=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+27]=0 ;z[jvj+27]=0;
x[jvj+7]=x[jvj+27] ;z[jvj+7]=z[jvj+27];
x[jvj+2]=x[RRRT] ;z[jvj+2]=z[RRRT];
pile[v[22]]=277; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(277,jvj+2,jvj+3)*/
if((x[jvj+3]!=480)) goto l21;
x[jvj+4]=vo[16];z[jvj+4]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(498,jvj+4,jvj+5)*/
pile[v[22]]=1182; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1182,jvj+5,jvj+6)*/
if((68!=x[jvj+6])) goto l4;
pile[v[22]]=jvj+7; pile[WZ1]=22; 
(*f[207])( );     /*PLUE2(jvj+7,22)*/
pile[WZ1]=31; 
(*f[207])( );     /*PLUE2(jvj+7,31)*/
pile[WZ1]=70; 
(*f[207])( );     /*PLUE2(jvj+7,70)*/
pile[WZ1]=100; 
(*f[207])( );     /*PLUE2(jvj+7,100)*/
pile[WZ1]=153; 
(*f[207])( );     /*PLUE2(jvj+7,153)*/
pile[WZ1]=156; 
(*f[207])( );     /*PLUE2(jvj+7,156)*/
pile[WZ1]=268; 
(*f[207])( );     /*PLUE2(jvj+7,268)*/
pile[WZ1]=564; 
(*f[207])( );     /*PLUE2(jvj+7,564)*/
pile[WZ1]=573; 
(*f[207])( );     /*PLUE2(jvj+7,573)*/
pile[v[22]]=164; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(164,jvj+2,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=57; 
(*f[207])( );     /*PLUE2(jvj+7,57)*/
pile[v[22]]=280; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(280,jvj+2,V67)*/
V67=pile[WZ2]; 
if((V20!=V67)) goto l1;
pile[v[22]]=jvj+7; pile[WZ1]=165; 
(*f[207])( );     /*PLUE2(jvj+7,165)*/
l1:if((V67<=V20)) goto l2;
pile[v[22]]=jvj+7; pile[WZ1]=171; 
(*f[207])( );     /*PLUE2(jvj+7,171)*/
l2:pile[v[22]]=280; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(280,jvj+2,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=60; 
(*f[207])( );     /*PLUE2(jvj+7,60)*/
l3:pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+8)*/
for(i=x[jvj+8],V98=0;i>0;i=t[i],V98++)  ;
if((V98!=2)) goto l4;
pile[v[22]]=242; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(242,jvj+4,jvj+9)*/
pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(498,jvj+2,jvj+10)*/
pile[v[22]]=jvj+7; pile[WZ1]=196; 
(*f[207])( );     /*PLUE2(jvj+7,196)*/
l4:pile[v[22]]=1274; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(1274,jvj+4,V115)*/
V115=pile[WZ2]; 
if((V115!=2)) goto l5;
pile[v[22]]=489; pile[WZ1]=jvj+2; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(489,jvj+2,jvj+11)*/
for(i=x[jvj+11],V117=0;i>0;i=t[i],V117++)  ;
if((V117!=1)) goto l5;
pile[v[22]]=jvj+7; pile[WZ1]=264; 
(*f[207])( );     /*PLUE2(jvj+7,264)*/
l5:pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(498,jvj+2,jvj+12)*/
pile[v[22]]=688; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(688,jvj+12,V111)*/
V111=pile[WZ2]; 
if((V111!=2)) goto l6;
pile[v[22]]=jvj+7; pile[WZ1]=253; 
(*f[207])( );     /*PLUE2(jvj+7,253)*/
l6:pile[v[22]]=473; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(473,jvj+12,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=180; 
(*f[207])( );     /*PLUE2(jvj+7,180)*/
l7:if((V111!=1)) goto l11;
pile[v[22]]=971; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(971,jvj+2,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==29) goto l8;
l9:for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==27) goto l10;
l11:pile[v[22]]=472; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(472,jvj+12,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=489; pile[WZ1]=jvj+2; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(489,jvj+2,jvj+14)*/
for(i=x[jvj+14],V14=0;i>0;i=t[i],V14++)  ;
if((V14<=V16)) goto l12;
pile[v[22]]=jvj+7; pile[WZ1]=51; 
(*f[207])( );     /*PLUE2(jvj+7,51)*/
l12:if((V16!=2)) goto l13;
pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+15)*/
for(i=x[jvj+15],V156=0;i>0;i=t[i],V156++)  ;
if((V156!=2)) goto l13;
pile[v[22]]=jvj+7; pile[WZ1]=592; 
(*f[207])( );     /*PLUE2(jvj+7,592)*/
l13:pile[v[22]]=473; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(473,jvj+12,V42)*/
V42=pile[WZ2]; 
if((V42!=1)) goto l14;
pile[v[22]]=489; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(489,jvj+2,jvj+16)*/
if((x[jvj+16]!=0)) goto l14;
pile[v[22]]=jvj+7; pile[WZ1]=118; 
(*f[207])( );     /*PLUE2(jvj+7,118)*/
pile[WZ1]=169; 
(*f[207])( );     /*PLUE2(jvj+7,169)*/
l14:pile[v[22]]=844; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(844,jvj+12,jvj+17)*/
if((x[jvj+17]!=68)) goto l16;
pile[v[22]]=489; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(489,jvj+2,jvj+18)*/
if((x[jvj+18]!=0)) goto l15;
pile[v[22]]=365; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+19)*/
for(i=x[jvj+19],V131=0;i>0;i=t[i],V131++)  ;
if((V131!=1)) goto l15;
pile[v[22]]=jvj+7; pile[WZ1]=534; 
(*f[207])( );     /*PLUE2(jvj+7,534)*/
l15:for(i=x[jvj+18],V148=0;i>0;i=t[i],V148++)  ;
if((V148!=1)) goto l16;
pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+20)*/
for(i=x[jvj+20],V150=0;i>0;i=t[i],V150++)  ;
if((V150!=2)) goto l16;
pile[v[22]]=jvj+7; pile[WZ1]=579; 
(*f[207])( );     /*PLUE2(jvj+7,579)*/
l16:pile[v[22]]=462; pile[WZ1]=jvj+12; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(462,jvj+12,jvj+21)*/
if((x[jvj+21]!=68)) goto l18;
pile[v[22]]=489; pile[WZ1]=jvj+2; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(489,jvj+2,jvj+22)*/
for(i=x[jvj+22],V162=0;i>0;i=t[i],V162++)  ;
if((V162!=1)) goto l18;
pile[v[22]]=365; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+23)*/
for(i=x[jvj+23],V164=0;i>0;i=t[i],V164++)  ;
if((V164==2)) goto l17;
if((V164!=1)) goto l18;
pile[v[22]]=jvj+7; pile[WZ1]=624; 
(*f[207])( );     /*PLUE2(jvj+7,624)*/
l18:pile[v[22]]=489; pile[WZ1]=jvj+2; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(489,jvj+2,jvj+24)*/
if((x[jvj+24]==0)) goto l19;
pile[v[22]]=jvj+7; pile[WZ1]=189; 
(*f[207])( );     /*PLUE2(jvj+7,189)*/
pile[WZ1]=201; 
(*f[207])( );     /*PLUE2(jvj+7,201)*/
l19:pile[v[22]]=971; pile[WZ1]=jvj+2; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(971,jvj+2,jvj+25)*/
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==1289) goto l20;
l21:pile[v[22]]=1417; pile[WZ1]=RRRT; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1417,RRRT,jvj+26)*/
for(i=x[jvj+7],V176=0;i>0;i=t[i],V176++)  ;
for(i=x[jvj+26],V175=0;i>0;i=t[i],V175++)  ;
if((V176!=V175)) goto l26;
V178=x[jvj+7];
l25:if((V178>0)) goto l28;
V2=135;
l22:if((V2==134)) goto l23;
l24:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l8:pile[v[22]]=jvj+7; pile[WZ1]=126; 
(*f[207])( );     /*PLUE2(jvj+7,126)*/
goto l9;
l10:pile[v[22]]=jvj+7; pile[WZ1]=129; 
(*f[207])( );     /*PLUE2(jvj+7,129)*/
goto l11;
l17:pile[v[22]]=jvj+7; pile[WZ1]=621; 
(*f[207])( );     /*PLUE2(jvj+7,621)*/
goto l18;
l20:pile[v[22]]=jvj+7; pile[WZ1]=282; 
(*f[207])( );     /*PLUE2(jvj+7,282)*/
goto l21;
l23:z[RRRT]=(-1);
pile[v[22]]=RRRT; pile[WZ1]=1417; pile[WZ2]=jvj+7; 
(*f[34])( );     /*CHGC0(RRRT,1417,jvj+7)*/
goto l24;
l27:V178=t[V178];
goto l25;
l28:V177=s[V178];
for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==V177) goto l27;
l26:V2=134;
goto l22;
}
