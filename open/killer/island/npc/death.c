#include <ansi.h>
inherit NPC;
void create ()
{
  set_name("死神",({"death"}));
  set("long","    一块黑布包住了整个身体，约略可以看到藏在头罩下的头颅
，手持镰刀，不断的挥舞，空洞的眼眶还不时的露出青光。\n");
  setup();
  carry_object("/open/killer/island/obj/head");
}
