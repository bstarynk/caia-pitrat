#include "dx.h"
void QUELMEM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Q,RS;
int AT;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=11037;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1727&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Q=pile[v[22]]; RS=pile[v[22]+1]; AT=pile[v[22]+2]; v[22]+=3; 
if((x[Q]==1082)) goto l1;
if((x[Q]==336)) goto l4;
if((x[Q]==1085)) goto l5;
if((x[Q]==301)) goto l8;
if((x[Q]==901)) goto l9;
if((x[Q]==84)) goto l10;
if((x[Q]!=1102)) goto l11;
if((x[RS]==1000)) goto l2;
if((x[RS]==1041)) goto l6;
l11:if(x[Q]==530||x[Q]==954||x[Q]==104||x[Q]==368) goto l7;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l1:if((x[RS]==1000)) goto l2;
if((x[RS]==1041)) goto l3;
goto l11;
l2:x[AT]=1250 ;z[AT]=1250;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l3:x[AT]=1252 ;z[AT]=1252;
goto l13;
l4:if((x[RS]==1000)) goto l2;
if((x[RS]==1041)) goto l3;
goto l11;
l5:if((x[RS]==1041)) goto l6;
if((x[RS]==1000)) goto l7;
goto l11;
l6:x[AT]=1251 ;z[AT]=1251;
goto l13;
l7:x[AT]=944 ;z[AT]=944;
goto l13;
l8:if((x[RS]==1000)) goto l7;
if((x[RS]==1041)) goto l3;
goto l11;
l9:if((x[RS]==1000)) goto l7;
if((x[RS]==1041)) goto l2;
if((x[RS]==1124)) goto l2;
goto l11;
l10:if((x[RS]==1000)) goto l7;
if((x[RS]==1041)) goto l6;
if((x[RS]==1124)) goto l2;
goto l11;
}
