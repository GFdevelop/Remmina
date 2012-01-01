/*
 * Remmina - The GTK+ Remote Desktop Client
 * Copyright (C) 2010-2011 Vic Lee 
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, 
 * Boston, MA 02111-1307, USA.
 */

#ifndef __REMMINA_RDP_GDI_H__
#define __REMMINA_RDP_GDI_H__

G_BEGIN_DECLS

void rf_init (RemminaProtocolWidget *gp);
void rf_pre_connect (RemminaProtocolWidget *gp);
void rf_post_connect (RemminaProtocolWidget *gp);
void rf_uninit (RemminaProtocolWidget *gp);
void rf_get_fds (RemminaProtocolWidget *gp, void **rfds, int *rcount);
boolean rf_check_fds (RemminaProtocolWidget *gp);
void rf_object_free (RemminaProtocolWidget *gp, RemminaPluginRdpUiObject *obj);

G_END_DECLS

#endif
