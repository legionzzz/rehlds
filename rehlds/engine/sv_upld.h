/*
*
*    This program is free software; you can redistribute it and/or modify it
*    under the terms of the GNU General Public License as published by the
*    Free Software Foundation; either version 2 of the License, or (at
*    your option) any later version.
*
*    This program is distributed in the hope that it will be useful, but
*    WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
*    General Public License for more details.
*
*    You should have received a copy of the GNU General Public License
*    along with this program; if not, write to the Free Software Foundation,
*    Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*
*    In addition, as a special exception, the author gives permission to
*    link the code of this program with the Half-Life Game Engine ("HL
*    Engine") and Modified Game Libraries ("MODs") developed by Valve,
*    L.L.C ("Valve").  You must obey the GNU General Public License in all
*    respects for all of the code used other than the HL Engine and MODs
*    from Valve.  If you modify this file, you may extend this exception
*    to your version of the file, but you are not obligated to do so.  If
*    you do not wish to do so, delete this exception statement from your
*    version.
*
*/

#pragma once

#include "maintypes.h"

qboolean SV_CheckFile(sizebuf_t *msg, char *filename);
void SV_ClearResourceLists(client_t *cl);
void SV_CreateCustomizationList(client_t *pHost);
void SV_Customization(client_t *pPlayer, resource_t *pResource, qboolean bSkipPlayer);
void SV_RegisterResources(void);
void SV_MoveToOnHandList(resource_t *pResource);
void SV_AddToResourceList(resource_t *pResource, resource_t *pList);
void SV_ClearResourceList(resource_t *pList);
void SV_RemoveFromResourceList(resource_t *pResource);
int SV_EstimateNeededResources(void);
void SV_RequestMissingResourcesFromClients(void);
qboolean SV_UploadComplete(client_t *cl);
void SV_BatchUploadRequest(client_t *cl);
qboolean SV_RequestMissingResources(void);
void SV_ParseResourceList(client_t *pSenderClient);