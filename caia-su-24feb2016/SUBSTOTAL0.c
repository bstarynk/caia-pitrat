#include "dx.h"
void SUBSTOTAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int R,EZ;
int RR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=11363;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1355&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; EZ=pile[v[22]+1]; RR=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+9]=x[jvj+13] ;z[jvj+9]=z[jvj+13];
x[jvj+15]=x[EZ] ;z[jvj+15]=z[EZ];
l5:if((x[jvj+15]>0)) goto l6;
if((v[244]!=0)) goto l8;
pile[v[22]]=300; pile[WZ1]=R; pile[WZ2]=RR; 
(*f[1157])( );if(v[102]) goto l8;     /*NORME1(300,R,RR)*/
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+3]=s[x[jvj+14]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+14];
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l4;
pile[v[22]]=447; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(447,jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[760])( );     /*MEMEX0(jvj+5,jvj+4,jvj+6)*/
if((x[jvj+6]==135)) goto l7;
l4:x[jvj+14]=t[x[jvj+14]];
l1:if((x[jvj+14]>0)) goto l2;
x[jvj+10]=x[jvj+12] ;z[jvj+10]=z[jvj+12];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+7)*/
pile[v[22]]=jvj+10; pile[WZ1]=EZ; pile[WZ2]=jvj+9; pile[WZ3]=RR; 
(*f[1588])( );if(v[102]) goto l9;     /*SUBSTOTAL1(jvj+10,EZ,jvj+9,RR)*/
goto l10;
l6:x[jvj+7]=s[x[jvj+15]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+15];
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==x[jvj+7]) goto l7;
pile[v[22]]=447; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(447,jvj+7,jvj+8)*/
pile[v[22]]=459; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(459,jvj+7,jvj+5)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+5; pile[WZ2]=jvj+11; 
(*f[760])( );     /*MEMEX0(jvj+8,jvj+5,jvj+11)*/
if((x[jvj+11]==135)) goto l11;
pile[WZ2]=R; pile[WZ3]=jvj+12; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+8,jvj+5,R,jvj+12)*/
l3:x[jvj+14]=x[EZ] ;z[jvj+14]=z[EZ];
goto l1;
l7:x[jvj+15]=t[x[jvj+15]];
goto l5;
l8:if((v[244]<=0)) goto l9;
pile[v[22]]=R; pile[WZ1]=RR; 
(*f[965])( );if(v[102]) goto l9;     /*NORM0(R,RR)*/
goto l10;
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l11:x[jvj+12]=x[R] ;z[jvj+12]=z[R];
goto l3;
}
