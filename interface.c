/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_mainwin (void)
{
  GtkWidget *mainwin;
  GtkWidget *vbox1;
  GtkWidget *hbox2;
  GtkWidget *handlebox1;
  GtkWidget *menubar1;
  GtkWidget *menuitem1;
  GtkWidget *menuitem1_menu;
  GtkWidget *open;
  GtkWidget *separator2;
  GtkWidget *add_files;
  GtkWidget *add_folder1;
  GtkWidget *separator1;
  GtkWidget *preferences1;
  GtkWidget *separatormenuitem1;
  GtkWidget *quit1;
  GtkWidget *edit1;
  GtkWidget *edit1_menu;
  GtkWidget *clear1;
  GtkWidget *select_all1;
  GtkWidget *selection1;
  GtkWidget *selection1_menu;
  GtkWidget *remove1;
  GtkWidget *crop1;
  GtkWidget *menuitem4;
  GtkWidget *menuitem4_menu;
  GtkWidget *about1;
  GtkWidget *handlebox2;
  GtkWidget *hbox3;
  GtkWidget *button4;
  GtkWidget *image1;
  GtkWidget *button5;
  GtkWidget *image2;
  GtkWidget *button6;
  GtkWidget *image3;
  GtkWidget *button7;
  GtkWidget *image4;
  GtkWidget *button8;
  GtkWidget *image5;
  GtkWidget *button9;
  GtkWidget *alignment1;
  GtkWidget *hbox4;
  GtkWidget *image6;
  GtkWidget *label3;
  GtkWidget *handlebox3;
  GtkWidget *volume;
  GtkWidget *handlebox4;
  GtkWidget *playpos;
  GtkWidget *_;
  GtkWidget *playlist;
  GtkWidget *playscroll;
  GtkWidget *statusbar1;
  GtkAccelGroup *accel_group;

  accel_group = gtk_accel_group_new ();

  mainwin = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (mainwin), "DeaDBeeF");
  gtk_window_set_default_size (GTK_WINDOW (mainwin), 750, 650);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (mainwin), vbox1);

  hbox2 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox2);
  gtk_box_pack_start (GTK_BOX (vbox1), hbox2, FALSE, FALSE, 0);

  handlebox1 = gtk_handle_box_new ();
  gtk_widget_show (handlebox1);
  gtk_box_pack_start (GTK_BOX (hbox2), handlebox1, FALSE, TRUE, 0);

  menubar1 = gtk_menu_bar_new ();
  gtk_widget_show (menubar1);
  gtk_container_add (GTK_CONTAINER (handlebox1), menubar1);

  menuitem1 = gtk_menu_item_new_with_mnemonic ("_File");
  gtk_widget_show (menuitem1);
  gtk_container_add (GTK_CONTAINER (menubar1), menuitem1);

  menuitem1_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem1), menuitem1_menu);

  open = gtk_image_menu_item_new_from_stock ("gtk-open", accel_group);
  gtk_widget_show (open);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), open);

  separator2 = gtk_separator_menu_item_new ();
  gtk_widget_show (separator2);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), separator2);
  gtk_widget_set_sensitive (separator2, FALSE);

  add_files = gtk_menu_item_new_with_mnemonic ("Add files");
  gtk_widget_show (add_files);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), add_files);

  add_folder1 = gtk_menu_item_new_with_mnemonic ("Add folder");
  gtk_widget_show (add_folder1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), add_folder1);

  separator1 = gtk_separator_menu_item_new ();
  gtk_widget_show (separator1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), separator1);
  gtk_widget_set_sensitive (separator1, FALSE);

  preferences1 = gtk_menu_item_new_with_mnemonic ("_Preferences");
  gtk_widget_show (preferences1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), preferences1);

  separatormenuitem1 = gtk_separator_menu_item_new ();
  gtk_widget_show (separatormenuitem1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), separatormenuitem1);
  gtk_widget_set_sensitive (separatormenuitem1, FALSE);

  quit1 = gtk_image_menu_item_new_from_stock ("gtk-quit", accel_group);
  gtk_widget_show (quit1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), quit1);

  edit1 = gtk_menu_item_new_with_mnemonic ("Edit");
  gtk_widget_show (edit1);
  gtk_container_add (GTK_CONTAINER (menubar1), edit1);

  edit1_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (edit1), edit1_menu);

  clear1 = gtk_image_menu_item_new_from_stock ("gtk-clear", accel_group);
  gtk_widget_show (clear1);
  gtk_container_add (GTK_CONTAINER (edit1_menu), clear1);

  select_all1 = gtk_image_menu_item_new_from_stock ("gtk-select-all", accel_group);
  gtk_widget_show (select_all1);
  gtk_container_add (GTK_CONTAINER (edit1_menu), select_all1);

  selection1 = gtk_menu_item_new_with_mnemonic ("Selection");
  gtk_widget_show (selection1);
  gtk_container_add (GTK_CONTAINER (edit1_menu), selection1);

  selection1_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (selection1), selection1_menu);

  remove1 = gtk_image_menu_item_new_from_stock ("gtk-remove", accel_group);
  gtk_widget_show (remove1);
  gtk_container_add (GTK_CONTAINER (selection1_menu), remove1);

  crop1 = gtk_menu_item_new_with_mnemonic ("Crop");
  gtk_widget_show (crop1);
  gtk_container_add (GTK_CONTAINER (selection1_menu), crop1);

  menuitem4 = gtk_menu_item_new_with_mnemonic ("_Help");
  gtk_widget_show (menuitem4);
  gtk_container_add (GTK_CONTAINER (menubar1), menuitem4);

  menuitem4_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem4), menuitem4_menu);

  about1 = gtk_menu_item_new_with_mnemonic ("_About");
  gtk_widget_show (about1);
  gtk_container_add (GTK_CONTAINER (menuitem4_menu), about1);

  handlebox2 = gtk_handle_box_new ();
  gtk_widget_show (handlebox2);
  gtk_box_pack_start (GTK_BOX (hbox2), handlebox2, FALSE, TRUE, 0);

  hbox3 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (handlebox2), hbox3);

  button4 = gtk_button_new ();
  gtk_widget_show (button4);
  gtk_box_pack_start (GTK_BOX (hbox3), button4, FALSE, FALSE, 0);
  gtk_button_set_relief (GTK_BUTTON (button4), GTK_RELIEF_NONE);

  image1 = gtk_image_new_from_stock ("gtk-media-stop", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_container_add (GTK_CONTAINER (button4), image1);

  button5 = gtk_button_new ();
  gtk_widget_show (button5);
  gtk_box_pack_start (GTK_BOX (hbox3), button5, FALSE, FALSE, 0);
  gtk_button_set_relief (GTK_BUTTON (button5), GTK_RELIEF_NONE);

  image2 = gtk_image_new_from_stock ("gtk-media-play", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_container_add (GTK_CONTAINER (button5), image2);

  button6 = gtk_button_new ();
  gtk_widget_show (button6);
  gtk_box_pack_start (GTK_BOX (hbox3), button6, FALSE, FALSE, 0);
  gtk_button_set_relief (GTK_BUTTON (button6), GTK_RELIEF_NONE);

  image3 = gtk_image_new_from_stock ("gtk-media-pause", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_container_add (GTK_CONTAINER (button6), image3);

  button7 = gtk_button_new ();
  gtk_widget_show (button7);
  gtk_box_pack_start (GTK_BOX (hbox3), button7, FALSE, FALSE, 0);
  gtk_button_set_relief (GTK_BUTTON (button7), GTK_RELIEF_NONE);

  image4 = gtk_image_new_from_stock ("gtk-media-previous", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_container_add (GTK_CONTAINER (button7), image4);

  button8 = gtk_button_new ();
  gtk_widget_show (button8);
  gtk_box_pack_start (GTK_BOX (hbox3), button8, FALSE, FALSE, 0);
  gtk_button_set_relief (GTK_BUTTON (button8), GTK_RELIEF_NONE);

  image5 = gtk_image_new_from_stock ("gtk-media-next", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_container_add (GTK_CONTAINER (button8), image5);

  button9 = gtk_button_new ();
  gtk_widget_show (button9);
  gtk_box_pack_start (GTK_BOX (hbox3), button9, FALSE, FALSE, 0);
  gtk_button_set_relief (GTK_BUTTON (button9), GTK_RELIEF_NONE);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button9), alignment1);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox4);

  image6 = gtk_image_new_from_stock ("gtk-media-play", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox4), image6, FALSE, FALSE, 0);

  label3 = gtk_label_new_with_mnemonic ("?");
  gtk_widget_show (label3);
  gtk_box_pack_start (GTK_BOX (hbox4), label3, FALSE, FALSE, 0);

  handlebox3 = gtk_handle_box_new ();
  gtk_widget_show (handlebox3);
  gtk_box_pack_start (GTK_BOX (hbox2), handlebox3, FALSE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (handlebox3), 1);

  volume = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (100, 0, 100, 0, 0, 0)));
  gtk_widget_show (volume);
  gtk_container_add (GTK_CONTAINER (handlebox3), volume);
  gtk_widget_set_size_request (volume, 80, -1);
  GTK_WIDGET_UNSET_FLAGS (volume, GTK_CAN_FOCUS);
  gtk_scale_set_draw_value (GTK_SCALE (volume), FALSE);

  handlebox4 = gtk_handle_box_new ();
  gtk_widget_show (handlebox4);
  gtk_box_pack_start (GTK_BOX (hbox2), handlebox4, FALSE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (handlebox4), 1);

  playpos = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 1000, 0, 0, 0)));
  gtk_widget_show (playpos);
  gtk_container_add (GTK_CONTAINER (handlebox4), playpos);
  gtk_widget_set_size_request (playpos, 200, -1);
  GTK_WIDGET_UNSET_FLAGS (playpos, GTK_CAN_FOCUS);
  gtk_scale_set_draw_value (GTK_SCALE (playpos), FALSE);

  _ = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (_);
  gtk_box_pack_start (GTK_BOX (vbox1), _, TRUE, TRUE, 0);

  playlist = gtk_drawing_area_new ();
  gtk_widget_show (playlist);
  gtk_box_pack_start (GTK_BOX (_), playlist, TRUE, TRUE, 0);
  gtk_widget_set_events (playlist, GDK_EXPOSURE_MASK | GDK_POINTER_MOTION_MASK | GDK_BUTTON_MOTION_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK | GDK_KEY_PRESS_MASK | GDK_KEY_RELEASE_MASK);

  playscroll = gtk_vscrollbar_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 1, 1, 0, 0)));
  gtk_widget_show (playscroll);
  gtk_box_pack_start (GTK_BOX (_), playscroll, FALSE, FALSE, 0);

  statusbar1 = gtk_statusbar_new ();
  gtk_widget_show (statusbar1);
  gtk_box_pack_start (GTK_BOX (vbox1), statusbar1, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) mainwin, "destroy",
                    G_CALLBACK (gtk_main_quit),
                    NULL);
  g_signal_connect ((gpointer) open, "activate",
                    G_CALLBACK (on_open_activate),
                    NULL);
  g_signal_connect ((gpointer) add_files, "activate",
                    G_CALLBACK (on_add_files_activate),
                    NULL);
  g_signal_connect ((gpointer) add_folder1, "activate",
                    G_CALLBACK (on_add_folder1_activate),
                    NULL);
  g_signal_connect ((gpointer) preferences1, "activate",
                    G_CALLBACK (on_preferences1_activate),
                    NULL);
  g_signal_connect ((gpointer) quit1, "activate",
                    G_CALLBACK (on_quit1_activate),
                    NULL);
  g_signal_connect ((gpointer) clear1, "activate",
                    G_CALLBACK (on_clear1_activate),
                    NULL);
  g_signal_connect ((gpointer) select_all1, "activate",
                    G_CALLBACK (on_select_all1_activate),
                    NULL);
  g_signal_connect ((gpointer) remove1, "activate",
                    G_CALLBACK (on_remove1_activate),
                    NULL);
  g_signal_connect ((gpointer) crop1, "activate",
                    G_CALLBACK (on_crop1_activate),
                    NULL);
  g_signal_connect ((gpointer) about1, "activate",
                    G_CALLBACK (on_about1_activate),
                    NULL);
  g_signal_connect ((gpointer) volume, "value_changed",
                    G_CALLBACK (on_volume_value_changed),
                    NULL);
  g_signal_connect ((gpointer) playpos, "value_changed",
                    G_CALLBACK (on_playpos_value_changed),
                    NULL);
  g_signal_connect ((gpointer) playlist, "configure_event",
                    G_CALLBACK (on_playlist_configure_event),
                    NULL);
  g_signal_connect ((gpointer) playlist, "expose_event",
                    G_CALLBACK (on_playlist_expose_event),
                    NULL);
  g_signal_connect ((gpointer) playlist, "realize",
                    G_CALLBACK (on_playlist_realize),
                    NULL);
  g_signal_connect ((gpointer) playlist, "button_press_event",
                    G_CALLBACK (on_playlist_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) playlist, "scroll_event",
                    G_CALLBACK (on_playlist_scroll_event),
                    NULL);
  g_signal_connect ((gpointer) playscroll, "value_changed",
                    G_CALLBACK (on_playscroll_value_changed),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (mainwin, mainwin, "mainwin");
  GLADE_HOOKUP_OBJECT (mainwin, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (mainwin, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (mainwin, handlebox1, "handlebox1");
  GLADE_HOOKUP_OBJECT (mainwin, menubar1, "menubar1");
  GLADE_HOOKUP_OBJECT (mainwin, menuitem1, "menuitem1");
  GLADE_HOOKUP_OBJECT (mainwin, menuitem1_menu, "menuitem1_menu");
  GLADE_HOOKUP_OBJECT (mainwin, open, "open");
  GLADE_HOOKUP_OBJECT (mainwin, separator2, "separator2");
  GLADE_HOOKUP_OBJECT (mainwin, add_files, "add_files");
  GLADE_HOOKUP_OBJECT (mainwin, add_folder1, "add_folder1");
  GLADE_HOOKUP_OBJECT (mainwin, separator1, "separator1");
  GLADE_HOOKUP_OBJECT (mainwin, preferences1, "preferences1");
  GLADE_HOOKUP_OBJECT (mainwin, separatormenuitem1, "separatormenuitem1");
  GLADE_HOOKUP_OBJECT (mainwin, quit1, "quit1");
  GLADE_HOOKUP_OBJECT (mainwin, edit1, "edit1");
  GLADE_HOOKUP_OBJECT (mainwin, edit1_menu, "edit1_menu");
  GLADE_HOOKUP_OBJECT (mainwin, clear1, "clear1");
  GLADE_HOOKUP_OBJECT (mainwin, select_all1, "select_all1");
  GLADE_HOOKUP_OBJECT (mainwin, selection1, "selection1");
  GLADE_HOOKUP_OBJECT (mainwin, selection1_menu, "selection1_menu");
  GLADE_HOOKUP_OBJECT (mainwin, remove1, "remove1");
  GLADE_HOOKUP_OBJECT (mainwin, crop1, "crop1");
  GLADE_HOOKUP_OBJECT (mainwin, menuitem4, "menuitem4");
  GLADE_HOOKUP_OBJECT (mainwin, menuitem4_menu, "menuitem4_menu");
  GLADE_HOOKUP_OBJECT (mainwin, about1, "about1");
  GLADE_HOOKUP_OBJECT (mainwin, handlebox2, "handlebox2");
  GLADE_HOOKUP_OBJECT (mainwin, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (mainwin, button4, "button4");
  GLADE_HOOKUP_OBJECT (mainwin, image1, "image1");
  GLADE_HOOKUP_OBJECT (mainwin, button5, "button5");
  GLADE_HOOKUP_OBJECT (mainwin, image2, "image2");
  GLADE_HOOKUP_OBJECT (mainwin, button6, "button6");
  GLADE_HOOKUP_OBJECT (mainwin, image3, "image3");
  GLADE_HOOKUP_OBJECT (mainwin, button7, "button7");
  GLADE_HOOKUP_OBJECT (mainwin, image4, "image4");
  GLADE_HOOKUP_OBJECT (mainwin, button8, "button8");
  GLADE_HOOKUP_OBJECT (mainwin, image5, "image5");
  GLADE_HOOKUP_OBJECT (mainwin, button9, "button9");
  GLADE_HOOKUP_OBJECT (mainwin, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (mainwin, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (mainwin, image6, "image6");
  GLADE_HOOKUP_OBJECT (mainwin, label3, "label3");
  GLADE_HOOKUP_OBJECT (mainwin, handlebox3, "handlebox3");
  GLADE_HOOKUP_OBJECT (mainwin, volume, "volume");
  GLADE_HOOKUP_OBJECT (mainwin, handlebox4, "handlebox4");
  GLADE_HOOKUP_OBJECT (mainwin, playpos, "playpos");
  GLADE_HOOKUP_OBJECT (mainwin, _, "_");
  GLADE_HOOKUP_OBJECT (mainwin, playlist, "playlist");
  GLADE_HOOKUP_OBJECT (mainwin, playscroll, "playscroll");
  GLADE_HOOKUP_OBJECT (mainwin, statusbar1, "statusbar1");

  gtk_window_add_accel_group (GTK_WINDOW (mainwin), accel_group);

  return mainwin;
}

