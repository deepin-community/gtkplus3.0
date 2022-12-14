/* Generated by wayland-scanner 1.19.0 */

/*
 * Copyright © 2012, 2013 Intel Corporation
 * Copyright © 2015, 2016 Jan Arne Petersen
 *
 * Permission to use, copy, modify, distribute, and sell this
 * software and its documentation for any purpose is hereby granted
 * without fee, provided that the above copyright notice appear in
 * all copies and that both that copyright notice and this permission
 * notice appear in supporting documentation, and that the name of
 * the copyright holders not be used in advertising or publicity
 * pertaining to distribution of the software without specific,
 * written prior permission.  The copyright holders make no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied
 * warranty.
 *
 * THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS
 * SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS, IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN
 * AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
 * ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF
 * THIS SOFTWARE.
 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

#ifndef __has_attribute
# define __has_attribute(x) 0  /* Compatibility with non-clang compilers. */
#endif

#if (__has_attribute(visibility) || defined(__GNUC__) && __GNUC__ >= 4)
#define WL_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define WL_PRIVATE
#endif

extern const struct wl_interface gtk_text_input_interface;
extern const struct wl_interface wl_seat_interface;
extern const struct wl_interface wl_surface_interface;

static const struct wl_interface *gtk_text_input_types[] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&wl_surface_interface,
	NULL,
	&wl_surface_interface,
	&gtk_text_input_interface,
	&wl_seat_interface,
};

static const struct wl_message gtk_text_input_requests[] = {
	{ "destroy", "", gtk_text_input_types + 0 },
	{ "enable", "uu", gtk_text_input_types + 0 },
	{ "disable", "", gtk_text_input_types + 0 },
	{ "set_surrounding_text", "sii", gtk_text_input_types + 0 },
	{ "set_content_type", "uu", gtk_text_input_types + 0 },
	{ "set_cursor_rectangle", "iiii", gtk_text_input_types + 0 },
	{ "commit", "", gtk_text_input_types + 0 },
};

static const struct wl_message gtk_text_input_events[] = {
	{ "enter", "uo", gtk_text_input_types + 4 },
	{ "leave", "uo", gtk_text_input_types + 6 },
	{ "preedit_string", "?su", gtk_text_input_types + 0 },
	{ "commit_string", "?s", gtk_text_input_types + 0 },
	{ "delete_surrounding_text", "uu", gtk_text_input_types + 0 },
};

WL_PRIVATE const struct wl_interface gtk_text_input_interface = {
	"gtk_text_input", 1,
	7, gtk_text_input_requests,
	5, gtk_text_input_events,
};

static const struct wl_message gtk_text_input_manager_requests[] = {
	{ "destroy", "", gtk_text_input_types + 0 },
	{ "get_text_input", "no", gtk_text_input_types + 8 },
};

WL_PRIVATE const struct wl_interface gtk_text_input_manager_interface = {
	"gtk_text_input_manager", 1,
	2, gtk_text_input_manager_requests,
	0, NULL,
};

