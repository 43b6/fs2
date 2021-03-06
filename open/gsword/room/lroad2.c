#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "仙剑派前山");
	set("long", "          
你的眼前尽是垂直的峭壁，光滑的连一根草也无法在上面着根，维独在峭壁(cliff)的
左侧，颜色较趋暗色，好奇心使你想看的清楚些，不过那高度实在太高你再怎么努
力，也无法瞧个仔细。        

");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"lroad3",
  "east" : __DIR__"lroad1",
]) );

  set("outdoors", "/open/gsword/room" );

  setup();
}

void init()
{
    add_action("do_enter","pass");
    add_action("do_search","search");
}

int do_enter(string str)
{
   object me = this_player();
if(me->query("quests/yan")==4)
{
      tell_object(me,"你看了看峡谷.铁了心..咻的一声就冲进峡谷中\n");
       tell_object(me,"修的一声..你运起顶级轻功..轻轻的落在崖下\n");
          me->move("/open/gsword/room2/sha1.c");
}
else if( me->query("family/family_name")=="仙剑派" && me->query("get_sha_sp",1) &&me->query("quests/sunfire")!=1 && me->query("quests/yan")>=2)
   {
   if (me->query("combat_exp")<1000000)
     tell_object(me,"你看了看峡谷..看了看自己..还是觉得不要进去好了\n");
   else 
    {
       tell_object(me,"你看了看峡谷.铁了心..咻的一声就冲进峡谷中\n");
       tell_object(me,"你刚走进峡谷..脚步一个不稳..不小心就滑下悬崖\n");       
      this_player()->unconcious();
          me->move("/open/gsword/room2/sha1.c");
    }
   }
   return 1;
}

int do_search(string str)
{
   object me = this_player();
if( me->query("family/family_name")=="仙剑派" && me->query("get_sha_sp",1) &&me->query("quests/yan")>=1)
   {    
   tell_object(me,"找着找着..你似乎找到了一个可以穿越(pass)的步道\n");
   if (me->query("quests/yan")==1 ) me->set("quests/yan",2);
    }
 return 1;
}
