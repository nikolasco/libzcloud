/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/* vi: set tabstop=4 shiftwidth=4 expandtab: */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: LGPL 2.1/GPL 2.0
 * This file is part of libzcloud.
 *
 * libzcloud is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License (the LGPL)
 * as published by the Free Software Foundation, either version 2.1 of
 * the LGPL, or (at your option) any later version.
 *
 * libzcloud is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * The Original Code is Zmanda Incorporated code.
 *
 * The Initial Developer of the Original Code is
 *  Zmanda Incorporated
 * Portions created by the Initial Developer are Copyright (C) 2009
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *   Nikolas Coukouma <atrus@zmanda.com>
 *
 * Alternatively, the contents of this file may be used under the terms of
 * the GNU General Public License Version 2 or later (the "GPL"),
 * in which case the provisions of the GPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL and not to allow others to
 * use your version of this file under the terms of the LGPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of either the the GPL or the LGPL.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * and GNU General Public License along with libzcloud. If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * ***** END LICENSE BLOCK ***** */

#ifndef ZCLOUD_H
#define ZCLOUD_H

#include <glib.h>
#include <glib-object.h>

/* classes */
#include "zcloud/store.h"
#include "zcloud/address.h"
#include "zcloud/address_template.h"
#include "zcloud/download_consumer.h"
#include "zcloud/list_consumer.h"
#include "zcloud/progress_listener.h"
#include "zcloud/upload_producer.h"

/* miscellaneous */
#include "zcloud/error.h"
#include "zcloud/plugins.h"

G_BEGIN_DECLS

/* Call this before calling any other zcloud functions.  If this fails,
 * do not call it again.
 *
 * @returns: FALSE on error, with ERROR set properly
 */
gboolean zcloud_init(GError **error);

/* Create a new ZCloudStore object with the given prefix.
 *
 * @returns: NULL on error, with ERROR set properly
 */
ZCloudStore *zcloud_new(const gchar *prefix, GError **error);

G_END_DECLS

#endif